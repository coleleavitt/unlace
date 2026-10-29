/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_50DFC
// Address: 0x00050DFC

//----- (00050DFC) --------------------------------------------------------
int __fastcall sub_50DFC(int a1, int a2, unsigned __int8 a3)
{
  int v4; // r1
  char *v5; // r3
  bool v6; // zf
  unsigned __int8 v7; // r1
  int v8; // r5
  bool v9; // zf
  const char *v10; // r0
  char *v11; // r0
  int v12; // r9
  int v14; // r11
  unsigned int v15; // r10
  unsigned int v16; // r9
  void *v17; // r1
  unsigned int v18; // r10
  unsigned int v19; // r9
  void *v20; // r1
  size_t v21; // r9
  unsigned int v22; // r3
  char *v23; // r1
  char *v24; // r0
  char *v25; // r11
  size_t v26; // r4
  int v27; // r11
  int v28; // r4
  char *v29; // r7
  size_t v30; // r5
  const char *v31; // r5
  const char *v32; // r1
  bool v33; // zf
  FILE *v34; // r4
  int v35; // r3
  char *v36; // r1
  unsigned int v37; // r2
  int v38; // r5
  char *v39; // r7
  char *v40; // r0
  size_t v41; // [sp+14h] [bp-1060h]
  char *v42; // [sp+14h] [bp-1060h]
  unsigned int v45; // [sp+24h] [bp-1050h]
  char *v46; // [sp+28h] [bp-104Ch] BYREF
  unsigned int v47; // [sp+2Ch] [bp-1048h]
  unsigned int v48; // [sp+30h] [bp-1044h]
  void *v49; // [sp+34h] [bp-1040h] BYREF
  size_t v50; // [sp+38h] [bp-103Ch]
  int v51; // [sp+3Ch] [bp-1038h]
  unsigned __int8 *v52; // [sp+40h] [bp-1034h] BYREF
  int v53; // [sp+44h] [bp-1030h]
  int v54; // [sp+48h] [bp-102Ch]
  __int16 v55; // [sp+4Ch] [bp-1028h]
  int v56; // [sp+50h] [bp-1024h]
  char v57; // [sp+54h] [bp-1020h]
  int v58; // [sp+58h] [bp-101Ch]
  int v59; // [sp+5Ch] [bp-1018h]
  int v60; // [sp+60h] [bp-1014h]
  int v61; // [sp+64h] [bp-1010h]
  unsigned __int8 v62[4084]; // [sp+6Ch] [bp-1008h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 608);
  v5 = *(char **)(a1 + 4);
  v6 = v4 == 32;
  if ( v4 != 32 )
    v6 = v4 == 9;
  if ( !v6 && !sub_4B030(v4) )
  {
    *(_DWORD *)(a1 + 4) = v5 - 1;
    *(v5 - 1) = v7;
    v5 = *(char **)(a1 + 4);
  }
  v46 = nullptr;
  v47 = 0;
  v48 = 0;
  v8 = (unsigned __int8)*v5;
  v9 = v8 == 34;
  if ( v8 != 34 )
    v9 = v8 == 60;
  if ( !v9 )
  {
    while ( 1 )
    {
      v52 = nullptr;
      v53 = 0;
      v54 = 0;
      v55 = 0;
      v56 = 0;
      v57 = 0;
      v58 = 0;
      v59 = 0;
      v60 = 0;
      v61 = 0;
      v12 = sub_50118(a1, &v52, nullptr);
      if ( v12 )
      {
        if ( v52 )
        {
          v53 = 0;
          sub_77E08(v52);
        }
        v5 = v46;
        goto LABEL_15;
      }
      if ( v55 == 1 )
        break;
      switch ( v55 )
      {
        case 2:
        case 6:
          if ( !v53 )
            goto LABEL_25;
          v21 = v53 - 1;
          if ( v53 == 1 )
            goto LABEL_25;
          v14 = 0;
          v22 = v47;
          if ( v47 )
            goto LABEL_38;
          goto LABEL_32;
        case 4:
          v18 = v47 - 1;
          v19 = v47 + 1;
          if ( v47 )
          {
            v20 = v46;
            if ( v48 >= v19 )
              goto LABEL_29;
          }
          else
          {
            v18 = 0;
            v19 = 2;
            v20 = v46;
            if ( v48 >= 2 )
              goto LABEL_29;
          }
          v20 = sub_77EB0((int)&v46, v20, v19, 1u);
          v46 = (char *)v20;
LABEL_29:
          v47 = v19;
          *((_BYTE *)v20 + v18) = 34;
          v14 = 34;
          v46[v18 + 1] = 0;
          if ( v53 )
          {
            v21 = v53 - 1;
            if ( v53 != 1 )
            {
              v22 = v47;
              if ( v47 )
              {
LABEL_38:
                v45 = v22 - 1;
                v41 = v22 - 1 + v21;
              }
              else
              {
LABEL_32:
                v45 = v22;
                v41 = v21;
              }
              v23 = v46;
              if ( v41 + 1 > v48 )
              {
                v23 = (char *)sub_77EB0((int)&v46, v46, v41 + 1, 1u);
                v46 = v23;
              }
              v47 = v41 + 1;
              v23[v41] = 0;
              memcpy(&v46[v45], v52, v21);
              if ( !v14 )
                goto LABEL_25;
            }
          }
LABEL_22:
          v15 = v47 - 1;
          v16 = v47 + 1;
          if ( v47 )
          {
            v17 = v46;
            if ( v48 >= v16 )
              goto LABEL_24;
          }
          else
          {
            v15 = 0;
            v16 = 2;
            v17 = v46;
            if ( v48 >= 2 )
              goto LABEL_24;
          }
          v17 = sub_77EB0((int)&v46, v17, v16, 1u);
          v46 = (char *)v17;
LABEL_24:
          v47 = v16;
          *((_BYTE *)v17 + v15) = v14;
          v46[v15 + 1] = 0;
LABEL_25:
          if ( v52 )
          {
            v53 = 0;
            sub_77E08(v52);
          }
          break;
        case 46:
        case 47:
        case 58:
        case 60:
        case 62:
          LOBYTE(v14) = v55;
          goto LABEL_22;
        default:
          if ( v52 )
          {
            v53 = 0;
            sub_77E08(v52);
          }
          goto LABEL_49;
      }
    }
    if ( v52 )
    {
      v53 = 0;
      sub_77E08(v52);
    }
    v5 = v46;
    *(_DWORD *)(a1 + 4) = v46;
    if ( !v5 )
      return 30;
    v8 = (unsigned __int8)*v5;
    v33 = v8 == 34;
    if ( v8 != 34 )
      v33 = v8 == 60;
    if ( !v33 )
    {
      v12 = 30;
      goto LABEL_15;
    }
  }
  v10 = v5 + 1;
  if ( v8 == 60 )
    v8 = 62;
  *(_DWORD *)(a1 + 4) = v10;
  v11 = strchr(v10, v8);
  if ( !v11 )
  {
LABEL_49:
    v12 = 30;
    v5 = v46;
    goto LABEL_15;
  }
  *v11 = 0;
  if ( *(_DWORD *)(a1 + 140) > 0x7Fu )
  {
    v12 = 31;
    v5 = v46;
    goto LABEL_15;
  }
  v24 = sub_4C574(a1, v62, 4096, *(unsigned __int8 **)(a1 + 4), v8, a3);
  v49 = nullptr;
  v50 = 0;
  v25 = v24;
  v42 = v24;
  v51 = 0;
  if ( !v24 )
  {
    v27 = *(_DWORD *)(a1 + 124);
    v28 = v27 + 12 * *(_DWORD *)(a1 + 128);
    if ( v28 == v27 )
      goto LABEL_85;
    v30 = 0;
    v29 = nullptr;
LABEL_53:
    if ( v30 )
      v31 = v29;
    else
      v31 = (const char *)&dword_8DA5C;
    while ( 1 )
    {
      v32 = (const char *)&dword_8DA5C;
      if ( *(_DWORD *)(v27 + 4) )
        v32 = *(const char **)v27;
      if ( !strcmp(v31, v32) )
        break;
      v27 += 12;
      if ( v27 == v28 )
        goto LABEL_79;
    }
    if ( !v29 )
    {
LABEL_62:
      if ( v27 != v28 )
      {
LABEL_63:
        sub_70A2C(0);
        v12 = 0;
        v5 = v46;
        goto LABEL_15;
      }
      goto LABEL_80;
    }
LABEL_61:
    v50 = 0;
    sub_77E08(v29);
    goto LABEL_62;
  }
  v26 = strlen(v24);
  v49 = sub_77EB0((int)&v49, nullptr, v26 + 1, 1u);
  v50 = v26 + 1;
  memmove(v49, v25, v26);
  *((_BYTE *)v49 + v26) = 0;
  v27 = *(_DWORD *)(a1 + 124);
  v28 = v27 + 12 * *(_DWORD *)(a1 + 128);
  if ( v27 != v28 )
  {
    v29 = (char *)v49;
    v30 = v50;
    goto LABEL_53;
  }
  v29 = (char *)v49;
LABEL_79:
  v28 = v27;
  if ( v29 )
    goto LABEL_61;
LABEL_80:
  if ( v42 )
  {
    v34 = sub_75CB0((int)v42);
    if ( v34 )
    {
      v35 = *(_DWORD *)(a1 + 140);
      v36 = *(char **)(a1 + 136);
      v37 = v35 + 1;
      if ( (unsigned int)(v35 + 1) > *(_DWORD *)(a1 + 144) )
      {
        v40 = (char *)sub_77EB0(a1 + 136, v36, v37, 0x18u);
        v35 = *(_DWORD *)(a1 + 140);
        v36 = v40;
        *(_DWORD *)(a1 + 136) = v40;
        v37 = v35 + 1;
      }
      v38 = *(_DWORD *)(a1 + 148);
      *(_DWORD *)(a1 + 140) = v37;
      v39 = &v36[24 * v35];
      *((_DWORD *)v39 + 1) = v38;
      *((_DWORD *)v39 + 4) = *(_DWORD *)(a1 + 156);
      *(_DWORD *)v39 = *(_DWORD *)(a1 + 152);
      v39[20] = *(_BYTE *)(a1 + 76);
      *((_DWORD *)v39 + 2) = *(_DWORD *)(a1 + 112);
      *((_DWORD *)v39 + 3) = *(_DWORD *)(a1 + 116);
      *(_DWORD *)(a1 + 148) = v34;
      v12 = 0;
      *(_DWORD *)(a1 + 152) = sub_77E44(v42);
      *(_DWORD *)(a1 + 116) = a1;
      v5 = v46;
      *(_DWORD *)(a1 + 112) = sub_4B534;
      *(_DWORD *)(a1 + 156) = 0;
      *(_BYTE *)(a1 + 76) = 0;
      goto LABEL_15;
    }
  }
LABEL_85:
  if ( a2 )
    goto LABEL_63;
  sub_70A98(0, *(const char **)(a1 + 4));
  v12 = 32;
  v5 = v46;
LABEL_15:
  if ( v5 )
  {
    v47 = 0;
    sub_77E08(v5);
  }
  return v12;
}
// 5103A: variable 'v5' is possibly undefined
// 51040: variable 'v7' is possibly undefined
// 8DA5C: using guessed type int dword_8DA5C;
