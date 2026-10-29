__int64 __fastcall sub_10AA270(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 *a6)
{
  bool v8; // zf
  unsigned int v9; // eax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // r12d
  __int64 *v15; // r13
  __int64 *v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r9
  __int64 v20; // r12
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  __m128i v23; // xmm0
  _BYTE *v24; // rsi
  signed __int64 v25; // r12
  __int64 v26; // r13
  _BYTE *v27; // rax
  __int64 v28; // rax
  unsigned int v29; // eax
  char *v30; // r14
  void **v31; // r13
  unsigned int v32; // r12d
  void **v33; // rbp
  void **v34; // rbx
  unsigned int v36; // eax
  unsigned int v37; // eax
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  unsigned int v41; // r12d
  __int64 *v42; // r13
  __int64 *v43; // rax
  __int64 (__fastcall ***v44)(); // r15
  unsigned __int8 *v45; // rbx
  _BYTE *v46; // r12
  __int64 v47; // rdx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  void **v52; // rbp
  _BYTE *v53; // rdi
  __int64 v54; // rax
  void **v55; // rbx
  char *v56; // rax
  void **v57; // r12
  void **v58; // rbp
  void **v59; // rdi
  void **v60; // rdi
  void **v61; // r12
  void **v62; // rbp
  _QWORD *v63; // rbp
  _QWORD **v64; // rbx
  _QWORD **v65; // rax
  _QWORD **v66; // r14
  _QWORD *v67; // rbp
  _QWORD *v68; // r12
  __int64 v69; // rax
  __int64 *v70; // r9
  __int64 *v71; // rax
  _QWORD *v72; // r12
  __int64 *v73; // rbp
  __int64 *v74; // rbx
  __int64 v75; // rdx
  char *v76; // rsi
  char *v77; // rsi
  __int64 v78; // rax
  unsigned int v79; // eax
  __int64 v80; // rax
  char v81; // al
  char *v82; // rsi
  void *v83; // rax
  char *v84; // rsi
  char *v85; // rsi
  char *v86; // rsi
  size_t v87; // rdx
  __int64 v88; // rdx
  char *v89; // rcx
  int v90; // eax
  __int64 v91; // rax
  __int64 v92; // rbp
  __int64 v93; // rax
  __int64 v94; // rbp
  __int64 v95; // r14
  unsigned __int8 *v96; // r13
  __int64 v97; // rbx
  void *v98; // rdi
  __m128i src; // [rsp+8h] [rbp-170h] BYREF
  __int64 (__fastcall ***v100)(); // [rsp+18h] [rbp-160h]
  _QWORD *v101; // [rsp+20h] [rbp-158h]
  _QWORD *v102; // [rsp+28h] [rbp-150h]
  _QWORD *v103; // [rsp+30h] [rbp-148h]
  _QWORD **v104; // [rsp+38h] [rbp-140h]
  _QWORD *v105; // [rsp+40h] [rbp-138h] BYREF
  char v106; // [rsp+48h] [rbp-130h]
  void *v107[2]; // [rsp+50h] [rbp-128h] BYREF
  char *v108; // [rsp+60h] [rbp-118h]
  void *v109[2]; // [rsp+70h] [rbp-108h] BYREF
  char v110; // [rsp+80h] [rbp-F8h] BYREF
  void *v111; // [rsp+90h] [rbp-E8h] BYREF
  size_t n; // [rsp+98h] [rbp-E0h]
  _QWORD v113[2]; // [rsp+A0h] [rbp-D8h] BYREF
  __int64 (__fastcall **v114)(); // [rsp+B0h] [rbp-C8h] BYREF
  int v115; // [rsp+B8h] [rbp-C0h]
  __int128 v116; // [rsp+C0h] [rbp-B8h]
  __int64 v117; // [rsp+D0h] [rbp-A8h]
  char v118; // [rsp+D8h] [rbp-A0h]
  int v119; // [rsp+DCh] [rbp-9Ch]
  void **v120; // [rsp+E0h] [rbp-98h]
  void *v121; // [rsp+F0h] [rbp-88h] BYREF
  char *v122; // [rsp+F8h] [rbp-80h]
  __int64 v123; // [rsp+100h] [rbp-78h]
  void *v124; // [rsp+110h] [rbp-68h]
  __int64 v125; // [rsp+120h] [rbp-58h] BYREF
  __int16 v126; // [rsp+130h] [rbp-48h]

  v8 = *(_DWORD *)(a1 + 248) == 28;
  v101 = (_QWORD *)a1;
  v100 = (__int64 (__fastcall ***)())a3;
  v102 = (_QWORD *)a4;
  v103 = (_QWORD *)a5;
  if ( !v8 )
  {
    v9 = sub_2244B30("32bit", 5);
    v10 = sub_2244CB0(a2, "32bit", 5, v9);
    v14 = v10;
    v15 = (__int64 *)(*(_QWORD *)a2 + 8LL * v10);
    if ( *v15 )
    {
      if ( *v15 != -8 )
      {
        sub_10298F0((__int64 **)&v121, v15, 0);
        v16 = (__int64 *)v121;
LABEL_5:
        v17 = *v16;
        src.m128i_i32[2] = 32;
        *(_BYTE *)(v17 + 8) = 1;
        goto LABEL_6;
      }
      --*(_DWORD *)(a2 + 16);
    }
    v28 = sub_22300B0(22, 8, v11, v10, v12, v13);
    *(_DWORD *)(v28 + 16) = 1768043059;
    *(_BYTE *)(v28 + 20) = 116;
    *(_BYTE *)(v28 + 21) = 0;
    *(_QWORD *)v28 = 5;
    *(_BYTE *)(v28 + 8) = 0;
    *v15 = v28;
    ++*(_DWORD *)(a2 + 12);
    v29 = sub_22450D0(a2, v14);
    sub_10298F0((__int64 **)&v121, (__int64 *)(*(_QWORD *)a2 + 8LL * v29), 0);
    v16 = (__int64 *)v121;
    goto LABEL_5;
  }
  v36 = sub_2244B30("64bit", 5);
  v37 = sub_2244CB0(a2, "64bit", 5, v36);
  v41 = v37;
  v42 = (__int64 *)(*(_QWORD *)a2 + 8LL * v37);
  if ( !*v42 )
    goto LABEL_95;
  if ( *v42 == -8 )
  {
    --*(_DWORD *)(a2 + 16);
LABEL_95:
    v78 = sub_22300B0(22, 8, v38, v37, v39, v40);
    *(_DWORD *)(v78 + 16) = 1768043574;
    *(_BYTE *)(v78 + 20) = 116;
    *(_BYTE *)(v78 + 21) = 0;
    *(_QWORD *)v78 = 5;
    *(_BYTE *)(v78 + 8) = 0;
    *v42 = v78;
    ++*(_DWORD *)(a2 + 12);
    v79 = sub_22450D0(a2, v41);
    sub_10298F0((__int64 **)&v121, (__int64 *)(*(_QWORD *)a2 + 8LL * v79), 0);
    v43 = (__int64 *)v121;
    goto LABEL_96;
  }
  sub_10298F0((__int64 **)&v121, v42, 0);
  v43 = (__int64 *)v121;
LABEL_96:
  v80 = *v43;
  src.m128i_i32[2] = 64;
  *(_BYTE *)(v80 + 8) = 1;
LABEL_6:
  v18 = a6[1];
  v19 = *a6;
  v108 = nullptr;
  *(_OWORD *)v107 = 0;
  v20 = v18 - v19;
  if ( (v18 - v19) >> 5 )
  {
    if ( (unsigned __int64)((v18 - v19) >> 5) > 0x7FFFFFFFFFFFFFFLL )
      std::__throw_bad_alloc();
    v21 = (_QWORD *)operator new(v18 - v19);
    v18 = a6[1];
    v19 = *a6;
    v22 = v21;
  }
  else
  {
    v22 = nullptr;
  }
  src.m128i_i64[0] = (__int64)v22;
  v23 = _mm_loadl_epi64(&src);
  v108 = (char *)v22 + v20;
  *(__m128i *)v107 = _mm_unpacklo_epi64(v23, v23);
  if ( v18 != v19 )
  {
    *v22 = v22 + 2;
    v24 = *(_BYTE **)v19;
    v25 = *(_QWORD *)(v19 + 8);
    if ( v25 + *(_QWORD *)v19 && !v24 )
LABEL_19:
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    v26 = v19 + 32;
    while ( (unsigned __int64)v25 <= 0xF )
    {
      v27 = (_BYTE *)*v22;
      if ( v25 == 1 )
      {
        *v27 = *v24;
        v27 = (_BYTE *)*v22;
      }
      else if ( v25 )
      {
        goto LABEL_26;
      }
LABEL_16:
      v22[1] = v25;
      v22 += 4;
      v27[v25] = 0;
      if ( v18 == v26 )
        goto LABEL_27;
      v26 += 32;
      *v22 = v22 + 2;
      v24 = *(_BYTE **)(v26 - 32);
      v25 = *(_QWORD *)(v26 - 24);
      if ( &v24[v25] && !v24 )
        goto LABEL_19;
    }
    if ( v25 < 0 )
      std::__throw_length_error("basic_string::_M_create");
    src.m128i_i64[0] = (__int64)v24;
    v27 = (_BYTE *)operator new(v25 + 1);
    v22[2] = v25;
    v24 = (_BYTE *)src.m128i_i64[0];
    *v22 = v27;
LABEL_26:
    memcpy(v27, v24, v25);
    v27 = (_BYTE *)*v22;
    goto LABEL_16;
  }
LABEL_27:
  v107[1] = v22;
  src.m128i_i64[0] = (__int64)&v105;
  sub_22AD2E0(&v105, src.m128i_u32[2], a6);
  if ( (v106 & 1) == 0 )
  {
    sub_22AB330(&v121, v105, 0, 1);
    sub_10A8560((void ***)v107, (__int64)v107[1], (char *)v121, v122);
    v30 = v122;
    v31 = (void **)v121;
    if ( v122 != v121 )
    {
      do
      {
        while ( *v31 != v31 + 2 )
        {
          operator delete(*v31);
          v31 += 4;
          if ( v31 == (void **)v30 )
            goto LABEL_31;
        }
        v31 += 4;
      }
      while ( v30 != (char *)v31 );
LABEL_31:
      v31 = (void **)v121;
    }
    if ( v31 )
      operator delete(v31);
    v32 = sub_102FFA0((__int64)v101, a2, (__int64)v100, (__int64)v102, (__int64)v103, (char ***)v107);
    goto LABEL_35;
  }
  v109[0] = &v110;
  v44 = &v114;
  src.m128i_i64[1] = (__int64)v109;
  v120 = v109;
  v109[1] = nullptr;
  v110 = 0;
  v115 = 0;
  v118 = 0;
  v119 = 1;
  v117 = 0;
  v116 = 0;
  v114 = &off_2BEBE68;
  sub_227B8B0(&v114, 0, 0, 0);
  if ( (v106 & 1) != 0 )
  {
    v63 = v105;
    v105 = nullptr;
    if ( v63 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v63 + 48LL))(v63, &unk_2D0AA9B) )
      {
        v64 = (_QWORD **)v63[1];
        v65 = (_QWORD **)v63[2];
        if ( v64 != v65 )
        {
          v101 = v63;
          v66 = v65;
          v67 = nullptr;
          while ( 1 )
          {
            v68 = *v64;
            *v64 = nullptr;
            if ( (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v68 + 48LL))(v68, &unk_2D0AA99) )
            {
              sub_227BF10(&v114, v68[1], v68[2]);
              (*(void (__fastcall **)(_QWORD *))(*v68 + 8LL))(v68);
              if ( !v67 )
              {
                v68 = nullptr;
LABEL_109:
                v67 = v68;
              }
            }
            else
            {
              if ( !v67 )
                goto LABEL_109;
              v8 = (*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(*v67 + 48LL))(v67, &unk_2D0AA9B) == 0;
              v69 = *v68;
              if ( v8 )
              {
                v81 = (*(__int64 (__fastcall **)(_QWORD *, void *))(v69 + 48))(v68, &unk_2D0AA9B);
                v121 = v67;
                if ( !v81 )
                {
                  v111 = v68;
                  v67 = (_QWORD *)operator new(0x20u);
                  v67[1] = 0;
                  v67[2] = 0;
                  *v67 = &off_2BEADB8;
                  v67[3] = 0;
                  sub_A054C0((__int64)(v67 + 1), nullptr, &v121);
                  v82 = (char *)v67[2];
                  if ( (char *)v67[3] == v82 )
                  {
                    sub_A054C0((__int64)(v67 + 1), v82, &v111);
                  }
                  else
                  {
                    v83 = v111;
                    v84 = v82 + 8;
                    v111 = nullptr;
                    *((_QWORD *)v84 - 1) = v83;
                    v67[2] = v84;
                  }
                  if ( v111 )
                    (*(void (__fastcall **)(void *))(*(_QWORD *)v111 + 8LL))(v111);
                  goto LABEL_114;
                }
                sub_AEA3D0(v68 + 1, (char *)v68[1], (__int64 *)&v121);
                if ( v121 )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v121 + 8LL))(v121);
                goto LABEL_109;
              }
              if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, void *))(v69 + 48))(v68, &unk_2D0AA9B) )
              {
                v121 = v68;
                v85 = (char *)v67[2];
                if ( v85 == (char *)v67[3] )
                {
                  sub_A054C0((__int64)(v67 + 1), v85, &v121);
                }
                else
                {
                  v121 = nullptr;
                  v86 = v85 + 8;
                  *((_QWORD *)v86 - 1) = v68;
                  v67[2] = v86;
                }
LABEL_114:
                if ( v121 )
                  (*(void (__fastcall **)(void *))(*(_QWORD *)v121 + 8LL))(v121);
                goto LABEL_100;
              }
              v70 = (__int64 *)v68[2];
              v102 = v67 + 1;
              v71 = (__int64 *)v68[1];
              if ( v71 != v70 )
              {
                v103 = v68;
                v72 = v67;
                v73 = v71;
                v104 = v64;
                v74 = v70;
                do
                {
                  v77 = (char *)v72[2];
                  if ( v77 == (char *)v72[3] )
                  {
                    sub_A054C0((__int64)v102, v77, v73);
                  }
                  else
                  {
                    v75 = *v73;
                    v76 = v77 + 8;
                    *v73 = 0;
                    *((_QWORD *)v76 - 1) = v75;
                    v72[2] = v76;
                  }
                  ++v73;
                }
                while ( v74 != v73 );
                v67 = v72;
                v64 = v104;
                v68 = v103;
              }
              (*(void (__fastcall **)(_QWORD *))(*v68 + 8LL))(v68);
            }
