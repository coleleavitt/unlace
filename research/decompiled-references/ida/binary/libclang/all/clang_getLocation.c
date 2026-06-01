__int64 __fastcall clang_getLocation(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, __int32 a5)
{
  unsigned __int64 v6; // rbp
  __int8 v8; // r9
  size_t v10; // rax
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // xmm0
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r13
  unsigned __int64 v21; // rsi
  __int64 v22; // rax
  int v23; // eax
  __int32 v24; // r8d
  int v25; // r12d
  __int64 j; // rax
  unsigned __int64 v27; // rax
  size_t v28; // r11
  _QWORD *v29; // rax
  __m128i v30; // xmm0
  __int64 (*v31)(); // rsi
  _BYTE *v32; // rbp
  bool v33; // r12
  __int64 v34; // rbp
  __int64 v35; // rax
  __int64 v36; // rdx
  __m128i si128; // xmm0
  __m128i v38; // xmm0
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  bool v47; // zf
  __m128i v48; // xmm1
  __int64 i; // rax
  unsigned __int64 v50; // rax
  size_t v51; // r11
  _QWORD *v52; // rax
  __m128i v53; // xmm0
  __int64 v54; // rax
  __int128 v55; // xmm1
  __int64 v56; // rdx
  __int64 v57; // rcx
  int v58; // r8d
  int v59; // r9d
  __m128i v60; // xmm2
  __int64 v61; // rdi
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  int v65; // eax
  __int64 v66; // rdi
  __int64 v67; // rdi
  _QWORD *v68; // rdi
  _QWORD *v69; // rdi
  void *v70; // rax
  void *v71; // rax
  __m128i v72; // [rsp+20h] [rbp-F8h] BYREF
  __int64 v73; // [rsp+38h] [rbp-E0h]
  __m128i v74; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v75; // [rsp+50h] [rbp-C8h] BYREF
  __m128i v76; // [rsp+60h] [rbp-B8h] BYREF
  __m128i v77[2]; // [rsp+70h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+90h] [rbp-88h]
  void *v79; // [rsp+A0h] [rbp-78h]
  size_t v80; // [rsp+A8h] [rbp-70h]
  _QWORD dest[2]; // [rsp+B0h] [rbp-68h] BYREF
  __m128i v82; // [rsp+C0h] [rbp-58h] BYREF
  __int32 v83; // [rsp+D0h] [rbp-48h]
  unsigned int v84; // [rsp+D4h] [rbp-44h]
  void *v85; // [rsp+D8h] [rbp-40h]

  if ( !a2 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v32 = (_BYTE *)qword_4AD21C8;
    v33 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v33 = *v32 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v82.m128i_i64[0] = 17;
      v34 = operator new(0xC0u);
      *(_DWORD *)v34 = 0;
      *(_QWORD *)(v34 + 8) = v34 + 24;
      v35 = std::string::_M_create();
      v36 = v82.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E590);
      *(_QWORD *)(v34 + 8) = v35;
      *(_QWORD *)(v34 + 24) = v36;
      *(__m128i *)v35 = si128;
      v38 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_BYTE *)(v35 + 16) = 110;
      v39 = v82.m128i_i64[0];
      v40 = *(_QWORD *)(v34 + 8);
      *(_QWORD *)(v34 + 16) = v82.m128i_i64[0];
      *(_BYTE *)(v40 + v39) = 0;
      *(_QWORD *)(v34 + 48) = v34 + 72;
      *(_BYTE *)(v34 + 40) = v33;
      *(__m128i *)(v34 + 56) = v38;
      *(_QWORD *)(v34 + 136) = &off_49DA340;
      *(_QWORD *)(v34 + 184) = v34 + 48;
      *(_DWORD *)(v34 + 144) = 2;
      *(_BYTE *)(v34 + 176) = 0;
      *(_DWORD *)(v34 + 180) = 1;
      *(_QWORD *)(v34 + 168) = 0;
      *(_OWORD *)(v34 + 152) = 0;
      sub_2623850(v34 + 136, 0, 0, 0, v41, v42);
      v43 = *(_QWORD *)(v34 + 168);
      v44 = *(_QWORD *)(v34 + 160);
      ++*(_DWORD *)v34;
      if ( (unsigned __int64)(v44 - v43) <= 0x15 )
      {
        sub_26240F0(v34 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v43 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v43 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v34 + 168) += 22LL;
      }
      sub_60BBA0(v34, 0);
      v47 = (*(_DWORD *)v34)-- == 1;
      if ( v47 )
      {
        sub_60C330((pthread_mutex_t *)v34, nullptr, v45, v46);
        operator delete((void *)v34, 0xC0u);
      }
    }
    goto LABEL_4;
  }
  v6 = a3;
  if ( !a3 || (v8 = a5 == 0 || a4 == 0) != 0 )
  {
LABEL_4:
    *(_DWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    return a1;
  }
  if ( !(_BYTE)qword_4AD21C0 )
  {
    LODWORD(v73) = a5;
    v72.m128i_i8[0] = a5 == 0 || a4 == 0;
    v65 = __cxa_guard_acquire(&qword_4AD21C0);
    v8 = v72.m128i_i8[0];
    a5 = v73;
    if ( v65 )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
      a5 = v73;
      v8 = v72.m128i_i8[0];
    }
  }
  if ( qword_4AD21C8 )
  {
    LODWORD(v73) = a5;
    v72.m128i_i8[0] = v8;
    v76.m128i_i64[0] = qword_4AD21C8;
    v10 = strlen((const char *)qword_4AD21C8);
    v8 = v72.m128i_i8[0];
    a5 = v73;
    if ( v10 == 1 )
      v8 = *(_BYTE *)v76.m128i_i64[0] == 50;
  }
  if ( !(_BYTE)qword_4AD21C0 )
  {
    LODWORD(v73) = a5;
    v72.m128i_i8[0] = v8;
    v64 = __cxa_guard_acquire(&qword_4AD21C0);
    v8 = v72.m128i_i8[0];
    a5 = v73;
    if ( v64 )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
      a5 = v73;
      v8 = v72.m128i_i8[0];
    }
  }
  v11 = qword_4AD21C8;
  v72.m128i_i8[0] = v8;
  if ( qword_4AD21C8 )
  {
    LODWORD(v73) = a5;
    v82.m128i_i64[0] = 17;
    v11 = operator new(0xC0u);
    *(_DWORD *)v11 = 0;
    *(_QWORD *)(v11 + 8) = v11 + 24;
    v12 = std::string::_M_create();
    v13 = v72.m128i_u8[0];
    v14 = v82.m128i_i64[0];
    v15 = _mm_load_si128((const __m128i *)&xmmword_3C7E590);
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(v11 + 24) = v14;
    *(__m128i *)v12 = v15;
    v16 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_BYTE *)(v12 + 16) = 110;
    v17 = v82.m128i_i64[0];
    v18 = *(_QWORD *)(v11 + 8);
    *(_QWORD *)(v11 + 16) = v82.m128i_i64[0];
    *(_BYTE *)(v18 + v17) = 0;
    *(_QWORD *)(v11 + 48) = v11 + 72;
    *(_BYTE *)(v11 + 40) = v13;
    *(__m128i *)(v11 + 56) = v16;
    *(_QWORD *)(v11 + 136) = &off_49DA340;
    *(_DWORD *)(v11 + 144) = 2;
    *(_BYTE *)(v11 + 176) = 0;
    *(_DWORD *)(v11 + 180) = 1;
    *(_QWORD *)(v11 + 168) = 0;
    *(_QWORD *)(v11 + 184) = v11 + 48;
    *(_OWORD *)(v11 + 152) = 0;
    sub_2623850(v11 + 136, 0, 0, 0, v19, v13);
    ++*(_DWORD *)v11;
    a5 = v73;
  }
  v20 = *(_QWORD *)(a2 + 8);
  v72.m128i_i32[0] = a5;
  v73 = v20 + 2048;
  nullsub_173(v20 + 2048);
  v21 = v6;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v21 + 8);
    if ( !v22 )
      break;
    v21 = v22 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v22 & 4) == 0 || !v21 )
      goto LABEL_17;
  }
  v21 = 0;
