void __fastcall sub_1A5FC70(__int64 a1, __int64 a2, void **a3, __int64 a4, int a5)
{
  __int64 v7; // rdx
  size_t v8; // rax
  __m128i *v9; // rax
  size_t v10; // rax
  __m128i *v11; // rax
  __m128i *v12; // rcx
  signed __int64 v13; // rcx
  void *v14; // rax
  __int64 v15; // r9
  __m128i *v16; // rdi
  size_t v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  void *v20; // rdi
  __int64 *v21; // r12
  unsigned __int8 *v22; // r15
  __int64 v23; // rcx
  void **v24; // rdx
  unsigned __int64 v25; // rdi
  unsigned __int64 v26; // rsi
  void **v27; // rcx
  void **v28; // r8
  _BYTE *v29; // rsi
  void *v30; // rdx
  void *v31; // rdx
  int v32; // eax
  bool v33; // zf
  int v34; // eax
  __int64 v35; // r13
  __int64 i; // r15
  __int64 v37; // rcx
  size_t v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // r15
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // rcx
  void *v49; // rsi
  size_t v50; // r15
  char *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // r15
  void *v57; // rax
  _QWORD *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // r9
  __int64 v63; // r15
  void *v64; // rax
  _QWORD *v65; // rax
  __int64 v66; // rdx
  int v67; // eax
  __int64 v68; // rdi
  __int64 v69; // rcx
  __int64 v70; // rax
  __int64 v71; // rdx
  void **v72; // rsi
  void **v73; // rdx
  void **v74; // rdi
  __int64 v75; // rcx
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rcx
  void **v79; // r8
  void **v80; // rcx
  void **v81; // rdi
  int v82; // [rsp+Ch] [rbp-1CCh]
  void *v83; // [rsp+10h] [rbp-1C8h] BYREF
  void **v84; // [rsp+18h] [rbp-1C0h]
  void **v85; // [rsp+20h] [rbp-1B8h]
  void **v86; // [rsp+28h] [rbp-1B0h]
  __int64 v87; // [rsp+30h] [rbp-1A8h]
  void **v88; // [rsp+38h] [rbp-1A0h]
  __int64 v89; // [rsp+48h] [rbp-190h] BYREF
  void *v90[4]; // [rsp+50h] [rbp-188h] BYREF
  void *v91; // [rsp+70h] [rbp-168h] BYREF
  signed __int64 v92; // [rsp+78h] [rbp-160h]
  __m128i v93; // [rsp+80h] [rbp-158h] BYREF
  void *v94; // [rsp+90h] [rbp-148h] BYREF
  int v95; // [rsp+98h] [rbp-140h]
  void *v96; // [rsp+9Ch] [rbp-13Ch]
  int v97; // [rsp+A4h] [rbp-134h]
  void *dest; // [rsp+A8h] [rbp-130h]
  __m128 v99; // [rsp+B0h] [rbp-128h] BYREF
  char v100; // [rsp+C8h] [rbp-110h]
  void *v101[3]; // [rsp+D0h] [rbp-108h] BYREF
  char *v102; // [rsp+E8h] [rbp-F0h]
  __int128 v103; // [rsp+F0h] [rbp-E8h] BYREF
  __int128 v104; // [rsp+100h] [rbp-D8h]
  void *src; // [rsp+110h] [rbp-C8h] BYREF
  size_t n; // [rsp+118h] [rbp-C0h]
  __m128i v107; // [rsp+120h] [rbp-B8h] BYREF
  unsigned __int8 *v108; // [rsp+130h] [rbp-A8h] BYREF
  __int64 v109; // [rsp+138h] [rbp-A0h]
  char v110; // [rsp+188h] [rbp-50h]
  unsigned int v111; // [rsp+190h] [rbp-48h]
  char v112; // [rsp+194h] [rbp-44h]

  v86 = a3;
  v7 = *(_QWORD *)(a1 + 232);
  v87 = a4;
  v82 = a5;
  v84 = v90;
  sub_1A39F10(v90, (__int64 *)a2, v7);
  sub_1A39F10(v101, (__int64 *)a2, *(_QWORD *)(a1 + 232));
  v8 = j__strlen("'");
  v9 = (__m128i *)sub_99BDC0(v101, 0, 0, "'", v8);
  src = &v107;
  if ( (__m128i *)v9->m128i_i64[0] == &v9[1] )
  {
    v107 = _mm_loadu_si128(v9 + 1);
  }
  else
  {
    src = (void *)v9->m128i_i64[0];
    v107.m128i_i64[0] = v9[1].m128i_i64[0];
  }
  n = v9->m128i_u64[1];
  v9->m128i_i64[0] = (__int64)v9[1].m128i_i64;
  v9->m128i_i64[1] = 0;
  v9[1].m128i_i8[0] = 0;
  v10 = j__strlen("'");
  if ( v10 > 0x7FFFFFFFFFFFFFFFLL - n )
    std::__throw_length_error("basic_string::append");
  v11 = (__m128i *)sub_9EE560(&src, "'", v10);
  v91 = &v93;
  v12 = (__m128i *)v11->m128i_i64[0];
  v85 = &v91;
  if ( v12 == &v11[1] )
  {
    v93 = _mm_loadu_si128(v11 + 1);
  }
  else
  {
    v91 = v12;
    v93.m128i_i64[0] = v11[1].m128i_i64[0];
  }
  v13 = v11->m128i_i64[1];
  v11[1].m128i_i8[0] = 0;
  v92 = v13;
  v11->m128i_i64[0] = (__int64)v11[1].m128i_i64;
  v11->m128i_i64[1] = 0;
  if ( src != &v107 )
    operator delete(src);
  if ( v101[0] != &v101[2] )
    operator delete(v101[0]);
  v14 = *(void **)(a2 + 52);
  v96 = nullptr;
  v94 = v14;
  src = &v107;
  v83 = &v107;
  LOBYTE(v97) = 0;
  dest = &v99.m128_u16[4];
  v99.m128_u64[0] = 0;
  v99.m128_i8[8] = 0;
  v100 = 0;
  LOBYTE(v95) = 1;
  sub_1A38CC0(&src, (_BYTE *)v90[0], (__int64)v90[0] + (unsigned __int64)v90[1]);
  v16 = (__m128i *)dest;
  if ( src == &v107 )
  {
    v38 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v107.m128i_i8[0];
      else
        memcpy(dest, src, n);
      v38 = n;
      v16 = (__m128i *)dest;
    }
    v99.m128_u64[0] = v38;
    v16->m128i_i8[v38] = 0;
    v16 = (__m128i *)src;
  }
  else
  {
    if ( dest == &v99.m128_u16[4] )
    {
      v83 = (void *)v107.m128i_i64[0];
      dest = src;
      v99 = _mm_loadh_ps((const double *)&v83);
    }
    else
    {
      v83 = (void *)v107.m128i_i64[0];
      v17 = v99.m128_u64[1];
      dest = src;
      v99 = _mm_loadh_ps((const double *)&v83);
      if ( v16 )
      {
        src = v16;
        v107.m128i_i64[0] = v17;
        goto LABEL_14;
      }
    }
    v16 = &v107;
    src = &v107;
  }
