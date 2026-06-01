/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F810
// Address: 0x0003F810

//----- (0003F810) --------------------------------------------------------
void __fastcall sub_3F810(int a1)
{
  int v1; // r3
  _UNKNOWN **v2; // r2
  _UNKNOWN **v4; // r4
  _UNKNOWN **v5; // r0
  _UNKNOWN **v6; // r7
  __int64 v7; // r2

  v1 = *(_DWORD *)(a1 + 24);
  if ( dword_D2CC8 != v1 )
  {
    v2 = off_D2CCC;
    v4 = &off_D2CCC[6 * dword_D2CC8];
    v5 = &off_D2CCC[6 * v1];
    if ( v5 < v4 )
    {
      do
      {
        v6 = v5 + 6;
        sub_3DD94((int)v5);
        v5 = v6;
      }
      while ( v4 > v6 );
      v2 = off_D2CCC;
    }
    sub_77E08(v2);
    v7 = *(_QWORD *)(a1 + 20);
    dword_D2CC8 = *(_DWORD *)(a1 + 24);
    off_D2CCC = (_UNKNOWN **)v7;
  }
}
// D2CC8: using guessed type int dword_D2CC8;
// D2CCC: using guessed type _UNKNOWN **off_D2CCC;
