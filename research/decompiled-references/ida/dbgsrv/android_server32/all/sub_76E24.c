/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_76E24
// Address: 0x00076E24

//----- (00076E24) --------------------------------------------------------
int __fastcall sub_76E24(unsigned __int16 *a1, unsigned __int16 *a2)
{
  int v2; // r5
  void *v3; // r7
  unsigned int v4; // r2
  int v5; // r6
  unsigned __int16 v6; // r0
  unsigned __int16 v7; // r1
  __int16 v8; // r0
  unsigned __int16 v9; // r1
  __int16 v10; // r0
  unsigned __int16 v11; // r1
  __int16 v12; // r0
  unsigned __int16 v13; // r1
  __int16 v14; // r0
  unsigned __int16 v15; // r1
  __int16 v16; // r0
  int v17; // r1
  int v18; // r1
  int v19; // r4
  int v20; // r3
  int v21; // r0
  unsigned int v22; // r5
  unsigned __int16 v23; // r4
  unsigned __int16 v24; // r6
  unsigned __int16 v25; // r4
  __int16 v26; // r1
  unsigned __int16 v27; // r4
  __int16 v28; // r1
  unsigned __int16 v29; // r4
  __int16 v30; // r1
  unsigned __int16 v31; // r4
  __int16 v32; // r1
  int v33; // r4
  int v37; // [sp+Ch] [bp-40h]
  int v38; // [sp+10h] [bp-3Ch]
  int v39; // [sp+18h] [bp-34h]
  int v40; // [sp+1Ch] [bp-30h]
  int v41; // [sp+20h] [bp-2Ch]
  int v42; // [sp+24h] [bp-28h]
  int v43; // [sp+28h] [bp-24h]
  _WORD *v44; // [sp+2Ch] [bp-20h]
  int v45; // [sp+2Ch] [bp-20h]
  _DWORD v46[6]; // [sp+30h] [bp-1Ch] BYREF

  v46[0] = *(_DWORD *)a2;
  v2 = 0;
  memset(&v46[1], 0, 18);
  v3 = a1 + 3;
  v4 = a1[9];
  v5 = 112;
  if ( a1[9]
    || (v44 = a1 + 2, memmove(a1 + 3, a1 + 2, 0x10u), a1[2] = 0, v4 = a1[9], v5 = 96, a1[9])
    || (memmove(v3, v44, 0x10u), a1[2] = 0, v4 = a1[9], v5 = 80, a1[9])
    || (memmove(v3, v44, 0x10u), a1[2] = 0, v4 = a1[9], v5 = 64, a1[9])
    || (memmove(v3, v44, 0x10u), a1[2] = 0, v4 = a1[9], v5 = 48, a1[9])
    || (memmove(v3, v44, 0x10u), a1[2] = 0, v4 = a1[9], v5 = 32, a1[9])
    || (v5 = 16, memmove(v3, v44, 0x10u), a1[2] = 0, (v4 = a1[9]) != 0) )
  {
    if ( !(v4 << 24) )
    {
      v6 = a1[2];
      a1[2] = HIBYTE(v6);
      a1[10] = *((unsigned __int8 *)a1 + 21) + ((_WORD)v4 << 8);
      v7 = a1[3];
      a1[3] = HIBYTE(v7) + (v6 << 8);
      v8 = v7 << 8;
      v9 = a1[4];
      a1[4] = HIBYTE(v9) + v8;
      v10 = v9 << 8;
      v11 = a1[5];
      a1[5] = HIBYTE(v11) + v10;
      v12 = v11 << 8;
      v13 = a1[6];
      a1[6] = HIBYTE(v13) + v12;
      v14 = v13 << 8;
      v15 = a1[7];
      a1[7] = HIBYTE(v15) + v14;
      v16 = v15 << 8;
      v17 = a1[8];
      a1[8] = HIBYTE(a1[8]) + v16;
      v4 = (v17 << 8) + (v4 >> 8);
      a1[9] = v4;
      v5 -= 8;
    }
    v18 = 0;
    v19 = 0;
    v45 = 0;
    v43 = 0;
    v42 = 0;
    v20 = 0;
    v41 = 0;
    v21 = 0;
    LOWORD(v22) = 0;
    v39 = 0;
    do
    {
      v40 = v19;
      v38 = v5;
      if ( v4 << 31 )
      {
        v22 = (unsigned __int16)v22 + a2[10];
        v21 = HIWORD(v22) + a2[9] + (unsigned __int16)v21;
        v41 = ((unsigned int)(v21 << 15) >> 31) + a2[8] + (unsigned __int16)v41;
        v20 = (unsigned __int16)v20 + a2[7] + ((unsigned int)(v41 << 15) >> 31);
        v42 = (unsigned __int16)v42 + a2[6] + ((unsigned int)(v20 << 15) >> 31);
        v43 = (unsigned __int16)v43 + a2[5] + ((unsigned int)(v42 << 15) >> 31);
        v45 = (unsigned __int16)v45 + a2[4] + ((unsigned int)(v43 << 15) >> 31);
        v40 = (unsigned __int16)v19 + a2[3] + ((unsigned int)(v45 << 15) >> 31);
        v18 += a2[2] + ((unsigned int)(v40 << 15) >> 31);
      }
      v37 = v18;
      v23 = a1[2];
      a1[2] = v23 >> 1;
      v24 = a1[3];
      a1[3] = (v24 >> 1) + (v23 << 15);
      v25 = a1[4];
      a1[4] = (v25 >> 1) + (v24 << 15);
      v26 = v25 << 15;
      v27 = a1[5];
      a1[5] = (v27 >> 1) + v26;
      v28 = v27 << 15;
      v29 = a1[6];
      a1[6] = (v29 >> 1) + v28;
      v30 = v29 << 15;
      v31 = a1[7];
      a1[7] = (v31 >> 1) + v30;
      v32 = v31 << 15;
      v33 = a1[8];
      a1[8] = (a1[8] >> 1) + v32;
      a1[9] = ((_WORD)v33 << 15) + ((unsigned __int16)(v4 & 0xFFFE) >> 1);
      a1[10] = (a1[10] >> 1) + ((_WORD)v4 << 15);
      v39 |= v22 & 1;
      v22 = ((unsigned __int16)(v22 & 0xFFFE) >> 1) + (v21 << 15);
      v21 = ((unsigned __int16)(v21 & 0xFFFE) >> 1) + (v41 << 15);
      v41 = ((unsigned __int16)(v41 & 0xFFFE) >> 1) + (v20 << 15);
      v20 = ((unsigned __int16)(v20 & 0xFFFE) >> 1) + (v42 << 15);
      v42 = ((unsigned __int16)(v42 & 0xFFFE) >> 1) + (v43 << 15);
      v4 = (v33 << 15) + ((unsigned __int16)(v4 & 0xFFFE) >> 1);
      v43 = ((unsigned __int16)(v43 & 0xFFFE) >> 1) + (v45 << 15);
      v45 = ((unsigned __int16)(v45 & 0xFFFE) >> 1) + (v40 << 15);
      v19 = ((unsigned __int16)(v40 & 0xFFFE) >> 1) + (v37 << 15);
      v18 = (unsigned __int16)(v37 & 0xFFFE) >> 1;
      v5 = v38 - 1;
    }
    while ( v38 != 1 );
    HIWORD(v46[4]) = v21;
    LOWORD(v46[5]) = v22;
    LOWORD(v46[4]) = v41;
    HIWORD(v46[3]) = v20;
    LOWORD(v46[3]) = v42;
    HIWORD(v46[2]) = v43;
    LOWORD(v46[2]) = v45;
    HIWORD(v46[1]) = ((unsigned __int16)(v40 & 0xFFFE) >> 1) + ((_WORD)v37 << 15);
    LOWORD(v46[1]) = (unsigned __int16)(v37 & 0xFFFE) >> 1;
    qmemcpy(a2, v46, 0x16u);
    return v39;
  }
  else
  {
    memmove(v3, v44, 0x10u);
    *v44 = 0;
    memset(a2, 0, 0x16u);
  }
  return v2;
}
