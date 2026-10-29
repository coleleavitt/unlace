/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1BC14
// Address: 0x0001BC14

//----- (0001BC14) --------------------------------------------------------
void __fastcall sub_1BC14(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r3
  int v6; // r3
  int v7; // r3

  v4 = a1[9];
  if ( (unsigned int)(a1[1] - ((v4 - *a1) >> 2)) <= 1 )
  {
    sub_1B640((int)a1, 1u, 0);
    v4 = a1[9];
  }
  *(_DWORD *)(v4 + 4) = sub_808A4(0x1E4u);
  v5 = a1[6];
  *(_DWORD *)v5 = -1;
  *(_DWORD *)(v5 + 4) = 0;
  *(_DWORD *)(v5 + 8) = -1;
  *(_BYTE *)(v5 + 12) = 0;
  *(_DWORD *)(v5 + 16) = 0;
  sub_6E614(v5, a2);
  v6 = a1[9];
  a1[9] = v6 + 4;
  v7 = *(_DWORD *)(v6 + 4);
  a1[6] = v7;
  a1[7] = v7;
  a1[8] = v7 + 484;
}
