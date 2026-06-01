__int64 __fastcall sub_10C03A0(__int64 *a1, _BYTE *a2, void *a3, __int64 a4)
{
  __int64 v7; // rsi
  __m128i *v8; // rbx
  void (__fastcall *v9)(void **, __int64, void **); // rax
  unsigned int v10; // ebp
  char *v11; // r15
  char *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  _BYTE *v15; // rbp
  __int64 v16; // r14
  __int64 v18; // rdx
  void *v19; // rsi
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rdx
  __m128i v25; // xmm0
  unsigned __int64 i; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  void *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __m128i v34; // xmm0
  unsigned __int64 j; // rax
  __int64 v36; // rdx
  bool v37; // zf
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __m128i v42; // xmm0
  char ***m; // rax
  __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdx
  __m128i v48; // xmm0
  char ***k; // rax
  _BYTE *v50; // rsi
  __int64 v51; // rdx
  __m128i v52; // [rsp+30h] [rbp-608h] BYREF
  unsigned __int8 v53; // [rsp+4Fh] [rbp-5E9h] BYREF
  __m128 v54; // [rsp+50h] [rbp-5E8h] BYREF
  int v55; // [rsp+60h] [rbp-5D8h]
  void *v56[2]; // [rsp+70h] [rbp-5C8h] BYREF
  _DWORD v57[18]; // [rsp+80h] [rbp-5B8h] BYREF
  char v58; // [rsp+C8h] [rbp-570h]
  void *ptr; // [rsp+D0h] [rbp-568h] BYREF
  __m128i si128; // [rsp+D8h] [rbp-560h]
  _BYTE v61[136]; // [rsp+E8h] [rbp-550h] BYREF
  void *v62; // [rsp+170h] [rbp-4C8h]
  __int64 v63; // [rsp+178h] [rbp-4C0h]
  _BYTE v64[256]; // [rsp+180h] [rbp-4B8h] BYREF
  void *v65; // [rsp+280h] [rbp-3B8h] BYREF
  __int64 v66; // [rsp+288h] [rbp-3B0h]
  _BYTE v67[256]; // [rsp+290h] [rbp-3A8h] BYREF
  void *v68; // [rsp+390h] [rbp-2A8h] BYREF
  signed __int64 v69; // [rsp+398h] [rbp-2A0h]
  _BYTE v70[256]; // [rsp+3A0h] [rbp-298h] BYREF
  void *v71[2]; // [rsp+4A0h] [rbp-198h] BYREF
  int v72; // [rsp+4B0h] [rbp-188h]
  __int16 v73; // [rsp+4C0h] [rbp-178h]

  v7 = a1[1];
  v8 = (__m128i *)v71;
  v9 = *(void (__fastcall **)(void **, __int64, void **))(*(_QWORD *)v7 + 40LL);
  v73 = 261;
  v71[1] = a3;
  v71[0] = a2;
  v9(v56, v7, v71);
  v10 = v58 & 1;
  if ( (v58 & 1) == 0 )
  {
    if ( v57[14] != 2 )
    {
      v10 = 1;
      sub_FA3370((__int64)v71, *a1, 0, 329);
      sub_AC84E0((unsigned __int8 **)v71, a2, (signed __int64)a3);
      sub_10B4AF0((unsigned __int8 **)v71, (__int64)"not a regular file");
      sub_AC6300((__int64)v71);
      goto LABEL_24;
    }
    v62 = v64;
    v63 = 0x2000000000LL;
    sub_21F2A00(&ptr, a4, a2, a3);
    if ( ptr )
    {
      sub_FA3370((__int64)v71, *a1, 0, 331);
      sub_AC84E0((unsigned __int8 **)v71, a2, (signed __int64)a3);
      v29 = ptr;
      ptr = nullptr;
      v65 = v29;
      sub_21FD4D0(&v68, &v65);
      sub_AC84E0((unsigned __int8 **)v71, v68, v69);
      if ( v68 != v70 )
        operator delete(v68);
      if ( v65 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v65 + 8LL))(v65);
      sub_AC6300((__int64)v71);
      if ( ptr )
        (*(void (__fastcall **)(void *))(*(_QWORD *)ptr + 8LL))(ptr);
      v10 = 1;
      goto LABEL_21;
    }
    v11 = (char *)v62;
    v66 = 0x2000000000LL;
    v68 = v70;
    v69 = 0x2000000000LL;
    v65 = v67;
    v52.m128i_i64[1] = (__int64)v67;
    if ( v62 != (char *)v62 + 8 * (unsigned int)v63 )
    {
      v52.m128i_i64[0] = (__int64)v71;
      v12 = (char *)v62 + 8 * (unsigned int)v63;
      do
      {
        while ( 1 )
        {
          v15 = *(_BYTE **)v11;
          if ( **(_BYTE **)v11 != 36 || !v15[1] )
            break;
          v11 += 8;
          sub_10B8890((__int64)&v68, (__int64)(v15 + 1));
          if ( v12 == v11 )
            goto LABEL_12;
        }
        v13 = (unsigned int)v66;
        v14 = (unsigned int)v66 + 1LL;
        if ( v14 > HIDWORD(v66) )
        {
          sub_22134E0(&v65, v52.m128i_i64[1], v14, 8);
          v13 = (unsigned int)v66;
        }
        v11 += 8;
        *((_QWORD *)v65 + v13) = v15;
        LODWORD(v66) = v66 + 1;
      }
      while ( v12 != v11 );
LABEL_12:
      v8 = (__m128i *)v52.m128i_i64[0];
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_2384D00);
    ptr = v61;
    sub_9FC110(&ptr, a2, (_BYTE *)a3 + (_QWORD)a2);
    sub_226B210(&ptr, 0);
    v53 = 0;
    sub_10BDD60((__int64)v8, (__int64)a1, (__int64)v65, v66, 1, &v53);
    v16 = operator new(0x160u);
    sub_10BC6A0(v16, (__int64)v8);
    sub_10B6A80(v8);
    v10 = v53;
    if ( v53 )
    {
LABEL_14:
      sub_10B6A80((_QWORD *)v16);
      operator delete((void *)v16, 0x160u);
LABEL_15:
      if ( ptr != v61 )
        free(ptr);
      if ( v68 != v70 )
        free(v68);
      if ( v65 != v67 )
        free(v65);
LABEL_21:
      if ( v62 != v64 )
        free(v62);
      goto LABEL_24;
    }
    sub_10BDD60((__int64)v8, (__int64)a1, (__int64)v68, v69, 1, &v53);
    v20 = operator new(0x160u);
    sub_10BC6A0(v20, (__int64)v8);
    sub_10B6A80(v8);
    v10 = v53;
    if ( !v53 )
    {
      v21 = *(unsigned int *)(v16 + 16);
      v22 = *(_QWORD *)(v16 + 8);
      v55 = 0;
      v52.m128i_i64[0] = v22 + 8 * v21;
      v54 = _mm_loadh_ps((const double *)v52.m128i_i64);
      sub_10B4AC0(&v54, v52.m128i_i64[0]);
      v23 = *(_QWORD *)(v16 + 8);
      v24 = *(unsigned int *)(v16 + 16);
      v72 = 0;
      v52.m128i_i64[0] = v23 + 8 * v24;
      v25 = _mm_loadl_epi64(&v52);
      *(__m128i *)v71 = _mm_unpacklo_epi64(v25, v25);
      sub_10B4AC0(v8, v52.m128i_i64[0]);
      for ( i = v54.m128_u64[0]; (void *)v54.m128_u64[0] != v71[0]; i = v54.m128_u64[0] )
      {
        v27 = *(_QWORD *)(*(_QWORD *)i + 16LL);
        if ( v27 )
          *(_BYTE *)(v27 + 44) |= 1u;
        else
          *(_BYTE *)(*(_QWORD *)i + 44LL) |= 1u;
        v54.m128_u64[0] = i + 8;
        sub_10B4AC0(&v54, (_QWORD *)v54.m128_u64[1]);
      }
      v30 = *(unsigned int *)(v20 + 16);
      v31 = *(_QWORD *)(v20 + 8);
      v55 = 0;
      v52.m128i_i64[0] = v31 + 8 * v30;
      v54 = _mm_loadh_ps((const double *)v52.m128i_i64);
      sub_10B4AC0(&v54, v52.m128i_i64[0]);
      v32 = *(_QWORD *)(v20 + 8);
      v33 = *(unsigned int *)(v20 + 16);
      v72 = 0;
      v52.m128i_i64[0] = v32 + 8 * v33;
      v34 = _mm_loadl_epi64(&v52);
      *(__m128i *)v71 = _mm_unpacklo_epi64(v34, v34);
      sub_10B4AC0(v8, v52.m128i_i64[0]);
      for ( j = v54.m128_u64[0]; (void *)v54.m128_u64[0] != v71[0]; j = v54.m128_u64[0] )
      {
        while ( 1 )
        {
          v36 = *(_QWORD *)(*(_QWORD *)j + 16LL);
          if ( !v36 )
            break;
          *(_BYTE *)(v36 + 44) |= 1u;
          v54.m128_u64[0] = j + 8;
          sub_10B4AC0(&v54, (_QWORD *)v54.m128_u64[1]);
          j = v54.m128_u64[0];
          if ( v71[0] == (void *)v54.m128_u64[0] )
            goto LABEL_51;
        }
        *(_BYTE *)(*(_QWORD *)j + 44LL) |= 1u;
        v54.m128_u64[0] = j + 8;
        sub_10B4AC0(&v54, (_QWORD *)v54.m128_u64[1]);
      }
LABEL_51:
      if ( a1[142] )
      {
        v44 = *(unsigned int *)(v16 + 16);
        v45 = *(_QWORD *)(v16 + 8);
        v55 = 0;
        v52.m128i_i64[0] = v45 + 8 * v44;
        v54 = _mm_loadh_ps((const double *)v52.m128i_i64);
        sub_10B4AC0(&v54, v52.m128i_i64[0]);
        v46 = *(_QWORD *)(v16 + 8);
        v47 = *(unsigned int *)(v16 + 16);
        v72 = 0;
        v52.m128i_i64[0] = v46 + 8 * v47;
        v48 = _mm_loadl_epi64(&v52);
        *(__m128i *)v71 = _mm_unpacklo_epi64(v48, v48);
        sub_10B4AC0(v8, v52.m128i_i64[0]);
        for ( k = (char ***)v54.m128_u64[0]; (void *)v54.m128_u64[0] != v71[0]; k = (char ***)v54.m128_u64[0] )
        {
          sub_10BB110(a1[142], *k);
          v54.m128_u64[0] += 8LL;
          sub_10B4AC0(&v54, (_QWORD *)v54.m128_u64[1]);
        }
      }
      else
      {
        a1[142] = v16;
        v16 = 0;
      }
      v37 = a1[143] == 0;
      v52.m128i_i64[0] = (__int64)(a1 + 126);
      if ( v37 )
      {
        v50 = ptr;
        v51 = si128.m128i_i64[0];
        a1[143] = v20;
        v71[0] = &v8[1];
        sub_10B5070(v8, v50, (__int64)&v50[v51]);
        sub_A5EF20(v52.m128i_i64[0], v8);
        if ( v71[0] != &v8[1] )
          operator delete(v71[0]);
LABEL_59:
        if ( !v16 )
          goto LABEL_15;
        goto LABEL_14;
      }
      v38 = *(unsigned int *)(v20 + 16);
      v39 = *(_QWORD *)(v20 + 8);
      v55 = 0;
      v52.m128i_i64[1] = v39 + 8 * v38;
      v54 = _mm_loadh_ps((const double *)&v52.m128i_i64[1]);
      sub_10B4AC0(&v54, (_QWORD *)v52.m128i_i64[1]);
      v40 = *(_QWORD *)(v20 + 8);
      v41 = *(unsigned int *)(v20 + 16);
      v72 = 0;
      v52.m128i_i64[1] = v40 + 8 * v41;
      v42 = _mm_loadl_epi64((const __m128i *)&v52.m128i_u64[1]);
      *(__m128i *)v71 = _mm_unpacklo_epi64(v42, v42);
      sub_10B4AC0(v8, (_QWORD *)v52.m128i_i64[1]);
      for ( m = (char ***)v54.m128_u64[0]; (void *)v54.m128_u64[0] != v71[0]; m = (char ***)v54.m128_u64[0] )
      {
        sub_10BB110(a1[143], *m);
        v54.m128_u64[0] += 8LL;
        sub_10B4AC0(&v54, (_QWORD *)v54.m128_u64[1]);
      }
      v71[0] = &v8[1];
      sub_10B5070(v8, ptr, (__int64)ptr + si128.m128i_i64[0]);
      sub_A5EF20(v52.m128i_i64[0], v8);
      if ( v71[0] != &v8[1] )
        operator delete(v71[0]);
    }
    sub_10B6A80((_QWORD *)v20);
    operator delete((void *)v20, 0x160u);
    goto LABEL_59;
  }
  sub_FA3370((__int64)v71, *a1, 0, 329);
  sub_AC84E0((unsigned __int8 **)v71, a2, (signed __int64)a3);
  if ( (v58 & 1) != 0 )
  {
    v18 = LODWORD(v56[0]);
    v19 = v56[1];
  }
  else
  {
    v28 = std::_V2::system_category((std::_V2 *)v71);
    v18 = 0;
    v19 = (void *)v28;
  }
  (*(void (__fastcall **)(void **, void *, __int64))(*(_QWORD *)v19 + 32LL))(&v68, v19, v18);
  sub_AC84E0((unsigned __int8 **)v71, v68, v69);
  if ( v68 != v70 )
    operator delete(v68);
  sub_AC6300((__int64)v71);
LABEL_24:
  if ( (v58 & 1) == 0 && v56[0] != v57 )
    operator delete(v56[0]);
  return v10;
}

