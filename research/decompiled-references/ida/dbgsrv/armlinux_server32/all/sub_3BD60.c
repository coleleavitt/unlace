/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3BD60
// Address: 0x0003BD60

//----- (0003BD60) --------------------------------------------------------
bool __fastcall sub_3BD60(_DWORD *a1)
{
  _DWORD *v3; // r7
  _DWORD *v4; // r0
  size_t v5; // r8
  _DWORD *v6; // r6
  unsigned int v7; // r0
  int v8; // r3
  void *v9; // r1
  void *v10; // r0
  void *v11; // r0
  const void *v12; // r1

  if ( sub_3B0BC(a1, -1) )
    return 1;
  v3 = sub_808A4(0x10u);
  v3[3] = 0;
  *v3 = 1;
  v4 = sub_808A4(0xCu);
  v5 = a1[7];
  v6 = v4;
  *v4 = 0;
  v4[1] = 0;
  v4[2] = 0;
  if ( v5 )
  {
    v11 = sub_77FEC(v5);
    v12 = (const void *)a1[6];
    *v6 = v11;
    v6[2] = v5;
    memcpy(v11, v12, v5);
    v6[1] = v5;
  }
  v7 = a1[50];
  v8 = a1[49];
  v3[2] = v6;
  v9 = (void *)a1[48];
  if ( v8 + 1 > v7 )
  {
    v10 = sub_78018((int)(a1 + 48), v9, v8 + 1, 4u);
    v8 = a1[49];
    v9 = v10;
    a1[48] = v10;
  }
  *((_DWORD *)v9 + v8) = v3;
  ++a1[49];
  return sub_3BC44((int)a1, 0, 0) != 0;
}