LABEL_100:
            if ( v66 == ++v64 )
            {
              (*(void (__fastcall **)(_QWORD *))(*v101 + 8LL))(v101);
              goto LABEL_50;
            }
          }
        }
      }
      else
      {
        (*(void (__fastcall **)(_QWORD *, void *))(*v63 + 48LL))(v63, &unk_2D0AA99);
        sub_227BF10(&v114, v63[1], v63[2]);
      }
      (*(void (__fastcall **)(_QWORD *))(*v63 + 8LL))(v63);
    }
  }
LABEL_50:
  sub_FC70B0((__int64)&v121, (__int64)v100, 0, 25);
  v45 = (unsigned __int8 *)v121;
  v46 = *v120;
  v47 = (__int64)v120[1];
  if ( !v121 )
  {
    v89 = v122;
    v90 = *((_DWORD *)v122 + 3744);
    if ( v90 )
    {
      v91 = (unsigned int)(v90 - 1);
      *((_DWORD *)v122 + 3744) = v91;
      v45 = *(unsigned __int8 **)&v89[8 * v91 + 14848];
      v92 = *((unsigned int *)v45 + 134);
      *v45 = 0;
      v93 = *((_QWORD *)v45 + 66);
      *((_DWORD *)v45 + 106) = 0;
      v94 = v93 + (v92 << 6);
      if ( v93 != v94 )
      {
        v100 = &v114;
        v95 = v93;
        v96 = v45;
        v97 = v47;
        do
        {
          while ( 1 )
          {
            v94 -= 64;
            v98 = *(void **)(v94 + 24);
            if ( v98 == (void *)(v94 + 40) )
              break;
            operator delete(v98);
            if ( v95 == v94 )
              goto LABEL_135;
          }
        }
        while ( v95 != v94 );
LABEL_135:
        v47 = v97;
        v45 = v96;
        v44 = v100;
      }
      *((_DWORD *)v45 + 134) = 0;
    }
    else
    {
      v100 = (__int64 (__fastcall ***)())v120[1];
      v45 = (unsigned __int8 *)operator new(0x3A0u);
      *v45 = 0;
      *((_QWORD *)v45 + 12) = v45 + 112;
      *((_QWORD *)v45 + 16) = v45 + 144;
      *((_QWORD *)v45 + 20) = v45 + 176;
      *((_QWORD *)v45 + 24) = v45 + 208;
      *((_QWORD *)v45 + 28) = v45 + 240;
      *((_QWORD *)v45 + 32) = v45 + 272;
      *((_QWORD *)v45 + 36) = v45 + 304;
      *((_QWORD *)v45 + 40) = v45 + 336;
      *((_QWORD *)v45 + 44) = v45 + 368;
      *((_QWORD *)v45 + 48) = v45 + 400;
      *((_QWORD *)v45 + 52) = v45 + 432;
      *((_QWORD *)v45 + 13) = 0;
      v45[112] = 0;
      *((_QWORD *)v45 + 17) = 0;
      v45[144] = 0;
      *((_QWORD *)v45 + 21) = 0;
      v45[176] = 0;
      *((_QWORD *)v45 + 25) = 0;
      v45[208] = 0;
      *((_QWORD *)v45 + 29) = 0;
      v45[240] = 0;
      *((_QWORD *)v45 + 33) = 0;
      v45[272] = 0;
      *((_QWORD *)v45 + 37) = 0;
      v45[304] = 0;
      *((_QWORD *)v45 + 41) = 0;
      v45[336] = 0;
      *((_QWORD *)v45 + 45) = 0;
      v45[368] = 0;
      *((_QWORD *)v45 + 49) = 0;
      v45[400] = 0;
      *((_QWORD *)v45 + 53) = 0x800000000LL;
      v47 = (__int64)v100;
      *((_QWORD *)v45 + 66) = v45 + 544;
      *((_QWORD *)v45 + 67) = 0x600000000LL;
    }
    v121 = v45;
  }
  v45[*v45 + 1] = 0;
  v111 = v113;
  sub_10A4F80(&v111, v46, (__int64)&v46[v47]);
  v48 = v121;
  v49 = *(unsigned __int8 *)v121;
  *(_BYTE *)v121 = v49 + 1;
  v50 = (unsigned __int8)v49;
  v51 = 4 * (v49 + 3);
  v52 = (void **)&v48[v51];
  v53 = (_BYTE *)v48[v51];
  if ( v111 == v113 )
  {
    v87 = n;
    if ( n )
    {
      if ( n == 1 )
        *v53 = v113[0];
      else
        memcpy(v53, v111, n);
      v87 = n;
      v53 = *v52;
    }
    v52[1] = (void *)v87;
    v53[v87] = 0;
    v53 = v111;
    goto LABEL_55;
  }
  if ( v53 == (_BYTE *)&v48[v51 + 2] )
  {
    *v52 = v111;
    v52[1] = (void *)n;
    v52[2] = (void *)v113[0];
    goto LABEL_129;
  }
  v54 = v48[4 * v50 + 14];
  *v52 = v111;
  v52[1] = (void *)n;
  v52[2] = (void *)v113[0];
  if ( !v53 )
  {
LABEL_129:
    v53 = v113;
    v111 = v113;
    goto LABEL_55;
  }
  v111 = v53;
  v113[0] = v54;
