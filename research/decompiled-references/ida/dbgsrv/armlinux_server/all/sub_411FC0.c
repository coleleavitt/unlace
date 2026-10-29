/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_411FC0
// Address: 0x0000000000411FC0

//----- (0000000000411FC0) ----------------------------------------------------
__int64 __fastcall sub_411FC0(__int64 a1, int a2)
{
  __int64 v2; // x2
  __int64 v3; // x4
  __int64 v4; // x19

  v2 = *(_QWORD *)(a1 + 1928);
  v3 = a1 + 1920;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  do
  {
    while ( a2 <= *(_DWORD *)(v2 + 32) )
    {
      v3 = v2;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_4;
    }
    v2 = *(_QWORD *)(v2 + 24);
  }
  while ( v2 );
LABEL_4:
  if ( a1 + 1920 == v3 || a2 < *(_DWORD *)(v3 + 32) )
    return 0xFFFFFFFFLL;
  v4 = v3 + 40;
  if ( v3 == -40 || !(unsigned int)sub_411A98(a1, a2, 0) )
    return 0xFFFFFFFFLL;
  ++*(_DWORD *)(v4 + 8);
  return 1;
}
