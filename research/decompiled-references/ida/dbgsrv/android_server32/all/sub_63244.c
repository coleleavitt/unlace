/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_63244
// Address: 0x00063244

//----- (00063244) --------------------------------------------------------
int __fastcall sub_63244(char **a1)
{
  char *v2; // r0
  char *v3; // r1
  unsigned int v4; // r3
  char v5; // r0
  int v6; // r5
  int v7; // r7
  size_t v8; // r2
  char *v9; // r5
  int v10; // r5
  char *v11; // r0
  char *v12; // r1
  unsigned int v13; // r3
  char v14; // r0
  int v15; // r7
  bool v16; // zf
  int v17; // r0
  size_t v18; // r2
  char *v19; // r7
  int v21; // [sp+Ch] [bp-14h]
  char *v22; // [sp+10h] [bp-10h] BYREF
  char v23; // [sp+14h] [bp-Ch] BYREF
  _BYTE v24[7]; // [sp+15h] [bp-Bh] BYREF

  v2 = *a1;
  v3 = v2 + 1;
  if ( v2 + 1 < v2 || (v4 = (unsigned int)a1[1], (unsigned int)v3 > v4) )
  {
    v23 = 0;
    v6 = 1;
  }
  else
  {
    *a1 = v3;
    v5 = *v2;
    v23 = v5;
    v6 = 1;
    if ( v5 < 0 )
    {
      if ( (v5 & 0xC0) == 0xC0 )
      {
        v7 = 5;
        if ( (v5 & 0xE0) != 0xE0 )
          v7 = 4;
        v8 = v7 - 1;
      }
      else
      {
        v7 = 2;
        v8 = 1;
      }
      v9 = &v3[v8];
      if ( &v3[v8] >= v3 && (unsigned int)v9 <= v4 )
      {
        *a1 = v9;
        qmemcpy(v24, v3, v8);
      }
      v6 = v7;
    }
  }
  v22 = &v23;
  v10 = unpack_dd((unsigned int *)&v22, (unsigned int)&v24[v6 - 1]);
  v11 = *a1;
  v12 = *a1 + 1;
  if ( v12 < *a1 || (v13 = (unsigned int)a1[1], (unsigned int)v12 > v13) )
  {
    v23 = 0;
    v15 = 1;
  }
  else
  {
    *a1 = v12;
    v14 = *v11;
    v23 = v14;
    v15 = 1;
    if ( v14 < 0 )
    {
      if ( (v14 & 0xC0) == 0xC0 )
      {
        v16 = (v14 & 0xE0) == 224;
        v17 = 5;
        if ( !v16 )
          v17 = 4;
        v21 = v17;
        v18 = v17 - 1;
      }
      else
      {
        v21 = 2;
        v18 = 1;
      }
      v19 = &v12[v18];
      if ( &v12[v18] >= v12 && (unsigned int)v19 <= v13 )
      {
        *a1 = v19;
        qmemcpy(v24, v12, v18);
      }
      v15 = v21;
    }
  }
  v22 = &v23;
  unpack_dd((unsigned int *)&v22, (unsigned int)&v24[v15 - 1]);
  return v10;
}
// 63290: conditional instruction was optimized away because r7.4 is in (4..5)
// 63308: conditional instruction was optimized away because r0.4 is in (4..5)
