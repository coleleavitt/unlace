/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_35E9C
// Address: 0x00035E9C

//----- (00035E9C) --------------------------------------------------------
int __fastcall sub_35E9C(_DWORD *a1, int a2, int a3)
{
  int v3; // r9
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  unsigned int v8; // r1
  _DWORD *v9; // r4
  _DWORD *v10; // r3
  unsigned int v11; // r2
  int v12; // r3
  _DWORD *v13; // r6
  unsigned __int64 v14; // r0
  _DWORD *v15; // r5
  bool v16; // cf
  char *v17; // r0
  unsigned __int64 v18; // r10
  char *v19; // r9
  char *v20; // r8
  char *v21; // r7
  unsigned __int64 v22; // kr00_8
  bool v23; // cf
  unsigned __int64 v24; // r2
  int v25; // r0
  unsigned int v26; // r0
  int v27; // r8
  unsigned int v28; // r3
  _DWORD *v29; // r0
  __int64 v30; // r2
  _DWORD *v31; // r11
  _DWORD *v32; // r4
  _DWORD *v33; // r12
  unsigned int v34; // r1
  _DWORD *v35; // r0
  int v36; // r1
  int v37; // r2
  _DWORD *v38; // r3
  unsigned int v39; // r1
  unsigned int v40; // r2
  unsigned __int64 v41; // r0
  __int64 v42; // r2
  void *v43; // r0
  unsigned __int64 v46; // [sp+8h] [bp-44h]
  int v47; // [sp+8h] [bp-44h]
  _DWORD *v48; // [sp+14h] [bp-38h]
  int v49; // [sp+14h] [bp-38h]
  unsigned int v50; // [sp+18h] [bp-34h]
  unsigned int v51; // [sp+18h] [bp-34h]
  unsigned int v52; // [sp+1Ch] [bp-30h]
  _DWORD v53[2]; // [sp+24h] [bp-28h] BYREF
  int v54; // [sp+2Ch] [bp-20h] BYREF
  int v55; // [sp+30h] [bp-1Ch] BYREF
  int v56; // [sp+34h] [bp-18h]
  int *v57; // [sp+38h] [bp-14h]
  int *v58; // [sp+3Ch] [bp-10h]
  int v59; // [sp+40h] [bp-Ch]

  v3 = (int)(a1 + 1);
  v6 = a1 + 2;
  v7 = (_DWORD *)a1[3];
  if ( v7 )
  {
    v8 = *(_DWORD *)(a2 + 60);
    v9 = v6;
    v10 = v7;
    do
    {
      v11 = v10[4];
      if ( v11 < v8 )
        v10 = (_DWORD *)v10[3];
      else
        v9 = v10;
      if ( v11 >= v8 )
        v10 = (_DWORD *)v10[2];
    }
    while ( v10 );
    if ( v6 != v9 && v8 >= v9[4] )
      goto LABEL_11;
    v27 = (int)v6;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v59 = 0;
    v57 = &v55;
    v58 = &v55;
    do
    {
      v28 = v7[4];
      if ( v28 < v8 )
        v7 = (_DWORD *)v7[3];
      else
        v27 = (int)v7;
      if ( v28 >= v8 )
        v7 = (_DWORD *)v7[2];
    }
    while ( v7 );
    if ( v6 != (_DWORD *)v27 && v8 >= *(_DWORD *)(v27 + 16) )
    {
      v32 = (_DWORD *)v27;
      v31 = (_DWORD *)(v27 + 24);
      v47 = v27 + 20;
      goto LABEL_66;
    }
  }
  else
  {
    v54 = 0;
    v55 = 0;
    v27 = (int)v6;
    v56 = 0;
    v59 = 0;
    v57 = &v55;
    v58 = &v55;
  }
  v29 = sub_805CC(0x2Cu);
  HIDWORD(v30) = *(_DWORD *)(a2 + 60);
  v31 = v29 + 6;
  v32 = v29;
  v29[8] = v29 + 6;
  v29[9] = v29 + 6;
  v33 = v29 + 4;
  v47 = (int)(v29 + 5);
  v29[4] = HIDWORD(v30);
  v29[5] = 0;
  v29[6] = 0;
  v29[7] = 0;
  v29[10] = 0;
  if ( v6 == (_DWORD *)v27 )
  {
    if ( a1[6] )
    {
      v35 = (_DWORD *)a1[5];
      if ( HIDWORD(v30) > v35[4] )
      {
        v27 = 0;
        goto LABEL_51;
      }
    }
    goto LABEL_87;
  }
  v34 = *(_DWORD *)(v27 + 16);
  v48 = v29 + 4;
  if ( HIDWORD(v30) < v34 )
  {
    if ( a1[4] == v27 )
    {
      v35 = (_DWORD *)v27;
      goto LABEL_51;
    }
    v50 = HIDWORD(v30);
    v35 = (_DWORD *)sub_812CC(v27);
    HIDWORD(v30) = v50;
    v33 = v48;
    if ( v50 > v35[4] )
    {
      if ( v35[3] )
        v35 = (_DWORD *)v27;
      else
        v27 = 0;
LABEL_51:
      if ( v35 )
      {
        v36 = v27;
        if ( v27 )
          v36 = 1;
        if ( v6 == v35 )
          v36 |= 1u;
        if ( v36 )
          goto LABEL_57;
        v34 = v35[4];
LABEL_103:
        v36 = HIDWORD(v30) < v34;
LABEL_57:
        sub_8132C((_DWORD *)v36, v32, v35, v6);
        ++a1[6];
        goto LABEL_66;
      }
      goto LABEL_95;
    }
LABEL_87:
    LODWORD(v30) = v33;
    v49 = HIDWORD(v30);
    sub_35DC4(v53, v3, v30);
    v27 = v53[0];
    v35 = (_DWORD *)v53[1];
    HIDWORD(v30) = v49;
    goto LABEL_51;
  }
  if ( HIDWORD(v30) > v34 )
  {
    if ( a1[5] != v27 )
    {
      v51 = HIDWORD(v30);
      v52 = *(_DWORD *)(v27 + 16);
      v35 = (_DWORD *)sub_81290(v27);
      v33 = v48;
      HIDWORD(v30) = v51;
      if ( v51 >= v35[4] )
        goto LABEL_87;
      v34 = v52;
      if ( *(_DWORD *)(v27 + 12) )
      {
        v27 = (int)v35;
        goto LABEL_51;
      }
    }
    v35 = (_DWORD *)v27;
    if ( v27 )
      goto LABEL_103;
  }
LABEL_95:
  sub_34ED8(v47, nullptr);
  v43 = v32;
  v32 = (_DWORD *)v27;
  v31 = (_DWORD *)(v27 + 24);
  v47 = v27 + 20;
  sub_80648(v43);
LABEL_66:
  sub_34ED8(v47, (_DWORD *)v32[7]);
  v32[8] = v31;
  v32[9] = v31;
  v32[7] = 0;
  v32[10] = 0;
  v37 = v56;
  if ( v56 )
  {
    v32[6] = v55;
    v32[7] = v37;
    v32[8] = v57;
    v32[9] = v58;
    *(_DWORD *)(v37 + 4) = v31;
    v32[10] = v59;
    v56 = 0;
    v57 = &v55;
    v58 = &v55;
    v59 = 0;
  }
  sub_34ED8((int)&v54, nullptr);
  v38 = (_DWORD *)a1[3];
  v9 = v6;
  if ( v38 )
  {
    v39 = *(_DWORD *)(a2 + 60);
    do
    {
      v40 = v38[4];
      if ( v40 < v39 )
        v38 = (_DWORD *)v38[3];
      else
        v9 = v38;
      if ( v40 >= v39 )
        v38 = (_DWORD *)v38[2];
    }
    while ( v38 );
    if ( v6 != v9 )
    {
      if ( v39 < v9[4] )
        v9 = v6;
      v12 = v9[7];
      v13 = v9 + 6;
      if ( !v12 )
        goto LABEL_80;
      goto LABEL_12;
    }
  }
LABEL_11:
  v12 = v9[7];
  v13 = v9 + 6;
  if ( !v12 )
  {
LABEL_80:
    v15 = sub_805CC(0x20u);
    v41 = *(_QWORD *)(a2 + 32);
    v15[6] = 0;
    *((_QWORD *)v15 + 2) = v41;
    HIDWORD(v42) = v9[10];
    if ( HIDWORD(v42) && (LODWORD(v24) = v9[9], *(_QWORD *)(v24 + 16) < v41) )
    {
      v25 = 0;
    }
    else
    {
      LODWORD(v42) = v15 + 4;
      sub_35E28(&v54, (int)(v9 + 5), v42);
      v25 = v54;
      LODWORD(v24) = v55;
    }
    goto LABEL_28;
  }
LABEL_12:
  v14 = *(_QWORD *)(a2 + 32);
  v15 = v13;
  do
  {
    v16 = *(_QWORD *)(v12 + 16) >= v14;
    if ( *(_QWORD *)(v12 + 16) < v14 )
      v12 = *(_DWORD *)(v12 + 12);
    else
      v15 = (_DWORD *)v12;
    if ( v16 )
      v12 = *(_DWORD *)(v12 + 8);
  }
  while ( v12 );
  if ( v15 == v13 )
    goto LABEL_80;
  if ( v14 < *((_QWORD *)v15 + 2) )
  {
    v17 = (char *)sub_805CC(0x20u);
    v18 = *(_QWORD *)(a2 + 32);
    v19 = v17;
    v20 = v17;
    v21 = v17 + 16;
    *((_QWORD *)v17 + 2) = v18;
    *((_DWORD *)v17 + 6) = 0;
    v22 = *((_QWORD *)v15 + 2);
    v23 = HIDWORD(v18) >= HIDWORD(v22);
    v46 = v22;
    if ( HIDWORD(v18) == HIDWORD(v22) )
      v23 = (unsigned int)v18 >= (unsigned int)v22;
    if ( !v23 )
    {
      if ( v15 == (_DWORD *)v9[8] )
      {
LABEL_27:
        LODWORD(v24) = v15;
        v25 = (int)v15;
        v15 = v19;
LABEL_28:
        if ( (_DWORD)v24 )
        {
          v26 = v25 != 0;
          if ( v13 == (_DWORD *)v24 )
            v26 |= 1u;
          if ( v26 )
            goto LABEL_32;
          v18 = *((_QWORD *)v15 + 2);
          v46 = *(_QWORD *)(v24 + 16);
LABEL_98:
          v26 = v18 < v46;
LABEL_32:
          LODWORD(v14) = sub_8132C((_DWORD *)v26, v15, (_DWORD *)v24, v13);
          ++v9[10];
          goto LABEL_33;
        }
        v20 = (char *)v15;
        v15 = (_DWORD *)v25;
        goto LABEL_64;
      }
      LODWORD(v24) = sub_812CC(v15);
      if ( *(_QWORD *)(v24 + 16) < v18 )
      {
        if ( !*(_DWORD *)(v24 + 12) )
        {
          v15 = v19;
          v25 = 0;
          goto LABEL_28;
        }
        goto LABEL_27;
      }
LABEL_96:
      LODWORD(v24) = v21;
      v15 = v19;
      sub_35E28(&v54, (int)(v9 + 5), v24);
      v25 = v54;
      LODWORD(v24) = v55;
      goto LABEL_28;
    }
    if ( v22 >= v18 )
      goto LABEL_64;
    if ( v15 != (_DWORD *)v9[9] )
    {
      v25 = sub_81290((int)v15);
      v24 = *(_QWORD *)(v25 + 16);
      if ( v18 >= v24 )
        goto LABEL_96;
      if ( v15[3] )
      {
        v15 = v19;
        LODWORD(v24) = v25;
        goto LABEL_28;
      }
    }
    if ( v15 )
    {
      LODWORD(v24) = v15;
      v15 = v19;
      goto LABEL_98;
    }
LABEL_64:
    sub_80648(v20);
  }
LABEL_33:
  v15[6] = a3;
  return v14;
}
// 3621C: variable 'v24' is possibly undefined
// 35FBC: variable 'v14' is possibly undefined
// 812CC: using guessed type int __fastcall sub_812CC(_DWORD);
