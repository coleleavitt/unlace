/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140059680
// Address: 0x0000000140059680

//----- (0000000140059680) ----------------------------------------------------
__int64 __fastcall sub_140059680(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 220) )
  {
    sub_1400593C0(a1);
    DeleteSecurityContext((PCtxtHandle)(a1 + 120));
    *(_BYTE *)(a1 + 220) = 0;
  }
  return sub_1400545F0((_QWORD *)(a1 + 32));
}