LABEL_17:
  v76.m128i_i64[0] = (__int64)off_49F48F8;
  v23 = sub_FEDD50(v20, v21, a4, v72.m128i_u32[0]);
  v24 = v72.m128i_i32[0];
  v25 = v23;
  if ( v23 )
  {
    v48 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v20 + 80) + 2152LL));
    v72 = v48;
    if ( !v11 )
    {
      v66 = v73;
      *(_DWORD *)(a1 + 16) = v23;
      *(__m128i *)a1 = v48;
      nullsub_174(v66);
      return a1;
    }
    for ( i = *(_QWORD *)(v6 + 8); i; i = *(_QWORD *)(v50 + 8) )
    {
      if ( (i & 4) == 0 )
        break;
      v50 = i & 0xFFFFFFFFFFFFFFF8LL;
      if ( !v50 )
        break;
      v6 = v50;
    }
    v51 = *(_QWORD *)v6;
    v79 = dest;
    v82.m128i_i64[0] = v51;
    if ( v51 > 0xF )
    {
      v76.m128i_i32[2] = v24;
      v75.m128i_i64[0] = v51;
      v77[0] = v48;
      v70 = (void *)std::string::_M_create();
      v51 = v75.m128i_i64[0];
      v79 = v70;
      v68 = v70;
      v24 = v76.m128i_i32[2];
      v48 = _mm_load_si128(v77);
      dest[0] = v82.m128i_i64[0];
    }
    else
    {
      if ( v51 == 1 )
      {
        LOBYTE(dest[0]) = *(_BYTE *)(v6 + 32);
LABEL_52:
        v52 = dest;
        goto LABEL_53;
      }
      if ( !v51 )
        goto LABEL_52;
      v68 = dest;
    }
    v76.m128i_i64[1] = (__int64)&v82;
    v74.m128i_i32[0] = v24;
    v75 = v48;
    memcpy(v68, (const void *)(v6 + 32), v51);
    v24 = v74.m128i_i32[0];
    v51 = v82.m128i_i64[0];
    v52 = v79;
    v48 = _mm_load_si128(&v75);
