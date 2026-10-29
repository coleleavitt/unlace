/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_413608
// Address: 0x0000000000413608

//----- (0000000000413608) ----------------------------------------------------
__int64 __fastcall sub_413608(__int64 a1, int a2)
{
  __int64 v2; // x2
  __int64 v3; // x4
  __int64 v4; // x4
  int v5; // w2
  int v6; // w2

  v2 = *(_QWORD *)(a1 + 1928);
  if ( !v2 )
    return 0xFFFFFFFFLL;
  v3 = a1 + 1920;
  do
  {
    while ( a2 <= *(_DWORD *)(v2 + 32) )
    {
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_5;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_5:
  if ( a1 + 1920 == v3 )
    return 0xFFFFFFFFLL;
  if ( a2 < *(_DWORD *)(v3 + 32) )
    return 0xFFFFFFFFLL;
  v4 = v3 + 40;
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v5 = *(_DWORD *)(v4 + 8);
  if ( v5 > 0 )
  {
    v6 = v5 - 1;
    *(_DWORD *)(v4 + 8) = v6;
    if ( v6 )
      return 1;
  }
  if ( (unsigned int)sub_412410(a1, a2, 0) )
    return 1;
  return 0xFFFFFFFFLL;
}
