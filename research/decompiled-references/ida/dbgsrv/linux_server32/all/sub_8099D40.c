/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8099D40
// Address: 0x08099D40

//----- (08099D40) --------------------------------------------------------
int __cdecl sub_8099D40(int a1, char a2, char a3)
{
  int v3; // esi
  char v4; // al
  _BYTE *v5; // ecx
  char *v6; // edx
  char v7; // al
  int v8; // eax
  unsigned int v9; // edx
  char *v10; // eax
  size_t v11; // ecx
  unsigned int v12; // edx
  unsigned int v13; // ecx
  char *v14; // eax
  unsigned int v15; // eax
  int v16; // edx
  size_t v18; // edx
  char *v19; // eax
  int v20; // edi
  const char *v21; // edx
  char *v22; // eax
  size_t v23; // edi
  int v24; // edi
  const char *v25; // ecx
  size_t v26; // edi
  const char *v27; // ecx
  const char *v28; // eax
  char *v29; // ecx
  FILE *v30; // edi
  int v31; // eax
  char *v32; // ecx
  unsigned int v33; // edx
  char *v34; // eax
  size_t v35; // [esp-108Ch] [ebp-108Ch]
  size_t v36; // [esp-1088h] [ebp-1088h]
  char *v37; // [esp-1080h] [ebp-1080h]
  char v38; // [esp-107Ch] [ebp-107Ch]
  unsigned int v39; // [esp-107Ch] [ebp-107Ch]
  const char *v40; // [esp-107Ch] [ebp-107Ch]
  unsigned int v41; // [esp-1078h] [ebp-1078h]
  unsigned int v42; // [esp-1078h] [ebp-1078h]
  unsigned int v43; // [esp-1078h] [ebp-1078h]
  int v44; // [esp-1078h] [ebp-1078h]
  int v45; // [esp-1070h] [ebp-1070h]
  unsigned int v46; // [esp-1070h] [ebp-1070h]
  char v47; // [esp-1070h] [ebp-1070h]
  unsigned int v48; // [esp-1070h] [ebp-1070h]
  int v49; // [esp-1070h] [ebp-1070h]
  char *v50; // [esp-106Ch] [ebp-106Ch] BYREF
  unsigned int v51; // [esp-1068h] [ebp-1068h]
  unsigned int v52; // [esp-1064h] [ebp-1064h]
  void *v53; // [esp-105Ch] [ebp-105Ch] BYREF
  size_t v54; // [esp-1058h] [ebp-1058h]
  int v55; // [esp-1054h] [ebp-1054h]
  void *v56; // [esp-104Ch] [ebp-104Ch] BYREF
  int v57; // [esp-1048h] [ebp-1048h]
  int v58; // [esp-1044h] [ebp-1044h]
  int v59; // [esp-1040h] [ebp-1040h]
  int v60; // [esp-103Ch] [ebp-103Ch]
  int v61; // [esp-1038h] [ebp-1038h]
  __int128 v62; // [esp-1034h] [ebp-1034h]
  char v63; // [esp-1020h] [ebp-1020h] BYREF
  unsigned int v64; // [esp-20h] [ebp-20h]

  v3 = a1;
  v64 = __readgsdword(0x14u);
  v4 = *(_BYTE *)(a1 + 368);
  if ( (unsigned __int8)(v4 - 9) > 4u && v4 != 32 )
  {
    v5 = (_BYTE *)(*(_DWORD *)(a1 + 4) - 1);
    *(_DWORD *)(a1 + 4) = v5;
    *v5 = v4;
  }
  v50 = nullptr;
  v6 = *(char **)(a1 + 4);
  v51 = 0;
  v52 = 0;
  v7 = *v6;
  if ( *v6 == 34 || v7 == 60 )
    goto LABEL_52;
  while ( 1 )
  {
    v56 = nullptr;
    v57 = 0;
    v58 = 0;
    v59 = 0;
    v60 = 0;
    v61 = 0;
    v62 = 0;
    v8 = sub_8097180(a1, (int)&v56, 0, nullptr);
    v45 = v8;
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( v8 )
        goto LABEL_8;
      v45 = sub_8098220(a1, (int)&v56);
    }
    if ( v45 )
    {
LABEL_8:
      if ( v56 )
      {
        v57 = 0;
        sub_80CF780(v56);
      }
      v6 = v50;
      goto LABEL_38;
    }
    if ( (_WORD)v59 == 1 )
      break;
    if ( (_WORD)v59 == 6 )
      goto LABEL_95;
    if ( (unsigned __int16)v59 > 6u )
    {
      v15 = (unsigned __int16)v59 - 46;
      if ( (unsigned __int16)v15 > 0x10u || (v16 = 86019, !_bittest(&v16, v15)) )
      {
LABEL_35:
        if ( v56 )
        {
          v57 = 0;
          sub_80CF780(v56);
        }
LABEL_37:
        v45 = 30;
        v6 = v50;
        goto LABEL_38;
      }
      v47 = v59;
      goto LABEL_25;
    }
    if ( (_WORD)v59 == 2 )
    {
LABEL_95:
      if ( !v57 )
        goto LABEL_30;
      v11 = v57 - 1;
      if ( v57 == 1 )
        goto LABEL_30;
      v38 = 0;
    }
    else
    {
      if ( (_WORD)v59 != 4 )
        goto LABEL_35;
      v9 = 2;
      v46 = v51;
      if ( v51 )
      {
        v9 = v51 + 1;
        v46 = v51 - 1;
      }
      v10 = v50;
      if ( v52 < v9 )
      {
        v42 = v9;
        v10 = (char *)sub_80CF920((int)&v50, v50, v9, 1u);
        v9 = v42;
        v50 = v10;
      }
      v51 = v9;
      v10[v46] = 34;
      v50[v46 + 1] = 0;
      if ( !v57 || (v11 = v57 - 1, v57 == 1) )
      {
LABEL_24:
        v47 = 34;
LABEL_25:
        v12 = v51;
        v13 = 2;
        if ( v51 )
        {
          v13 = v51 + 1;
          v12 = v51 - 1;
        }
        v14 = v50;
        if ( v52 < v13 )
        {
          v39 = v12;
          v43 = v13;
          v14 = (char *)sub_80CF920((int)&v50, v50, v13, 1u);
          v12 = v39;
          v50 = v14;
          v13 = v43;
        }
        v51 = v13;
        v14[v12] = v47;
        v50[v12 + 1] = 0;
        goto LABEL_30;
      }
      v38 = 34;
    }
    v18 = v11;
    v48 = v51;
    if ( v51 )
    {
      v48 = v51 - 1;
      v18 = v11 + v51 - 1;
    }
    v41 = v18 + 1;
    v19 = v50;
    if ( v52 < v18 + 1 )
    {
      v35 = v18;
      v36 = v11;
      v19 = (char *)sub_80CF920((int)&v50, v50, v18 + 1, 1u);
      v18 = v35;
      v50 = v19;
      v11 = v36;
    }
    v51 = v41;
    v19[v18] = 0;
    memcpy(&v50[v48], v56, v11);
    if ( v38 )
      goto LABEL_24;
LABEL_30:
    if ( v56 )
    {
      v57 = 0;
      sub_80CF780(v56);
    }
  }
  if ( v56 )
  {
    v57 = 0;
    sub_80CF780(v56);
  }
  v6 = v50;
  *(_DWORD *)(a1 + 4) = v50;
  if ( !v6 )
  {
    v45 = 30;
    goto LABEL_40;
  }
  v7 = *v6;
  if ( *v6 != 60 && v7 != 34 )
  {
    v45 = 30;
    goto LABEL_39;
  }