LABEL_55:
  n = 0;
  *v53 = 0;
  if ( v111 != v113 )
    operator delete(v111);
  if ( (_BYTE)v126 )
  {
    sub_FC7790(v123, (__int64 *)&v121, SHIBYTE(v126));
    v123 = 0;
    v126 = 0;
  }
  if ( v124 != &v125 )
    operator delete(v124);
  v55 = (void **)v121;
  if ( v121 )
  {
    v56 = v122;
    if ( v122 )
    {
      if ( v121 < v122 || v121 > v122 + 14848 )
      {
        v57 = *((void ***)v121 + 66);
        v58 = &v57[8 * (unsigned __int64)*((unsigned int *)v121 + 134)];
        if ( v57 != v58 )
        {
          do
          {
            while ( 1 )
            {
              v58 -= 8;
              v59 = (void **)v58[3];
              if ( v59 == v58 + 5 )
                break;
              operator delete(v59);
              if ( v57 == v58 )
                goto LABEL_67;
            }
          }
          while ( v57 != v58 );
LABEL_67:
          v58 = (void **)v55[66];
        }
        if ( v58 != v55 + 68 )
          free(v58);
        v60 = (void **)v55[52];
        if ( v60 != v55 + 54 )
          free(v60);
        v61 = v55 + 48;
        v62 = v55 + 8;
        do
        {
          while ( *v61 != v61 + 2 )
          {
            operator delete(*v61);
            v61 -= 4;
            if ( v61 == v62 )
              goto LABEL_75;
          }
          v61 -= 4;
        }
        while ( v62 != v61 );
LABEL_75:
        operator delete(v55, 0x3A0u);
      }
      else
      {
        v88 = *((unsigned int *)v122 + 3744);
        *((_DWORD *)v122 + 3744) = v88 + 1;
        *(_QWORD *)&v56[8 * v88 + 14848] = v55;
      }
    }
  }
  v114 = &off_2BEBE68;
  sub_227B7A0(v44);
  if ( v109[0] != (void *)(src.m128i_i64[1] + 16) )
    operator delete(v109[0]);
  v32 = 0;
LABEL_35:
  sub_10A71B0(src.m128i_i64[0]);
  v33 = (void **)v107[1];
  v34 = (void **)v107[0];
  if ( v107[1] != v107[0] )
  {
    do
    {
      while ( *v34 != v34 + 2 )
      {
        operator delete(*v34);
        v34 += 4;
        if ( v34 == v33 )
          goto LABEL_38;
      }
      v34 += 4;
    }
    while ( v33 != v34 );
LABEL_38:
    v34 = (void **)v107[0];
  }
  if ( v34 )
    operator delete(v34);
  return v32;
}
