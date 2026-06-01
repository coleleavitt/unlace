/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80138
// Address: 0x0000000000080138

//----- (0000000000080138) ----------------------------------------------------
__int64 __fastcall sub_80138(__int64 a1, __int64 a2)
{
  int v2; // w22
  __int64 i; // x23
  __int64 v6; // x25
  const char *v7; // x21
  size_t v8; // x0
  unsigned __int64 v9; // x8

  v2 = *(_DWORD *)(a1 + 64) - 1;
  if ( v2 < 0 )
    return 0;
  for ( i = 56LL * v2; ; i -= 56 )
  {
    v6 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v6 + i + 40) == a2 )
    {
      if ( !*(_BYTE *)(a2 + 25) )
        break;
      v7 = *(_QWORD *)(a2 + 8) ? *(const char **)a2 : &byte_F154B;
      v8 = strlen(v7);
      v9 = *(_QWORD *)(a1 + 8);
      if ( (unsigned __int64)v7 <= v9 && v9 <= (unsigned __int64)&v7[v8] )
        break;
      if ( *(_DWORD *)(a1 + 80) > *(_DWORD *)(v6 + i + 48) )
        break;
    }
    if ( --v2 < 0 )
      return 0;
  }
  return 1;
}
// F154B: using guessed type char byte_F154B;