LABEL_52:
  v20 = 62;
  if ( v7 != 60 )
    v20 = 34;
  v21 = v6 + 1;
  *(_DWORD *)(a1 + 4) = v21;
  v22 = strchr(v21, v20);
  if ( !v22 )
    goto LABEL_37;
  *v22 = 0;
  if ( *(_DWORD *)(a1 + 140) > 0x7Fu )
  {
    v45 = 31;
    v6 = v50;
    goto LABEL_38;
  }
  v37 = sub_80935E0(a1, &v63, 4096, *(char **)(a1 + 4), v20, a3);
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  if ( v37 )
  {
    v23 = strlen(v37);
    v53 = sub_80CF920((int)&v53, nullptr, v23 + 1, 1u);
    v54 = v23 + 1;
    memmove(v53, v37, v23);
    *((_BYTE *)v53 + v23) = 0;
    v24 = *(_DWORD *)(a1 + 124);
    v25 = (const char *)v53;
    v49 = v24;
    v44 = v24 + 12 * *(_DWORD *)(a1 + 128);
    if ( v24 == v44 )
    {
      if ( v53 )
      {
        v54 = 0;
        sub_80CF780(v53);
      }
      goto LABEL_83;
    }
  }
  else
  {
    v25 = nullptr;
    v49 = *(_DWORD *)(a1 + 124);
    v44 = v49 + 12 * *(_DWORD *)(a1 + 128);
    if ( v44 == v49 )
      goto LABEL_76;
  }
  v40 = v25;
  v26 = v54;
  while ( 2 )
  {
    if ( *(_DWORD *)(v49 + 4) )
    {
      v27 = *(const char **)v49;
      v28 = (const char *)&dword_80DDFD8;
      if ( v26 )
        goto LABEL_66;
      goto LABEL_61;
    }
    if ( v26 )
    {
      v27 = (const char *)&dword_80DDFD8;
LABEL_66:
      v28 = v40;
LABEL_61:
      if ( !strcmp(v28, v27) )
        break;
      v49 += 12;
      if ( v44 == v49 )
      {
        v29 = (char *)v40;
        v3 = a1;
        if ( !v40 )
          goto LABEL_82;
        goto LABEL_80;
      }
      continue;
    }
    break;
  }
  v29 = (char *)v40;
  v3 = a1;
  if ( !v40 )
    goto LABEL_81;
