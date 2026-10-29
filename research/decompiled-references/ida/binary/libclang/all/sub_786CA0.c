__int64 __fastcall sub_786CA0(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rbp
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // r15
  char *v13; // r13
  unsigned __int8 *v14; // rbx
  double *v15; // rax
  char *v16; // rdx
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  char *v20; // r13
  size_t v21; // xmm0_8
  double *v22; // rdi
  __m128 v23; // xmm0
  __int64 v24; // rax
  double v25; // rcx
  unsigned __int8 *v26; // rax
  _QWORD *v27; // rdx
  __int64 v28; // rax
  __int64 *v29; // rdi
  _QWORD *v30; // rbp
  unsigned __int64 v31; // rax
  _QWORD *v32; // r12
  _QWORD *v33; // rbx
  _QWORD *v34; // rdi
  _QWORD *v35; // rdi
  _QWORD *v36; // rbx
  _QWORD *v37; // rdi
  double *v39; // rdi
  __m128 v40; // xmm0
  __int64 v41; // rax
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rdx
  int v45; // eax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // r14
  void *v50; // rdi
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  int v55; // r9d
  char v56; // r12
  __int64 v57; // rax
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // r8
  __int64 v61; // r9
  _BYTE *v62; // r15
  char *v63; // rbp
  unsigned __int8 *v64; // rbx
  double *v65; // rax
  char *v66; // rdx
  __int64 v67; // rax
  int v68; // ecx
  __int64 v69; // rax
  size_t v70; // rsi
  char *v71; // rbp
  double *v72; // rdi
  __m128 v73; // xmm0
  __int64 v74; // rax
  double v75; // rcx
  _QWORD *v76; // rbp
  unsigned __int64 v77; // rax
  _QWORD *v78; // r12
  _QWORD *v79; // rbx
  _QWORD *v80; // rdi
  _QWORD *v81; // rdi
  _QWORD *v82; // rbx
  _QWORD *v83; // rdi
  double *v84; // rdi
  unsigned __int64 v85; // rdx
  int v86; // eax
  __int64 v87; // rax
  __int64 v88; // r12
  __int64 v89; // r14
  __int64 v90; // r12
  void *v91; // rdi
  __int64 v92; // rdx
  __int128 v93; // [rsp-10h] [rbp-188h]
  __int64 v94; // [rsp+8h] [rbp-170h]
  __int64 v95; // [rsp+8h] [rbp-170h]
  void *src[2]; // [rsp+20h] [rbp-158h] BYREF
  __int64 v97; // [rsp+30h] [rbp-148h] BYREF
  void *v98[2]; // [rsp+40h] [rbp-138h] BYREF
  __int64 v99; // [rsp+50h] [rbp-128h] BYREF
  void *v100; // [rsp+60h] [rbp-118h] BYREF
  size_t v101; // [rsp+68h] [rbp-110h]
  double v102[2]; // [rsp+70h] [rbp-108h] BYREF
  void *v103; // [rsp+80h] [rbp-F8h] BYREF
  size_t v104; // [rsp+88h] [rbp-F0h]
  double v105[2]; // [rsp+90h] [rbp-E8h] BYREF
  void *v106; // [rsp+A0h] [rbp-D8h] BYREF
  unsigned __int64 v107; // [rsp+A8h] [rbp-D0h]
  __int64 v108; // [rsp+B0h] [rbp-C8h]
  void *v109; // [rsp+C0h] [rbp-B8h]
  __int64 v110; // [rsp+D0h] [rbp-A8h] BYREF
  __int16 v111; // [rsp+E0h] [rbp-98h]
  void *v112; // [rsp+F0h] [rbp-88h] BYREF
  unsigned __int64 v113; // [rsp+F8h] [rbp-80h]
  __int64 v114; // [rsp+100h] [rbp-78h]
  void *v115; // [rsp+110h] [rbp-68h]
  __int64 v116; // [rsp+120h] [rbp-58h] BYREF
  __int16 v117; // [rsp+130h] [rbp-48h]

  v2 = sub_798D40(a1);
  v3 = *(_QWORD *)(v2 + 2160);
  v4 = v2;
  if ( (*(_QWORD *)(v3 + 216) & 9) == 0 || (*(_BYTE *)(v3 + 156) & 0x60) == 0 )
    return 0;
  v5 = *(_QWORD *)(v3 + 216) & 9LL;
  if ( (*(_BYTE *)(a1 + 28) & 0x7Fu) - 57 > 2 || (v94 = *(_QWORD *)(v2 + 2168), (unsigned __int8)sub_79BBC0(a1 + 64)) )
  {
    if ( a2 )
    {
      v6 = 0;
      goto LABEL_7;
    }
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v41 = sub_79A2B0(a1);
    v42 = *(_QWORD *)v41;
    v43 = *(_QWORD *)v41 + 8LL * *(unsigned int *)(v41 + 8);
    if ( v42 < v43 )
    {
      while ( *(_WORD *)(*(_QWORD *)v42 + 32LL) != 316 )
      {
        v42 += 8LL;
        if ( v43 == v42 )
          goto LABEL_48;
      }
    }
    else
    {
      if ( v42 == v43 )
        goto LABEL_48;
      while ( *(_WORD *)(*(_QWORD *)v43 + 32LL) != 316 )
      {
        v43 += 8LL;
        if ( v42 == v43 )
          goto LABEL_48;
      }
    }
    if ( v42 != v43 )
    {
      if ( !a2 )
        return 0;
      v6 = 1;
      goto LABEL_7;
    }
  }
LABEL_48:
  if ( *(_BYTE *)(a1 + 73) >> 5 == 2 )
  {
    if ( !a2 )
      return 0;
    v6 = 2;
LABEL_7:
    v7 = sub_6BB140(v4);
    sub_C6CF40(&v106, v7, *(unsigned int *)(a1 + 24), 2349);
    sub_7801E0((__int64)src, (_QWORD *)a1, v8, v9, v10, v11);
    v12 = src[0];
    v13 = (char *)src[1];
    v14 = (unsigned __int8 *)v106;
    if ( !v106 )
    {
      v44 = v107;
      v45 = *(_DWORD *)(v107 + 14976);
      if ( v45 )
      {
        v46 = (unsigned int)(v45 - 1);
        *(_DWORD *)(v107 + 14976) = v46;
        v14 = *(unsigned __int8 **)(v44 + 8 * v46 + 14848);
        v47 = *((unsigned int *)v14 + 134);
        *v14 = 0;
        v48 = *((_QWORD *)v14 + 66);
        *((_DWORD *)v14 + 106) = 0;
        v49 = v48 + (v47 << 6);
        v95 = v48;
        while ( v95 != v49 )
        {
          v49 -= 64;
          v50 = *(void **)(v49 + 24);
          if ( v50 != (void *)(v49 + 40) )
            operator delete(v50, *(_QWORD *)(v49 + 40) + 1LL);
        }
        *((_DWORD *)v14 + 134) = 0;
      }
      else
      {
        v14 = (unsigned __int8 *)operator new(0x3A0u);
        *v14 = 0;
        *((_QWORD *)v14 + 12) = v14 + 112;
        *((_QWORD *)v14 + 16) = v14 + 144;
        *((_QWORD *)v14 + 20) = v14 + 176;
        *((_QWORD *)v14 + 24) = v14 + 208;
        *((_QWORD *)v14 + 28) = v14 + 240;
        *((_QWORD *)v14 + 32) = v14 + 272;
        *((_QWORD *)v14 + 36) = v14 + 304;
        *((_QWORD *)v14 + 40) = v14 + 336;
        *((_QWORD *)v14 + 44) = v14 + 368;
        *((_QWORD *)v14 + 48) = v14 + 400;
        *((_QWORD *)v14 + 13) = 0;
        v14[112] = 0;
        *((_QWORD *)v14 + 17) = 0;
        v14[144] = 0;
        *((_QWORD *)v14 + 21) = 0;
        v14[176] = 0;
        *((_QWORD *)v14 + 25) = 0;
        v14[208] = 0;
        *((_QWORD *)v14 + 29) = 0;
        v14[240] = 0;
        *((_QWORD *)v14 + 33) = 0;
        v14[272] = 0;
        *((_QWORD *)v14 + 37) = 0;
        v14[304] = 0;
        *((_QWORD *)v14 + 41) = 0;
        v14[336] = 0;
        *((_QWORD *)v14 + 45) = 0;
        v14[368] = 0;
        *((_QWORD *)v14 + 49) = 0;
        v14[400] = 0;
        *((_QWORD *)v14 + 52) = v14 + 432;
        *((_QWORD *)v14 + 53) = 0x800000000LL;
        *((_QWORD *)v14 + 66) = v14 + 544;
        *((_QWORD *)v14 + 67) = 0x600000000LL;
      }
      v106 = v14;
    }
    v14[*v14 + 1] = 0;
    v100 = v102;
    if ( v12 || !v13 )
    {
      v112 = v13;
      if ( (unsigned __int64)v13 > 0xF )
      {
        v100 = (void *)std::string::_M_create();
        v39 = (double *)v100;
        *(_QWORD *)&v102[0] = v112;
      }
      else
      {
        if ( v13 == (_BYTE *)&dword_0 + 1 )
        {
          LOBYTE(v102[0]) = *v12;
          goto LABEL_13;
        }
        if ( !v13 )
        {
LABEL_13:
          v15 = v102;
          goto LABEL_14;
        }
        v39 = v102;
      }
      memcpy(v39, v12, (size_t)v13);
      v13 = (char *)v112;
      v15 = (double *)v100;
LABEL_14:
      v101 = (size_t)v13;
      v13[(_QWORD)v15] = 0;
      v16 = (char *)v106;
      v17 = *(unsigned __int8 *)v106;
      *(_BYTE *)v106 = v17 + 1;
      v18 = (unsigned __int8)v17;
      v19 = 32 * v17;
      v20 = &v16[v19];
      v21 = v101;
      v22 = *(double **)&v16[v19 + 96];
      if ( v22 == (double *)&v16[v19 + 112] )
      {
        if ( v100 != v102 )
        {
          v40 = _mm_loadh_ps(v102);
          *((_QWORD *)v20 + 12) = v100;
          *(__m128 *)&v16[32 * v18 + 104] = v40;
          goto LABEL_59;
        }
      }
      else if ( v100 != v102 )
      {
        v23 = _mm_loadh_ps(v102);
        v24 = 32LL * v18;
        v25 = *(double *)&v16[v24 + 112];
        *((_QWORD *)v20 + 12) = v100;
        *(__m128 *)&v16[v24 + 104] = v23;
        if ( v22 )
        {
          v100 = v22;
          v102[0] = v25;
LABEL_18:
          v101 = 0;
          *(_BYTE *)v22 = 0;
          if ( v100 != v102 )
            operator delete(v100, *(_QWORD *)&v102[0] + 1LL);
          v26 = (unsigned __int8 *)v106;
          if ( !v106 )
          {
            v26 = (unsigned __int8 *)sub_779BF0(v107);
            v106 = v26;
          }
          v26[*v26 + 1] = 2;
          v27 = v106;
          v28 = *(unsigned __int8 *)v106;
          *(_BYTE *)v106 = v28 + 1;
          v29 = (__int64 *)src[0];
          v27[v28 + 2] = v6;
          if ( v29 != &v97 )
            operator delete(v29, v97 + 1);
          if ( (_BYTE)v111 )
          {
            sub_C69E80(v108, &v106, HIBYTE(v111));
            v108 = 0;
            v111 = 0;
          }
          if ( v109 != &v110 )
            operator delete(v109, v110 + 1);
          v30 = v106;
          if ( v106 )
          {
            v31 = v107;
            if ( v107 )
            {
              if ( (unsigned __int64)v106 >= v107 && v107 + 14848 >= (unsigned __int64)v106 )
              {
                v51 = *(unsigned int *)(v107 + 14976);
                *(_DWORD *)(v107 + 14976) = v51 + 1;
                *(_QWORD *)(v31 + 8 * v51 + 14848) = v30;
              }
              else
              {
                v32 = *((_QWORD **)v106 + 66);
                v33 = &v32[8 * (unsigned __int64)*((unsigned int *)v106 + 134)];
                if ( v32 != v33 )
                {
                  do
                  {
                    v33 -= 8;
                    v34 = (_QWORD *)v33[3];
                    if ( v34 != v33 + 5 )
                      operator delete(v34, v33[5] + 1LL);
                  }
                  while ( v32 != v33 );
                  v33 = (_QWORD *)v30[66];
                }
                if ( v33 != v30 + 68 )
                  free(v33);
                v35 = (_QWORD *)v30[52];
                if ( v35 != v30 + 54 )
                  free(v35);
                v36 = v30 + 50;
                do
                {
                  v37 = (_QWORD *)*(v36 - 2);
                  if ( v36 != v37 )
                    operator delete(v37, *v36 + 1LL);
                  v36 -= 4;
                }
                while ( v30 + 10 != v36 );
                operator delete(v30, 0x3A0u);
              }
            }
          }
          return 0;
        }
LABEL_59:
        v100 = v102;
        v22 = v102;
        goto LABEL_18;
      }
      if ( &v100 == (void **)&v16[v19 + 96] )
      {
        v22 = (double *)v100;
      }
      else
      {
        if ( v101 )
        {
          if ( v101 == 1 )
            *(_BYTE *)v22 = LOBYTE(v102[0]);
          else
            memcpy(v22, v102, v101);
          v21 = v101;
          v22 = *((double **)v20 + 12);
        }
        *((_QWORD *)v20 + 13) = v21;
        *((_BYTE *)v22 + v21) = 0;
        v22 = (double *)v100;
      }
      goto LABEL_18;
    }
LABEL_164:
    std::__throw_logic_error("basic_string: construction from null is not valid");
  }
  if ( (unsigned __int8)sub_7ADFB0(a1) )
  {
    if ( !a2 )
      return 0;
    v6 = 3;
    goto LABEL_7;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( ((*(_WORD *)(*(_QWORD *)(a1 + 128) + 4LL) >> 7) & 0x3Fu) > 0x1F )
  {
    if ( !a2 )
      return 0;
    v6 = 4;
    goto LABEL_7;
  }
  sub_6E77B0((unsigned __int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104));
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 0x10) != 0 )
  {
    if ( !a2 )
      return 0;
    v6 = 5;
    goto LABEL_7;
  }
  if ( (unsigned __int8)sub_CA1C90(v94, v5, 0, *(unsigned int *)(a1 + 24), "field-padding", 13) )
  {
    if ( !a2 )
      return 0;
    v6 = 6;
    goto LABEL_7;
  }
  sub_7801E0((__int64)&v112, (_QWORD *)a1, 13, v52, v53, v54);
  *((_QWORD *)&v93 + 1) = 13;
  *(_QWORD *)&v93 = "field-padding";
  v56 = sub_CA1C60(v94, v5, 0, (_DWORD)v112, v113, v55, v93);
  std::string::_M_dispose();
  if ( v56 )
  {
    if ( !a2 )
      return 0;
    v6 = 7;
    goto LABEL_7;
  }
  if ( a2 )
  {
    v57 = sub_6BB140(v4);
    sub_C6CF40(&v112, v57, *(unsigned int *)(a1 + 24), 2348);
    sub_7801E0((__int64)v98, (_QWORD *)a1, v58, v59, v60, v61);
    v62 = v98[0];
    v63 = (char *)v98[1];
    v64 = (unsigned __int8 *)v112;
    if ( !v112 )
    {
      v85 = v113;
      v86 = *(_DWORD *)(v113 + 14976);
      if ( v86 )
      {
        v87 = (unsigned int)(v86 - 1);
        *(_DWORD *)(v113 + 14976) = v87;
        v64 = *(unsigned __int8 **)(v85 + 8 * v87 + 14848);
        v88 = *((unsigned int *)v64 + 134);
        *v64 = 0;
        v89 = *((_QWORD *)v64 + 66);
        *((_DWORD *)v64 + 106) = 0;
        v90 = v89 + (v88 << 6);
        while ( v89 != v90 )
        {
          while ( 1 )
          {
            v90 -= 64;
            v91 = *(void **)(v90 + 24);
            if ( v91 == (void *)(v90 + 40) )
              break;
            operator delete(v91, *(_QWORD *)(v90 + 40) + 1LL);
            if ( v89 == v90 )
              goto LABEL_157;
          }
        }
LABEL_157:
        *((_DWORD *)v64 + 134) = 0;
      }
      else
      {
        v64 = (unsigned __int8 *)operator new(0x3A0u);
        *v64 = 0;
        *((_QWORD *)v64 + 12) = v64 + 112;
        *((_QWORD *)v64 + 16) = v64 + 144;
        *((_QWORD *)v64 + 20) = v64 + 176;
        *((_QWORD *)v64 + 24) = v64 + 208;
        *((_QWORD *)v64 + 28) = v64 + 240;
        *((_QWORD *)v64 + 32) = v64 + 272;
        *((_QWORD *)v64 + 36) = v64 + 304;
        *((_QWORD *)v64 + 40) = v64 + 336;
        *((_QWORD *)v64 + 44) = v64 + 368;
        *((_QWORD *)v64 + 48) = v64 + 400;
        *((_QWORD *)v64 + 13) = 0;
        v64[112] = 0;
        *((_QWORD *)v64 + 17) = 0;
        v64[144] = 0;
        *((_QWORD *)v64 + 21) = 0;
        v64[176] = 0;
        *((_QWORD *)v64 + 25) = 0;
        v64[208] = 0;
        *((_QWORD *)v64 + 29) = 0;
        v64[240] = 0;
        *((_QWORD *)v64 + 33) = 0;
        v64[272] = 0;
        *((_QWORD *)v64 + 37) = 0;
        v64[304] = 0;
        *((_QWORD *)v64 + 41) = 0;
        v64[336] = 0;
        *((_QWORD *)v64 + 45) = 0;
        v64[368] = 0;
        *((_QWORD *)v64 + 49) = 0;
        v64[400] = 0;
        *((_QWORD *)v64 + 52) = v64 + 432;
        *((_QWORD *)v64 + 53) = 0x800000000LL;
        *((_QWORD *)v64 + 66) = v64 + 544;
        *((_QWORD *)v64 + 67) = 0x600000000LL;
      }
      v112 = v64;
    }
    v64[*v64 + 1] = 0;
    v103 = v105;
    if ( !v62 && v63 )
      goto LABEL_164;
    v106 = v63;
    if ( (unsigned __int64)v63 > 0xF )
    {
      v103 = (void *)std::string::_M_create();
      v84 = (double *)v103;
      *(_QWORD *)&v105[0] = v106;
    }
    else
    {
      if ( v63 == (_BYTE *)&dword_0 + 1 )
      {
        LOBYTE(v105[0]) = *v62;
        goto LABEL_109;
      }
      if ( !v63 )
      {
LABEL_109:
        v65 = v105;
        goto LABEL_110;
      }
      v84 = v105;
    }
    memcpy(v84, v62, (size_t)v63);
    v63 = (char *)v106;
    v65 = (double *)v103;
LABEL_110:
    v104 = (size_t)v63;
    v63[(_QWORD)v65] = 0;
    v66 = (char *)v112;
    v67 = *(unsigned __int8 *)v112;
    *(_BYTE *)v112 = v67 + 1;
    v68 = (unsigned __int8)v67;
    v69 = 32 * v67;
    v70 = v104;
    v71 = &v66[v69];
    v72 = *(double **)&v66[v69 + 96];
    if ( v72 == (double *)&v66[v69 + 112] )
    {
      if ( v103 != v105 )
      {
        *((_QWORD *)v71 + 12) = v103;
        *(__m128 *)&v66[32 * v68 + 104] = _mm_loadh_ps(v105);
        goto LABEL_145;
      }
    }
    else if ( v103 != v105 )
    {
      v73 = _mm_loadh_ps(v105);
      v74 = 32LL * v68;
      v75 = *(double *)&v66[v74 + 112];
      *((_QWORD *)v71 + 12) = v103;
      *(__m128 *)&v66[v74 + 104] = v73;
      if ( v72 )
      {
        v103 = v72;
        v105[0] = v75;
LABEL_114:
        v104 = 0;
        *(_BYTE *)v72 = 0;
        if ( v103 != v105 )
          operator delete(v103, *(_QWORD *)&v105[0] + 1LL);
        if ( v98[0] != &v99 )
          operator delete(v98[0], v99 + 1);
        if ( (_BYTE)v117 )
        {
          sub_C69E80(v114, &v112, HIBYTE(v117));
          v114 = 0;
          v117 = 0;
        }
        if ( v115 != &v116 )
          operator delete(v115, v116 + 1);
        v76 = v112;
        if ( v112 )
        {
          v77 = v113;
          if ( v113 )
          {
            if ( (unsigned __int64)v112 >= v113 && v113 + 14848 >= (unsigned __int64)v112 )
            {
              v92 = *(unsigned int *)(v113 + 14976);
              *(_DWORD *)(v113 + 14976) = v92 + 1;
              *(_QWORD *)(v77 + 8 * v92 + 14848) = v76;
            }
            else
            {
              v78 = *((_QWORD **)v112 + 66);
              v79 = &v78[8 * (unsigned __int64)*((unsigned int *)v112 + 134)];
              if ( v78 != v79 )
              {
                do
                {
                  v79 -= 8;
                  v80 = (_QWORD *)v79[3];
                  if ( v80 != v79 + 5 )
                    operator delete(v80, v79[5] + 1LL);
                }
                while ( v78 != v79 );
                v79 = (_QWORD *)v76[66];
              }
              if ( v79 != v76 + 68 )
                free(v79);
              v81 = (_QWORD *)v76[52];
              if ( v81 != v76 + 54 )
                free(v81);
              v82 = v76 + 50;
              do
              {
                v83 = (_QWORD *)*(v82 - 2);
                if ( v83 != v82 )
                  operator delete(v83, *v82 + 1LL);
                v82 -= 4;
              }
              while ( v82 != v76 + 10 );
              operator delete(v76, 0x3A0u);
            }
          }
        }
        return 1;
      }
LABEL_145:
      v103 = v105;
      v72 = v105;
      goto LABEL_114;
    }
    if ( &v103 == (void **)&v66[v69 + 96] )
    {
      v72 = (double *)v103;
    }
    else
    {
      if ( v104 )
      {
        if ( v104 == 1 )
          *(_BYTE *)v72 = LOBYTE(v105[0]);
        else
          memcpy(v72, v105, v104);
        v70 = v104;
        v72 = *((double **)v71 + 12);
      }
      *((_QWORD *)v71 + 13) = v70;
      *((_BYTE *)v72 + v70) = 0;
      v72 = (double *)v103;
    }
    goto LABEL_114;
  }
  return 1;
}

