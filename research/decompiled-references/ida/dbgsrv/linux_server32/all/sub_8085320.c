/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8085320
// Address: 0x08085320

//----- (08085320) --------------------------------------------------------
int __cdecl sub_8085320(unsigned __int8 *a1, int a2, int a3, int a4, char a5)
{
  unsigned __int8 *v6; // esi
  char v7; // al
  int v8; // esi
  unsigned int v10; // edi
  unsigned __int8 v11; // al
  int v12; // eax
  int v13; // eax
  int i; // esi
  size_t v15; // edi
  unsigned __int8 *v16; // eax
  unsigned int v17; // edi
  bool v18; // zf
  unsigned int v19; // edx
  size_t v20; // ecx
  size_t v21; // edi
  unsigned int v22; // esi
  _BYTE *v23; // eax
  unsigned int v24; // ebx
  size_t v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // edx
  int v28; // eax
  int v29; // eax
  unsigned int v30; // ebx
  char *v31; // ebx
  size_t v32; // edi
  int *v33; // eax
  int *v34; // ebx
  int v35; // esi
  int v36; // eax
  int v37; // esi
  char *v38; // ebx
  int *v39; // eax
  int v40; // edi
  int v41; // esi
  const char *v42; // ecx
  const char *v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // edx
  int v48; // ebx
  _BOOL4 v49; // edx
  _BYTE *v50; // eax
  int *v51; // eax
  int v52; // esi
  const char *v53; // ecx
  const char *v54; // eax
  int v55; // edi
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // edx
  char *v60; // edx
  char v61; // al
  int v62; // ecx
  unsigned __int8 *v63; // eax
  unsigned __int8 *v64; // esi
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  unsigned int v68; // ebx
  _BOOL4 v69; // edx
  char *v70; // ecx
  char *v71; // edx
  char v72; // al
  int v73; // ecx
  unsigned __int8 *v74; // eax
  int v75; // edi
  int v76; // esi
  void *v77; // eax
  char *s; // [esp+0h] [ebp-ECh]
  const char *v79; // [esp+1Ch] [ebp-D0h]
  size_t v80; // [esp+1Ch] [ebp-D0h]
  unsigned int v81; // [esp+24h] [ebp-C8h]
  size_t v82; // [esp+24h] [ebp-C8h]
  size_t v83; // [esp+24h] [ebp-C8h]
  int v84; // [esp+24h] [ebp-C8h]
  int *v85; // [esp+28h] [ebp-C4h]
  unsigned int v86; // [esp+28h] [ebp-C4h]
  unsigned int v87; // [esp+28h] [ebp-C4h]
  _DWORD *v88; // [esp+2Ch] [ebp-C0h]
  unsigned int v89; // [esp+2Ch] [ebp-C0h]
  _BYTE *v90; // [esp+2Ch] [ebp-C0h]
  size_t v91; // [esp+2Ch] [ebp-C0h]
  unsigned int v92; // [esp+30h] [ebp-BCh]
  unsigned int v93; // [esp+30h] [ebp-BCh]
  int v94; // [esp+30h] [ebp-BCh]
  unsigned int v95; // [esp+30h] [ebp-BCh]
  int *v96; // [esp+30h] [ebp-BCh]
  char *v97; // [esp+34h] [ebp-B8h]
  unsigned int v98; // [esp+34h] [ebp-B8h]
  char *v99; // [esp+34h] [ebp-B8h]
  int v100; // [esp+34h] [ebp-B8h]
  int v101; // [esp+34h] [ebp-B8h]
  _BYTE *v102; // [esp+34h] [ebp-B8h]
  _DWORD *v103; // [esp+34h] [ebp-B8h]
  unsigned __int8 *v104; // [esp+34h] [ebp-B8h]
  int v105; // [esp+38h] [ebp-B4h]
  int *v106; // [esp+38h] [ebp-B4h]
  _DWORD *v107; // [esp+38h] [ebp-B4h]
  unsigned int v108; // [esp+3Ch] [ebp-B0h]
  size_t v109; // [esp+3Ch] [ebp-B0h]
  unsigned __int8 *v110; // [esp+40h] [ebp-ACh]
  unsigned __int8 *v111; // [esp+40h] [ebp-ACh]
  int v112; // [esp+40h] [ebp-ACh]
  int *v113; // [esp+48h] [ebp-A4h] BYREF
  int *v114; // [esp+4Ch] [ebp-A0h]
  unsigned int v115; // [esp+54h] [ebp-98h] BYREF
  _BYTE *v116; // [esp+58h] [ebp-94h] BYREF
  int v117; // [esp+5Ch] [ebp-90h]
  int v118; // [esp+60h] [ebp-8Ch]
  int v119; // [esp+68h] [ebp-84h] BYREF
  int v120; // [esp+6Ch] [ebp-80h] BYREF
  int *v121; // [esp+70h] [ebp-7Ch]
  int *v122; // [esp+74h] [ebp-78h]
  int *v123; // [esp+78h] [ebp-74h]
  unsigned int v124; // [esp+7Ch] [ebp-70h]
  char *v125; // [esp+80h] [ebp-6Ch] BYREF
  int v126; // [esp+84h] [ebp-68h] BYREF
  _DWORD *v127; // [esp+88h] [ebp-64h]
  int *v128; // [esp+8Ch] [ebp-60h]
  int *v129; // [esp+90h] [ebp-5Ch]
  int v130; // [esp+94h] [ebp-58h]
  unsigned __int8 v131[4]; // [esp+98h] [ebp-54h] BYREF
  __int128 v132; // [esp+9Ch] [ebp-50h]
  char v133[32]; // [esp+ACh] [ebp-40h] BYREF
  unsigned int v134; // [esp+CCh] [ebp-20h]

  v134 = __readgsdword(0x14u);
  v6 = (unsigned __int8 *)a4;
  while ( 1 )
  {
    v7 = *a1;
    if ( *a1 == 7 )
    {
      v17 = *((_DWORD *)a1 + 2);
      v111 = a1;
      if ( !v17 )
      {
        v108 = 0;
        if ( (a5 & 1) == 0 )
          v108 = 0;
        goto LABEL_25;
      }
      v27 = v17 - 1;
      if ( a2 >= 0 || (a2 += v27, a2 >= 0) )
      {
        --v17;
        if ( v27 > a2 )
          v17 = a2;
        if ( (a5 & 1) == 0 )
        {
LABEL_55:
          if ( a3 >= 0 )
          {
            if ( v27 > a3 )
              v27 = a3;
LABEL_58:
            if ( v27 < v17 )
              v27 = v17;
            v108 = v27;
            goto LABEL_25;
          }
LABEL_46:
          v28 = v27 + a3;
          if ( v27 > v27 + a3 )
            v27 += a3;
          if ( v27 < v17 )
            v27 = v17;
          if ( v28 < 0 )
            v27 = v17;
          v108 = v27;
LABEL_25:
          v18 = *(_BYTE *)a4 == 7;
          v131[0] = 2;
          v132 = 0;
          if ( !v18 )
          {
            v8 = sub_8089810(v131, (unsigned __int8 *)a4);
            if ( v8 || (v8 = sub_8089CE0((int)v131)) != 0 )
            {
              sub_8089430((int)v131);
              goto LABEL_6;
            }
            v6 = v131;
          }
          v19 = *((_DWORD *)v6 + 2);
          v20 = v108 - v17;
          if ( v19 )
          {
            --v19;
            v97 = *((char **)v111 + 1);
            if ( v19 >= v20 )
            {
              v92 = v19;
              v98 = v108 - v17;
              memcpy((void *)(v17 + *((_DWORD *)v111 + 1)), *((const void **)v6 + 1), v20);
              if ( v108 - v17 >= v92 )
              {
LABEL_39:
                v8 = 0;
                sub_8089430((int)v131);
                goto LABEL_6;
              }
              v21 = v92 + v17 - v108;
              if ( *((_DWORD *)v6 + 2) | v98 )
                v99 = (char *)(*((_DWORD *)v6 + 1) + v98);
              else
                v99 = byte_80DFDF1;
              v22 = *((_DWORD *)v111 + 2);
              v23 = *((_BYTE **)v111 + 1);
              v24 = *((_DWORD *)v111 + 3);
              if ( v22 )
              {
                --v22;
                v25 = v21 + v22;
                v26 = v21 + v22 + 1;
                if ( v24 >= v26 )
                  goto LABEL_36;
                v48 = (int)(v111 + 4);
              }
              else
              {
                v26 = v21 + 1;
                if ( v24 >= v21 + 1 )
                {
                  *((_DWORD *)v111 + 2) = v26;
                  v23[v21] = 0;
LABEL_38:
                  memmove((void *)(*((_DWORD *)v111 + 1) + v22), v99, v21);
                  goto LABEL_39;
                }
                v48 = (int)(v111 + 4);
                v25 = v21;
              }
              v91 = v25;
              v95 = v26;
              v23 = sub_80CF920(v48, v23, v26, 1u);
              v26 = v95;
              *((_DWORD *)v111 + 1) = v23;
              v25 = v91;
LABEL_36:
              *((_DWORD *)v111 + 2) = v26;
              v23[v25] = 0;
              if ( v108 < v22 )
              {
                memmove(
                  (void *)(v21 + v108 + *((_DWORD *)v111 + 1)),
                  (const void *)(v108 + *((_DWORD *)v111 + 1)),
                  v22 - v108);
                v22 = v108;
              }
              goto LABEL_38;
            }
          }
          else
          {
            if ( v17 == v108 )
              goto LABEL_39;
            v97 = *((char **)v111 + 1);
          }
          v29 = *((_DWORD *)v111 + 2);
          if ( v29 )
          {
            v30 = v29 - 1;
            if ( v17 < v29 - 1 )
            {
              v93 = v17;
              v89 = v108 - v19;
              if ( v108 - v19 < v30 )
              {
                v83 = v108 - v17;
                v87 = v19;
                v109 = v19 + v30 - v108;
                memmove(&v97[v17], &v97[v89], v109);
                v20 = v83;
                v19 = v87;
                v93 = v17 + v109;
                v97 = *((char **)v111 + 1);
              }
              v90 = v97;
              if ( *((_DWORD *)v111 + 3) < v93 + 1 )
              {
                v82 = v20;
                v86 = v19;
                v90 = sub_80CF920((int)(v111 + 4), v97, v93 + 1, 1u);
                v19 = v86;
                *((_DWORD *)v111 + 1) = v90;
                v20 = v82;
              }
              *((_DWORD *)v111 + 2) = v93 + 1;
              v90[v93] = 0;
              v97 = *((char **)v111 + 1);
            }
          }
          v31 = &v97[v17];
          v32 = v19;
          if ( v20 <= v19 )
            v32 = v20;
          memcpy(v31, *((const void **)v6 + 1), v32);
          goto LABEL_39;
        }
        v108 = v17 + 1;
        if ( (int)(v17 + 1) < 0 )
        {
          a3 = 0x80000000;
          v17 = 0x7FFFFFFF;
          goto LABEL_46;
        }
      }
      else
      {
        v17 = 0;
        if ( (a5 & 1) == 0 )
          goto LABEL_55;
        v108 = 1;
      }
      if ( v27 >= v108 )
        goto LABEL_25;
      goto LABEL_58;
    }
    if ( v7 != 10 )
      break;
    a1 = sub_8089920(a1, 0);
    if ( !a1 )
    {
      v8 = sub_80C7850();
      goto LABEL_6;
    }
  }
  v110 = a1;
  if ( v7 != 5 )
  {
    v8 = sub_80C7880(1568);
    goto LABEL_6;
  }
  v10 = a5 & 1;
  if ( (a5 & 1) != 0 )
  {
    sub_80D3B60(v133, 32, (char *)&qword_811CFF4 - 278976, a2);
    v8 = sub_808C1E0((int)v110, v133, (unsigned __int8 *)a4, 0);
    goto LABEL_6;
  }
  v120 = 0;
  v122 = &v120;
  v123 = &v120;
  v11 = *(_BYTE *)a4;
  v121 = nullptr;
  v124 = 0;
  if ( v11 != 5 )
  {
    if ( v11 != 7 )
    {
      v8 = sub_80C7880(1568);
      sub_808BA10(v121);
      goto LABEL_6;
    }
    v12 = *(_DWORD *)(a4 + 8);
    if ( !v12 )
      goto LABEL_12;
    while ( 2 )
    {
      if ( v10 >= v12 - 1 )
        goto LABEL_116;
      v33 = v121;
      if ( v121 )
      {
        v34 = &v120;
        do
        {
          if ( v33[4] < v10 )
          {
            v33 = (int *)v33[3];
          }
          else
          {
            v34 = v33;
            v33 = (int *)v33[2];
          }
        }
        while ( v33 );
        v106 = v34;
        if ( v34 == &v120 || v10 < v34[4] )
          goto LABEL_108;
      }
      else
      {
        v106 = &v120;
LABEL_108:
        v101 = operator new(0x28u);
        *(_DWORD *)(v101 + 16) = v10;
        *(_BYTE *)(v101 + 20) = 2;
        *(_OWORD *)(v101 + 24) = 0;
        sub_8083E40((unsigned int *)&v113, &v119, (unsigned int)v106, v10);
        v106 = v113;
        if ( v114 )
        {
          v49 = v113 || &v120 == v114 || v10 < v114[4];
          std::_Rb_tree_insert_and_rebalance(v49, v101, v114, &v120);
          ++v124;
          v106 = (int *)v101;
        }
        else if ( v101 )
        {
          sub_8089430(v101 + 20);
          operator delete((void *)v101, 0x28u);
        }
      }
      if ( *(_DWORD *)(a4 + 8) | v10 )
        v102 = (_BYTE *)(v10 + *(_DWORD *)(a4 + 4));
      else
        v102 = (char *)&qword_811CFF4 - 250371;
      sub_8089430((int)(v106 + 5));
      *((_BYTE *)v106 + 20) = 7;
      v106[6] = 0;
      v106[7] = 0;
      v106[8] = 0;
      v50 = sub_80CF920((int)(v106 + 6), nullptr, 2u, 1u);
      ++v10;
      v106[6] = (int)v50;
      v106[7] = 2;
      *v50 = *v102;
      *(_BYTE *)(v106[6] + 1) = 0;
      v12 = *(_DWORD *)(a4 + 8);
      if ( !v12 )
        goto LABEL_116;
      continue;
    }
  }
  v125 = nullptr;
  v35 = *(_DWORD *)(a4 + 4);
  v126 = 0;
  v127 = nullptr;
  v125 = (char *)sub_80CF920((int)&v125, nullptr, 2u, 1u);
  v126 = 2;
  *v125 = 48;
  v125[1] = 0;
  v36 = v35 + 4;
  v37 = *(_DWORD *)(v35 + 8);
  v94 = v36;
  v38 = v125;
  if ( !v37 )
  {
    if ( v125 )
    {
      v126 = 0;
      sub_80CF780(v125);
    }
    goto LABEL_116;
  }
  v39 = &dword_80DDFD8;
  v105 = v126;
  if ( v126 )
    v39 = (int *)v125;
  v100 = v94;
  v40 = v37;
  v85 = v39;
  while ( 2 )
  {
    v46 = *(_DWORD *)(v40 + 20);
    if ( v105 )
    {
      v41 = v40;
      if ( !v46 )
      {
        v42 = v38;
        v43 = (const char *)&dword_80DDFD8;
        goto LABEL_91;
      }
LABEL_99:
      v43 = *(const char **)(v40 + 16);
      v42 = (const char *)v85;
LABEL_91:
      v44 = strcmp(v43, v42);
      v45 = *(_DWORD *)(v40 + 8);
      v40 = *(_DWORD *)(v40 + 12);
      if ( v44 >= 0 )
      {
        v100 = v41;
        v40 = v45;
      }
      if ( !v40 )
      {
        v40 = v100;
        goto LABEL_133;
      }
      continue;
    }
    break;
  }
  if ( v46 )
  {
LABEL_98:
    v41 = v40;
    goto LABEL_99;
  }
  while ( 1 )
  {
    v47 = *(_DWORD *)(v40 + 8);
    if ( !v47 )
      break;
    v100 = v40;
    v40 = *(_DWORD *)(v40 + 8);
    if ( *(_DWORD *)(v47 + 20) )
      goto LABEL_98;
  }
LABEL_133:
  if ( v38 )
  {
    v126 = 0;
    sub_80CF780(v38);
  }
  if ( v94 != v40 )
  {
    while ( 2 )
    {
      if ( !*(_DWORD *)(v40 + 20) )
        goto LABEL_116;
      v60 = *(char **)(v40 + 16);
      v61 = *v60;
      if ( !*v60 )
        goto LABEL_116;
      v62 = *(_DWORD *)(v40 + 16);
      if ( v61 != 48 )
      {
        while ( (unsigned __int8)(v61 - 48) <= 9u )
        {
          v61 = *(_BYTE *)++v62;
          if ( !v61 )
            goto LABEL_141;
        }
        goto LABEL_116;
      }
      if ( v60[1] )
        goto LABEL_116;
LABEL_141:
      sub_80D3B90((int)v60, "%u", (int)&v125);
      v63 = (unsigned __int8 *)v121;
      if ( v121 )
      {
        v64 = (unsigned __int8 *)&v120;
        do
        {
          while ( 1 )
          {
            v65 = *((_DWORD *)v63 + 2);
            v66 = *((_DWORD *)v63 + 3);
            if ( *((_DWORD *)v63 + 4) >= (unsigned int)v125 )
              break;
            v63 = *((unsigned __int8 **)v63 + 3);
            if ( !v66 )
              goto LABEL_146;
          }
          v64 = v63;
          v63 = *((unsigned __int8 **)v63 + 2);
        }
        while ( v65 );
LABEL_146:
        if ( v64 == (unsigned __int8 *)&v120 || (unsigned int)v125 < *((_DWORD *)v64 + 4) )
        {
LABEL_148:
          v67 = operator new(0x28u);
          v68 = (unsigned int)v125;
          v104 = (unsigned __int8 *)v67;
          *(_BYTE *)(v67 + 20) = 2;
          *(_DWORD *)(v67 + 16) = v68;
          v84 = v67 + 20;
          *(_OWORD *)(v67 + 24) = 0;
          sub_8083E40((unsigned int *)&v113, &v119, (unsigned int)v64, v68);
          v64 = (unsigned __int8 *)v113;
          if ( v114 )
          {
            v69 = v113 || &v120 == v114 || v68 < v114[4];
            v64 = v104;
            std::_Rb_tree_insert_and_rebalance(v69, v104, v114, &v120);
            ++v124;
          }
          else if ( v104 )
          {
            sub_8089430(v84);
            operator delete(v104, 0x28u);
          }
        }
        sub_8089810(v64 + 20, (unsigned __int8 *)(v40 + 28));
        v40 = std::_Rb_tree_increment(v40);
        if ( v94 == v40 )
          goto LABEL_116;
        continue;
      }
      break;
    }
    v64 = (unsigned __int8 *)&v120;
    goto LABEL_148;
  }
LABEL_116:
  v10 = v124;
LABEL_12:
  v88 = *((_DWORD **)v110 + 1);
  v13 = a3 - a2;
  if ( a3 - a2 < 0 )
    v13 = 0;
  v81 = v10 - v13;
  if ( v10 == v13 )
    goto LABEL_15;
  v126 = 0;
  v128 = &v126;
  v129 = &v126;
  v127 = nullptr;
  v130 = 0;
  v116 = nullptr;
  v117 = 0;
  v118 = 0;
  v116 = sub_80CF920((int)&v116, nullptr, 2u, 1u);
  v117 = 2;
  *v116 = 48;
  v116[1] = 0;
  v107 = v88 + 1;
  if ( !v88[2] )
  {
    if ( v116 )
    {
      v117 = 0;
      sub_80CF780(v116);
    }
    goto LABEL_165;
  }
  v79 = v116;
  v51 = &dword_80DDFD8;
  v112 = v117;
  if ( v117 )
    v51 = (int *)v116;
  v103 = v88 + 1;
  v52 = v88[2];
  v96 = v51;
  while ( 2 )
  {
    v58 = *(_DWORD *)(v52 + 20);
    if ( v112 )
    {
      if ( !v58 )
      {
        v53 = v79;
        v54 = (const char *)&dword_80DDFD8;
        v55 = v52;
        goto LABEL_123;
      }
LABEL_130:
      v54 = *(const char **)(v52 + 16);
      v53 = (const char *)v96;
      v55 = v52;
LABEL_123:
      v56 = strcmp(v54, v53);
      v57 = *(_DWORD *)(v52 + 8);
      v52 = *(_DWORD *)(v52 + 12);
      if ( v56 >= 0 )
      {
        v103 = (_DWORD *)v55;
        v52 = v57;
      }
      if ( !v52 )
      {
        v52 = (int)v103;
        v70 = (char *)v79;
        goto LABEL_161;
      }
      continue;
    }
    break;
  }
  if ( v58 )
    goto LABEL_130;
  while ( 1 )
  {
    v59 = *(_DWORD *)(v52 + 8);
    if ( !v59 )
      break;
    v103 = (_DWORD *)v52;
    v52 = *(_DWORD *)(v52 + 8);
    if ( *(_DWORD *)(v59 + 20) )
      goto LABEL_130;
  }
  v70 = (char *)v79;
LABEL_161:
  if ( v70 )
  {
    v117 = 0;
    sub_80CF780(v70);
  }
  while ( (_DWORD *)v52 != v107 )
  {
    if ( !*(_DWORD *)(v52 + 20) )
      break;
    v71 = *(char **)(v52 + 16);
    v72 = *v71;
    if ( !*v71 )
      break;
    v73 = *(_DWORD *)(v52 + 16);
    if ( v72 != 48 )
    {
      while ( (unsigned __int8)(v72 - 48) <= 9u )
      {
        v72 = *(_BYTE *)++v73;
        if ( !v72 )
          goto LABEL_170;
      }
      break;
    }
    if ( v71[1] )
      break;
LABEL_170:
    sub_80D3B90((int)v71, "%u", (int)&v115);
    if ( v115 < a2 )
    {
      v52 = std::_Rb_tree_increment(v52);
    }
    else
    {
      if ( v115 >= a3 )
      {
        sub_80D3B60(v133, 32, "%u", v81 + v115);
        v116 = nullptr;
        v117 = 0;
        v118 = 0;
        v80 = strlen(v133);
        v116 = sub_80CF920((int)&v116, nullptr, v80 + 1, 1u);
        v117 = v80 + 1;
        memmove(v116, v133, v80);
        v116[v80] = 0;
        v74 = (unsigned __int8 *)sub_8085050(&v125, (int)&v116);
        sub_8089810(v74, (unsigned __int8 *)(v52 + 28));
        if ( v116 )
        {
          v117 = 0;
          sub_80CF780(v116);
        }
      }
      v75 = std::_Rb_tree_increment(v52);
      v76 = std::_Rb_tree_rebalance_for_erase(v52, v107);
      sub_8089430(v76 + 28);
      v77 = *(void **)(v76 + 16);
      if ( v77 )
      {
        *(_DWORD *)(v76 + 20) = 0;
        sub_80CF780(v77);
      }
      s = (char *)v76;
      v52 = v75;
      operator delete(s, 0x30u);
      --v88[5];
    }
  }
LABEL_165:
  sub_8089DD0(v88, (int)v128, (int)&v126);
  sub_808E370(v127);
LABEL_15:
  for ( i = (int)v122; (int *)i != &v120; i = std::_Rb_tree_increment(i) )
  {
    sub_80D3B60(v133, 32, "%u", a2);
    v125 = nullptr;
    v126 = 0;
    v127 = nullptr;
    v15 = strlen(v133);
    v125 = (char *)sub_80CF920((int)&v125, nullptr, v15 + 1, 1u);
    v126 = v15 + 1;
    memmove(v125, v133, v15);
    v125[v15] = 0;
    v16 = (unsigned __int8 *)sub_8085050(v88, (int)&v125);
    sub_8089810(v16, (unsigned __int8 *)(i + 20));
    if ( v125 )
    {
      v126 = 0;
      sub_80CF780(v125);
    }
    ++a2;
  }
  v8 = 0;
  sub_808BA10(v121);
LABEL_6:
  if ( v134 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
// 804B110: using guessed type int __cdecl std::_Rb_tree_insert_and_rebalance(_DWORD, _DWORD, _DWORD, _DWORD);
// 804B400: using guessed type int __cdecl std::_Rb_tree_rebalance_for_erase(_DWORD, _DWORD);
// 804B4A0: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 804B870: using guessed type int __cdecl std::_Rb_tree_increment(_DWORD);
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