LABEL_80:
  v54 = 0;
  sub_80CF780(v29);
LABEL_81:
  if ( v44 != v49 )
    goto LABEL_78;
LABEL_82:
  if ( v37 )
  {
LABEL_83:
    v30 = sub_80CDB00((int)v37);
    if ( v30 )
    {
      v31 = *(_DWORD *)(v3 + 140);
      v32 = *(char **)(v3 + 136);
      v33 = v31 + 1;
      if ( *(_DWORD *)(v3 + 144) < (unsigned int)(v31 + 1) )
      {
        v32 = (char *)sub_80CF920(v3 + 136, v32, v33, 0x18u);
        *(_DWORD *)(v3 + 136) = v32;
        v31 = *(_DWORD *)(v3 + 140);
        v33 = v31 + 1;
      }
      *(_DWORD *)(v3 + 140) = v33;
      v34 = &v32[24 * v31];
      *((_DWORD *)v34 + 1) = *(_DWORD *)(v3 + 148);
      *((_DWORD *)v34 + 4) = *(_DWORD *)(v3 + 156);
      *(_DWORD *)v34 = *(_DWORD *)(v3 + 152);
      v34[20] = *(_BYTE *)(v3 + 76);
      *((_DWORD *)v34 + 2) = *(_DWORD *)(v3 + 112);
      *((_DWORD *)v34 + 3) = *(_DWORD *)(v3 + 116);
      *(_DWORD *)(v3 + 148) = v30;
      *(_DWORD *)(v3 + 152) = sub_80CF830(v37);
      v6 = v50;
      *(_DWORD *)(v3 + 156) = 0;
      *(_DWORD *)(v3 + 112) = (char *)&qword_811CFF4 - 568660;
      *(_DWORD *)(v3 + 116) = v3;
      *(_BYTE *)(v3 + 76) = 0;
      v45 = 0;
      goto LABEL_38;
    }
  }
LABEL_76:
  if ( a2 )
  {
LABEL_78:
    sub_80C7880(0);
    v6 = v50;
    v45 = 0;
  }
  else
  {
    sub_80C7910(0, *(char **)(v3 + 4));
    v6 = v50;
    v45 = 32;
  }
LABEL_38:
  if ( v6 )
  {
LABEL_39:
    v51 = 0;
    sub_80CF780(v6);
  }
LABEL_40:
  if ( v64 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v45;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
