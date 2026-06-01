/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_19BA4
// Address: 0x00019BA4

//----- (00019BA4) --------------------------------------------------------
int *__fastcall sub_19BA4(int *a1, _DWORD *a2, int a3)
{
  char *v3; // r6
  char *v4; // r3
  int v5; // r4
  char *v6; // r1
  _DWORD *v7; // r2
  char *v8; // r8
  int v9; // r7
  int v10; // r0
  int v11; // r3
  int v12; // r11
  void *v13; // lr
  int v14; // r2
  int v15; // r1
  int v16; // r3
  int v17; // r9
  signed int v18; // r2
  int v19; // r11
  int v20; // r7
  char *v21; // r3
  int v22; // r8
  _DWORD *v23; // r3
  int v24; // r0
  int v25; // r5
  int v26; // r7
  unsigned int v27; // r3
  int v28; // r2
  unsigned int v29; // r3
  int v30; // r6
  int v31; // r2
  int v32; // r8
  int i; // r7
  int v34; // r2
  int v35; // r7
  int v36; // r5
  int v37; // r9
  int v38; // r11
  int v39; // r1
  int v40; // r3
  unsigned int v41; // r4
  int v42; // r3
  unsigned int v43; // r6
  int v44; // r0
  int v45; // r5
  int *v46; // r1
  int v47; // r3
  unsigned int v48; // r2
  int v49; // r3
  int v51; // r3
  int v52; // r3
  char *v53; // [sp+0h] [bp-34h]
  char *v54; // [sp+4h] [bp-30h]
  int v55; // [sp+8h] [bp-2Ch]
  _DWORD *v56; // [sp+Ch] [bp-28h]
  int v58; // [sp+14h] [bp-20h]
  int v59; // [sp+14h] [bp-20h]
  int v60; // [sp+18h] [bp-1Ch]
  int v61; // [sp+18h] [bp-1Ch]
  int v62; // [sp+1Ch] [bp-18h]
  int v63; // [sp+1Ch] [bp-18h]
  int v64; // [sp+20h] [bp-14h]
  signed int v65; // [sp+24h] [bp-10h]

  v3 = *(char **)a3;
  v4 = *(char **)(a3 + 8);
  v5 = (int)(v3 + 44);
  v6 = *(char **)(a3 + 4);
  v7 = *(_DWORD **)(a3 + 12);
  v58 = (int)v4;
  v53 = v6;
  v54 = (char *)v7;
  if ( v3 + 44 == v4 )
  {
    v5 = v7[1];
    v56 = v7 + 1;
    v55 = v5;
    v60 = v5 + 484;
  }
  else
  {
    v56 = v7;
    v60 = (int)v4;
    v55 = (int)v6;
  }
  v8 = (char *)a2[2];
  v9 = v3 - v6;
  v10 = a2[4];
  v11 = a2[5];
  v13 = (void *)a2[7];
  v12 = a2[6];
  v62 = a2[9];
  v14 = ((int)v7 - v11) >> 2;
  v15 = -1171354717 * ((v10 - (int)v8) >> 2);
  v16 = ((v62 - v11) >> 2) - 1;
  v17 = 3 * v16;
  v18 = 11 * (v14 - 1) + v15 - 1171354717 * ((v3 - v53) >> 2);
  v65 = v18;
  if ( v18 < (unsigned int)(11 * v16 + v15 - 1171354717 * ((v12 - (int)v13) >> 2)) >> 1 )
  {
    if ( v8 == v3 )
      goto LABEL_34;
    if ( v18 <= 0 )
    {
      v3 = (char *)a2[2];
LABEL_34:
      if ( v3 == (char *)(v10 - 44) )
      {
        sub_18A24((int)a2);
        v30 = a2[2];
      }
      else
      {
        sub_6E318(v3);
        v30 = a2[2] + 44;
        a2[2] = v30;
      }
      goto LABEL_60;
    }
    v19 = v18;
    while ( 1 )
    {
      v20 = v9 >> 2;
      v59 = -1171354717 * v20;
      v61 = -1171354717 * ((v5 - v55) >> 2);
      v21 = v53;
      if ( v3 == v53 )
      {
        v21 = v54;
        v22 = 11;
      }
      else
      {
        v22 = -1171354717 * v20;
        v20 = (int)v3;
      }
      if ( v3 == v53 )
        v20 = *((_DWORD *)v21 - 1) + 484;
      v23 = (_DWORD *)v55;
      if ( v5 == v55 )
      {
        v23 = v56;
        v24 = 11;
      }
      else
      {
        v24 = -1171354717 * ((v5 - v55) >> 2);
        v17 = v5;
      }
      if ( v5 == v55 )
        v17 = *(v23 - 1) + 484;
      if ( v22 >= v19 )
        v22 = v19;
      if ( v22 >= v24 )
        v22 = v24;
      v25 = -1171354717 * ((44 * v22) >> 2);
      if ( 44 * v22 > 0 )
      {
        do
        {
          v20 -= 44;
          v17 -= 44;
          sub_6E4A8(v17, v20);
          --v25;
        }
        while ( v25 );
      }
      v26 = v59 - v22;
      if ( v59 - v22 < 0 )
        break;
      if ( v26 > 10 )
      {
        v27 = v26 / 11;
        goto LABEL_27;
      }
      v3 -= 44 * v22;
      v28 = v61 - v22;
      if ( v61 - v22 < 0 )
      {
LABEL_67:
        v29 = ~(~v28 / 0xBu);
        goto LABEL_30;
      }
LABEL_28:
      if ( v28 > 10 )
      {
        v29 = v28 / 11;
LABEL_30:
        v56 += v29;
        v55 = *v56;
        v5 = *v56 + 44 * (v28 - 11 * v29);
        goto LABEL_31;
      }
      v5 -= 44 * v22;
LABEL_31:
      v19 -= v22;
      if ( v19 <= 0 )
      {
        v3 = (char *)a2[2];
        v10 = a2[4];
        goto LABEL_34;
      }
      v9 = v3 - v53;
    }
    v27 = ~(~v26 / 0xBu);
LABEL_27:
    v54 += 4 * v27;
    v53 = *(char **)v54;
    v3 = (char *)(*(_DWORD *)v54 + 44 * (v26 - 11 * v27));
    v28 = v61 - v22;
    if ( v61 - v22 < 0 )
      goto LABEL_67;
    goto LABEL_28;
  }
  if ( v12 == v5 )
    goto LABEL_57;
  v31 = 11 * (((v62 - (int)v56) >> 2) - 1) + -1171354717 * ((v12 - (int)v13) >> 2) - 1171354717 * ((v60 - v5) >> 2);
  if ( v31 <= 0 )
  {
    v5 = a2[6];
    goto LABEL_57;
  }
  v63 = v3 - v53;
  v32 = v31;
  for ( i = v60 - v5; ; i = v60 - v5 )
  {
    v34 = -1171354717 * (i >> 2);
    v35 = -1171354717 * ((v58 - (int)v3) >> 2);
    if ( v35 >= v34 )
      v35 = v34;
    if ( v35 >= v32 )
      v35 = v32;
    v64 = 44 * v35;
    v36 = -1171354717 * ((44 * v35) >> 2);
    if ( 44 * v35 > 0 )
    {
      v37 = v5;
      v38 = (int)v3;
      do
      {
        v39 = v37;
        v37 += 44;
        sub_6E4A8(v38, v39);
        --v36;
        v38 += 44;
      }
      while ( v36 );
    }
    v40 = v35 - 1171354717 * ((v5 - v55) >> 2);
    if ( v40 < 0 )
    {
      v41 = ~(~v40 / 0xBu);
LABEL_50:
      v56 += v41;
      v55 = *v56;
      v60 = *v56 + 484;
      v5 = *v56 + 44 * (v40 - 11 * v41);
      v42 = v35 - 1171354717 * (v63 >> 2);
      if ( v42 < 0 )
        goto LABEL_70;
      goto LABEL_51;
    }
    if ( v40 > 10 )
    {
      v41 = v40 / 11;
      goto LABEL_50;
    }
    v5 += v64;
    v42 = v35 - 1171354717 * (v63 >> 2);
    if ( v42 < 0 )
    {
LABEL_70:
      v43 = ~(~v42 / 0xBu);
      goto LABEL_53;
    }
LABEL_51:
    if ( v42 > 10 )
    {
      v43 = v42 / 11;
LABEL_53:
      v54 += 4 * v43;
      v53 = *(char **)v54;
      v58 = *(_DWORD *)v54 + 484;
      v3 = (char *)(*(_DWORD *)v54 + 44 * (v42 - 11 * v43));
      goto LABEL_54;
    }
    v3 += v64;
LABEL_54:
    v32 -= v35;
    if ( v32 <= 0 )
      break;
    v63 = v3 - v53;
  }
  v5 = a2[6];
  v13 = (void *)a2[7];
LABEL_57:
  if ( v13 == (void *)v5 )
  {
    sub_80648(v13);
    v51 = a2[9];
    a2[9] = v51 - 4;
    v52 = *(_DWORD *)(v51 - 4);
    a2[7] = v52;
    a2[8] = v52 + 484;
    a2[6] = v52 + 440;
    sub_6E318((_DWORD *)(v52 + 440));
  }
  else
  {
    a2[6] = v5 - 44;
    sub_6E318((_DWORD *)(v5 - 44));
  }
  v30 = a2[2];
LABEL_60:
  v44 = a2[3];
  v45 = a2[4];
  v46 = (int *)a2[5];
  v47 = v65 - 1171354717 * ((v30 - v44) >> 2);
  if ( v47 < 0 )
  {
    v48 = ~(~v47 / 0xBu);
LABEL_63:
    v46 += v48;
    v44 = *v46;
    v45 = *v46 + 484;
    v49 = *v46 + 44 * (v47 - 11 * v48);
  }
  else
  {
    if ( v47 > 10 )
    {
      v48 = v47 / 11;
      goto LABEL_63;
    }
    v49 = v30 + 44 * v65;
  }
  a1[1] = v44;
  *a1 = v49;
  a1[2] = v45;
  a1[3] = (int)v46;
  return a1;
}
