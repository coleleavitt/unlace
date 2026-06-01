/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14002AA60
// Address: 0x000000014002AA60

//----- (000000014002AA60) ----------------------------------------------------
__int64 __fastcall sub_14002AA60(char *a1, __int64 a2, unsigned __int64 a3, char *a4, char a5)
{
  __int64 v6; // rdi
  __int64 v7; // r14
  char *v8; // r12
  char v9; // al
  char *v10; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  char *v14; // rbx
  char *v15; // r14
  unsigned int v16; // edi
  __int64 v17; // rax
  size_t v18; // rdi
  size_t v19; // r15
  size_t v20; // rcx
  char *v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  char *v24; // rcx
  size_t v25; // r8
  char *v26; // r13
  size_t v27; // rdi
  __int64 v28; // rax
  char *v29; // rbx
  _QWORD *v30; // r14
  __int64 *v31; // r15
  char *v32; // rbx
  char *v33; // r14
  char *v34; // rdi
  char v35; // al
  bool v36; // sf
  char *v37; // rdi
  void *v38; // rbx
  __int64 v39; // rax
  __int64 i; // rcx
  _QWORD *v41; // rax
  int j; // r15d
  __int64 v43; // rcx
  unsigned __int64 v44; // rax
  __int64 v45; // rax
  __int64 k; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rbx
  char *v49; // rdi
  unsigned __int64 v50; // r13
  char *v51; // r12
  int v52; // eax
  int v53; // r15d
  _QWORD *v54; // rax
  __int64 v55; // rbx
  __int64 v56; // rdi
  char *v57; // r14
  char *v58; // r15
  const char *v59; // rdx
  const char *v60; // rcx
  char *v61; // r14
  char *v62; // rdi
  char v63; // al
  void *v64; // rcx
  _QWORD *v65; // rbx
  void *v66; // rdi
  _QWORD *v67; // r14
  void *v68; // rcx
  char *v69; // rbx
  size_t v70; // r14
  char *v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 *v74; // r14
  __int64 *v75; // rdi
  size_t v76; // r15
  char *jj; // r12
  const char *v78; // rdx
  const char *v79; // rcx
  bool v80; // sf
  __int64 v81; // rcx
  __int64 m; // rax
  __int64 n; // rcx
  size_t v84; // rax
  __int64 v85; // rdx
  __int64 v86; // rcx
  void *v87; // r13
  __int64 v88; // rdi
  __int64 v89; // r14
  __int64 v90; // r15
  char *ii; // r12
  const char *v92; // rdx
  const char *v93; // rcx
  const char *v94; // rdx
  const char *v95; // rcx
  _QWORD *v96; // rax
  const char *v97; // rdx
  const char *v98; // rcx
  __int64 v99; // rdi
  _QWORD *v100; // rax
  char **v101; // rcx
  char *kk; // rax
  char *mm; // rcx
  _QWORD *v104; // rdi
  void *v105; // rbx
  _QWORD *v106; // rcx
  unsigned int v107; // ebx
  char *v108; // [rsp+20h] [rbp-E0h] BYREF
  void *v109; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v110; // [rsp+30h] [rbp-D0h]
  __int64 v111; // [rsp+40h] [rbp-C0h] BYREF
  int v112; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v113; // [rsp+60h] [rbp-A0h]
  __int64 v114; // [rsp+68h] [rbp-98h]
  int v115; // [rsp+70h] [rbp-90h]
  void *Block; // [rsp+78h] [rbp-88h] BYREF
  __int64 v117; // [rsp+80h] [rbp-80h]
  void **p_Block; // [rsp+88h] [rbp-78h]
  __int64 v119; // [rsp+90h] [rbp-70h]
  char *Str2[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v121; // [rsp+A8h] [rbp-58h]
  char *v122; // [rsp+B0h] [rbp-50h] BYREF
  size_t v123; // [rsp+B8h] [rbp-48h]
  __int64 v124; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v125; // [rsp+C8h] [rbp-38h] BYREF
  char *Str1; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-28h]
  __int64 v128; // [rsp+E0h] [rbp-20h]
  char v129[8]; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v130; // [rsp+F0h] [rbp-10h]
  __int64 v131; // [rsp+100h] [rbp+0h]
  unsigned __int64 v132; // [rsp+108h] [rbp+8h] BYREF
  struct __crt_locale_pointers Src[2]; // [rsp+118h] [rbp+18h] BYREF

  v6 = a3;
  v113 = a3;
  v7 = a2;
  v114 = a2;
  v8 = a1;
  v9 = *a1;
  if ( *a1 == 5 )
  {
LABEL_6:
    if ( (a5 & 1) != 0 )
    {
      sub_14005B0A0(Src, 32, "%I64u", v7);
      return sub_14002A890((__int64)v8, (char *)Src, a4, 0);
    }
    v110 = 0;
    v30 = operator new(0x48u);
    *v30 = v30;
    v30[1] = v30;
    v30[2] = v30;
    *((_WORD *)v30 + 12) = 257;
    v109 = v30;
    if ( *a4 == 5 )
    {
      v31 = *((__int64 **)a4 + 1);
      *(_OWORD *)Str2 = 0;
      v121 = 0;
      sub_140001810((__int64)Str2, "0", 1u);
      v32 = *(char **)(sub_140020E30(v31, (__int64)&Str1, (__int64)Str2) + 16);
      v108 = v32;
      if ( Str2[0] )
      {
        Str2[1] = nullptr;
        j_free(Str2[0]);
      }
      if ( v32 == (char *)*v31 )
      {
LABEL_66:
        v30 = v109;
      }
      else
      {
        do
        {
          v33 = (char *)::Str1;
          if ( *((_QWORD *)v32 + 5) )
            v33 = *((char **)v32 + 4);
          v34 = v33;
          v35 = *v33;
          if ( !*v33 )
            goto LABEL_65;
          if ( v35 != 48 )
          {
            v36 = v35 < 0;
            while ( !v36 && isdigit((unsigned __int8)v35) )
            {
              v35 = *++v34;
              v36 = *v34 < 0;
              if ( !*v34 )
                goto LABEL_71;
            }
LABEL_65:
            v6 = v113;
            goto LABEL_66;
          }
          if ( v33[1] )
            goto LABEL_65;
LABEL_71:
          sub_14005B0C0(v33, "%I64u", &v125);
          v37 = v32 + 56;
          v38 = v109;
          v39 = *((_QWORD *)v109 + 1);
          v111 = v39;
          v112 = 0;
          for ( i = (__int64)v109; !*(_BYTE *)(v39 + 25); v39 = *(_QWORD *)v39 )
          {
            v111 = v39;
            if ( *(_QWORD *)(v39 + 32) >= v125 )
            {
              v112 = 1;
              i = v39;
            }
            else
            {
              v112 = 0;
              v39 += 16;
            }
          }
          if ( *(_BYTE *)(i + 25) || v125 < *(_QWORD *)(i + 32) )
          {
            if ( v110 == 0x38E38E38E38E38ELL )
              unknown_libname_1(i, v125);
            p_Block = &v109;
            v119 = 0;
            v41 = operator new(0x48u);
            v41[4] = v125;
            *((_BYTE *)v41 + 40) = 2;
            v41[7] = 0;
            v41[8] = 0;
            v41[6] = 0;
            *v41 = v38;
            v41[1] = v38;
            v41[2] = v38;
            *((_WORD *)v41 + 12) = 0;
            v119 = 0;
            i = sub_140003FC0(&v109, (__int64)&v111, (__int64)v41);
          }
          sub_140028E70((char *)(i + 40), v37);
          sub_140021640((__int64 *)&v108);
          v32 = v108;
        }
        while ( v108 != (char *)*v31 );
        v6 = v113;
        v30 = v109;
      }
    }
    else
    {
      if ( *a4 != 7 )
      {
        v107 = sub_1400640B0(0x620u);
        sub_140020AF0((__int64)&v109, (__int64)&v109, *((_QWORD *)v109 + 1));
        j_j_free(v109);
        return v107;
      }
      for ( j = 0; ; ++j )
      {
        v43 = *((_QWORD *)a4 + 2);
        v44 = v43 - 1;
        if ( !v43 )
          v44 = 0;
        if ( j >= v44 )
          break;
        v45 = v30[1];
        v111 = v45;
        v112 = 0;
        for ( k = (__int64)v30; !*(_BYTE *)(v45 + 25); v45 = *(_QWORD *)v45 )
        {
          v111 = v45;
          if ( *(_QWORD *)(v45 + 32) >= (unsigned __int64)j )
          {
            v112 = 1;
            k = v45;
          }
          else
          {
            v112 = 0;
            v45 += 16;
          }
        }
        if ( *(_BYTE *)(k + 25) || (unsigned __int64)j < *(_QWORD *)(k + 32) )
        {
          if ( v110 == 0x38E38E38E38E38ELL )
            unknown_libname_1(k, &byte_140094B4F);
          p_Block = &v109;
          v119 = 0;
          v47 = operator new(0x48u);
          v47[4] = j;
          *((_BYTE *)v47 + 40) = 2;
          v47[7] = 0;
          v47[8] = 0;
          v47[6] = 0;
          *v47 = v30;
          v47[1] = v30;
          v47[2] = v30;
          *((_WORD *)v47 + 12) = 0;
          v119 = 0;
          k = sub_140003FC0(&v109, (__int64)&v111, (__int64)v47);
        }
        v48 = k + 40;
        if ( *((_QWORD *)a4 + 2) || j )
          v49 = (char *)(j + *((_QWORD *)a4 + 1));
        else
          v49 = &byte_140094B4F;
        sub_140029390(v48);
        *(_BYTE *)v48 = 7;
        v108 = (char *)(v48 + 8);
        *(_QWORD *)(v48 + 8) = 0;
        *(_QWORD *)(v48 + 16) = 0;
        *(_QWORD *)(v48 + 24) = 0;
        sub_140001810(v48 + 8, v49, 1u);
        v30 = v109;
      }
      v6 = v113;
    }
    v50 = v114;
    v51 = *((char **)v8 + 1);
    v108 = v51;
    v52 = 0;
    if ( v6 - v114 >= 0 )
      v52 = v6 - v114;
    v53 = v110 - v52;
    v115 = v110 - v52;
    if ( (_DWORD)v110 != v52 )
    {
      Block = nullptr;
      v117 = 0;
      v54 = operator new(0x58u);
      *v54 = v54;
      v54[1] = v54;
      v54[2] = v54;
      *((_WORD *)v54 + 12) = 257;
      Block = v54;
      Str2[0] = nullptr;
      Str2[1] = nullptr;
      v121 = 0;
      Str2[0] = (char *)sub_14005ABE0((__int64)Str2, nullptr, 2u, 1u);
      Str2[1] = (char *)2;
      *Str2[0] = 48;
      Str2[0][1] = 0;
      v55 = *(_QWORD *)v51;
      v56 = *(_QWORD *)(*(_QWORD *)v51 + 8LL);
      v57 = Str2[0];
      if ( !*(_BYTE *)(v56 + 25) )
      {
        v58 = Str2[1];
        do
        {
          v59 = ::Str1;
          if ( v58 )
            v59 = v57;
          v60 = ::Str1;
          if ( *(_QWORD *)(v56 + 40) )
            v60 = *(const char **)(v56 + 32);
          if ( strcmp(v60, v59) >= 0 )
            v55 = v56;
          else
            v56 += 16;
          v56 = *(_QWORD *)v56;
        }
        while ( !*(_BYTE *)(v56 + 25) );
        v53 = v115;
      }
      if ( v57 )
      {
        Str2[1] = nullptr;
        j_free(v57);
        Str2[0] = nullptr;
        v121 = 0;
      }
      if ( v55 != *(_QWORD *)v51 )
      {
        while ( 1 )
        {
          v61 = (char *)::Str1;
          if ( *(_QWORD *)(v55 + 40) )
            v61 = *(char **)(v55 + 32);
          v62 = v61;
          v63 = *v61;
          if ( !*v61 )
            goto LABEL_124;
          if ( v63 != 48 )
          {
            v80 = v63 < 0;
            while ( !v80 && isdigit((unsigned __int8)v63) )
            {
              v63 = *++v62;
              v80 = *v62 < 0;
              if ( !*v62 )
                goto LABEL_144;
            }
            goto LABEL_124;
          }
          if ( v61[1] )
            goto LABEL_124;
LABEL_144:
          sub_14005B0C0(v61, "%I64u", &v132);
          if ( v132 >= v50 )
            break;
          v81 = *(_QWORD *)(v55 + 16);
          if ( *(_BYTE *)(v81 + 25) )
          {
            for ( m = *(_QWORD *)(v55 + 8); !*(_BYTE *)(m + 25); m = *(_QWORD *)(m + 8) )
            {
              if ( v55 != *(_QWORD *)(m + 16) )
                break;
              v55 = m;
            }
LABEL_175:
            v55 = m;
            goto LABEL_176;
          }
          v55 = *(_QWORD *)(v55 + 16);
          for ( n = *(_QWORD *)v81; !*(_BYTE *)(n + 25); n = *(_QWORD *)n )
            v55 = n;
LABEL_176:
          if ( v55 == *(_QWORD *)v51 )
            goto LABEL_124;
          v53 = v115;
        }
        if ( v132 >= v113 )
        {
          sub_14005B0A0(Src, 32, "%I64u", v132 + v53);
          Str1 = nullptr;
          v127 = 0;
          v128 = 0;
          v84 = strlen((const char *)Src);
          sub_140001810((__int64)&Str1, Src, v84);
          v87 = Block;
          v88 = *((_QWORD *)Block + 1);
          v111 = v88;
          v112 = 0;
          v89 = (__int64)Block;
          v90 = v127;
          for ( ii = Str1; !*(_BYTE *)(v88 + 25); v88 = *(_QWORD *)v88 )
          {
            v111 = v88;
            v92 = ::Str1;
            if ( v90 )
              v92 = ii;
            v93 = ::Str1;
            if ( *(_QWORD *)(v88 + 40) )
              v93 = *(const char **)(v88 + 32);
            if ( strcmp(v93, v92) >= 0 )
            {
              v112 = 1;
              v89 = v88;
            }
            else
            {
              v112 = 0;
              v88 += 16;
            }
          }
          if ( *(_BYTE *)(v89 + 25) )
            goto LABEL_169;
          v94 = ::Str1;
          if ( *(_QWORD *)(v89 + 40) )
            v94 = *(const char **)(v89 + 32);
          v95 = ::Str1;
          if ( v90 )
            v95 = ii;
          if ( strcmp(v95, v94) < 0 )
          {
LABEL_169:
            if ( v117 == 0x2E8BA2E8BA2E8BALL )
              unknown_libname_1(v86, v85);
            p_Block = &Block;
            v119 = 0;
            v96 = operator new(0x58u);
            v96[4] = Str1;
            Str1 = nullptr;
            v96[5] = v127;
            v127 = 0;
            v96[6] = v128;
            v128 = 0;
            *((_BYTE *)v96 + 56) = 2;
            v96[9] = 0;
            v96[10] = 0;
            v96[8] = 0;
            *v96 = v87;
            v96[1] = v87;
            v96[2] = v87;
            *((_WORD *)v96 + 12) = 0;
            v119 = 0;
            v89 = sub_140003FC0(&Block, (__int64)&v111, (__int64)v96);
          }
          sub_140028E70((char *)(v89 + 56), (char *)(v55 + 56));
          if ( Str1 )
          {
            v127 = 0;
            j_free(Str1);
          }
          v51 = v108;
          v50 = v114;
        }
        m = sub_140021AF0(v51, v55);
        goto LABEL_175;
      }
LABEL_124:
      sub_140020EE0((__int64 *)v51, *(__int64 **)Block, (__int64 *)Block);
      v64 = Block;
      v65 = *((_QWORD **)Block + 1);
      if ( !*((_BYTE *)v65 + 25) )
      {
        do
        {
          sub_140020A50((__int64)&Block, (__int64)&Block, v65[2]);
          v66 = v65;
          v67 = v65;
          v65 = (_QWORD *)*v65;
          sub_140029390((__int64)(v67 + 7));
          v68 = (void *)v67[4];
          if ( v68 )
          {
            v67[5] = 0;
            j_free(v68);
            v67[4] = 0;
            v67[6] = 0;
          }
          j_j_free(v66);
        }
        while ( !*((_BYTE *)v65 + 25) );
        v64 = Block;
      }
      j_j_free(v64);
      v30 = v109;
    }
    v69 = (char *)*v30;
    if ( (_QWORD *)*v30 != v30 )
    {
      do
      {
        sub_14005B0A0(Src, 32, "%I64u", v50);
        v122 = nullptr;
        v123 = 0;
        v124 = 0;
        v70 = strlen((const char *)Src);
        v71 = nullptr;
        if ( v70 != -1 )
        {
          v71 = (char *)sub_14005ABE0((__int64)&v122, nullptr, v70 + 1, 1u);
          v122 = v71;
        }
        v123 = v70 + 1;
        memcpy(v71, Src, v70);
        v122[v70] = 0;
        v74 = *(__int64 **)v51;
        v75 = *(__int64 **)(*(_QWORD *)v51 + 8LL);
        v111 = (__int64)v75;
        v112 = 0;
        v76 = v123;
        for ( jj = v122; !*((_BYTE *)v75 + 25); v75 = (__int64 *)*v75 )
        {
          v111 = (__int64)v75;
          v78 = ::Str1;
          if ( v76 )
            v78 = jj;
          v79 = ::Str1;
          if ( v75[5] )
            v79 = (const char *)v75[4];
          if ( strcmp(v79, v78) >= 0 )
          {
            v112 = 1;
            v74 = v75;
          }
          else
          {
            v112 = 0;
            v75 += 2;
          }
        }
        if ( *((_BYTE *)v74 + 25) )
          goto LABEL_187;
        v97 = ::Str1;
        if ( v74[5] )
          v97 = (const char *)v74[4];
        v98 = ::Str1;
        if ( v76 )
          v98 = jj;
        if ( strcmp(v98, v97) < 0 )
        {
LABEL_187:
          v51 = v108;
          if ( *((_QWORD *)v108 + 1) == 0x2E8BA2E8BA2E8BALL )
            unknown_libname_1(v73, v72);
          v99 = *(_QWORD *)v108;
          p_Block = (void **)v108;
          v119 = 0;
          v100 = operator new(0x58u);
          v100[4] = v122;
          v122 = nullptr;
          v100[5] = v123;
          v123 = 0;
          v100[6] = v124;
          v124 = 0;
          *((_BYTE *)v100 + 56) = 2;
          v100[9] = 0;
          v100[10] = 0;
          v100[8] = 0;
          *v100 = v99;
          v100[1] = v99;
          v100[2] = v99;
          *((_WORD *)v100 + 12) = 0;
          v119 = 0;
          v74 = (__int64 *)sub_140003FC0(v51, (__int64)&v111, (__int64)v100);
        }
        else
        {
          v51 = v108;
        }
        sub_140028E70((char *)v74 + 56, v69 + 40);
        if ( v122 )
        {
          v123 = 0;
          j_free(v122);
        }
        v101 = *((char ***)v69 + 2);
        if ( *((_BYTE *)v101 + 25) )
        {
          for ( kk = *((char **)v69 + 1); !kk[25]; kk = *((char **)kk + 1) )
          {
            if ( v69 != *((char **)kk + 2) )
              break;
            v69 = kk;
          }
          v69 = kk;
        }
        else
        {
          v69 = *((char **)v69 + 2);
          for ( mm = *v101; !mm[25]; mm = *(char **)mm )
            v69 = mm;
        }
        v50 = ++v114;
        v30 = v109;
      }
      while ( v69 != v109 );
    }
    v104 = (_QWORD *)v30[1];
    if ( !*((_BYTE *)v104 + 25) )
    {
      do
      {
        sub_140020AF0((__int64)&v109, (__int64)&v109, v104[2]);
        v105 = v104;
        v106 = v104;
        v104 = (_QWORD *)*v104;
        sub_140029390((__int64)(v106 + 5));
        j_j_free(v105);
      }
      while ( !*((_BYTE *)v104 + 25) );
      v30 = v109;
    }
    j_j_free(v30);
    return 0;
  }
  while ( v9 != 7 )
  {
    if ( v9 != 10 )
      return sub_1400640B0(0x620u);
    v10 = sub_1400291D0(v8, 0);
    v8 = v10;
    if ( !v10 )
      return sub_140063DE0();
    v9 = *v10;
    if ( v9 == 5 )
      goto LABEL_6;
  }
  v12 = *((_QWORD *)v8 + 2);
  v13 = v12 - 1;
  if ( !v12 )
    v13 = 0;
  if ( v7 < 0 )
    v7 += v13;
  v14 = nullptr;
  if ( v7 >= 0 )
    v14 = (char *)v7;
  if ( (unsigned __int64)v14 > v13 )
    v14 = (char *)v13;
  if ( (a5 & 1) != 0 )
    v6 = (__int64)(v14 + 1);
  if ( v6 < 0 )
    v6 += v13;
  v15 = nullptr;
  if ( v6 >= 0 )
    v15 = (char *)v6;
  if ( (unsigned __int64)v15 > v13 )
    v15 = (char *)v13;
  if ( v14 > v15 )
    v15 = v14;
  v129[0] = 2;
  v131 = 0;
  v130 = 0u;
  if ( *a4 != 7 )
  {
    v16 = sub_140028E70(v129, a4);
    if ( v16 || (v16 = sub_14002A220((__int64)v129)) != 0 )
    {
      sub_140020450((__int64)v129);
      return v16;
    }
    a4 = v129;
  }
  v17 = *((_QWORD *)a4 + 2);
  v18 = v17 - 1;
  if ( !v17 )
    v18 = 0;
  v19 = v15 - v14;
  if ( v18 < v15 - v14 )
  {
    v20 = v19 - v18;
    v114 = v19 - v18;
    v21 = v14;
    v108 = v14;
    v22 = *((_QWORD *)v8 + 2);
    v23 = v22 - 1;
    if ( !v22 )
      v23 = 0;
    v125 = v23;
    if ( (unsigned __int64)v14 < v23 && v20 )
    {
      v24 = &v14[v20];
      if ( (unsigned __int64)v24 < v23 )
      {
        memcpy(&v14[*((_QWORD *)v8 + 1)], &v24[*((_QWORD *)v8 + 1)], v23 - (_QWORD)v24);
        v21 = (char *)(v125 - v114);
        v108 = (char *)(v125 - v114);
      }
      sub_140002F60((__int64)(v8 + 8), (unsigned __int64)(v21 + 1));
      v108[*((_QWORD *)v8 + 1)] = 0;
    }
  }
  v25 = v15 - v14;
  if ( v18 < v19 )
    v25 = v18;
  memcpy(&v14[*((_QWORD *)v8 + 1)], *((const void **)a4 + 1), v25);
  if ( v18 > v19 )
  {
    if ( *((_QWORD *)a4 + 2) || v19 )
      v26 = (char *)(v19 + *((_QWORD *)a4 + 1));
    else
      v26 = &byte_140094B4F;
    v27 = v18 - v19;
    v28 = *((_QWORD *)v8 + 2);
    v29 = (char *)(v28 - 1);
    if ( !v28 )
      v29 = nullptr;
    sub_140002F60((__int64)(v8 + 8), (unsigned __int64)&v29[v27 + 1]);
    v29[v27 + *((_QWORD *)v8 + 1)] = 0;
    if ( v15 < v29 )
    {
      memcpy(&v15[*((_QWORD *)v8 + 1) + v27], &v15[*((_QWORD *)v8 + 1)], v29 - v15);
      v29 = v15;
    }
    memcpy(&v29[*((_QWORD *)v8 + 1)], v26, v27);
  }
  sub_140020450((__int64)v129);
  return 0;
}
// 14002B7E8: variable 'v73' is possibly undefined
// 14002B7E8: variable 'v72' is possibly undefined
// 14002B7FA: variable 'v86' is possibly undefined
// 14002B7FA: variable 'v85' is possibly undefined
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 140094B4F: using guessed type char byte_140094B4F;
