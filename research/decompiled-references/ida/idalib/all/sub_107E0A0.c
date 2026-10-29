__int64 __fastcall sub_107E0A0(_BYTE *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    do
    {
      if ( !sub_9B4AA0(v2, "+hard-float") )
        a1[584] = 1;
      if ( !sub_9B4AA0(v2, "+hard-float-abi") )
        a1[585] = 1;
      if ( !sub_9B4AA0(v2, "+fpuv2_sf") )
        a1[586] = 1;
      if ( !sub_9B4AA0(v2, "+fpuv2_df") )
        a1[587] = 1;
      if ( !sub_9B4AA0(v2, "+fpuv3_sf") )
        a1[588] = 1;
      if ( !sub_9B4AA0(v2, "+fpuv3_df") )
        a1[589] = 1;
      if ( !sub_9B4AA0(v2, "+vdspv2") )
        a1[590] = 1;
      if ( !sub_9B4AA0(v2, "+dspv2") )
        a1[592] = 1;
      if ( !sub_9B4AA0(v2, "+vdspv1") )
        a1[591] = 1;
      if ( !sub_9B4AA0(v2, "+3e3r1") )
        a1[593] = 1;
      v2 += 32;
    }
    while ( v3 != v2 );
  }
  return 1;
}
