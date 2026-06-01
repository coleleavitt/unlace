/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CAF0
// Address: 0x000000000047CAF0

//----- (000000000047CAF0) ----------------------------------------------------
__int64 __fastcall sub_47CAF0(const char *a1, __int64 a2)
{
  size_t v4; // x0
  size_t v5; // x21
  __int64 result; // x0
  unsigned __int64 v7; // x23
  void *v8; // x0

  if ( !a1 || (v4 = strlen(a1), (v5 = v4) == 0) )
  {
    *(_QWORD *)(a2 + 144) = 0;
    result = sub_4902C8(a1);
    if ( (_BYTE)result )
      return result;
    goto LABEL_8;
  }
  v7 = v4 + 1;
  v8 = *(void **)(a2 + 136);
  if ( v7 > *(_QWORD *)(a2 + 152) )
  {
    v8 = sub_491288(a2 + 136, *(void **)(a2 + 136), v7, 1u);
    *(_QWORD *)(a2 + 136) = v8;
  }
  *(_QWORD *)(a2 + 144) = v7;
  memmove(v8, a1, v5);
  *(_BYTE *)(*(_QWORD *)(a2 + 136) + v5) = 0;
  result = sub_4902C8(a1);
  if ( !(_BYTE)result )
  {
LABEL_8:
    result = sub_490180(a1, 0x1FFu);
    if ( (_DWORD)result )
      sub_40A608("Cannot create directory '%s' for bad requests", a1);
  }
  return result;
}
