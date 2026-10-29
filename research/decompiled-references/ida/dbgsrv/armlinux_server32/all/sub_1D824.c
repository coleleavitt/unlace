/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1D824
// Address: 0x0001D824

//----- (0001D824) --------------------------------------------------------
int __fastcall sub_1D824(int a1, int a2, char *a3)
{
  void **v5; // r5
  char *v6; // r3
  unsigned int v7; // r4
  void *v8; // r1
  void *v9; // r0
  _DWORD *v10; // r5
  _BYTE *v11; // r7
  char *v12; // r1
  int v13; // r0
  unsigned int v14; // r3
  int v15; // lr
  int v16; // r12
  unsigned int v17; // r2
  _DWORD *v18; // r7
  _DWORD *v19; // r1
  _DWORD *v20; // r10
  int v21; // r5
  unsigned int v22; // r3
  __int64 v23; // r2
  unsigned int v24; // r0
  int v25; // r0
  int v26; // r1
  _BOOL4 v27; // r1
  int v28; // r0
  size_t v29; // r0
  size_t v30; // r4
  unsigned int v31; // r1
  void *v33; // r0
  unsigned int v34; // r7
  void *v35; // r0
  void *v36; // r0
  char *v37; // r0
  _DWORD *v38; // r0
  char *v39; // r0
  int v40; // [sp+4h] [bp-20h]
  int v41; // [sp+4h] [bp-20h]
  _DWORD *v42; // [sp+4h] [bp-20h]
  int v43; // [sp+8h] [bp-1Ch]
  int v44; // [sp+Ch] [bp-18h]
  int v45; // [sp+Ch] [bp-18h]
  _BYTE *v46; // [sp+14h] [bp-10h] BYREF
  int v47; // [sp+18h] [bp-Ch]

  v5 = *(void ***)(a1 + 16);
  v6 = (char *)v5[1];
  v7 = **(_DWORD **)(a1 + 12) + a2;
  v8 = *v5;
  if ( v6 + 1 > v5[2] )
  {
    v9 = sub_78018((int)v5, v8, (unsigned int)(v6 + 1), 4u);
    v6 = (char *)v5[1];
    v8 = v9;
    *v5 = v9;
  }
  *((_DWORD *)v8 + (_DWORD)v6) = v7;
  v5[1] = (char *)v5[1] + 1;
  v10 = *(_DWORD **)(a1 + 16);
  v11 = sub_77FAC(a3);
  v12 = (char *)v10[3];
  v13 = (int)(v10 + 3);
  v46 = v11;
  if ( v12 > (char *)&v46 )
  {
    v16 = v10[4];
    v17 = v16 + 1;
    if ( (unsigned int)(v16 + 1) <= v10[5] )
      goto LABEL_6;
    goto LABEL_34;
  }
  v14 = v10[5];
  v15 = v10[4];
  v16 = v15;
  v17 = v15 + 1;
  if ( &v46 >= (_BYTE **)&v12[4 * v14] )
  {
    if ( v17 <= v14 )
    {
LABEL_6:
      *(_DWORD *)(v10[3] + 4 * v16) = v11;
      goto LABEL_7;
    }
LABEL_34:
    v33 = sub_78018(v13, v12, v17, 4u);
    v16 = v10[4];
    v10[3] = v33;
    goto LABEL_6;
  }
  if ( v14 < v17 )
  {
    v37 = (char *)sub_78018(v13, v12, v17, 4u);
    v15 = v10[4];
    v12 = v37;
    v10[3] = v37;
  }
  *(_DWORD *)&v12[4 * v15] = v11;
LABEL_7:
  ++v10[4];
  v18 = *(_DWORD **)(a1 + 12);
  v19 = (_DWORD *)v18[10];
  v20 = v18 + 9;
  v21 = (int)(v18 + 9);
  if ( !v19 )
    goto LABEL_49;
  do
  {
    v22 = v19[4];
    if ( v7 > v22 )
      v19 = (_DWORD *)v19[3];
    else
      v21 = (int)v19;
    if ( v7 <= v22 )
      v19 = (_DWORD *)v19[2];
  }
  while ( v19 );
  if ( v20 == (_DWORD *)v21 )
  {
LABEL_49:
    v42 = v19;
    v38 = sub_808A4(0x20u);
    v38[4] = v7;
    v21 = (int)v38;
    v39 = (char *)(v38 + 4);
    *(_DWORD *)(v21 + 28) = v42;
    *(_DWORD *)(v21 + 20) = v42;
    *(_DWORD *)(v21 + 24) = v42;
    HIDWORD(v23) = v18[13];
    if ( HIDWORD(v23) && (LODWORD(v23) = v18[12], HIDWORD(v23) = *(_DWORD *)(v23 + 16), v7 > HIDWORD(v23)) )
    {
      v26 = 0;
    }
    else
    {
      LODWORD(v23) = v39;
      sub_1D7C0(&v46, (int)(v18 + 8), v23);
      v26 = (int)v46;
      LODWORD(v23) = v47;
    }
    goto LABEL_21;
  }
  if ( v7 < *(_DWORD *)(v21 + 16) )
  {
    HIDWORD(v23) = sub_808A4(0x20u);
    *(_DWORD *)(HIDWORD(v23) + 16) = v7;
    LODWORD(v23) = HIDWORD(v23);
    *(_DWORD *)(HIDWORD(v23) + 20) = 0;
    v40 = HIDWORD(v23) + 16;
    *(_QWORD *)(HIDWORD(v23) + 24) = 0;
    v24 = *(_DWORD *)(v21 + 16);
    if ( v7 < v24 )
    {
      if ( v18[11] == v21 )
      {
LABEL_20:
        LODWORD(v23) = v21;
        v26 = v21;
        v21 = HIDWORD(v23);
LABEL_21:
        if ( (_DWORD)v23 )
        {
          v27 = v26 != 0;
          if ( v20 == (_DWORD *)v23 )
            v28 = v27 | 1;
          else
            v28 = v27;
          if ( v28 )
            goto LABEL_26;
          v7 = *(_DWORD *)(v21 + 16);
LABEL_55:
          v28 = *(_DWORD *)(v23 + 16) > v7;
LABEL_26:
          sub_814DC((_DWORD *)v28, (_DWORD *)v21, (_DWORD *)v23, v18 + 9);
          ++v18[13];
          goto LABEL_27;
        }
        v36 = *(void **)(v21 + 20);
        if ( v36 )
        {
          *(_DWORD *)(v21 + 24) = 0;
          v41 = v21;
          v21 = v26;
          sub_77F70(v36);
          LODWORD(v23) = v41;
        }
        else
        {
          LODWORD(v23) = v21;
          v21 = v26;
        }
        goto LABEL_48;
      }
      v44 = HIDWORD(v23);
      v25 = sub_8147C(v21);
      v23 = __PAIR64__(v44, v25);
      if ( v7 > *(_DWORD *)(v25 + 16) )
      {
        v26 = 0;
        if ( !*(_DWORD *)(v25 + 12) )
        {
          v21 = v44;
          goto LABEL_21;
        }
        goto LABEL_20;
      }
LABEL_53:
      LODWORD(v23) = v40;
      v21 = HIDWORD(v23);
      sub_1D7C0(&v46, (int)(v18 + 8), v23);
      v26 = (int)v46;
      LODWORD(v23) = v47;
      goto LABEL_21;
    }
    if ( v7 <= v24 )
      goto LABEL_48;
    if ( v18[12] != v21 )
    {
      v43 = HIDWORD(v23);
      v45 = HIDWORD(v23);
      v26 = sub_81440(v21);
      HIDWORD(v23) = v43;
      if ( v7 >= *(_DWORD *)(v26 + 16) )
        goto LABEL_53;
      LODWORD(v23) = v45;
      if ( *(_DWORD *)(v21 + 12) )
      {
        v21 = v43;
        LODWORD(v23) = v26;
        goto LABEL_21;
      }
    }
    if ( v21 )
    {
      LODWORD(v23) = v21;
      v21 = HIDWORD(v23);
      goto LABEL_55;
    }
LABEL_48:
    sub_809EC((void *)v23);
  }
LABEL_27:
  if ( a3 && (v29 = strlen(a3), (v30 = v29) != 0) )
  {
    v34 = v29 + 1;
    v35 = *(void **)(v21 + 20);
    if ( v34 > *(_DWORD *)(v21 + 28) )
    {
      v35 = sub_78018(v21 + 20, *(void **)(v21 + 20), v34, 1u);
      *(_DWORD *)(v21 + 20) = v35;
    }
    *(_DWORD *)(v21 + 24) = v34;
    memmove(v35, a3, v30);
    *(_BYTE *)(*(_DWORD *)(v21 + 20) + v30) = 0;
  }
  else
  {
    *(_DWORD *)(v21 + 24) = 0;
  }
  v31 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4);
  if ( !(v31 % 0x2710) )
    sub_17480(*(_DWORD *)(a1 + 8), &byte_8DFE8, -776530087 * v31);
  return 0;
}
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
// 8DFE8: using guessed type char byte_8DFE8;