LABEL_14:
  n = 0;
  v16->m128i_i8[0] = 0;
  if ( src != &v107 )
    operator delete(src);
  v18 = *(unsigned int *)(a2 + 52);
  if ( !*(_BYTE *)(a2 + 61) )
  {
    v21 = (__int64 *)(a1 + 8);
    sub_168CDE0((__int64)&src, v21, v18, (__int64)v86, 0);
    if ( v110 )
    {
      sub_AEC220(&v108, v91, v92);
    }
    else if ( v112 )
    {
      v56 = sub_168B9E0(&src);
      v57 = (void *)v107.m128i_i64[0];
      if ( v107.m128i_i64[0] )
        v57 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v107.m128i_i64[0] + 32LL))(v107.m128i_i64[0]);
      v101[0] = v57;
      v58 = sub_1587BC0(v56, (__int64 *)v101, v52, v53, v54, v55);
      sub_AEC220((unsigned __int8 **)(*v58 + 32LL * v111 + 8), v91, v92);
    }
    if ( !(_BYTE)v82 )
    {
      v103 = 0;
      v102 = (char *)&v103 + 8;
      BYTE8(v103) = 0;
      memset(v101, 0, sizeof(v101));
      v104 = 0;
      goto LABEL_32;
    }
    v49 = dest;
    v50 = v99.m128_u64[0];
    v101[0] = v94;
    LODWORD(v101[1]) = v95;
    *(void **)((char *)&v101[1] + 4) = v96;
    HIDWORD(v101[2]) = v97;
    v102 = (char *)&v103 + 8;
    if ( (char *)dest + v99.m128_u64[0] && !dest )
      std::__throw_logic_error("basic_string::_M_construct null not valid");
    if ( v99.m128_u64[0] > 0xF )
    {
      if ( v99.m128_i64[0] < 0 )
        std::__throw_length_error("basic_string::_M_create");
      v83 = dest;
      v51 = (char *)operator new(v99.m128_u64[0] + 1);
      *((_QWORD *)&v103 + 1) = v50;
      v49 = v83;
      v102 = v51;
    }
    else
    {
      if ( v99.m128_u64[0] == 1 )
      {
        BYTE8(v103) = *(_BYTE *)dest;
        v51 = (char *)&v103 + 8;
LABEL_81:
        *(_QWORD *)&v103 = v50;
        v51[v50] = 0;
        BYTE8(v104) = v100;
LABEL_32:
        if ( v110 )
        {
          if ( !LODWORD(v101[0]) || !HIDWORD(v101[0]) )
            goto LABEL_39;
          v22 = v108;
          if ( v108 )
          {
            v23 = *((unsigned int *)v108 + 134);
            v24 = *((void ***)v108 + 66);
            v25 = *((unsigned int *)v108 + 135);
            v26 = v23 + 1;
            v27 = &v24[8 * v23];
          }
          else
          {
            v66 = v109;
            v67 = *(_DWORD *)(v109 + 14976);
            if ( v67 )
            {
              v70 = (unsigned int)(v67 - 1);
              *(_DWORD *)(v109 + 14976) = v70;
              v22 = *(unsigned __int8 **)(v66 + 8 * v70 + 14848);
              v71 = *((unsigned int *)v22 + 134);
              *v22 = 0;
              v72 = *((void ***)v22 + 66);
              *((_DWORD *)v22 + 106) = 0;
              v73 = &v72[8 * v71];
              if ( v72 != v73 )
              {
                do
                {
                  while ( 1 )
                  {
                    v73 -= 8;
                    v74 = (void **)v73[3];
                    if ( v74 == v73 + 5 )
                      break;
                    v86 = v72;
                    v83 = v73;
                    operator delete(v74);
                    v73 = (void **)v83;
                    v72 = v86;
                    if ( v86 == v83 )
                      goto LABEL_107;
                  }
                }
                while ( v72 != v73 );
LABEL_107:
                v72 = *((void ***)v22 + 66);
              }
              *((_DWORD *)v22 + 134) = 0;
              v25 = *((unsigned int *)v22 + 135);
              v24 = v72;
            }
            else
            {
              v25 = 6;
              v22 = (unsigned __int8 *)operator new(0x3A0u);
              *v22 = 0;
              *((_QWORD *)v22 + 12) = v22 + 112;
              *((_QWORD *)v22 + 16) = v22 + 144;
              *((_QWORD *)v22 + 20) = v22 + 176;
              *((_QWORD *)v22 + 24) = v22 + 208;
              *((_QWORD *)v22 + 28) = v22 + 240;
              *((_QWORD *)v22 + 32) = v22 + 272;
              *((_QWORD *)v22 + 36) = v22 + 304;
              *((_QWORD *)v22 + 40) = v22 + 336;
              *((_QWORD *)v22 + 44) = v22 + 368;
              *((_QWORD *)v22 + 48) = v22 + 400;
              *((_QWORD *)v22 + 52) = v22 + 432;
              v24 = (void **)(v22 + 544);
              *((_QWORD *)v22 + 13) = 0;
              v22[112] = 0;
              *((_QWORD *)v22 + 17) = 0;
              v22[144] = 0;
              *((_QWORD *)v22 + 21) = 0;
              v22[176] = 0;
              *((_QWORD *)v22 + 25) = 0;
              v22[208] = 0;
              *((_QWORD *)v22 + 29) = 0;
              v22[240] = 0;
              *((_QWORD *)v22 + 33) = 0;
              v22[272] = 0;
              *((_QWORD *)v22 + 37) = 0;
              v22[304] = 0;
              *((_QWORD *)v22 + 41) = 0;
              v22[336] = 0;
              *((_QWORD *)v22 + 45) = 0;
              v22[368] = 0;
              *((_QWORD *)v22 + 49) = 0;
              v22[400] = 0;
              *((_QWORD *)v22 + 53) = 0x800000000LL;
              *((_QWORD *)v22 + 66) = v22 + 544;
              *((_QWORD *)v22 + 67) = 0x600000000LL;
            }
            v108 = v22;
            v27 = v24;
            v26 = 1;
          }
        }
        else
        {
          if ( !v112 )
            goto LABEL_39;
          v43 = sub_168B9E0(&src);
          v44 = v107.m128i_i64[0];
          if ( v107.m128i_i64[0] )
            v44 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v107.m128i_i64[0] + 32LL))(v107.m128i_i64[0]);
          v89 = v44;
          v45 = sub_1587BC0(v43, &v89, v39, v40, v41, v42);
          if ( !LODWORD(v101[0]) || !HIDWORD(v101[0]) )
          {
LABEL_39:
            if ( v102 != (char *)&v103 + 8 )
              operator delete(v102);
            sub_15F7200(&src);
            if ( *(_DWORD *)(a2 + 24) )
            {
              v31 = **(void ***)(a2 + 16);
              if ( v31 )
              {
                if ( (*((_BYTE *)v31 + 28) & 0x7Fu) - 34 > 5 )
                {
                  v34 = *(_DWORD *)(v87 + 16);
                }
                else
                {
                  v83 = **(void ***)(a2 + 16);
                  v32 = sub_B75A50((__int64)v31, 0);
                  v31 = v83;
                  v33 = v32 == 0;
                  v34 = *(_DWORD *)(v87 + 16);
                  if ( !v33 && v34 == 6283 )
                  {
                    if ( *(_DWORD *)(a2 + 52) == (unsigned int)sub_B73090((__int64)v83) )
                      goto LABEL_57;
                    v31 = v83;
                    v34 = *(_DWORD *)(v87 + 16);
                  }
                }
                if ( v34 )
                {
                  sub_168CDE0((__int64)&src, v21, *((_DWORD *)v31 + 6), v87, 0);
                  if ( v110 )
                  {
                    sub_AEC220(&v108, v91, v92);
                  }
                  else if ( v112 )
                  {
                    v63 = sub_168B9E0(&src);
                    v64 = (void *)v107.m128i_i64[0];
                    if ( v107.m128i_i64[0] )
                      v64 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v107.m128i_i64[0] + 32LL))(v107.m128i_i64[0]);
                    v101[0] = v64;
                    v65 = sub_1587BC0(v63, (__int64 *)v101, v59, v60, v61, v62);
                    sub_AEC220((unsigned __int8 **)(*v65 + 32LL * v111 + 8), v91, v92);
                  }
                  if ( (_BYTE)v82 )
                  {
                    v103 = 0;
                    v102 = (char *)&v103 + 8;
                    BYTE8(v103) = 0;
                    memset(v101, 0, sizeof(v101));
                    v104 = 0;
                  }
                  else
                  {
                    sub_1705330((__int64)v101, (__int64)&v94);
                  }
                  sub_1589170((__int64)&src, v101);
                  if ( v102 != (char *)&v103 + 8 )
                    operator delete(v102);
                  sub_15F7200(&src);
                }
              }
            }
