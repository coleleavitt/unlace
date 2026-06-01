/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4D570
// Address: 0x0004D570

//----- (0004D570) --------------------------------------------------------
int __fastcall sub_4D570(int a1, int a2)
{
  int v3; // r5
  const char *v5; // r5
  int v6; // r7
  unsigned __int8 *i; // r3
  int v8; // r0
  int v9; // t1
  bool v10; // zf
  unsigned __int8 *v11; // r2
  unsigned __int8 *v12; // r11
  int v13; // r6
  int v14; // r5
  unsigned __int8 *j; // r3
  int v16; // r0
  int v17; // t1
  bool v18; // zf
  _BYTE *v19; // r2
  _BYTE *v21; // r6
  const char *v22; // r7
  time_t v23; // r0
  _BYTE *v24; // r0
  int v25; // r3
  unsigned int v26; // r3
  bool v27; // zf
  unsigned __int8 *v28; // r3
  bool v29; // zf
  int v30; // r1
  bool v31; // zf
  int v32; // r1
  unsigned __int64 v33; // kr00_8
  int v34; // r11
  unsigned int v35; // r7
  int v36; // r3
  bool v37; // zf
  char *v38; // r0
  unsigned int v39; // r6
  unsigned __int8 *v40; // r3
  char *v41; // r0
  char *v42; // r3
  int v43; // r3
  const void *v44; // r4
  size_t v45; // r0
  size_t v46; // r5
  char *v47; // r1
  int v48; // r4
  int v49; // r6
  int v50; // r7
  unsigned int v51; // r4
  void *v52; // r1
  size_t v53; // r7
  unsigned __int8 v54; // [sp+10h] [bp-1024h]
  int v55; // [sp+14h] [bp-1020h]
  int v56; // [sp+18h] [bp-101Ch]
  char *v57; // [sp+20h] [bp-1014h] BYREF
  unsigned __int64 v58; // [sp+24h] [bp-1010h]
  unsigned __int8 v59[4]; // [sp+2Ch] [bp-1008h] BYREF
  char v60[7]; // [sp+30h] [bp-1004h] BYREF
  _BYTE v61[4073]; // [sp+37h] [bp-FFDh] BYREF

  v3 = *(_DWORD *)(a2 + 4);
  if ( v3 )
  {
    if ( **(_BYTE **)a2 != 95 )
      goto LABEL_3;
  }
  else if ( byte_D49E4 != 95 )
  {
    goto LABEL_3;
  }
  v21 = *(_BYTE **)a2;
  if ( *(_BYTE *)(*(_DWORD *)a2 + 1) == 95 )
  {
    v22 = *(const char **)a2;
    if ( !v3 )
      v22 = (const char *)&dword_8DB98;
    if ( !strcmp(v22, "__LINE__") )
    {
      v43 = *(_DWORD *)(a1 + 156);
      *(_WORD *)(a2 + 12) = 3;
      v13 = 1;
      *(_DWORD *)(a2 + 16) = v43;
      return v13;
    }
    if ( !strcmp(v22, "__FILE__") )
    {
      v44 = *(const void **)(a1 + 152);
      if ( v44 && (v45 = strlen((const char *)v44), (v46 = v45) != 0) )
      {
        v53 = v45 + 1;
        if ( v45 + 1 > *(_DWORD *)(a2 + 8) )
        {
          v21 = sub_78018(a2, v21, v45 + 1, 1u);
          *(_DWORD *)a2 = v21;
        }
        *(_DWORD *)(a2 + 4) = v53;
        memmove(v21, v44, v46);
        *(_BYTE *)(*(_DWORD *)a2 + v46) = 0;
      }
      else
      {
        *(_DWORD *)(a2 + 4) = 0;
      }
    }
    else
    {
      if ( strcmp(v22, "__DATE__") && strcmp(v22, "__TIME__") )
        goto LABEL_3;
      v23 = time(nullptr);
      sub_78F84(v59, 0x28u, v23);
      v24 = *(_BYTE **)a2;
      v25 = *(unsigned __int8 *)(*(_DWORD *)a2 + 2);
      *(_DWORD *)(a2 + 4) = 0;
      v10 = v25 == 68;
      v26 = *(_DWORD *)(a2 + 8);
      if ( v10 )
      {
        if ( v26 <= 7 )
        {
          v24 = sub_78018(a2, v24, 8u, 1u);
          *(_DWORD *)a2 = v24;
        }
        *(_DWORD *)(a2 + 4) = 8;
        v24[7] = 0;
        memmove(*(void **)a2, v60, 7u);
        v48 = *(_DWORD *)(a2 + 4);
        if ( v48 )
        {
          v49 = v48 - 1;
          v50 = v48 + 3;
          v51 = v48 + 4;
        }
        else
        {
          v49 = 0;
          v50 = 4;
          v51 = 5;
        }
        v52 = *(void **)a2;
        if ( v51 > *(_DWORD *)(a2 + 8) )
        {
          v52 = sub_78018(a2, v52, v51, 1u);
          *(_DWORD *)a2 = v52;
        }
        *(_DWORD *)(a2 + 4) = v51;
        *((_BYTE *)v52 + v50) = 0;
        *(_DWORD *)(*(_DWORD *)a2 + v49) = *(_DWORD *)&v61[9];
      }
      else
      {
        if ( v26 <= 8 )
        {
          v24 = sub_78018(a2, v24, 9u, 1u);
          *(_DWORD *)a2 = v24;
        }
        *(_DWORD *)(a2 + 4) = 9;
        v24[8] = 0;
        memmove(*(void **)a2, v61, 8u);
      }
    }
    *(_WORD *)(a2 + 12) = 4;
    v13 = 1;
    *(_BYTE *)(a2 + 20) = 0;
    return v13;
  }
LABEL_3:
  v55 = *(unsigned __int8 *)(a1 + 44);
  if ( !*(_BYTE *)(a1 + 44) )
    return 0;
  v5 = v3 ? *(const char **)a2 : (const char *)&dword_8DB98;
  v6 = strcmp(v5, "defined");
  if ( v6 )
  {
    if ( strcmp(v5, "__has_include") )
      return 0;
  }
  for ( i = *(unsigned __int8 **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = i )
  {
    v9 = *i++;
    v8 = v9;
    v10 = v9 == 9;
    if ( v9 != 9 )
      v10 = v8 == 32;
    if ( !v10 && !sub_4B1C0(v8) )
      break;
  }
  v12 = v11 + 1;
  v13 = 0;
  *(_DWORD *)(a1 + 4) = v11 + 1;
  v14 = *v11;
  if ( v14 == 40 )
  {
    v28 = v11 + 1;
    do
    {
      *(_DWORD *)(a1 + 4) = ++v28;
      v14 = *(v28 - 1);
      v29 = v14 == 9;
      if ( v14 != 9 )
        v29 = v14 == 32;
    }
    while ( v29 || sub_4B1C0(*(v28 - 1)) );
    v12 = v28;
    if ( v6 )
    {
      v56 = v55;
      goto LABEL_54;
    }
    sub_4B998(a1, a2);
    for ( j = *(unsigned __int8 **)(a1 + 4); ; *(_DWORD *)(a1 + 4) = j )
    {
      v17 = *j++;
      v16 = v17;
      v18 = v17 == 9;
      if ( v17 != 9 )
        v18 = v16 == 32;
      if ( !v18 && !sub_4B1C0(v16) )
        break;
    }
    *(_DWORD *)(a1 + 4) = v19 + 1;
    if ( *v19 == 41 )
    {
LABEL_93:
      if ( *(_DWORD *)(a2 + 4) )
        v47 = *(char **)a2;
      else
        v47 = (char *)&dword_8DB98;
      *(_DWORD *)(a2 + 16) = sub_4D4DC(a1, v47) != 0;
      goto LABEL_83;
    }
    return 0;
  }
  if ( (v14 & 0x80) != 0 || !isalpha(*v11) )
  {
    v27 = v14 == 36;
    if ( v14 != 36 )
      v27 = v14 == 95;
    if ( v27 )
    {
      if ( v6 )
      {
        v56 = 0;
        goto LABEL_54;
      }
      goto LABEL_92;
    }
    return 0;
  }
  if ( !v6 )
  {
LABEL_92:
    sub_4B998(a1, a2);
    goto LABEL_93;
  }
  v56 = 0;
LABEL_54:
  if ( v14 == 60 )
  {
    v14 = 62;
  }
  else if ( v14 != 34 )
  {
    return v13;
  }
  v57 = nullptr;
  v58 = 0;
  v30 = *v12;
  v31 = v30 == 0;
  if ( *v12 )
    v31 = v30 == 41;
  v32 = v31;
  if ( v31 )
  {
    if ( v56 )
      *(_DWORD *)(a1 + 4) = v12 + 1;
    return v13;
  }
  v33 = __PAIR64__(v32, v32);
  while ( 1 )
  {
    *(_DWORD *)(a1 + 4) = v12 + 1;
    v54 = *v12;
    if ( (_DWORD)v33 )
    {
      v34 = v33 - 1;
      v35 = v33 + 1;
      if ( HIDWORD(v33) >= (unsigned int)(v33 + 1) )
        goto LABEL_64;
    }
    else
    {
      v34 = 0;
      v35 = 2;
      if ( HIDWORD(v33) >= 2 )
        goto LABEL_64;
    }
    v32 = (int)sub_78018((int)&v57, (void *)v32, v35, 1u);
    v57 = (char *)v32;
LABEL_64:
    LODWORD(v58) = v35;
    *(_BYTE *)(v32 + v34) = v54;
    v57[v34 + 1] = 0;
    v12 = *(unsigned __int8 **)(a1 + 4);
    v36 = *v12;
    v37 = v36 == 41;
    if ( v36 != 41 )
      v37 = v36 == 0;
    if ( v37 )
      break;
    v33 = v58;
    v32 = (int)v57;
  }
  v38 = v57;
  if ( v56
    && (*(_DWORD *)(a1 + 4) = v12 + 1, *v12 == 41)
    && (unsigned int)v58 > 1
    && (unsigned __int8)v38[(_DWORD)v58 - 2] == v14 )
  {
    v39 = v58 - 1;
    if ( (int)v58 - 1 <= 1 )
    {
      if ( v38 )
      {
        LODWORD(v58) = 0;
        sub_77F70(v38);
        HIDWORD(v58) = 0;
        v57 = nullptr;
      }
    }
    else
    {
      if ( v39 > HIDWORD(v58) )
      {
        v38 = (char *)sub_78018((int)&v57, v38, v39, 1u);
        v57 = v38;
      }
      LODWORD(v58) = v39;
      v38[v39 - 1] = 0;
    }
    if ( (_DWORD)v58 )
      v40 = (unsigned __int8 *)v57;
    else
      v40 = (unsigned __int8 *)&dword_8DB98;
    v41 = sub_4C6F4(a1, v59, 4096, v40, v14, 0);
    v42 = v57;
    *(_DWORD *)(a2 + 16) = v41 != nullptr;
    if ( v42 )
    {
      LODWORD(v58) = 0;
      sub_77F70(v42);
    }
LABEL_83:
    v13 = v55;
    *(_WORD *)(a2 + 12) = 3;
  }
  else if ( v38 )
  {
    LODWORD(v58) = 0;
    sub_77F70(v38);
  }
  return v13;
}
// 4D5DE: variable 'i' is possibly undefined
// 4D5F6: variable 'v11' is possibly undefined
// 4D630: variable 'j' is possibly undefined
// 4D648: variable 'v19' is possibly undefined
// 4D748: variable 'v28' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
// D49E4: using guessed type char byte_D49E4;
