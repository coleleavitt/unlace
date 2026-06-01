/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_C74F0
// Address: 0x000C74F0

//----- (000C74F0) --------------------------------------------------------
int __fastcall sub_C74F0(int a1, _BYTE *a2)
{
  char *v2; // esi
  char *v3; // edi
  unsigned int v4; // eax
  char *v5; // ecx
  char *v6; // edx
  char *v7; // esi
  char *v8; // eax
  unsigned int v9; // edx
  char *v10; // esi
  char *v11; // eax
  _DWORD *v12; // ecx
  char *v13; // eax
  int v14; // ecx
  char *v15; // edi
  char *v16; // esi
  _BYTE *v17; // ecx
  int v18; // esi
  char *v19; // edx
  char *v20; // esi
  _BYTE *v21; // eax
  char *v22; // eax
  char *v24; // esi
  _DWORD *v25; // edi
  int v26; // ecx
  _DWORD *v27; // eax
  _DWORD *v28; // edx
  char *v29; // edi
  char *v30; // esi
  _BYTE *v31; // ecx
  int v32; // esi
  char *v33; // edx
  char *v34; // esi
  char *v35; // eax
  char *v36; // edx
  unsigned int v37; // esi
  _DWORD *v38; // edi
  int v39; // ecx
  _DWORD *v40; // eax
  char *v41; // eax
  _DWORD *v42; // edx
  const void *v43; // ebx
  unsigned int v44; // esi
  _DWORD *v45; // edi
  int v46; // ecx
  _DWORD *v47; // eax
  char *v48; // eax
  _DWORD *v49; // eax
  char *v50; // ecx
  char **v51; // eax
  char *v52; // ebx
  char *v53; // ecx
  unsigned int v54; // edx
  _DWORD *v55; // ecx
  int v56; // edx
  _DWORD *v57; // eax
  _DWORD *v58; // edx
  _DWORD *v59; // eax
  int v60; // edi
  _DWORD *v61; // esi
  int v62; // ecx
  _DWORD *v63; // eax
  _DWORD *v64; // edx
  size_t v65; // [esp+8h] [ebp-34h]
  size_t v66; // [esp+8h] [ebp-34h]
  int v67; // [esp+Ch] [ebp-30h]
  int v68; // [esp+14h] [ebp-28h]
  char *v69; // [esp+14h] [ebp-28h]
  char *v70; // [esp+14h] [ebp-28h]
  int v71; // [esp+14h] [ebp-28h]
  signed int v72; // [esp+14h] [ebp-28h]
  _DWORD *v73; // [esp+14h] [ebp-28h]
  int v74; // [esp+14h] [ebp-28h]
  int v75; // [esp+18h] [ebp-24h]
  int v76; // [esp+18h] [ebp-24h]
  int v77; // [esp+18h] [ebp-24h]
  signed int v78; // [esp+18h] [ebp-24h]
  char *v79; // [esp+18h] [ebp-24h]
  char *v80; // [esp+1Ch] [ebp-20h]
  _DWORD *v81; // [esp+1Ch] [ebp-20h]
  int v82; // [esp+20h] [ebp-1Ch]
  int v83; // [esp+20h] [ebp-1Ch]
  char v84; // [esp+20h] [ebp-1Ch]
  int v85; // [esp+20h] [ebp-1Ch]
  const void *v86; // [esp+24h] [ebp-18h]
  char *v87; // [esp+24h] [ebp-18h]
  const void *v88; // [esp+24h] [ebp-18h]
  int v89; // [esp+28h] [ebp-14h]
  int v90; // [esp+28h] [ebp-14h]

  v67 = a1;
  v2 = *(char **)a1;
  v3 = *(char **)(a1 + 4);
  v4 = (unsigned int)&v3[-*(_DWORD *)a1];
  if ( !v4 )
    goto LABEL_28;
  if ( *v2 != 85 )
  {
    if ( (unsigned __int8)(*v2 - 49) <= 8u )
    {
      v11 = sub_D0EF0((char **)a1);
      v12 = (_DWORD *)v67;
      goto LABEL_29;
    }
    if ( v4 >= 2 && *v2 == 68 && v2[1] == 67 )
    {
      *(_DWORD *)a1 = v2 + 2;
      v82 = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8);
      v13 = sub_D0EF0((char **)a1);
      v14 = v67;
      if ( !v13 )
        return 0;
      v15 = v13;
      v83 = v82 >> 2;
      while ( 1 )
      {
        v16 = *(char **)(v14 + 12);
        if ( v16 == *(char **)(v14 + 16) )
        {
          v17 = *(_BYTE **)(v14 + 8);
          v18 = v16 - v17;
          v68 = v18 >> 2;
          v75 = v18 >> 1;
          if ( (_BYTE *)(v67 + 20) == v17 )
          {
            v86 = v17;
            v19 = (char *)malloc(2 * v18);
            if ( v18 )
            {
              v65 = v18;
              v20 = v19;
              memmove(v19, v86, v65);
              v19 = v20;
            }
          }
          else
          {
            v19 = (char *)realloc(v17, 2 * v18);
          }
          v14 = v67;
          *(_DWORD *)(v67 + 8) = v19;
          v16 = &v19[4 * v68];
          *(_DWORD *)(v67 + 12) = v16;
          *(_DWORD *)(v67 + 16) = &v19[4 * v75];
        }
        *(_DWORD *)(v14 + 12) = v16 + 4;
        *(_DWORD *)v16 = v15;
        v21 = *(_BYTE **)v14;
        if ( *(_DWORD *)v14 != *(_DWORD *)(v14 + 4) && *v21 == 69 )
          break;
        v22 = sub_D0EF0((char **)v67);
        v14 = v67;
        v15 = v22;
        if ( !v22 )
          return 0;
      }
      *(_DWORD *)v14 = v21 + 1;
      v85 = 4 * v83;
      v43 = (const void *)(v85 + *(_DWORD *)(v14 + 8));
      v72 = *(_DWORD *)(v14 + 12) - (_DWORD)v43;
      v44 = (v72 + 15) & 0xFFFFFFF0;
      v45 = *(_DWORD **)(v14 + 4464);
      v46 = v45[1];
      if ( v44 + v46 < 0xFF8 )
      {
        v58 = v45 + 1;
      }
      else
      {
        if ( v44 >= 0xFF9 )
        {
          v47 = operator new[](v44 | 8);
          *v47 = *v45;
          v47[1] = 0;
          *v45 = v47;
          v48 = (char *)(v47 + 2);
LABEL_89:
          v79 = v48;
          if ( v72 )
          {
            memmove(v48, v43, v72);
            v60 = v67;
            v43 = (const void *)(*(_DWORD *)(v67 + 8) + v85);
          }
          else
          {
            v60 = v67;
          }
          v74 = v72 >> 2;
          *(_DWORD *)(v60 + 12) = v43;
          v61 = *(_DWORD **)(v60 + 4464);
          v62 = v61[1];
          if ( (unsigned int)(v62 + 16) < 0xFF8 )
          {
            v64 = v61 + 1;
          }
          else
          {
            v63 = operator new[](0x1000u);
            *v63 = v61;
            v63[1] = 0;
            *(_DWORD *)(v60 + 4464) = v63;
            v62 = 0;
            v64 = v63 + 1;
            v61 = v63;
          }
          *v64 = v62 + 16;
          *(_DWORD *)((char *)v61 + v62 + 12) = 16843049;
          *(_DWORD *)((char *)v61 + v62 + 8) = off_13A5BC;
          *(_DWORD *)((char *)v61 + v62 + 16) = v79;
          *(_DWORD *)((char *)v61 + v62 + 20) = v74;
          v11 = (char *)v61 + v62 + 8;
          goto LABEL_59;
        }
        v59 = operator new[](0x1000u);
        *v59 = v45;
        v59[1] = 0;
        *(_DWORD *)(v67 + 4464) = v59;
        v46 = 0;
        v58 = v59 + 1;
        v45 = v59;
      }
      *v58 = v46 + v44;
      v48 = (char *)v45 + v46 + 8;
      goto LABEL_89;
    }
LABEL_28:
    v11 = (char *)sub_D11D0(a1, a2);
    v12 = (_DWORD *)v67;
LABEL_29:
    if ( v11 )
      return sub_C7320(v12, (int)v11);
    return 0;
  }
  if ( v4 >= 2 )
  {
    if ( v2[1] == 116 )
    {
      v5 = v2 + 2;
      *(_DWORD *)v67 = v2 + 2;
      v6 = nullptr;
      if ( v3 == v2 + 2 || (unsigned int)(*v5 - 48) > 9 )
      {
        v8 = v2 + 2;
        v10 = nullptr;
      }
      else
      {
        v7 = v2 + 3;
        while ( 1 )
        {
          v8 = v7;
          *(_DWORD *)v67 = v7;
          if ( v3 == v7 )
            break;
          v9 = *v7++ - 48;
          if ( v9 >= 0xA )
          {
            v10 = v8;
            v6 = v5;
            goto LABEL_37;
          }
        }
        v6 = v5;
        v10 = v3;
      }
LABEL_37:
      if ( v8 == v3 || *v8 != 95 )
        return 0;
      v70 = v6;
      *(_DWORD *)v67 = v8 + 1;
      v25 = *(_DWORD **)(v67 + 4464);
      v26 = v25[1];
      if ( (unsigned int)(v26 + 16) < 0xFF8 )
      {
        v28 = v25 + 1;
      }
      else
      {
        v27 = operator new[](0x1000u);
        *v27 = v25;
        v27[1] = 0;
        *(_DWORD *)(v67 + 4464) = v27;
        v26 = 0;
        v28 = v27 + 1;
        v25 = v27;
      }
      *v28 = v26 + 16;
      *(_DWORD *)((char *)v25 + v26 + 12) = 16843047;
      *(_DWORD *)((char *)v25 + v26 + 8) = off_13A54C;
      *(_DWORD *)((char *)v25 + v26 + 16) = v70;
      *(_DWORD *)((char *)v25 + v26 + 20) = v10;
      v11 = (char *)v25 + v26 + 8;
LABEL_59:
      v12 = (_DWORD *)v67;
      if ( !v11 )
        return 0;
      return sub_C7320(v12, (int)v11);
    }
    if ( v2[1] == 108 )
    {
      *(_DWORD *)a1 = v2 + 2;
      v84 = *(_BYTE *)(a1 + 362);
      *(_BYTE *)(a1 + 362) = 1;
      if ( (unsigned int)(v3 - (v2 + 2)) >= 2 && v2[2] == 118 && v2[3] == 69 )
      {
        v24 = v2 + 4;
        *(_DWORD *)a1 = v24;
        v87 = nullptr;
        v69 = v3;
        v76 = 0;
        goto LABEL_72;
      }
      v89 = (*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8)) >> 2;
      do
      {
        v29 = sub_C2AF0((char **)a1);
        if ( !v29 )
        {
          v11 = nullptr;
          goto LABEL_55;
        }
        a1 = v67;
        v30 = *(char **)(v67 + 12);
        if ( v30 == *(char **)(v67 + 16) )
        {
          v31 = *(_BYTE **)(v67 + 8);
          v32 = v30 - v31;
          v71 = v32 >> 2;
          v77 = v32 >> 1;
          if ( (_BYTE *)(v67 + 20) == v31 )
          {
            v88 = *(const void **)(v67 + 8);
            v33 = (char *)malloc(2 * v32);
            if ( v32 )
            {
              v66 = v32;
              v34 = v33;
              memmove(v33, v88, v66);
              v33 = v34;
            }
          }
          else
          {
            v33 = (char *)realloc(v31, 2 * v32);
          }
          a1 = v67;
          *(_DWORD *)(v67 + 8) = v33;
          v30 = &v33[4 * v71];
          *(_DWORD *)(v67 + 12) = v30;
          *(_DWORD *)(v67 + 16) = &v33[4 * v77];
        }
        *(_DWORD *)(a1 + 12) = v30 + 4;
        *(_DWORD *)v30 = v29;
        v35 = *(char **)a1;
        v36 = *(char **)(a1 + 4);
      }
      while ( *(char **)a1 == v36 || *v35 != 69 );
      *(_DWORD *)a1 = v35 + 1;
      v90 = 4 * v89;
      v80 = (char *)(v90 + *(_DWORD *)(a1 + 8));
      v78 = *(_DWORD *)(a1 + 12) - (_DWORD)v80;
      v37 = (v78 + 15) & 0xFFFFFFF0;
      v38 = *(_DWORD **)(a1 + 4464);
      v39 = v38[1];
      v69 = v36;
      if ( v37 + v39 < 0xFF8 )
      {
        v42 = v38 + 1;
      }
      else
      {
        if ( v37 >= 0xFF9 )
        {
          v40 = operator new[](v37 | 8);
          *v40 = *v38;
          v40[1] = 0;
          *v38 = v40;
          v41 = (char *)(v40 + 2);
LABEL_68:
          v50 = v80;
          v87 = v41;
          if ( v78 )
          {
            memmove(v41, v80, v78);
            v51 = (char **)v67;
            v50 = (char *)(*(_DWORD *)(v67 + 8) + v90);
            v69 = *(char **)(v67 + 4);
          }
          else
          {
            v51 = (char **)v67;
          }
          v76 = v78 >> 2;
          v51[3] = v50;
          v24 = *v51;
          v3 = v69;
LABEL_72:
          v11 = nullptr;
          if ( v3 == v24 || (unsigned int)(*v24 - 48) > 9 )
          {
            v53 = v24;
            v24 = nullptr;
            v3 = nullptr;
            if ( v53 == v69 )
              goto LABEL_55;
          }
          else
          {
            v52 = v24 + 1;
            while ( 1 )
            {
              v53 = v52;
              *(_DWORD *)v67 = v52;
              if ( v3 == v52 )
                break;
              v54 = *v52++ - 48;
              if ( v54 >= 0xA )
              {
                v3 = v53;
                break;
              }
            }
            if ( v53 == v69 )
            {
LABEL_55:
              v12 = (_DWORD *)v67;
              *(_BYTE *)(v67 + 362) = v84;
              if ( !v11 )
                return 0;
              return sub_C7320(v12, (int)v11);
            }
          }
          if ( *v53 == 95 )
          {
            *(_DWORD *)v67 = v53 + 1;
            v55 = *(_DWORD **)(v67 + 4464);
            v56 = v55[1];
            v73 = v55;
            if ( (unsigned int)(v56 + 32) < 0xFF8 )
            {
              v81 = v55 + 1;
            }
            else
            {
              v57 = operator new[](0x1000u);
              *v57 = v73;
              v81 = v57 + 1;
              v57[1] = 0;
              *(_DWORD *)(v67 + 4464) = v57;
              v56 = 0;
              v73 = v57;
            }
            *v81 = v56 + 32;
            *(_DWORD *)((char *)v73 + v56 + 12) = 16843048;
            *(_DWORD *)((char *)v73 + v56 + 8) = off_13A584;
            *(_DWORD *)((char *)v73 + v56 + 16) = v87;
            *(_DWORD *)((char *)v73 + v56 + 20) = v76;
            *(_DWORD *)((char *)v73 + v56 + 24) = v24;
            *(_DWORD *)((char *)v73 + v56 + 28) = v3;
            v11 = (char *)v73 + v56 + 8;
          }
          goto LABEL_55;
        }
        v49 = operator new[](0x1000u);
        *v49 = v38;
        v42 = v49 + 1;
        v49[1] = 0;
        *(_DWORD *)(v67 + 4464) = v49;
        v39 = 0;
        v38 = v49;
      }
      *v42 = v39 + v37;
      v41 = (char *)v38 + v39 + 8;
      goto LABEL_68;
    }
  }
  return 0;
}
// 13A54C: using guessed type int (*off_13A54C[3])();
// 13A584: using guessed type int (*off_13A584[3])();
// 13A5BC: using guessed type int (*off_13A5BC[3])();
