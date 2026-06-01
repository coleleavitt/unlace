/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_D5F40
// Address: 0x000D5F40

//----- (000D5F40) --------------------------------------------------------
char *__fastcall sub_D5F40(char **a1)
{
  char *v1; // eax
  char *v2; // esi
  int v3; // edx
  char *v4; // esi
  int v5; // edi
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  char *v8; // edi
  char *result; // eax
  char *v10; // ecx
  char *v11; // esi
  int v12; // ecx
  _DWORD *v13; // eax
  _DWORD *v14; // edx
  char *v15; // eax
  char *v16; // ecx
  char **v17; // esi
  char *v18; // eax
  char **v19; // ecx
  char *v20; // eax
  char *v21; // edx
  char v22; // dl
  char **v23; // edi
  char *v24; // eax
  char *v25; // edx
  char *v26; // esi
  char *v27; // ecx
  int v28; // esi
  int v29; // edi
  char *v30; // esi
  char *v31; // eax
  int v32; // ebx
  char *v33; // edi
  char *v34; // esi
  int v35; // edx
  char *v36; // eax
  char **v37; // edi
  char *v38; // eax
  char *v39; // edx
  char *v40; // esi
  char **v41; // ecx
  int v42; // esi
  int v43; // edi
  char *v44; // esi
  char *v45; // eax
  char *v46; // edi
  char *v47; // esi
  char v48; // dl
  unsigned int v49; // esi
  char *v50; // edi
  int v51; // ecx
  _DWORD *v52; // eax
  char *v53; // eax
  _DWORD *v54; // edx
  _DWORD *v55; // eax
  char *v56; // ecx
  char **v57; // edx
  int v58; // edi
  char *v59; // esi
  int v60; // ecx
  char **v61; // edi
  _DWORD *v62; // eax
  _DWORD *v63; // edx
  unsigned int v64; // edi
  char *v65; // esi
  int v66; // ecx
  _DWORD *v67; // eax
  char *v68; // eax
  _DWORD *v69; // edx
  _DWORD *v70; // eax
  char *v71; // ecx
  char **v72; // edx
  int v73; // edi
  char **v74; // edi
  _DWORD *v75; // eax
  _DWORD *v76; // edx
  size_t v77; // [esp+4h] [ebp-48h]
  size_t v78; // [esp+4h] [ebp-48h]
  size_t v79; // [esp+8h] [ebp-44h]
  size_t v80; // [esp+8h] [ebp-44h]
  char **v81; // [esp+14h] [ebp-38h]
  int v82; // [esp+1Ch] [ebp-30h]
  int v83; // [esp+1Ch] [ebp-30h]
  signed int v84; // [esp+1Ch] [ebp-30h]
  signed int v85; // [esp+1Ch] [ebp-30h]
  char *v86; // [esp+20h] [ebp-2Ch]
  char *v87; // [esp+20h] [ebp-2Ch]
  char *v88; // [esp+20h] [ebp-2Ch]
  int v89; // [esp+24h] [ebp-28h]
  char **v90; // [esp+24h] [ebp-28h]
  char *v91; // [esp+24h] [ebp-28h]
  char *v92; // [esp+24h] [ebp-28h]
  char *v93; // [esp+28h] [ebp-24h]
  char v94; // [esp+28h] [ebp-24h]
  int v95; // [esp+28h] [ebp-24h]
  char *v96; // [esp+2Ch] [ebp-20h]
  int v97; // [esp+2Ch] [ebp-20h]
  int v98; // [esp+2Ch] [ebp-20h]
  int v99; // [esp+30h] [ebp-1Ch]
  int v100; // [esp+34h] [ebp-18h]
  int v101; // [esp+34h] [ebp-18h]
  char *v102; // [esp+38h] [ebp-14h]

  v1 = *a1;
  v81 = a1;
  v2 = a1[1];
  v3 = 0;
  if ( *a1 != v2 && *v1 == 114 )
  {
    *a1 = ++v1;
    v3 = 4;
  }
  if ( v1 == v2 )
    goto LABEL_11;
  if ( *v1 == 86 )
  {
    *a1 = ++v1;
    v3 |= 2u;
  }
  if ( v1 == v2 )
  {
LABEL_11:
    v99 = v3;
    v1 = v2;
  }
  else
  {
    if ( *v1 == 75 )
    {
      *a1 = ++v1;
      v3 |= 1u;
    }
    v99 = v3;
  }
  if ( (unsigned int)(v2 - v1) < 2 )
  {
    v86 = nullptr;
LABEL_27:
    a1 = v81;
    goto LABEL_28;
  }
  v86 = nullptr;
  if ( *v1 != 68 )
    goto LABEL_27;
  if ( v1[1] == 111 )
  {
    *a1 = v1 + 2;
    v4 = a1[1116];
    v5 = *((_DWORD *)v4 + 1);
    if ( (unsigned int)(v5 + 16) <= 0xFF7 )
    {
      v7 = v4 + 4;
    }
    else
    {
      v6 = operator new[](0x1000u);
      *v6 = v4;
      v6[1] = 0;
      v81[1116] = (char *)v6;
      v5 = 0;
      v7 = v6 + 1;
      v4 = (char *)v6;
    }
    *v7 = v5 + 16;
    v86 = &v4[v5 + 8];
    *(_DWORD *)&v4[v5 + 12] = 16843015;
    *(_DWORD *)v86 = off_139CEC;
    *(_DWORD *)&v4[v5 + 16] = "noexcept";
    *(_DWORD *)&v4[v5 + 20] = "";
    goto LABEL_27;
  }
  if ( *v1 == 68 )
  {
    if ( v1[1] == 79 )
    {
      *a1 = v1 + 2;
      v8 = sub_C8090((int)a1);
      result = nullptr;
      if ( !v8 )
        return result;
      v10 = *v81;
      if ( *v81 == v81[1] || *v10 != 69 )
        return result;
      *v81 = v10 + 1;
      v11 = v81[1116];
      v12 = *((_DWORD *)v11 + 1);
      if ( (unsigned int)(v12 + 16) < 0xFF8 )
      {
        v14 = v11 + 4;
      }
      else
      {
        v13 = operator new[](0x1000u);
        *v13 = v11;
        v13[1] = 0;
        v81[1116] = (char *)v13;
        v12 = 0;
        v14 = v13 + 1;
        v11 = (char *)v13;
      }
      *v14 = v12 + 16;
      *(_DWORD *)&v11[v12 + 12] = 16843025;
      *(_DWORD *)&v11[v12 + 8] = off_13A824;
      *(_DWORD *)&v11[v12 + 16] = v8;
      goto LABEL_107;
    }
    if ( *v1 == 68 && v1[1] == 119 )
    {
      v36 = v1 + 2;
      *a1 = v36;
      v97 = (a1[3] - a1[2]) >> 2;
      if ( v36 == v2 )
        goto LABEL_68;
LABEL_65:
      if ( *v36 != 69 )
      {
LABEL_68:
        while ( 1 )
        {
          v37 = a1;
          v38 = sub_C2AF0(a1);
          if ( !v38 )
            return nullptr;
          v39 = v38;
          v40 = v37[3];
          a1 = v37;
          if ( v40 == v37[4] )
          {
            v41 = (char **)v37[2];
            v42 = v40 - (char *)v41;
            v43 = v42 >> 2;
            v83 = v42 >> 1;
            if ( v81 + 5 == v41 )
            {
              v90 = v41;
              v95 = v42 >> 2;
              v46 = v38;
              v45 = (char *)malloc(2 * v42);
              if ( v42 )
              {
                v80 = v42;
                v47 = v45;
                memmove(v45, v90, v80);
                a1 = v81;
                v39 = v46;
                v43 = v95;
                v45 = v47;
              }
              else
              {
                a1 = v81;
                v39 = v46;
                v43 = 0;
              }
            }
            else
            {
              v78 = 2 * v42;
              v44 = v38;
              v45 = (char *)realloc(v41, v78);
              v39 = v44;
              a1 = v81;
            }
            a1[2] = v45;
            v40 = &v45[4 * v43];
            a1[3] = v40;
            a1[4] = &v45[4 * v83];
          }
          a1[3] = v40 + 4;
          *(_DWORD *)v40 = v39;
          v36 = *a1;
          if ( *a1 != a1[1] )
            goto LABEL_65;
        }
      }
      *a1 = v36 + 1;
      v98 = 4 * v97;
      v87 = &a1[2][v98];
      v85 = a1[3] - v87;
      v64 = (v85 + 15) & 0xFFFFFFF0;
      v65 = a1[1116];
      v66 = *((_DWORD *)v65 + 1);
      if ( v64 + v66 < 0xFF8 )
      {
        v69 = v65 + 4;
      }
      else
      {
        if ( v64 >= 0xFF9 )
        {
          v67 = operator new[](v64 | 8);
          *v67 = *(_DWORD *)v65;
          v67[1] = 0;
          *(_DWORD *)v65 = v67;
          v68 = (char *)(v67 + 2);
LABEL_100:
          v71 = v87;
          v88 = v68;
          if ( v85 )
          {
            memmove(v68, v71, v85);
            v72 = v81;
            v71 = &v81[2][v98];
          }
          else
          {
            v72 = v81;
          }
          v73 = v85 >> 2;
          v72[3] = v71;
          v11 = v72[1116];
          v12 = *((_DWORD *)v11 + 1);
          if ( (unsigned int)(v12 + 16) < 0xFF8 )
          {
            v76 = v11 + 4;
          }
          else
          {
            v74 = v72;
            v75 = operator new[](0x1000u);
            *v75 = v11;
            v75[1] = 0;
            v74[1116] = (char *)v75;
            v73 = v85 >> 2;
            v12 = 0;
            v76 = v75 + 1;
            v11 = (char *)v75;
          }
          *v76 = v12 + 16;
          *(_DWORD *)&v11[v12 + 12] = 16843026;
          *(_DWORD *)&v11[v12 + 8] = off_13A85C;
          *(_DWORD *)&v11[v12 + 16] = v88;
          *(_DWORD *)&v11[v12 + 20] = v73;
LABEL_107:
          v86 = &v11[v12 + 8];
          goto LABEL_27;
        }
        v70 = operator new[](0x1000u);
        *v70 = v65;
        v70[1] = 0;
        v81[1116] = (char *)v70;
        v66 = 0;
        v69 = v70 + 1;
        v65 = (char *)v70;
      }
      *v69 = v66 + v64;
      v68 = &v65[v66 + 8];
      goto LABEL_100;
    }
  }
LABEL_28:
  v15 = *a1;
  v16 = a1[1];
  if ( (unsigned int)(v16 - v15) < 2 || *v15 != 68 || v15[1] != 120 )
  {
    v17 = v81;
    if ( v15 != v16 )
      goto LABEL_32;
    return nullptr;
  }
  v15 += 2;
  v17 = v81;
  *v81 = v15;
  if ( v15 == v16 )
    return nullptr;
LABEL_32:
  if ( *v15 != 70 )
    return nullptr;
  *v17 = v15 + 1;
  if ( v15 + 1 != v16 && v15[1] == 89 )
    *v17 = v15 + 2;
  v18 = sub_C2AF0(v17);
  if ( !v18 )
    return nullptr;
  v102 = v18;
  v100 = (v17[3] - v17[2]) >> 2;
  v93 = (char *)(v17 + 5);
  v19 = v17;
  while ( 1 )
  {
    while ( 1 )
    {
      v20 = *v19;
      v21 = v19[1];
      if ( *v19 == v21 )
        break;
      if ( *v20 == 69 )
      {
        v35 = 1;
        v94 = 0;
        goto LABEL_79;
      }
      if ( *v20 != 118 )
        break;
      *v19 = v20 + 1;
    }
    if ( (unsigned int)(v21 - v20) >= 2 )
    {
      v22 = *v20;
      if ( *v20 == 82 )
      {
        if ( v20[1] == 69 )
        {
          v48 = 1;
          goto LABEL_78;
        }
        v22 = *v20;
      }
      if ( v22 == 79 && v20[1] == 69 )
        break;
    }
    v23 = v19;
    v24 = sub_C2AF0(v19);
    if ( !v24 )
      return nullptr;
    v25 = v24;
    v26 = v23[3];
    v19 = v23;
    if ( v26 == v23[4] )
    {
      v27 = v23[2];
      v28 = v26 - v27;
      v29 = v28 >> 2;
      v82 = v28 >> 1;
      if ( v93 != v27 )
      {
        v77 = 2 * v28;
        v30 = v24;
        v31 = (char *)realloc(v27, v77);
        v25 = v30;
        v19 = v81;
        goto LABEL_53;
      }
      v96 = v27;
      v89 = v28 >> 2;
      v33 = v24;
      v31 = (char *)malloc(2 * v28);
      if ( v28 )
      {
        v79 = v28;
        v34 = v31;
        memmove(v31, v96, v79);
        v19 = v81;
        v25 = v33;
        v29 = v89;
        v32 = v82;
        v31 = v34;
      }
      else
      {
        v19 = v81;
        v25 = v33;
        v29 = 0;
LABEL_53:
        v32 = v82;
      }
      v19[2] = v31;
      v26 = &v31[4 * v29];
      v19[3] = v26;
      v19[4] = &v31[4 * v32];
    }
    v19[3] = v26 + 4;
    *(_DWORD *)v26 = v25;
  }
  v48 = 2;
LABEL_78:
  v94 = v48;
  v35 = 2;
LABEL_79:
  *v19 = &v20[v35];
  v101 = 4 * v100;
  v91 = &v19[2][v101];
  v84 = v19[3] - v91;
  v49 = (v84 + 15) & 0xFFFFFFF0;
  v50 = v19[1116];
  v51 = *((_DWORD *)v50 + 1);
  if ( v49 + v51 < 0xFF8 )
  {
    v54 = v50 + 4;
  }
  else
  {
    if ( v49 >= 0xFF9 )
    {
      v52 = operator new[](v49 | 8);
      *v52 = *(_DWORD *)v50;
      v52[1] = 0;
      *(_DWORD *)v50 = v52;
      v53 = (char *)(v52 + 2);
      goto LABEL_85;
    }
    v55 = operator new[](0x1000u);
    *v55 = v50;
    v55[1] = 0;
    v81[1116] = (char *)v55;
    v51 = 0;
    v54 = v55 + 1;
    v50 = (char *)v55;
  }
  *v54 = v51 + v49;
  v53 = &v50[v51 + 8];
LABEL_85:
  v56 = v91;
  v92 = v53;
  if ( v84 )
  {
    memmove(v53, v56, v84);
    v57 = v81;
    v56 = &v81[2][v101];
  }
  else
  {
    v57 = v81;
  }
  v58 = v84 >> 2;
  v57[3] = v56;
  v59 = v57[1116];
  v60 = *((_DWORD *)v59 + 1);
  if ( (unsigned int)(v60 + 32) < 0xFF8 )
  {
    v63 = v59 + 4;
  }
  else
  {
    v61 = v57;
    v62 = operator new[](0x1000u);
    *v62 = v59;
    v62[1] = 0;
    v61[1116] = (char *)v62;
    v58 = v84 >> 2;
    v60 = 0;
    v63 = v62 + 1;
    v59 = (char *)v62;
  }
  *v63 = v60 + 32;
  *(_DWORD *)&v59[v60 + 12] = &stru_10010;
  *(_DWORD *)&v59[v60 + 8] = off_13A894;
  *(_DWORD *)&v59[v60 + 16] = v102;
  *(_DWORD *)&v59[v60 + 20] = v92;
  *(_DWORD *)&v59[v60 + 24] = v58;
  *(_DWORD *)&v59[v60 + 28] = v99;
  v59[v60 + 32] = v94;
  *(_DWORD *)&v59[v60 + 36] = v86;
  return &v59[v60 + 8];
}
// 10010: using guessed type Elf32_Rel stru_10010;
// 139CEC: using guessed type int (*off_139CEC[3])();
// 13A824: using guessed type int (*off_13A824[3])();
// 13A85C: using guessed type int (*off_13A85C[3])();
// 13A894: using guessed type int (*off_13A894[3])();
