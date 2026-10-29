void __fastcall sub_115EEF0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  unsigned __int64 v4; // rax
  __int64 v5; // rdx
  __int64 *v6; // r15
  __int64 *v7; // rbp
  __int64 v8; // r12
  _BYTE *v9; // r13
  __int64 v10; // rsi
  _QWORD *v11; // rax
  _BYTE *v12; // rsi
  __int64 v13; // rdx
  int v14; // eax
  void **v15; // r14
  void *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // r15
  __int64 v19; // r14
  _BYTE *v20; // r13
  __int64 v21; // rsi
  unsigned __int64 v22; // r14
  __m128i v23; // xmm1
  size_t v24; // r13
  void *v25; // rax
  int v26; // eax
  std::_V2 *v27; // rdi
  __int64 v28; // rax
  int v29; // esp
  size_t v30; // rax
  size_t v31; // rax
  size_t v32; // rax
  size_t v33; // rax
  __int64 v34; // rsi
  void (__fastcall *v35)(__int64 *, __int64, _BYTE *, int *); // rax
  __int64 v36; // rax
  __int64 v37; // rdx
  volatile signed __int32 *v38; // rax
  __int64 v39; // rcx
  void *v40; // rax
  _BYTE *v41; // rsi
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r15
  _BYTE *v45; // r14
  void *v46; // rdi
  volatile signed __int32 *v47; // r13
  signed __int32 v48; // eax
  unsigned __int64 v49; // rax
  int v50; // ecx
  __m128i v51; // xmm2
  __int64 v52; // rdi
  unsigned __int8 (__fastcall *v53)(__int64, void **); // rax
  __int64 v54; // rax
  char *v55; // rdi
  int v56; // edx
  __int64 v57; // rax
  signed __int32 v58; // eax
  __m128i v59; // xmm6
  __int64 *v61; // [rsp+10h] [rbp-358h] BYREF
  std::_V2 *p_ptr; // [rsp+18h] [rbp-350h]
  __m128i si128; // [rsp+20h] [rbp-348h] BYREF
  _QWORD *v64; // [rsp+30h] [rbp-338h]
  __int64 v65; // [rsp+38h] [rbp-330h]
  _QWORD *v66; // [rsp+40h] [rbp-328h]
  _QWORD *v67; // [rsp+48h] [rbp-320h]
  void **v68; // [rsp+50h] [rbp-318h]
  void *src; // [rsp+58h] [rbp-310h]
  void **v70; // [rsp+60h] [rbp-308h]
  int (**v71)(pthread_key_t *, void (*)(void *)); // [rsp+68h] [rbp-300h]
  __m128 v72; // [rsp+70h] [rbp-2F8h] BYREF
  int v73; // [rsp+80h] [rbp-2E8h] BYREF
  __int64 v74; // [rsp+88h] [rbp-2E0h]
  void *v75[2]; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v76; // [rsp+A0h] [rbp-2C8h] BYREF
  void *v77; // [rsp+B0h] [rbp-2B8h] BYREF
  size_t n; // [rsp+B8h] [rbp-2B0h]
  __int64 v79; // [rsp+C0h] [rbp-2A8h] BYREF
  _QWORD v80[4]; // [rsp+D0h] [rbp-298h] BYREF
  __int16 v81; // [rsp+F0h] [rbp-278h]
  _QWORD v82[4]; // [rsp+100h] [rbp-268h] BYREF
  __int16 v83; // [rsp+120h] [rbp-248h]
  _OWORD v84[2]; // [rsp+130h] [rbp-238h] BYREF
  __int16 v85; // [rsp+150h] [rbp-218h]
  void *v86; // [rsp+160h] [rbp-208h] BYREF
  __int64 v87; // [rsp+168h] [rbp-200h]
  _BYTE v88[16]; // [rsp+170h] [rbp-1F8h] BYREF
  __int64 v89; // [rsp+180h] [rbp-1E8h]
  int v90; // [rsp+188h] [rbp-1E0h]
  _BYTE v91[12]; // [rsp+18Ch] [rbp-1DCh] BYREF
  _BYTE v92[16]; // [rsp+1A0h] [rbp-1C8h] BYREF
  void *v93[2]; // [rsp+1B0h] [rbp-1B8h] BYREF
  _BYTE v94[16]; // [rsp+1C0h] [rbp-1A8h] BYREF
  void *v95[2]; // [rsp+1D0h] [rbp-198h] BYREF
  _QWORD v96[2]; // [rsp+1E0h] [rbp-188h] BYREF
  void *ptr; // [rsp+1F0h] [rbp-178h] BYREF
  __m128i v98; // [rsp+1F8h] [rbp-170h]
  _BYTE v99[136]; // [rsp+208h] [rbp-160h] BYREF
  _BYTE v100[24]; // [rsp+290h] [rbp-D8h] BYREF
  int v101; // [rsp+2A8h] [rbp-C0h] BYREF
  __int64 v102; // [rsp+2B0h] [rbp-B8h]
  unsigned int v103; // [rsp+2B8h] [rbp-B0h]
  void *v104; // [rsp+2C0h] [rbp-A8h] BYREF
  __int64 v105; // [rsp+2D0h] [rbp-98h] BYREF
  void *v106; // [rsp+2E0h] [rbp-88h] BYREF
  __int64 v107; // [rsp+2F0h] [rbp-78h] BYREF
  void *v108[2]; // [rsp+300h] [rbp-68h] BYREF
  __int64 v109; // [rsp+310h] [rbp-58h] BYREF

  v3 = a1;
  v65 = a3;
  *(_QWORD *)v100 = 0xBEF00000BEDLL;
  *(_DWORD *)&v100[8] = 3052;
  v4 = sub_2193060(a2, v100, 3);
  v5 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)&v100[16] = 0xBEF00000BEDLL;
  v101 = 3052;
  v6 = (__int64 *)(v5 + 8LL * (unsigned int)v4);
  v7 = (__int64 *)(v5 + 8 * HIDWORD(v4));
  v61 = v7;
  *(__m128 *)v100 = _mm_loadh_ps((const double *)&v61);
  if ( v6 == v7 )
    goto LABEL_9;
  v61 = a1;
  while ( 1 )
  {
    v8 = *v6;
    v9 = v100;
    if ( *v6 )
      break;
LABEL_7:
    *(_QWORD *)v100 = ++v6;
    if ( v7 == v6 )
    {
      v3 = v61;
      goto LABEL_9;
    }
  }
  while ( 1 )
  {
    v10 = *((unsigned int *)v9 + 4);
    if ( !(_DWORD)v10 )
      goto LABEL_7;
    if ( (unsigned __int8)sub_2195AD0(v8, v10) )
      break;
    v9 += 4;
    if ( v9 == &v100[12] )
      goto LABEL_7;
  }
  v3 = v61;
  v61 = v7;
  *(_QWORD *)&v100[16] = 0xBEF00000BEDLL;
  v101 = 3052;
  *(__m128 *)v100 = _mm_loadh_ps((const double *)&v61);
  if ( v6 == v7 )
  {
LABEL_9:
    v11 = (_QWORD *)v3[1];
    v12 = (_BYTE *)v3[2];
    v13 = v3[3];
    v70 = v75;
    v67 = v11;
    v75[0] = &v76;
    sub_115A670(v75, v12, (__int64)&v12[v13]);
    v14 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v3 + 608))(v3, a2);
    if ( v14 )
    {
      if ( v14 == 1 )
        (*(void (__fastcall **)(__int64 *, __int64, __int64))(*v3 + 776))(v3, a2, v65);
      v68 = &v77;
LABEL_13:
      v15 = v68;
      (*(void (__fastcall **)(void **, __int64 *))(*v3 + 552))(v68, v3);
      if ( !n )
      {
        v16 = v77;
        if ( v77 == v15 + 2 )
          goto LABEL_16;
        goto LABEL_15;
      }
      sub_115E7A0(&v72, (__int64)v3);
      v66 = (_QWORD *)v72.m128_u64[1];
      if ( v72.m128_u64[1] == v72.m128_u64[0] )
      {
LABEL_81:
        v16 = v77;
        if ( v77 == v68 + 2 )
        {
LABEL_16:
          if ( v75[0] != v70 + 2 )
            operator delete(v75[0]);
          return;
        }
LABEL_15:
        operator delete(v16);
        goto LABEL_16;
      }
      v22 = v72.m128_u64[0] - 192;
      v61 = (__int64 *)v84;
      p_ptr = (std::_V2 *)&ptr;
      v64 = v82;
      si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
      while ( 1 )
      {
        v23 = _mm_load_si128(&si128);
        v24 = n;
        ptr = v99;
        v25 = v77;
        v98 = v23;
        if ( n > 0x80 )
        {
          src = v77;
          sub_22130D0(p_ptr, v99, n, 1);
          v25 = src;
          v55 = (char *)ptr + v98.m128i_i64[0];
        }
        else
        {
          if ( !n )
            goto LABEL_35;
          v55 = v99;
        }
        memcpy(v55, v25, v24);
        v24 += v98.m128i_i64[0];
LABEL_35:
        LOWORD(v89) = 257;
        v85 = 257;
        LOWORD(v102) = 257;
        v83 = 260;
        v98.m128i_i64[0] = v24;
        v82[0] = v22;
        sub_2266670(p_ptr, v64, v61, &v86, v100);
        v26 = (*(__int64 (__fastcall **)(__int64 *, __int64))(*v3 + 608))(v3, a2);
        if ( v26 )
        {
          if ( v26 != 1 )
            goto LABEL_77;
          v27 = p_ptr;
          *(_QWORD *)&v84[0] = "c++";
          LOWORD(v102) = 257;
          LOWORD(v89) = 257;
          v85 = 259;
          v82[0] = "include";
          v83 = 259;
          sub_2266670(p_ptr, v64, v61, &v86, v100);
          v73 = 0;
          v28 = std::_V2::system_category(v27);
          *(_QWORD *)v91 = 0;
          v74 = v28;
          v96[1] = 0;
          memset(&v91[4], 0, 8LL * ((v29 + 396 - (unsigned int)&v91[4] + 100) >> 3));
          v89 = -1;
          v90 = -1;
          v86 = v88;
          v30 = j__strlen(&byte_22CD811);
          sub_115A880(&v86, &byte_22CD811, (__int64)(&byte_22CD811 + v30));
          *(_QWORD *)&v91[4] = v92;
          v31 = j__strlen(&byte_22CD811);
          sub_115A880(&v91[4], &byte_22CD811, (__int64)(&byte_22CD811 + v31));
          v93[0] = v94;
          v32 = j__strlen(&byte_22CD811);
          sub_115A880(v93, &byte_22CD811, (__int64)(&byte_22CD811 + v32));
          v95[0] = v96;
          v33 = j__strlen(&byte_22CD811);
          sub_115A880(v95, &byte_22CD811, (__int64)(&byte_22CD811 + v33));
          v34 = v67[1];
          v35 = *(void (__fastcall **)(__int64 *, __int64, _BYTE *, int *))(*(_QWORD *)v34 + 64LL);
          LOWORD(v102) = 261;
          *(_QWORD *)v100 = ptr;
          *(_QWORD *)&v100[8] = v98.m128i_i64[0];
          v35(v61, v34, v100, &v73);
          while ( 1 )
          {
            while ( 1 )
            {
LABEL_38:
              if ( v73 || !*(_QWORD *)&v84[0] )
              {
                v47 = *((volatile signed __int32 **)&v84[0] + 1);
                if ( *((_QWORD *)&v84[0] + 1) )
                {
                  if ( &_pthread_key_create )
                  {
                    v48 = _InterlockedExchangeAdd(
                            (volatile signed __int32 *)(*((_QWORD *)&v84[0] + 1) + 8LL),
                            0xFFFFFFFF);
                  }
                  else
                  {
                    v48 = *(_DWORD *)(*((_QWORD *)&v84[0] + 1) + 8LL);
                    *(_DWORD *)(*((_QWORD *)&v84[0] + 1) + 8LL) = v48 - 1;
                  }
                  if ( v48 == 1 )
                  {
                    v57 = *(_QWORD *)v47;
                    src = &_pthread_key_create;
                    (*(void (__fastcall **)(volatile signed __int32 *))(v57 + 16))(v47);
                    if ( src )
                    {
                      v58 = _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF);
                    }
                    else
                    {
                      v58 = *((_DWORD *)v47 + 3);
                      *((_DWORD *)v47 + 3) = v58 - 1;
                    }
                    if ( v58 == 1 )
                      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 24LL))(v47);
                  }
                }
                if ( (_DWORD)v89 != -1 )
                {
                  v85 = 257;
                  v83 = 257;
                  v81 = 260;
                  LOWORD(v102) = 257;
                  v80[0] = &v86;
                  sub_2266670(p_ptr, v80, v64, v61, v100);
                  LOWORD(v102) = 261;
                  *(_QWORD *)v100 = ptr;
                  *(_QWORD *)&v100[8] = v98.m128i_i64[0];
                  sub_110BD40(a2, v65, (__int64)v100);
                }
                if ( v95[0] != v96 )
                  operator delete(v95[0]);
                if ( v93[0] != v94 )
                  operator delete(v93[0]);
                if ( *(_BYTE **)&v91[4] != v92 )
                  operator delete(*(void **)&v91[4]);
                if ( v86 != v88 )
                  operator delete(v86);
                goto LABEL_77;
              }
              v36 = sub_2266D20(*(_QWORD *)(*(_QWORD *)&v84[0] + 8LL), *(_QWORD *)(*(_QWORD *)&v84[0] + 16LL), 0);
              sub_11FCB30(v100, v36);
              if ( (_DWORD)v102 != -1
                && (unsigned __int8)sub_11F0270(&v86, (unsigned int)v102, HIDWORD(v102), v103, v108[0], v108[1]) )
              {
                sub_9CAB60((__int64)&v86, (__int64)v100);
                v89 = v102;
                v90 = v103;
                sub_9CAB60((__int64)&v91[4], (__int64)&v104);
                sub_9CAB60((__int64)v93, (__int64)&v106);
                sub_9CAB60((__int64)v95, (__int64)v108);
              }
              if ( v108[0] != &v109 )
                operator delete(v108[0]);
              if ( v106 != &v107 )
                operator delete(v106);
              if ( v104 != &v105 )
                operator delete(v104);
              if ( *(_BYTE **)v100 != &v100[16] )
                operator delete(*(void **)v100);
              v73 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)&v84[0] + 16LL))(*(_QWORD *)&v84[0]);
              v74 = v37;
              if ( !*(_QWORD *)(*(_QWORD *)&v84[0] + 16LL) )
              {
                v38 = *((volatile signed __int32 **)&v84[0] + 1);
                v84[0] = 0;
                if ( v38 )
                  break;
              }
            }
            if ( &_pthread_key_create )
            {
              if ( _InterlockedSub(v38 + 2, 1u) )
                goto LABEL_38;
            }
            else
            {
              v50 = *((_DWORD *)v38 + 2);
              *((_DWORD *)v38 + 2) = v50 - 1;
              if ( v50 != 1 )
                goto LABEL_38;
            }
            v39 = *(_QWORD *)v38;
            v71 = &_pthread_key_create;
            src = (void *)v38;
            (*(void (__fastcall **)(volatile signed __int32 *))(v39 + 16))(v38);
            v40 = src;
            if ( !v71 )
            {
              v56 = *((_DWORD *)src + 3);
              *((_DWORD *)src + 3) = v56 - 1;
              if ( v56 != 1 )
                goto LABEL_38;
LABEL_57:
              (*(void (__fastcall **)(void *))(*(_QWORD *)v40 + 24LL))(v40);
              goto LABEL_38;
            }
            if ( !_InterlockedSub((volatile signed __int32 *)src + 3, 1u) )
              goto LABEL_57;
          }
        }
        v51 = _mm_load_si128(&si128);
        *(_QWORD *)v100 = &v101;
        *(__m128i *)&v100[8] = v51;
        if ( v98.m128i_i64[0] )
          sub_9A0070((void **)v100, (const void **)p_ptr);
        v86 = "v1";
        *(_QWORD *)&v84[0] = "c++";
        v82[0] = "include";
        v85 = 259;
        v83 = 259;
        v80[0] = "usr";
        v81 = 259;
        LOWORD(v89) = 259;
        sub_2266670(v100, v80, v64, v61, &v86);
        v52 = v67[1];
        v53 = *(unsigned __int8 (__fastcall **)(__int64, void **))(*(_QWORD *)v52 + 96LL);
        LOWORD(v89) = 261;
        v86 = *(void **)v100;
        v87 = *(_QWORD *)&v100[8];
        if ( v53(v52, &v86) )
        {
          LOWORD(v89) = 261;
          v86 = *(void **)v100;
          v54 = *(_QWORD *)&v100[8];
        }
        else
        {
          LOWORD(v89) = 257;
          *(_QWORD *)&v84[0] = "v1";
          v83 = 259;
          v85 = 259;
          v82[0] = "c++";
          v81 = 259;
          v80[0] = "include";
          sub_2266670(p_ptr, v80, v64, v61, &v86);
          LOWORD(v89) = 261;
          v86 = ptr;
          v54 = v98.m128i_i64[0];
        }
        v87 = v54;
        sub_110BD40(a2, v65, (__int64)&v86);
        if ( *(int **)v100 != &v101 )
          free(*(void **)v100);
