/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_EBE04
// Address: 0x00000000000EBE04

//----- (00000000000EBE04) ----------------------------------------------------
_BYTE *__fastcall sub_EBE04(__int64 a1, __int64 a2)
{
  __int64 v3; // x8
  unsigned __int64 v4; // x10
  _BYTE *result; // x0
  _BYTE *v6; // x0
  size_t v7; // x1

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 1 >= v4 )
  {
    v6 = *(_BYTE **)a2;
    if ( 2 * v4 >= v3 + 1 )
      v7 = 2 * v4;
    else
      v7 = v3 + 1;
    *(_QWORD *)(a2 + 16) = v7;
    result = realloc(v6, v7);
    v3 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = result;
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v3] = 32;
  ++*(_QWORD *)(a2 + 8);
  return result;
}
