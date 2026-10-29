/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_56CE8
// Address: 0x00056CE8

//----- (00056CE8) --------------------------------------------------------
int __fastcall sub_56CE8(_DWORD *a1, int *a2, int a3, int a4)
{
  int v5; // r6
  _DWORD *v6; // r9
  int v7; // r5
  unsigned int v8; // r11
  _DWORD *v9; // r1
  unsigned int v10; // r3
  _DWORD *v11; // r10
  _DWORD *v12; // r3
  __int64 v13; // r2
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r10
  size_t v17; // r10
  void *v18; // r11
  void *v19; // r0
  void *v21; // r0
  void *v22; // r0
  int *v23; // r7
  unsigned int v24; // r3
  bool v25; // r3
  int *v27; // r0
  int v28; // r0
  _DWORD *v29; // r3
  unsigned int v30; // r2
  unsigned int v31; // r2
  int *v32; // r2
  bool v33; // zf
  int v34; // r10
  int *v35; // r7
  void *v36; // r0
  void *v37; // r0
  int *v38; // r0
  void *v39; // r0
  const void *v40; // r7
  int v41; // [sp+4h] [bp-28h]
  unsigned int v44; // [sp+14h] [bp-18h]
  unsigned int v45; // [sp+14h] [bp-18h]
  int v46; // [sp+1Ch] [bp-10h] BYREF
  int v47; // [sp+20h] [bp-Ch]

  if ( a4 > 0 )
  {
    v5 = a3 + 4;
    v6 = a1 + 51;
    v41 = 0;
    while ( 1 )
    {
      v7 = (int)(a1 + 51);
      v8 = *(_DWORD *)(v5 - 4);
      v9 = (_DWORD *)a1[52];
      if ( *(_DWORD *)(v5 + 4) > 1u )
        break;
      if ( v9 )
      {
        v23 = (int *)a1[52];
        while ( 1 )
        {
          while ( 1 )
          {
            v24 = v23[4];
            if ( v8 <= v24 )
              break;
            v23 = (int *)v23[3];
            if ( !v23 )
              goto LABEL_57;
          }
          v27 = (int *)v23[2];
          if ( v8 >= v24 )
            break;
          v7 = (int)v23;
          v23 = (int *)v23[2];
          if ( !v27 )
          {
LABEL_57:
            v25 = v6 == (_DWORD *)v7;
            goto LABEL_58;
          }
        }
        v29 = (_DWORD *)v23[3];
        while ( v27 )
        {
          v30 = v27[4];
          if ( v8 > v30 )
            v27 = (int *)v27[3];
          else
            v23 = v27;
          if ( v8 <= v30 )
            v27 = (int *)v27[2];
        }
        while ( v29 )
        {
          v31 = v29[4];
          if ( v8 >= v31 )
            v29 = (_DWORD *)v29[3];
          else
            v7 = (int)v29;
          if ( v8 < v31 )
            v29 = (_DWORD *)v29[2];
        }
        v32 = (int *)a1[53];
        v33 = v32 == v23;
        if ( v32 == v23 )
          v33 = v6 == (_DWORD *)v7;
        if ( !v33 )
        {
          if ( v23 != (int *)v7 )
          {
            do
            {
              v34 = sub_81478(v23);
              v35 = sub_81644(v23, a1 + 51);
              v36 = (void *)v35[10];
              if ( v36 )
              {
                v35[11] = 0;
                sub_77F70(v36);
              }
              v37 = (void *)v35[6];
              if ( v37 )
              {
                v35[7] = 0;
                sub_77F70(v37);
              }
              v38 = v35;
              v23 = (int *)v34;
              sub_809EC(v38);
              --a1[55];
            }
            while ( v34 != v7 );
          }
          goto LABEL_39;
        }
      }
      else
      {
        v25 = 1;
LABEL_58:
        if ( a1[53] != v7 || !v25 )
          goto LABEL_39;
      }
      sub_18C80((int)(a1 + 50), v9);
      a1[52] = 0;
      a1[53] = v6;
      a1[54] = v6;
      a1[55] = 0;
LABEL_39:
      v5 += 256;
      v33 = a4 == ++v41;
      if ( v33 )
        goto LABEL_41;
    }
    if ( v9 )
    {
      do
      {
        v10 = v9[4];
        if ( v8 > v10 )
          v9 = (_DWORD *)v9[3];
        else
          v7 = (int)v9;
        if ( v8 <= v10 )
          v9 = (_DWORD *)v9[2];
      }
      while ( v9 );
      if ( v6 != (_DWORD *)v7 && v8 >= *(_DWORD *)(v7 + 16) )
      {
LABEL_31:
        *(_DWORD *)(v7 + 20) = v8;
        if ( v7 + 24 != v5 )
        {
          v16 = *(_DWORD *)(v5 + 4);
          if ( v16 > 1 )
          {
            v39 = *(void **)(v7 + 24);
            v40 = *(const void **)v5;
            if ( v16 > *(_DWORD *)(v7 + 32) )
            {
              v39 = sub_78018(v7 + 24, *(void **)(v7 + 24), *(_DWORD *)(v5 + 4), 1u);
              *(_DWORD *)(v7 + 24) = v39;
            }
            *(_DWORD *)(v7 + 28) = v16;
            memmove(v39, v40, v16 - 1);
            *(_BYTE *)(*(_DWORD *)(v7 + 24) + v16 - 1) = 0;
          }
          else
          {
            *(_DWORD *)(v7 + 28) = 0;
          }
        }
        *(_DWORD *)(v7 + 36) = *(_DWORD *)(v5 + 12);
        v17 = *(_DWORD *)(v5 + 20);
        v18 = (void *)v17;
        if ( v17 )
        {
          v18 = sub_77FEC(*(_DWORD *)(v5 + 20));
          memcpy(v18, *(const void **)(v5 + 16), v17);
        }
        v19 = *(void **)(v7 + 40);
        if ( v19 )
        {
          *(_DWORD *)(v7 + 44) = 0;
          sub_77F70(v19);
        }
        *(_DWORD *)(v7 + 40) = v18;
        *(_DWORD *)(v7 + 44) = v17;
        *(_DWORD *)(v7 + 48) = v17;
        memcpy((void *)(v7 + 52), (const void *)(v5 + 28), 0xD9u);
        *(_DWORD *)(v7 + 272) = *(_DWORD *)(v5 + 248);
        goto LABEL_39;
      }
    }
    v11 = sub_808A4(0x114u);
    v11[4] = v8;
    memset(v11 + 5, 0, 0x100u);
    v12 = v11 + 19;
    v11[6] = 0;
    v11[7] = 0;
    v11[8] = 0;
    v11[10] = 0;
    v11[11] = 0;
    v11[12] = 0;
    v11[16] = 0;
    v11[17] = 0;
    v11[18] = 0;
    v11[13] = -1;
    v11[14] = -1;
    v11[15] = -1;
    do
    {
      *(_BYTE *)v12 = 0;
      *((_BYTE *)v12 + 1) = 0;
      *((_BYTE *)v12 + 2) = 0;
      *((_BYTE *)v12 + 3) = 0;
      *((_BYTE *)v12 + 4) = 0;
      *((_BYTE *)v12 + 5) = 0;
      *((_BYTE *)v12 + 20) = 0;
      *((_BYTE *)v12 + 21) = 0;
      *((_BYTE *)v12 + 22) = 0;
      *((_BYTE *)v12 + 23) = 0;
      *((_WORD *)v12 + 3) = 0;
      v12[4] = 0;
      v12[2] = 0;
      v12[3] = 0;
      v12 += 6;
    }
    while ( v11 + 67 != v12 );
    if ( v6 == (_DWORD *)v7 )
    {
      HIDWORD(v13) = a1[55];
      if ( HIDWORD(v13) )
      {
        LODWORD(v13) = a1[54];
        HIDWORD(v13) = v11[4];
        if ( *(_DWORD *)(v13 + 16) < HIDWORD(v13) )
        {
          v7 = 0;
          goto LABEL_23;
        }
      }
    }
    else
    {
      HIDWORD(v13) = v11[4];
      LODWORD(v13) = *(_DWORD *)(v7 + 16);
      if ( HIDWORD(v13) >= (unsigned int)v13 )
      {
        if ( HIDWORD(v13) <= (unsigned int)v13 )
          goto LABEL_48;
        if ( a1[54] != v7 )
        {
          v45 = v11[4];
          v28 = sub_81440(v7);
          v13 = __PAIR64__(v45, v28);
          if ( v45 >= *(_DWORD *)(v28 + 16) )
            goto LABEL_47;
          if ( *(_DWORD *)(v7 + 12) )
          {
            v7 = v28;
            goto LABEL_23;
          }
        }
        LODWORD(v13) = v7;
        if ( v7 )
          goto LABEL_99;
        goto LABEL_48;
      }
      v44 = v11[4];
      if ( a1[53] == v7 )
      {
        LODWORD(v13) = v7;
        goto LABEL_23;
      }
      v14 = sub_8147C(v7);
      v13 = __PAIR64__(v44, v14);
      if ( v44 > *(_DWORD *)(v14 + 16) )
      {
        if ( *(_DWORD *)(v14 + 12) )
          LODWORD(v13) = v7;
        else
          v7 = 0;
LABEL_23:
        if ( (_DWORD)v13 )
        {
LABEL_24:
          v15 = v7;
          if ( v7 )
            v15 = 1;
          if ( (_DWORD *)v13 == v6 )
            v15 |= 1u;
          if ( v15 )
            goto LABEL_29;
          HIDWORD(v13) = v11[4];
LABEL_99:
          v15 = HIDWORD(v13) < *(_DWORD *)(v13 + 16);
LABEL_29:
          sub_814DC((_DWORD *)v15, v11, (_DWORD *)v13, a1 + 51);
          v7 = (int)v11;
          ++a1[55];
LABEL_30:
          v8 = *(_DWORD *)(v5 - 4);
          goto LABEL_31;
        }
LABEL_48:
        v21 = (void *)v11[10];
        if ( v21 )
        {
          v11[11] = 0;
          sub_77F70(v21);
        }
        v22 = (void *)v11[6];
        if ( v22 )
        {
          v11[7] = 0;
          sub_77F70(v22);
        }
        sub_809EC(v11);
        goto LABEL_30;
      }
    }
LABEL_47:
    LODWORD(v13) = v11 + 4;
    sub_56C84(&v46, (int)(a1 + 50), v13);
    v7 = v46;
    LODWORD(v13) = v47;
    if ( v47 )
      goto LABEL_24;
    goto LABEL_48;
  }
LABEL_41:
  if ( a2 )
    *a2 = a4;
  return 1;
}
// 81478: using guessed type int __fastcall sub_81478(_DWORD);
// 8147C: using guessed type int __fastcall sub_8147C(_DWORD);
