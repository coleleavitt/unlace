/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3C1F8
// Address: 0x0003C1F8

//----- (0003C1F8) --------------------------------------------------------
int __fastcall sub_3C1F8(_DWORD *a1, const char *a2)
{
  int v2; // r8
  _DWORD *v4; // r6
  _DWORD *v5; // r0
  size_t v6; // r9
  _DWORD *v7; // r5
  int v8; // r3
  unsigned int v9; // r0
  void *v10; // r1
  void *v11; // r0
  int result; // r0
  void *v13; // r0
  const void *v14; // r1
  _DWORD *v15; // r1
  _DWORD *v16; // r8
  _DWORD *v17; // r0
  size_t v18; // r9
  _DWORD *v19; // r5
  unsigned int v20; // r0
  int v21; // r3
  void *v22; // r1
  void *v23; // r0
  void *v24; // r0
  const void *v25; // r1

  v2 = (int)(a1 + 6);
  sub_188E0((int)(a1 + 6), "%s.%s", a2, a2);
  v4 = sub_808A4(0x10u);
  v4[3] = 0;
  *v4 = 1;
  v5 = sub_808A4(0xCu);
  v6 = a1[7];
  v7 = v5;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  if ( v6 )
  {
    v13 = sub_77FEC(v6);
    v14 = (const void *)a1[6];
    *v7 = v13;
    v7[2] = v6;
    memcpy(v13, v14, v6);
    v7[1] = v6;
  }
  v8 = a1[49];
  v9 = a1[50];
  v4[2] = v7;
  v10 = (void *)a1[48];
  if ( v8 + 1 > v9 )
  {
    v11 = sub_78018((int)(a1 + 48), v10, v8 + 1, 4u);
    v8 = a1[49];
    v10 = v11;
    a1[48] = v11;
  }
  *((_DWORD *)v10 + v8) = v4;
  ++a1[49];
  result = sub_38440((int)a1);
  if ( !result )
  {
    v15 = (_DWORD *)a1[6];
    if ( a1[8] <= 4u )
    {
      v15 = sub_78018(v2, v15, 5u, 1u);
      a1[6] = v15;
    }
    a1[7] = 5;
    *v15 = *(_DWORD *)"this";
    *(_BYTE *)(a1[6] + 4) = 0;
    v16 = sub_808A4(0x10u);
    v16[3] = 0;
    *v16 = 1;
    v17 = sub_808A4(0xCu);
    v18 = a1[7];
    v19 = v17;
    *v17 = 0;
    v17[1] = 0;
    v17[2] = 0;
    if ( v18 )
    {
      v24 = sub_77FEC(v18);
      v25 = (const void *)a1[6];
      *v19 = v24;
      v19[2] = v18;
      memcpy(v24, v25, v18);
      v19[1] = v18;
    }
    v20 = a1[50];
    v21 = a1[49];
    v16[2] = v19;
    v22 = (void *)a1[48];
    if ( v21 + 1 > v20 )
    {
      v23 = sub_78018((int)(a1 + 48), v22, v21 + 1, 4u);
      v21 = a1[49];
      v22 = v23;
      a1[48] = v23;
    }
    *((_DWORD *)v22 + v21) = v16;
    ++a1[49];
    result = sub_3BC44((int)a1, 0, 0);
    if ( !result )
      return sub_39024((int)a1);
  }
  return result;
}
