/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1E820
// Address: 0x0001E820

//----- (0001E820) --------------------------------------------------------
int __fastcall sub_1E820(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  unsigned int v4; // r0
  int v5; // r4
  _DWORD *v6; // r2
  int v7; // r3
  _DWORD *v8; // r7
  int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r6
  int v12; // r1
  _DWORD *v13; // r7
  _DWORD *v14; // r5
  signed int v15; // r6
  int v16; // r0
  int v17; // r6
  int v18; // r3
  int v19; // r2
  _DWORD *v20; // r0
  int v21; // r1
  int v22; // r0
  unsigned int v23; // r6
  int v24; // r0
  _DWORD *v25; // r1
  int v26; // r6
  unsigned int v27; // r6
  int v28; // r0
  unsigned int v29; // r6
  _DWORD *v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r0
  int v34; // r3
  int v35; // r2
  _DWORD *v36; // r7
  unsigned int v37; // r0
  _DWORD *v38; // r6
  unsigned int v39; // r5
  int v40; // r0
  signed int v41; // r4
  int v42; // r5
  int v44; // [sp+10h] [bp-40h]
  int v45; // [sp+14h] [bp-3Ch]
  int v46; // [sp+18h] [bp-38h]
  unsigned int v47; // [sp+20h] [bp-30h]
  _DWORD *v48; // [sp+24h] [bp-2Ch]
  int v51; // [sp+34h] [bp-1Ch]
  int v52; // [sp+38h] [bp-18h]
  _DWORD *v54; // [sp+3Ch] [bp-14h]
  int v56; // [sp+40h] [bp-10h]
  int v57; // [sp+40h] [bp-10h]
  _DWORD v58[3]; // [sp+44h] [bp-Ch] BYREF

  v4 = a2[4] / 0x5Du;
  v5 = a2[1];
  v6 = (_DWORD *)(v5 + 4 * v4);
  v7 = 0;
  if ( a2[2] != v5 )
    v7 = *v6 + 44 * (a2[4] % 0x5Du);
  v46 = a2[4];
  v51 = 1;
  v48 = (_DWORD *)v7;
  if ( v7 == a4 )
  {
    v47 = 0;
    v12 = v7;
    v13 = (_DWORD *)(v5 + 4 * v4);
    v14 = a2;
    goto LABEL_15;
  }
  v44 = a2[2];
  v45 = a2[1];
  v8 = (_DWORD *)(v5 + 4 * v4);
  v9 = -1171354717 * ((a4 - *a3) >> 2) + 93 * (a3 - v6) + (v7 - *v6) / -44;
  v10 = 0;
  if ( !v9 )
  {
    v54 = (_DWORD *)(v5 + 4 * v4);
    v56 = v7;
LABEL_10:
    v6 = v8;
    goto LABEL_11;
  }
  v11 = -1171354717 * ((v7 - *v8) >> 2) + v9;
  if ( (int)v11 < 1 )
  {
    v15 = 92 - v11;
    v16 = v15 / -93;
    v56 = v8[v16] + 44 * (92 - v15 % 93);
    v54 = &v8[v16];
    v51 = 0;
    v10 = v9;
    goto LABEL_10;
  }
  v56 = v8[v11 / 0x5D] + 44 * (v11 % 0x5D);
  v54 = &v8[v11 / 0x5D];
  v51 = 0;
  v10 = v9;
  v6 = (_DWORD *)(v5 + 4 * v4);
LABEL_11:
  v14 = a2;
  v17 = a2[5];
  v47 = v10;
  if ( v10 > (unsigned int)(v17 - 1) >> 1 )
  {
    v18 = v56 - *v54;
    v19 = -1171354717 * (v18 >> 2);
    if ( v18 < -43 )
    {
      v28 = (91 - v19) / -93;
      v52 = v54[v28] + 44 * (92 - (91 - v19) % 93);
      v20 = &v54[v28];
    }
    else
    {
      v52 = v54[(v19 + 1) / 0x5Du] + 44 * ((v19 + 1) % 0x5Du);
      v20 = &v54[(v19 + 1) / 0x5Du];
    }
    v29 = v17 + v46;
    v30 = (_DWORD *)(v45 + 4 * (v29 / 0x5D));
    v31 = 0;
    if ( v44 != v45 )
      v31 = *v30 + 44 * (v29 % 0x5D);
    sub_27198(v58, v20, v52, v30, v31, v54, v56);
    free_debug_event((_DWORD *)v58[1]);
    v32 = a2[5] - 1;
    a2[5] = v32;
    v33 = a2[2];
    v34 = 93 * ((v33 - a2[1]) >> 2) - 1;
    if ( v33 == a2[1] )
      v34 = v33 - a2[1];
    v27 = a2[4];
    if ( v34 - (v32 + v27) >= 0xBA )
    {
      operator delete(*(void **)(v33 - 4));
      a2[2] -= 4;
      v27 = a2[4];
    }
    goto LABEL_27;
  }
  v13 = v54;
  v12 = v56;
LABEL_15:
  v57 = v12;
  v21 = v12 - *v13;
  v22 = -1171354717 * (v21 >> 2);
  v23 = v22 + 1;
  if ( v21 < -43 )
  {
    v26 = (91 - v22) / -93;
    v24 = v13[v26] + 44 * (92 - (91 - v22) % 93);
    v25 = &v13[v26];
  }
  else
  {
    v24 = v13[v23 / 0x5D] + 44 * (v23 % 0x5D);
    v25 = &v13[v23 / 0x5D];
  }
  sub_27058(v58, v6, v7, v13, v57, v25, v24);
  free_debug_event(v48);
  --v14[5];
  v27 = v14[4] + 1;
  v14[4] = v27;
  if ( v27 >= 0xBA )
  {
    operator delete(*(void **)v14[1]);
    v14[1] += 4;
    v27 = v14[4] - 93;
    v14[4] = v27;
  }
LABEL_27:
  v35 = v14[1];
  v36 = (_DWORD *)(v35 + 4 * (v27 / 0x5D));
  if ( v14[2] == v35 )
    v37 = 0;
  else
    v37 = *v36 + 44 * (v27 % 0x5D);
  v38 = a1;
  *a1 = v36;
  a1[1] = v37;
  if ( !v51 )
  {
    v39 = -1171354717 * ((int)(v37 - *v36) >> 2) + v47;
    if ( (int)v39 < 1 )
    {
      v41 = 92 - v39;
      v42 = (int)(92 - v39) / -93;
      *a1 = &v36[v42];
      v38 = a1;
      v40 = v36[v42] + 44 * (92 - v41 % 93);
    }
    else
    {
      *a1 = &v36[v39 / 0x5D];
      v40 = v36[v39 / 0x5D] + 44 * (v39 % 0x5D);
    }
    v38[1] = v40;
  }
  return _stack_chk_guard - v58[2];
}
