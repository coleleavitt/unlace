/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E60A0
// Address: 0x00000000000E60A0

//----- (00000000000E60A0) ----------------------------------------------------
_BYTE *__fastcall sub_E60A0(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int64 v4; // rsi
  _BYTE *result; // rax
  size_t v6; // rsi

  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16));
  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(_QWORD *)(a2 + 16);
  if ( v3 + 1 >= v4 )
  {
    v6 = 2 * v4;
    if ( v6 < v3 + 1 )
      v6 = v3 + 1;
    *(_QWORD *)(a2 + 16) = v6;
    result = realloc(*(void **)a2, v6);
    *(_QWORD *)a2 = result;
    v3 = *(_QWORD *)(a2 + 8);
  }
  else
  {
    result = *(_BYTE **)a2;
  }
  result[v3] = 32;
  ++*(_QWORD *)(a2 + 8);
  return result;
}