LABEL_57:
            v35 = *(_QWORD *)(a2 + 72);
            for ( i = *(_QWORD *)(a2 + 64); v35 != i; i += 24 )
            {
              v37 = i;
              sub_168CDE0((__int64)&src, v21, *(_DWORD *)(a2 + 52), v37, 0);
              sub_15F7200(&src);
            }
            v20 = dest;
            if ( dest != &v99.m128_u16[4] )
              goto LABEL_20;
            goto LABEL_21;
          }
          v46 = (_QWORD *)(*v45 + 32LL * v111);
          v22 = (unsigned __int8 *)v46[1];
          if ( v22 )
          {
            v47 = *((unsigned int *)v22 + 134);
            v25 = *((unsigned int *)v22 + 135);
            v26 = v47 + 1;
            v48 = v47 << 6;
          }
          else
          {
            v75 = v46[2];
            v76 = *(_DWORD *)(v75 + 14976);
            if ( v76 )
            {
              v77 = (unsigned int)(v76 - 1);
              *(_DWORD *)(v75 + 14976) = v77;
              v22 = *(unsigned __int8 **)(v75 + 8 * v77 + 14848);
              v78 = *((unsigned int *)v22 + 134);
              *v22 = 0;
              v79 = *((void ***)v22 + 66);
              *((_DWORD *)v22 + 106) = 0;
              v80 = &v79[8 * v78];
              while ( v79 != v80 )
              {
                while ( 1 )
                {
                  v80 -= 8;
                  v81 = (void **)v80[3];
                  if ( v81 == v80 + 5 )
                    break;
                  v88 = v80;
                  v86 = v79;
                  v83 = v46;
                  operator delete(v81);
                  v79 = v86;
                  v80 = v88;
                  v46 = v83;
                  if ( v86 == v88 )
                    goto LABEL_118;
                }
              }
LABEL_118:
              *((_DWORD *)v22 + 134) = 0;
              v25 = *((unsigned int *)v22 + 135);
            }
            else
            {
              v83 = v46;
              v25 = 6;
              v22 = (unsigned __int8 *)operator new(0x3A0u);
              *v22 = 0;
              *((_QWORD *)v22 + 12) = v22 + 112;
              *((_QWORD *)v22 + 16) = v22 + 144;
              *((_QWORD *)v22 + 20) = v22 + 176;
              *((_QWORD *)v22 + 24) = v22 + 208;
              *((_QWORD *)v22 + 28) = v22 + 240;
              *((_QWORD *)v22 + 32) = v22 + 272;
              *((_QWORD *)v22 + 36) = v22 + 304;
              *((_QWORD *)v22 + 40) = v22 + 336;
              *((_QWORD *)v22 + 44) = v22 + 368;
              *((_QWORD *)v22 + 48) = v22 + 400;
              *((_QWORD *)v22 + 52) = v22 + 432;
              *((_QWORD *)v22 + 13) = 0;
              v22[112] = 0;
              *((_QWORD *)v22 + 17) = 0;
              v22[144] = 0;
              *((_QWORD *)v22 + 21) = 0;
              v22[176] = 0;
              *((_QWORD *)v22 + 25) = 0;
              v22[208] = 0;
              *((_QWORD *)v22 + 29) = 0;
              v22[240] = 0;
              *((_QWORD *)v22 + 33) = 0;
              v22[272] = 0;
              *((_QWORD *)v22 + 37) = 0;
              v22[304] = 0;
              *((_QWORD *)v22 + 41) = 0;
              v22[336] = 0;
              *((_QWORD *)v22 + 45) = 0;
              v22[368] = 0;
              *((_QWORD *)v22 + 49) = 0;
              v22[400] = 0;
              *((_QWORD *)v22 + 53) = 0x800000000LL;
              v46 = v83;
              *((_QWORD *)v22 + 66) = v22 + 544;
              *((_QWORD *)v22 + 67) = 0x600000000LL;
            }
            v46[1] = v22;
            v48 = 0;
            v26 = 1;
          }
          v24 = *((void ***)v22 + 66);
          v27 = (void **)((char *)v24 + v48);
        }
        v28 = v101;
        if ( v26 > v25 )
        {
          v68 = (__int64)(v22 + 528);
          v83 = v24;
          if ( v24 > v101 || v27 <= v101 )
          {
            sub_9EE9B0(v68, v26);
            v28 = v101;
            v27 = (void **)(*((_QWORD *)v22 + 66) + ((unsigned __int64)*((unsigned int *)v22 + 134) << 6));
          }
          else
          {
            sub_9EE9B0(v68, v26);
            v69 = *((_QWORD *)v22 + 66);
            v28 = (void **)(v69 + (char *)v101 - (_BYTE *)v83);
            v27 = (void **)(((unsigned __int64)*((unsigned int *)v22 + 134) << 6) + v69);
          }
        }
        *v27 = *v28;
        *((_DWORD *)v27 + 2) = *((_DWORD *)v28 + 2);
        *(void **)((char *)v27 + 12) = *(void **)((char *)v28 + 12);
        *((_DWORD *)v27 + 5) = *((_DWORD *)v28 + 5);
        v27[3] = v27 + 5;
        v86 = v27;
        v29 = v28[3];
        v30 = v28[4];
        v83 = v28;
        sub_1A38D80(v27 + 3, v29, (__int64)v30 + (_QWORD)v29);
        *((_BYTE *)v86 + 56) = *((_BYTE *)v83 + 56);
        ++*((_DWORD *)v22 + 134);
        goto LABEL_39;
      }
      v51 = (char *)&v103 + 8;
      if ( !v99.m128_u64[0] )
        goto LABEL_81;
    }
    memcpy(v51, v49, v50);
    v51 = v102;
    goto LABEL_81;
  }
  v19 = 0;
  if ( *(_DWORD *)(a2 + 24) )
    v19 = **(_QWORD **)(a2 + 16);
  sub_1A5FAE0(a1, v18, v19, 0, (unsigned __int8)v82, v15);
  v20 = dest;
  if ( dest != &v99.m128_u16[4] )
LABEL_20:
    operator delete(v20);
LABEL_21:
  if ( v91 != v85 + 2 )
    operator delete(v91);
  if ( v90[0] != v84 + 2 )
    operator delete(v90[0]);
}
