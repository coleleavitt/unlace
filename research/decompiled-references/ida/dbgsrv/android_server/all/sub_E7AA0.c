/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_E7AA0
// Address: 0x00000000000E7AA0

//----- (00000000000E7AA0) ----------------------------------------------------
__int64 __fastcall sub_E7AA0(__int64 a1, __int64 a2)
{
  __int64 v2; // x8
  unsigned __int64 v3; // x10
  _BYTE *v6; // x0
  _BYTE *v7; // x0
  size_t v8; // x1

  v2 = *(_QWORD *)(a2 + 8);
  v3 = *(_QWORD *)(a2 + 16);
  if ( v2 + 1 >= v3 )
  {
    v7 = *(_BYTE **)a2;
    if ( 2 * v3 >= v2 + 1 )
      v8 = 2 * v3;
    else
      v8 = v2 + 1;
    *(_QWORD *)(a2 + 16) = v8;
    v6 = realloc(v7, v8);
    v2 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)a2 = v6;
  }
  else
  {
    v6 = *(_BYTE **)a2;
  }
  v6[v2] = 126;
  ++*(_QWORD *)(a2 + 8);
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 16) + 24LL))(*(_QWORD *)(a1 + 16), a2);
}
