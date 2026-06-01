__int64 __fastcall sub_1D720(_QWORD **a1, unsigned __int64 *a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rdx
  int v6; // ebx
  char v7; // al
  unsigned __int64 v8; // r12
  int v9; // r14d
  unsigned __int64 v10; // rbx
  char *v11; // rsi
  char *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // edx
  _QWORD *v16; // rax
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  _QWORD *v19; // rcx
  char *v20; // r15
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __int64 v25; // rsi
  __m128i v26; // xmm0
  __int64 v27; // rsi
  void *v28; // rdi
  void *v29; // rdi
  bool v30; // cf
  _QWORD *v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // eax
  unsigned __int64 v35; // r14
  __int64 v36; // rcx
  unsigned __int64 v37; // rdi
  void **v38; // r15
  __int64 v39; // rdx
  void **v40; // r12
  void **v41; // r14
  void *v42; // rdi
  unsigned __int64 v43; // rcx
  int v44; // eax
  int v45; // eax
  int v46; // eax
  bool v47; // zf
  int v48; // eax
  char *v49; // rsi
  __int64 v50; // rax
  int v51; // eax
  char v52; // al
  int v53; // eax
  int v54; // eax
  char v55; // al
  char **v56; // rcx
  char *v57; // rcx
  _BYTE *v59; // rsi
  char v60; // dl
  unsigned __int64 v61; // r15
  const char *v62; // r9
  unsigned __int8 v63; // dl
  int v64; // ecx
  _QWORD *v65; // rax
  unsigned __int64 v66; // r14
  _QWORD *v67; // rdi
  __int64 v68; // rcx
  const void **v69; // r14
  __int64 v70; // r15
  unsigned __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rdx
  size_t v74; // r9
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  int v77; // eax
  __int64 v78; // rax
  _QWORD *v79; // rdx
  _QWORD *v80; // rcx
  char *v81; // r15
  __int64 v82; // rcx
  __int64 v83; // r14
  __int64 v84; // rsi
  __m128i v85; // xmm0
  __int64 v86; // rsi
  __m128i v87; // xmm0
  __int64 v88; // rsi
  void *v89; // rdi
  void *v90; // rdi
  __int64 v91; // rax
  size_t v92; // rax
  const char *v93; // r9
  size_t v94; // r10
  int v95; // eax
  size_t v96; // rax
  const char *v97; // r9
  size_t v98; // r10
  _BYTE *v99; // rax
  char *v100; // rax
  int v101; // r12d
  unsigned int v102; // eax
  char v103; // al
  _QWORD *v104; // rdi
  _QWORD *v105; // rdx
  _QWORD *v106; // rdi
  _QWORD *v107; // rdx
  void **v108; // r15
  void **v109; // r14
  void **v110; // r12
  void *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rax
  _QWORD *src; // [rsp+0h] [rbp-68h]
  void *srce; // [rsp+0h] [rbp-68h]
  void *srcf; // [rsp+0h] [rbp-68h]
  char *srca; // [rsp+0h] [rbp-68h]
  void *srcg; // [rsp+0h] [rbp-68h]
  const char *srcb; // [rsp+0h] [rbp-68h]
  const char *srcc; // [rsp+0h] [rbp-68h]
  unsigned int srch; // [rsp+0h] [rbp-68h]
  _BYTE *srcj; // [rsp+0h] [rbp-68h]
  _BYTE *srcl; // [rsp+0h] [rbp-68h]
  __int64 srcd; // [rsp+0h] [rbp-68h]
  _QWORD *srck; // [rsp+0h] [rbp-68h]
  _QWORD *srci; // [rsp+0h] [rbp-68h]
  int v127; // [rsp+8h] [rbp-60h]
  const char *v128; // [rsp+8h] [rbp-60h]
  const char *v129; // [rsp+8h] [rbp-60h]
  unsigned __int64 v130; // [rsp+10h] [rbp-58h]
  __int64 v131; // [rsp+10h] [rbp-58h]
  __int64 v132; // [rsp+10h] [rbp-58h]
  size_t v133; // [rsp+10h] [rbp-58h]
  size_t v134; // [rsp+10h] [rbp-58h]
  size_t v135; // [rsp+10h] [rbp-58h]
  _QWORD *v136; // [rsp+18h] [rbp-50h]
  _QWORD *v137; // [rsp+18h] [rbp-50h]
  int v138; // [rsp+20h] [rbp-48h]
  char v139; // [rsp+27h] [rbp-41h]
  _QWORD *v140; // [rsp+28h] [rbp-40h]

  sub_1A280((__int64)a1, a2);
  v5 = a1[5];
  v6 = *((_DWORD *)v5 + 7);
  switch ( v6 )
  {
    case 2:
    case 14:
      v15 = sub_1D3E0(a1, (__int64 *)a2, "u");
      goto LABEL_34;
    case 4:
    case 10:
    case 16:
    case 32:
    case 39:
    case 40:
    case 41:
      v8 = a2[1];
      if ( v8 <= 2 )
      {
        if ( v6 != 32 )
          goto LABEL_36;
        if ( v8 != 2 )
        {
          *((_BYTE *)a1 + 212) = 1;
          v8 = a2[1];
          goto LABEL_36;
        }
        goto LABEL_138;
      }
      v31 = (_QWORD *)*a2;
      if ( *(_QWORD *)(*a2 + 32) > 2u && (v99 = (_BYTE *)v31[3], *v99 == 45) && v99[1] == 119 )
      {
        if ( v99[2] )
        {
          v100 = v99 + 2;
          v101 = 1;
        }
        else
        {
          v100 = (char *)haystack;
          v101 = 2;
          if ( v31[7] )
            v100 = (char *)v31[6];
        }
        v102 = sub_18030((_DWORD *)a1 + 51, v100, 0);
        v15 = v102;
        if ( v102 )
        {
          if ( v6 == 32 )
          {
            if ( a2[1] <= 1 )
            {
              *((_BYTE *)a1 + 212) = 1;
            }
            else
            {
              srch = v102;
              v103 = sub_18F00(a2, 109);
              v15 = srch;
              *((_BYTE *)a1 + 212) = v103 ^ 1;
            }
          }
          return v15;
        }
        srcd = 24LL * (v101 + 1);
        v108 = (void **)(*a2 + srcd);
        v109 = (void **)(*a2 + 24);
        v110 = v109;
        do
        {
          v111 = *v110;
          if ( *v110 )
          {
            v110[1] = nullptr;
            j__free(v111);
          }
          v110 += 3;
        }
        while ( v110 != v108 );
        memmove(v109, v110, *a2 + 24 * a2[1] - (_QWORD)v110);
        v8 = a2[1] - 0xAAAAAAAAAAAAAAABLL * ((srcd - 24) >> 3);
        a2[1] = v8;
        if ( v6 == 32 )
        {
          if ( v8 <= 1 )
          {
            *((_BYTE *)a1 + 212) = 1;
            v5 = a1[5];
            v8 = a2[1];
            goto LABEL_36;
          }
          goto LABEL_138;
        }
LABEL_54:
        v5 = a1[5];
LABEL_36:
        if ( v8 < *((_DWORD *)v5 + 4) + 1 - *((_DWORD *)v5 + 5) )
        {
LABEL_111:
          sub_1D110((__int64)"not enough arguments, the syntax is:\n  %s", (const char *)*v5);
          return 33;
        }
LABEL_37:
        if ( v8 <= 1 )
        {
          LODWORD(v32) = *((_DWORD *)a1 + 45) & 8;
          if ( (_DWORD)v32 )
          {
            if ( v6 == 4 )
              return 0;
            v138 = 1;
            v127 = 19;
            goto LABEL_104;
          }
          v138 = 1;
          goto LABEL_134;
        }
        v138 = 1;
        v31 = (_QWORD *)*a2;
        v32 = 0;
        v33 = 1;
      }
      else
      {
        if ( v6 == 32 )
        {
LABEL_138:
          *((_BYTE *)a1 + 212) = sub_18F00(a2, 109) ^ 1;
LABEL_35:
          v5 = a1[5];
          v8 = a2[1];
          goto LABEL_36;
        }
        if ( v8 < *((_DWORD *)v5 + 4) + 1 - *((_DWORD *)v5 + 5) )
          goto LABEL_111;
        v138 = 1;
        v32 = 0;
        v33 = 1;
      }
LABEL_76:
      v56 = (char **)&v31[3 * v33];
      if ( !v56[1] )
      {
        if ( haystack )
        {
          srca = (char *)haystack;
          v127 = *((_DWORD *)v5 + v32 + 8);
          v64 = *((_DWORD *)a1 + 45) & 8;
          goto LABEL_91;
        }
LABEL_183:
        v127 = 19;
        if ( (*((_BYTE *)a1 + 180) & 8) == 0 )
        {
LABEL_134:
          v127 = *((_DWORD *)v5 + (int)v32 + 8);
          goto LABEL_103;
        }
        goto LABEL_103;
      }
      v57 = *v56;
      srca = v57;
      if ( !v57 )
        goto LABEL_183;
      if ( *v57 == 63 && !v57[1] )
      {
        sub_1D110((__int64)"the syntax is:\n  %s", (const char *)*v5);
        return 33;
      }
      v127 = *((_DWORD *)v5 + v32 + 8);
      v64 = *((_DWORD *)a1 + 45) & 8;
      if ( *srca == 33 && v6 == 66 )
      {
        ++srca;
        v77 = 19;
        if ( !v64 )
          v77 = v127;
        v139 = 1;
        v127 = v77;
        goto LABEL_94;
      }
LABEL_91:
      if ( v64 )
        v127 = 19;
      v139 = 0;
LABEL_94:
      v65 = a1[1];
      v66 = (unsigned __int64)a1[2];
      if ( v66 < (unsigned __int64)v65 + 1 )
      {
        v78 = sub_96080(a1, 0, (char *)v65 + 1, 72);
        v79 = a1[2];
        v80 = a1[1];
        a1[2] = (_QWORD *)v66;
        v137 = (_QWORD *)v78;
        v81 = (char *)*a1;
        v140 = v79;
        v82 = (__int64)v80 - 1;
        if ( v82 >= 0 )
        {
          v83 = v78;
          do
          {
            v84 = *(_QWORD *)v81;
            v85 = _mm_loadu_si128((const __m128i *)(v81 + 8));
            *(_QWORD *)v81 = 0;
            *(_OWORD *)(v81 + 8) = 0;
            *(_QWORD *)v83 = v84;
            *(__m128i *)(v83 + 8) = v85;
            v86 = *((_QWORD *)v81 + 3);
            v87 = _mm_loadu_si128((const __m128i *)v81 + 2);
            *((_QWORD *)v81 + 3) = 0;
            *(_QWORD *)(v83 + 24) = v86;
            *(__m128i *)(v83 + 32) = v87;
            v88 = *((_QWORD *)v81 + 6);
            *((_QWORD *)v81 + 5) = 0;
            *(_QWORD *)(v83 + 48) = v88;
            *(_DWORD *)(v83 + 56) = *((_DWORD *)v81 + 14);
            *(_DWORD *)(v83 + 60) = *((_DWORD *)v81 + 15);
            *(_DWORD *)(v83 + 64) = *((_DWORD *)v81 + 16);
            v89 = *((void **)v81 + 3);
            if ( v89 )
            {
              *((_QWORD *)v81 + 4) = 0;
              v131 = v82;
              j__free(v89);
              v82 = v131;
            }
            v90 = *(void **)v81;
            if ( *(_QWORD *)v81 )
            {
              *((_QWORD *)v81 + 1) = 0;
              v132 = v82;
              j__free(v90);
              v82 = v132;
            }
            v81 += 72;
            v83 += 72;
            v30 = v82-- == 0;
          }
          while ( !v30 );
          v81 = (char *)*a1;
        }
        j__free(v81);
        *a1 = v137;
        a1[2] = v140;
        v65 = a1[1];
      }
      else
      {
        v137 = *a1;
      }
      v67 = &v137[9 * (_QWORD)v65];
      *v67 = 0;
      v67[3] = 0;
      v67[6] = 0;
      v67[7] = 0xFFFFFFFC00000000LL;
      *((_DWORD *)v67 + 16) = 0;
      *(_OWORD *)(v67 + 1) = 0;
      *((_OWORD *)v67 + 2) = 0;
      v68 = (__int64)a1[4];
      a1[1] = (_QWORD *)((char *)a1[1] + 1);
      v15 = sub_1AAE0(v67, srca, v127, v68);
      if ( v15 )
        return v15;
      if ( v139 )
      {
        v69 = (const void **)*a1;
        v70 = (*a1)[1];
        v71 = (*a1)[2];
        v72 = **a1;
        if ( v70 )
        {
          v73 = v70 + 1;
          v74 = v70 - 1;
          if ( v71 >= v70 + 1 )
            goto LABEL_100;
        }
        else
        {
          if ( v71 > 1 )
          {
            v69[1] = &dword_0 + 2;
            *(_BYTE *)(v72 + 1) = 0;
LABEL_102:
            *(_BYTE *)*v69 = 33;
            goto LABEL_103;
          }
          v74 = 0;
          v70 = 1;
          v73 = 2;
        }
        v133 = v74;
        srcg = (void *)v73;
        v91 = sub_96080(*a1, v72, v73, 1);
        v74 = v133;
        v73 = (__int64)srcg;
        *v69 = (const void *)v91;
        v72 = v91;
LABEL_100:
        v69[1] = (const void *)v73;
        *(_BYTE *)(v72 + v70) = 0;
        if ( v74 )
          memmove((char *)*v69 + 1, *v69, v74);
        goto LABEL_102;
      }
LABEL_103:
      if ( v6 == 4 )
        goto LABEL_10;
LABEL_104:
      v75 = (unsigned int)(v6 - 10);
      if ( (unsigned int)v75 > 0x3E )
        goto LABEL_109;
      v76 = 0x5000001E00C60143LL;
      if ( _bittest64(&v76, v75) )
      {
        v9 = v8 - 1;
        if ( v6 == 46 )
          goto LABEL_11;
        goto LABEL_10;
      }
      if ( (unsigned int)(v6 - 47) > 4 )
      {
LABEL_109:
        if ( *((_DWORD *)a1[5] + 4) + 1 < v8 )
        {
          sub_1D110((__int64)"too many arguments");
          return 33;
        }
        return 0;
      }
LABEL_10:
      v9 = v8;
LABEL_11:
      v130 = v9;
      v10 = v138 + 1;
      if ( v10 >= v9 )
        return 0;
      while ( 1 )
      {
        v16 = a1[1];
        v17 = (unsigned __int64)a1[2];
        if ( v17 >= (unsigned __int64)v16 + 1 )
        {
          src = *a1;
        }
        else
        {
          v18 = sub_96080(a1, 0, (char *)v16 + 1, 72);
          v19 = a1[2];
          a1[2] = (_QWORD *)v17;
          v20 = (char *)*a1;
          src = (_QWORD *)v18;
          v136 = v19;
          v21 = (__int64)a1[1] - 1;
          if ( v21 >= 0 )
          {
            v22 = v18;
            do
            {
              v23 = *(_QWORD *)v20;
              v24 = _mm_loadu_si128((const __m128i *)(v20 + 8));
              *(_QWORD *)v20 = 0;
              *(_OWORD *)(v20 + 8) = 0;
              *(_QWORD *)v22 = v23;
              *(__m128i *)(v22 + 8) = v24;
              v25 = *((_QWORD *)v20 + 3);
              v26 = _mm_loadu_si128((const __m128i *)v20 + 2);
              *((_QWORD *)v20 + 3) = 0;
              *(_QWORD *)(v22 + 24) = v25;
              *(__m128i *)(v22 + 32) = v26;
              v27 = *((_QWORD *)v20 + 6);
              *((_QWORD *)v20 + 5) = 0;
              *(_QWORD *)(v22 + 48) = v27;
              *(_DWORD *)(v22 + 56) = *((_DWORD *)v20 + 14);
              *(_DWORD *)(v22 + 60) = *((_DWORD *)v20 + 15);
              *(_DWORD *)(v22 + 64) = *((_DWORD *)v20 + 16);
              v28 = *((void **)v20 + 3);
              if ( v28 )
              {
                *((_QWORD *)v20 + 4) = 0;
                j__free(v28);
              }
              v29 = *(void **)v20;
              if ( *(_QWORD *)v20 )
              {
                *((_QWORD *)v20 + 1) = 0;
                j__free(v29);
              }
              v20 += 72;
              v22 += 72;
              v30 = v21-- == 0;
            }
            while ( !v30 );
            v20 = (char *)*a1;
          }
          j__free(v20);
          *a1 = src;
          a1[2] = v136;
          v16 = a1[1];
        }
        v11 = (char *)haystack;
        v12 = (char *)&src[9 * (_QWORD)v16];
        *((_QWORD *)v12 + 7) = 0xFFFFFFFC00000000LL;
        *(_QWORD *)v12 = 0;
        *((_QWORD *)v12 + 3) = 0;
        *((_QWORD *)v12 + 6) = 0;
        *((_DWORD *)v12 + 16) = 0;
        *(_OWORD *)(v12 + 8) = 0;
        *((_OWORD *)v12 + 2) = 0;
        v13 = (__int64)a1[4];
        a1[1] = (_QWORD *)((char *)a1[1] + 1);
        v14 = *a2 + 24 * v10;
        if ( *(_QWORD *)(v14 + 8) )
          v11 = *(char **)v14;
        v15 = sub_1AAE0((__int64 *)v12, v11, v127, v13);
        if ( v15 )
          break;
        if ( ++v10 >= v130 )
          return 0;
      }
      return v15;
    case 6:
      v54 = sub_18640(a2, (__int64)&qword_12FFE8, 1);
      v5 = a1[5];
      *((_DWORD *)a1 + 50) = v54;
      v8 = a2[1];
      goto LABEL_36;
    case 8:
      v55 = 0;
      if ( a2[1] > 1 )
      {
        v55 = sub_18F00(a2, 102);
        v5 = a1[5];
      }
      *((_BYTE *)a1 + 210) = v55;
      v8 = a2[1];
      goto LABEL_36;
    case 18:
      *((_DWORD *)a1 + 31) |= 1u;
      v35 = a2[1];
      v36 = 1;
      if ( v35 <= 1 )
      {
        v37 = *a2;
        v43 = 0;
        v38 = (void **)(*a2 + 24);
        v40 = v38;
        goto LABEL_53;
      }
      while ( 2 )
      {
        v37 = *a2;
        v38 = (void **)(*a2 + 24 * v36);
        v39 = 24 * v36;
        if ( !v38[1] )
          goto LABEL_47;
        v59 = *v38;
        if ( *(_BYTE *)*v38 != 45 )
          goto LABEL_47;
        v60 = v59[1];
        v61 = v36 + 1;
        if ( v60 == 108 )
        {
          *((_DWORD *)a1 + 31) &= ~1u;
          v61 = v36;
        }
        else
        {
          if ( v61 >= v35 )
          {
            sub_1D110((__int64)"missing argument to %s", v59);
            return 33;
          }
          v62 = haystack;
          if ( *(_QWORD *)(v37 + 24 * v36 + 32) )
            v62 = *(const char **)(v37 + 24 * v36 + 24);
          v63 = v60 - 67;
          switch ( v63 )
          {
            case 0u:
              v95 = sub_1D230((_DWORD *)a1 + 13, v62);
              break;
            case 1u:
              v95 = sub_1D310(a1 + 8, v62, v63, v36, v4, (int)v62);
              break;
            case 0x20u:
              v95 = sub_1D230((_DWORD *)a1 + 12, v62);
              break;
            case 0x21u:
              v95 = sub_1D310(a1 + 7, v62, v63, v36, v4, (int)v62);
              break;
            case 0x2Au:
              v95 = sub_1D230((_DWORD *)a1 + 30, v62);
              break;
            case 0x30u:
              if ( v62 && (srcc = v62, v96 = strlen(v62), v97 = srcc, (v98 = v96) != 0) )
              {
                v104 = a1[12];
                v105 = (_QWORD *)(v96 + 1);
                if ( (unsigned __int64)a1[14] < v96 + 1 )
                {
                  v135 = v96;
                  v129 = srcc;
                  srci = (_QWORD *)(v96 + 1);
                  v113 = sub_96080(a1 + 12, v104, v105, 1);
                  v98 = v135;
                  v97 = v129;
                  a1[12] = (_QWORD *)v113;
                  v105 = srci;
                  v104 = (_QWORD *)v113;
                }
                a1[13] = v105;
                srcj = (_BYTE *)v98;
                memmove(v104, v97, v98);
                srcj[(_QWORD)a1[12]] = 0;
              }
              else
              {
                a1[13] = nullptr;
              }
              goto LABEL_131;
            case 0x32u:
              if ( v62 && (srcb = v62, v92 = strlen(v62), v93 = srcb, (v94 = v92) != 0) )
              {
                v106 = a1[9];
                v107 = (_QWORD *)(v92 + 1);
                if ( (unsigned __int64)a1[11] < v92 + 1 )
                {
                  v134 = v92;
                  v128 = srcb;
                  srck = (_QWORD *)(v92 + 1);
                  v112 = sub_96080(a1 + 9, v106, v107, 1);
                  v94 = v134;
                  v93 = v128;
                  a1[9] = (_QWORD *)v112;
                  v107 = srck;
                  v106 = (_QWORD *)v112;
                }
                a1[10] = v107;
                srcl = (_BYTE *)v94;
                memmove(v106, v93, v94);
                srcl[(_QWORD)a1[9]] = 0;
              }
              else
              {
                a1[10] = nullptr;
              }
              goto LABEL_131;
            default:
              sub_1D110((__int64)"wrong switch %s", v59);
              return 33;
          }
          if ( v95 )
            return 33;
        }
LABEL_131:
        v36 = v61 + 1;
        if ( v61 + 1 >= v35 )
        {
          v37 = *a2;
          v39 = 24 * v36;
          v38 = (void **)(*a2 + 24 * v36);
LABEL_47:
          v40 = (void **)(v37 + 24);
          if ( v39 == 24 )
          {
            v35 = a2[1];
            v43 = 0;
          }
          else
          {
            v41 = (void **)(v37 + 24);
            do
            {
              v42 = *v41;
              if ( *v41 )
              {
                v41[1] = nullptr;
                srce = (void *)v39;
                j__free(v42);
                v39 = (__int64)srce;
              }
              v41 += 3;
            }
            while ( v41 != v38 );
            v37 = *a2;
            v35 = a2[1];
            v43 = 0xAAAAAAAAAAAAAAABLL * ((v39 - 24) >> 3);
          }
LABEL_53:
          srcf = (void *)v43;
          memmove(v40, v38, v37 + 24 * v35 - (_QWORD)v38);
          v8 = a2[1] - (_QWORD)srcf;
          a2[1] = v8;
          goto LABEL_54;
        }
        continue;
      }
    case 21:
      v15 = sub_1D3E0(a1, (__int64 *)a2, "us");
      goto LABEL_34;
    case 27:
    case 29:
      if ( v6 == 29 )
        v34 = sub_18640(a2, (__int64)qword_130040, 1) ^ 1;
      else
        v34 = sub_18640(a2, (__int64)qword_130040, 2);
      v5 = a1[5];
      *((_DWORD *)a1 + 45) = v34 | 2;
      v8 = a2[1];
      goto LABEL_36;
    case 28:
      v53 = sub_18640(a2, (__int64)qword_130050, 3);
      v5 = a1[5];
      *((_DWORD *)a1 + 45) = v53 | 4;
      v8 = a2[1];
      goto LABEL_36;
    case 42:
      v44 = sub_18640(a2, (__int64)qword_12FFF0, 2);
      v5 = a1[5];
      *((_DWORD *)a1 + 49) = v44;
      v8 = a2[1];
      goto LABEL_36;
    case 43:
      v45 = sub_18640(a2, (__int64)qword_130000, 3);
      v5 = a1[5];
      *((_DWORD *)a1 + 48) = v45;
      v8 = a2[1];
      goto LABEL_36;
    case 45:
      v46 = sub_18640(a2, (__int64)qword_165620, 3);
      v47 = *((_BYTE *)a1 + 211) == 0;
      v5 = a1[5];
      *((_DWORD *)a1 + 44) = v46;
      if ( v47 )
        goto LABEL_61;
      *((_DWORD *)a1 + 44) = v46 | 2;
      v8 = a2[1];
      goto LABEL_36;
    case 46:
      v8 = a2[1];
      if ( v8 <= 2 )
        goto LABEL_36;
      v49 = (char *)haystack;
      v50 = *a2 + 24 * v8 - 24;
      if ( *(_QWORD *)(v50 + 8) )
        v49 = *(char **)v50;
      v15 = sub_18030((_DWORD *)a1 + 51, v49, 0);
LABEL_34:
      if ( !v15 )
        goto LABEL_35;
      return v15;
    case 67:
    case 68:
      v15 = sub_1D3E0(a1, (__int64 *)a2, "s");
      goto LABEL_34;
    case 70:
      v48 = sub_18640(a2, (__int64)qword_130020, 3);
      v5 = a1[5];
      *((_DWORD *)a1 + 46) = v48;
      if ( v48 )
      {
LABEL_61:
        v8 = a2[1];
      }
      else
      {
        *((_DWORD *)a1 + 46) = 6;
        v8 = a2[1];
      }
      goto LABEL_36;
    case 71:
      v51 = sub_18640(a2, (__int64)qword_165610, 2);
      v5 = a1[5];
      *((_DWORD *)a1 + 47) = v51;
      v8 = a2[1];
      goto LABEL_36;
    case 72:
      v52 = 0;
      if ( a2[1] > 1 )
      {
        v52 = sub_18F00(a2, 121);
        v5 = a1[5];
      }
      *((_BYTE *)a1 + 208) = v52;
      v8 = a2[1];
      goto LABEL_36;
    default:
      v7 = 0;
      if ( a2[1] > 1 )
      {
        v7 = sub_18F00(a2, 121);
        v5 = a1[5];
      }
      *((_BYTE *)a1 + 209) = v7;
      v8 = a2[1];
      if ( v8 < *((_DWORD *)v5 + 4) + 1 - *((_DWORD *)v5 + 5) )
        goto LABEL_111;
      if ( v6 != 44 )
        goto LABEL_37;
      if ( v8 > 2 )
      {
        v31 = (_QWORD *)*a2;
        v32 = 1;
        v33 = 2;
        v138 = 2;
        goto LABEL_76;
      }
      v127 = 19;
      if ( (*((_BYTE *)a1 + 180) & 8) == 0 )
        v127 = *((_DWORD *)v5 + 9);
      v138 = 2;
      goto LABEL_10;
  }
}