LABEL_53:
    v80 = v51;
    v53 = _mm_loadl_epi64(&v76);
    v31 = (__int64 (*)())&v82;
    *((_BYTE *)v52 + v51) = 0;
    v74 = v48;
    v83 = v24;
    v84 = a4;
    v85 = v79;
    v82 = _mm_unpacklo_epi64(v53, (__m128i)(unsigned __int64)"(\"%s\", %d, %d) = ");
    v54 = sub_60C310(v11, (__int64)&v82);
    v55 = (__int128)_mm_load_si128(&v74);
    LODWORD(v78) = v25;
    v77[1] = (__m128i)v55;
    sub_60BEB0(v54, (__int64)&v82, v56, v57, v58, v59, v55, v78);
    if ( v79 != dest )
    {
      v31 = (__int64 (*)())(dest[0] + 1LL);
      operator delete(v79, dest[0] + 1LL);
    }
    goto LABEL_55;
  }
  if ( !v11 )
  {
    v67 = v73;
    *(_DWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
    nullsub_174(v67);
    return a1;
  }
  for ( j = *(_QWORD *)(v6 + 8); j; j = *(_QWORD *)(v27 + 8) )
  {
    if ( (j & 4) == 0 )
      break;
    v27 = j & 0xFFFFFFFFFFFFFFF8LL;
    if ( !v27 )
      break;
    v6 = v27;
  }
  v28 = *(_QWORD *)v6;
  v79 = dest;
  v82.m128i_i64[0] = v28;
  if ( v28 > 0xF )
  {
    v75.m128i_i32[0] = v72.m128i_i32[0];
    v74.m128i_i64[0] = v28;
    v71 = (void *)std::string::_M_create();
    v28 = v74.m128i_i64[0];
    v79 = v71;
    v69 = v71;
    v24 = v72.m128i_i32[0];
    dest[0] = v82.m128i_i64[0];
    goto LABEL_70;
  }
  if ( v28 != 1 )
  {
    if ( !v28 )
      goto LABEL_26;
    v69 = dest;
LABEL_70:
    v74.m128i_i64[0] = (__int64)&v82;
    v72.m128i_i32[0] = v24;
    memcpy(v69, (const void *)(v6 + 32), v28);
    v24 = v72.m128i_i32[0];
    v28 = v82.m128i_i64[0];
    v29 = v79;
    goto LABEL_27;
  }
  LOBYTE(dest[0]) = *(_BYTE *)(v6 + 32);
LABEL_26:
  v29 = dest;
LABEL_27:
  v80 = v28;
  v30 = _mm_loadl_epi64(&v76);
  v31 = (__int64 (*)())&v82;
  *((_BYTE *)v29 + v28) = 0;
  v83 = v24;
  v84 = a4;
  v85 = v79;
  v82 = _mm_unpacklo_epi64(v30, (__m128i)(unsigned __int64)"(\"%s\", %d, %d) = invalid");
  sub_60C310(v11, (__int64)&v82);
  if ( v79 != dest )
  {
    v31 = (__int64 (*)())(dest[0] + 1LL);
    operator delete(v79, dest[0] + 1LL);
  }
  v72 = 0;
LABEL_55:
  v60 = _mm_load_si128(&v72);
  v61 = v73;
  *(_DWORD *)(a1 + 16) = v25;
  *(__m128i *)a1 = v60;
  nullsub_174(v61);
  v47 = (*(_DWORD *)v11)-- == 1;
  if ( v47 )
  {
    sub_60C330((pthread_mutex_t *)v11, v31, v62, v63);
    operator delete((void *)v11, 0xC0u);
  }
  return a1;
}

