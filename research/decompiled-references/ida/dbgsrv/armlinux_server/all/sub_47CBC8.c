/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47CBC8
// Address: 0x000000000047CBC8

//----- (000000000047CBC8) ----------------------------------------------------
size_t __fastcall sub_47CBC8(const char *a1, __int64 a2)
{
  size_t result; // x0
  size_t v5; // x21
  unsigned __int64 v6; // x23
  void *v7; // x0

  result = sub_4902C8(a1);
  if ( !(_BYTE)result )
  {
    result = sub_490180(a1, 0x1FFu);
    if ( (_DWORD)result )
      sub_40A608("Cannot create directory '%s' for recording conversations into", a1);
  }
  if ( a1 && (result = strlen(a1), (v5 = result) != 0) )
  {
    v6 = result + 1;
    v7 = *(void **)(a2 + 184);
    if ( v6 > *(_QWORD *)(a2 + 200) )
    {
      v7 = sub_491288(a2 + 184, *(void **)(a2 + 184), v6, 1u);
      *(_QWORD *)(a2 + 184) = v7;
    }
    *(_QWORD *)(a2 + 192) = v6;
    memmove(v7, a1, v5);
    result = *(_QWORD *)(a2 + 184);
    *(_BYTE *)(result + v5) = 0;
  }
  else
  {
    *(_QWORD *)(a2 + 192) = 0;
  }
  return result;
}