LABEL_77:
        if ( ptr == v99 )
        {
          v49 = v22 - 192;
          if ( v66 == (_QWORD *)v22 )
            goto LABEL_81;
        }
        else
        {
          free(ptr);
          v49 = v22 - 192;
          if ( v66 == (_QWORD *)v22 )
            goto LABEL_81;
        }
        v22 = v49;
      }
    }
    p_ptr = (std::_V2 *)&ptr;
    v41 = (_BYTE *)v67[13];
    v42 = v67[14];
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    v98 = si128;
    ptr = v99;
    sub_9FC110(&ptr, v41, &v41[v42]);
    LOWORD(v102) = 257;
    LOWORD(v89) = 257;
    *(_QWORD *)&v84[0] = "include";
    v82[0] = "..";
    v85 = 259;
    v83 = 259;
    v61 = (__int64 *)v84;
    v64 = v82;
    sub_2266670(&ptr, v82, v84, &v86, v100);
    v43 = *v3;
    v44 = v98.m128i_i64[0];
    v45 = ptr;
    v68 = &v77;
    (*(void (__fastcall **)(void **, __int64 *, void *, __int64))(v43 + 624))(&v77, v3, ptr, v98.m128i_i64[0]);
    if ( n )
    {
      *(__m128i *)&v100[8] = _mm_load_si128(&si128);
      *(_QWORD *)v100 = &v101;
      src = &v101;
      sub_9FC110(v100, v45, &v45[v44]);
      v85 = 260;
      LOWORD(v89) = 257;
      *(_QWORD *)&v84[0] = v68;
      v83 = 259;
      v81 = 260;
      v82[0] = "c++";
      v80[0] = v70;
      v66 = v80;
      sub_2266670(v100, v80, v64, v61, &v86);
      LOWORD(v89) = 261;
      v86 = *(void **)v100;
      v87 = *(_QWORD *)&v100[8];
      sub_110BD40(a2, v65, (__int64)&v86);
      if ( *(void **)v100 != src )
        free(*(void **)v100);
      v59 = _mm_load_si128(&si128);
      *(_QWORD *)v100 = &v101;
      *(__m128i *)&v100[8] = v59;
      src = &v101;
      sub_9FC110(v100, v45, &v45[v44]);
      v82[0] = v68;
      LOWORD(v89) = 257;
      v85 = 257;
      v83 = 260;
      v80[0] = "c++";
      v81 = 259;
      sub_2266670(v100, v66, v64, v61, &v86);
      LOWORD(v89) = 261;
      v86 = *(void **)v100;
      v87 = *(_QWORD *)&v100[8];
      sub_110BD40(a2, v65, (__int64)&v86);
      if ( *(void **)v100 != src )
        free(*(void **)v100);
      v46 = v77;
      if ( v77 == v68 + 2 )
        goto LABEL_61;
    }
    else
    {
      v46 = v77;
      if ( v77 == &v79 )
        goto LABEL_61;
    }
    operator delete(v46);
LABEL_61:
    if ( ptr != (char *)p_ptr + 24 )
      free(ptr);
    goto LABEL_13;
  }
LABEL_20:
  v17 = *v6;
  if ( *(_QWORD *)(*v6 + 16) )
    v17 = *(_QWORD *)(*v6 + 16);
  v18 = v6 + 1;
  *(_BYTE *)(v17 + 44) |= 1u;
  for ( *(_QWORD *)v100 = v18; v7 != v18; *(_QWORD *)v100 = v18 )
  {
    v19 = *v18;
    v20 = v100;
    if ( *v18 )
    {
      do
      {
        v21 = *((unsigned int *)v20 + 4);
        if ( !(_DWORD)v21 )
          break;
        if ( (unsigned __int8)sub_2195AD0(v19, v21) )
        {
          v6 = *(__int64 **)v100;
          if ( v7 != *(__int64 **)v100 )
            goto LABEL_20;
          return;
        }
        v20 += 4;
      }
      while ( &v100[12] != v20 );
    }
    ++v18;
  }
}

