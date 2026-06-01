/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1B70C
// Address: 0x0001B70C

//----- (0001B70C) --------------------------------------------------------
void __fastcall sub_1B70C(_DWORD *a1, int a2)
{
  int v3; // r5
  int v5; // r3
  int v6; // r3

  v3 = a1[5];
  if ( v3 == *a1 )
  {
    sub_1B640((int)a1, 1u, 1);
    v3 = a1[5];
  }
  *(_DWORD *)(v3 - 4) = sub_808A4(0x1E4u);
  v5 = a1[5];
  a1[5] = v5 - 4;
  v6 = *(_DWORD *)(v5 - 4);
  a1[3] = v6;
  a1[4] = v6 + 484;
  a1[2] = v6 + 440;
  *(_DWORD *)(v6 + 440) = -1;
  *(_DWORD *)(v6 + 444) = 0;
  *(_DWORD *)(v6 + 448) = -1;
  *(_BYTE *)(v6 + 452) = 0;
  *(_DWORD *)(v6 + 456) = 0;
  sub_6E614(v6 + 440, a2);
}
