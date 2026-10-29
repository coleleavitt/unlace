__int64 __fastcall clang_getCXTUResourceUsage(__int64 a1, __m128i *a2)
{
  __m128i *v3; // rbp
  _QWORD *v4; // r13
  __int64 v5; // rax
  __int64 v6; // rbp
  __m128i **v7; // rbx
  __int64 v8; // r9
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // ecx
  __int64 v13; // rax
  __int64 i; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  unsigned int v20; // ecx
  __int64 v21; // rax
  __int64 j; // rcx
  __m128i *v23; // rax
  bool v24; // zf
  __m128i *v25; // rax
  __int64 v26; // rax
  __m128i *v27; // rdx
  __m128i *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r9
  __m128i *v31; // rdx
  __m128i *v32; // rdx
  volatile signed __int32 *v33; // rdi
  __int64 v34; // r15
  volatile signed __int32 *v35; // rdx
  signed __int32 v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rsi
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned int v41; // ecx
  __int64 v42; // rax
  __int64 k; // rcx
  __m128i *v44; // r8
  __m128i *v45; // r11
  __m128i *v46; // r8
  __int64 v47; // r10
  __m128i *v48; // rsi
  __m128i *v49; // rdi
  __m128i *v50; // rdx
  __int64 v51; // rax
  unsigned int v52; // ecx
  __int64 v53; // rdx
  __int64 m; // rcx
  __m128i *v55; // r8
  __int64 v56; // rax
  __m128i *v57; // rcx
  __m128i *v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // r15
  __m128i *v61; // rax
  __m128i v62; // xmm0
  __m128i *v63; // rax
  __int64 v64; // rax
  __m128i *v65; // rdx
  __m128i *v66; // rdx
  __int64 v67; // rdi
  __int64 v68; // rcx
  __m128i *v69; // rax
  __m128i *v70; // rdx
  __int64 v71; // rbp
  __m128i *v72; // rax
  __m128i *v73; // rax
  __int64 v74; // rbp
  __int64 v75; // rax
  __m128i *v76; // rdx
  __m128i *v77; // rdx
  __int64 v78; // rax
  __m128i *v79; // rdx
  __m128i *v80; // rdx
  __int64 v81; // rax
  __m128i *v82; // rdx
  __m128i *v83; // rax
  __m128i v84; // xmm0
  __int64 v85; // rdx
  _BYTE *v87; // r15
  bool v88; // r13
  __int64 v89; // rbx
  __int64 v90; // rax
  __int64 v91; // rdx
  __m128i si128; // xmm0
  __int64 v93; // rax
  __int64 v94; // rdx
  __m128i v95; // xmm0
  __int64 v96; // r8
  __int64 v97; // r9
  __int64 v98; // rdx
  __int64 v99; // rax
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rax
  __m128i v103; // [rsp+10h] [rbp-48h] BYREF

  v3 = a2;
  if ( a2 )
  {
    v4 = (_QWORD *)a2->m128i_i64[1];
    v5 = operator new(0x18u);
    v6 = v4[10];
    *(_QWORD *)(v5 + 16) = 0;
    v7 = (__m128i **)v5;
    *(_OWORD *)v5 = 0;
    v8 = *(_QWORD *)(v6 + 2208);
    v9 = v8 + 8LL * *(unsigned int *)(v6 + 2216);
    if ( v8 == v9 )
    {
      v11 = 0;
    }
    else
    {
      v10 = *(_QWORD *)(v6 + 2208);
      v11 = 0;
      do
      {
        v12 = (unsigned int)((v10 - v8) >> 3) >> 7;
        if ( v12 > 0x1E )
          LOBYTE(v12) = 30;
        v10 += 8;
        v11 += 4096LL << v12;
      }
      while ( v9 != v10 );
    }
    v13 = *(_QWORD *)(v6 + 2256);
    for ( i = v13 + 16LL * *(unsigned int *)(v6 + 2264); i != v13; v13 += 16 )
      v11 += *(_QWORD *)(v13 + 8);
    v103.m128i_i64[1] = v11;
    v103.m128i_i32[0] = 1;
    sub_623240((__int64)v7, &v103);
    v15 = *(_QWORD *)(v6 + 17344);
    v16 = *(_QWORD *)(v15 + 40);
    v17 = v16 + 8LL * *(unsigned int *)(v15 + 48);
    if ( v16 == v17 )
    {
      v19 = 0;
    }
    else
    {
      v18 = *(_QWORD *)(v15 + 40);
      v19 = 0;
      do
      {
        v20 = (unsigned int)((v18 - v16) >> 3) >> 7;
        if ( v20 > 0x1E )
          LOBYTE(v20) = 30;
        v18 += 8;
        v19 += 4096LL << v20;
      }
      while ( v17 != v18 );
    }
    v21 = *(_QWORD *)(v15 + 88);
    for ( j = v21 + 16LL * *(unsigned int *)(v15 + 96); j != v21; v21 += 16 )
      v19 += *(_QWORD *)(v21 + 8);
    v23 = v7[1];
    v24 = v23 == v7[2];
    v103.m128i_i64[1] = v19;
    v103.m128i_i32[0] = 2;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v25 = v23 + 1;
      v25[-1] = _mm_load_si128(&v103);
      v7[1] = v25;
    }
    v26 = sub_C88300(*(_QWORD *)(v6 + 17352));
    v27 = v7[1];
    v24 = v27 == v7[2];
    v103.m128i_i32[0] = 3;
    v103.m128i_i64[1] = v26;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v28 = v27 + 1;
      v28[-1] = _mm_load_si128(&v103);
      v7[1] = v28;
    }
    v29 = sub_6CE6D0(v6);
    v31 = v7[1];
    v24 = v31 == v7[2];
    v103.m128i_i32[0] = 6;
    v103.m128i_i64[1] = v29;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v32 = v31 + 1;
      v32[-1] = _mm_load_si128(&v103);
      v7[1] = v32;
    }
    v33 = (volatile signed __int32 *)v4[245];
    v34 = v4[244];
    if ( v33 )
    {
      v35 = v33 + 2;
      if ( &_pthread_key_create )
        _InterlockedAdd(v33 + 2, 1u);
      else
        ++*((_DWORD *)v33 + 2);
      if ( *((_QWORD *)v33 + 1) == 0x100000001LL )
      {
        v102 = *(_QWORD *)v33;
        *((_QWORD *)v33 + 1) = 0;
        (*(void (__fastcall **)(volatile signed __int32 *, __int64, volatile signed __int32 *))(v102 + 16))(
          v33,
          0x100000001LL,
          v35);
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v33 + 24LL))(v33);
      }
      else
      {
        if ( &_pthread_key_create )
        {
          v36 = _InterlockedExchangeAdd(v35, 0xFFFFFFFF);
        }
        else
        {
          v36 = *((_DWORD *)v33 + 2);
          *((_DWORD *)v33 + 2) = v36 - 1;
        }
        if ( v36 == 1 )
          sub_6111C0(v33);
      }
    }
    v37 = 0;
    if ( v34 )
    {
      v38 = *(_QWORD *)(v34 + 16);
      v39 = v38 + 8LL * *(unsigned int *)(v34 + 24);
      if ( v38 != v39 )
      {
        v40 = *(_QWORD *)(v34 + 16);
        do
        {
          v30 = 30;
          v41 = (unsigned int)((v40 - v38) >> 3) >> 7;
          if ( v41 > 0x1E )
            LOBYTE(v41) = 30;
          v40 += 8;
          v37 += 4096LL << v41;
        }
        while ( v39 != v40 );
      }
      v42 = *(_QWORD *)(v34 + 64);
      for ( k = v42 + 16LL * *(unsigned int *)(v34 + 72); k != v42; v42 += 16 )
        v37 += *(_QWORD *)(v42 + 8);
    }
    v44 = v7[1];
    v45 = v7[2];
    v103.m128i_i64[1] = v37;
    v103.m128i_i32[0] = 4;
    if ( v44 == v45 )
    {
      sub_623240((__int64)v7, &v103);
      v46 = v7[1];
      v45 = v7[2];
    }
    else
    {
      v46 = v44 + 1;
      v46[-1] = _mm_load_si128(&v103);
      v7[1] = v46;
    }
    v47 = *(_QWORD *)(v6 + 2152);
    v48 = *(__m128i **)(v47 + 40);
    v49 = (__m128i *)((char *)v48 + 8 * *(unsigned int *)(v47 + 48));
    if ( v48 == v49 )
    {
      v51 = 0;
    }
    else
    {
      v50 = *(__m128i **)(v47 + 40);
      v51 = 0;
      v30 = 4096;
      do
      {
        v52 = (unsigned int)(((char *)v50 - (char *)v48) >> 3) >> 7;
        if ( v52 > 0x1E )
          LOBYTE(v52) = 30;
        v50 = (__m128i *)((char *)v50 + 8);
        v51 += 4096LL << v52;
      }
      while ( v49 != v50 );
    }
    v53 = *(_QWORD *)(v47 + 88);
    for ( m = v53 + 16LL * *(unsigned int *)(v47 + 96); m != v53; v53 += 16 )
      v51 += *(_QWORD *)(v53 + 8);
    v103.m128i_i32[0] = 5;
    v103.m128i_i64[1] = v51;
    if ( v45 == v46 )
    {
      v48 = &v103;
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v55 = v46 + 1;
      v55[-1] = _mm_load_si128(&v103);
      v7[1] = v55;
    }
    v56 = sub_CA9DF0(v4[4], v48, v53, m, v55, v30);
    v57 = v7[1];
    v58 = v7[2];
    v103.m128i_i32[0] = 7;
    v103.m128i_i64[1] = v56;
    v60 = v59;
    if ( v57 == v58 )
    {
      sub_623240((__int64)v7, &v103);
      v61 = v7[1];
      v58 = v7[2];
    }
    else
    {
      v61 = v57 + 1;
      v62 = _mm_load_si128(&v103);
      v7[1] = v57 + 1;
      *v57 = v62;
    }
    v103.m128i_i32[0] = 8;
    v103.m128i_i64[1] = v60;
    if ( v61 == v58 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v63 = v61 + 1;
      v63[-1] = _mm_load_si128(&v103);
      v7[1] = v63;
    }
    v64 = sub_CA9EA0(*(_QWORD *)(v6 + 2152));
    v65 = v7[1];
    v24 = v65 == v7[2];
    v103.m128i_i32[0] = 13;
    v103.m128i_i64[1] = v64;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v66 = v65 + 1;
      v66[-1] = _mm_load_si128(&v103);
      v7[1] = v66;
    }
    v67 = *(_QWORD *)(v6 + 18200);
    if ( v67 )
    {
      v103 = 0;
      (*(void (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v67 + 216LL))(v67, &v103);
      v68 = v103.m128i_i64[0];
      v69 = v7[1];
      v103.m128i_i32[0] = 9;
      v70 = v7[2];
      v71 = v103.m128i_i64[1];
      v103.m128i_i64[1] = v68;
      if ( v69 == v70 )
      {
        sub_623240((__int64)v7, &v103);
        v72 = v7[1];
        v70 = v7[2];
      }
      else
      {
        v72 = v69 + 1;
        v72[-1] = _mm_load_si128(&v103);
        v7[1] = v72;
      }
      v103.m128i_i32[0] = 10;
      v103.m128i_i64[1] = v71;
      if ( v72 == v70 )
      {
        sub_623240((__int64)v7, &v103);
      }
      else
      {
        v73 = v72 + 1;
        v73[-1] = _mm_load_si128(&v103);
        v7[1] = v73;
      }
    }
    v74 = v4[8];
    v75 = sub_11F1C00(v74);
    v76 = v7[1];
    v24 = v76 == v7[2];
    v103.m128i_i32[0] = 11;
    v103.m128i_i64[1] = v75;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
    }
    else
    {
      v77 = v76 + 1;
      v77[-1] = _mm_load_si128(&v103);
      v7[1] = v77;
    }
    if ( *(_QWORD *)(v74 + 2880) )
    {
      v78 = sub_11EE580();
      v79 = v7[1];
      v24 = v79 == v7[2];
      v103.m128i_i32[0] = 12;
      v103.m128i_i64[1] = v78;
      if ( v24 )
      {
        sub_623240((__int64)v7, &v103);
      }
      else
      {
        v80 = v79 + 1;
        v80[-1] = _mm_load_si128(&v103);
        v7[1] = v80;
      }
    }
    v81 = sub_1149AC0(*(_QWORD *)(v74 + 104));
    v82 = v7[1];
    v24 = v82 == v7[2];
    v103.m128i_i32[0] = 14;
    v103.m128i_i64[1] = v81;
    if ( v24 )
    {
      sub_623240((__int64)v7, &v103);
      v83 = v7[1];
    }
    else
    {
      v83 = v82 + 1;
      v84 = _mm_load_si128(&v103);
      v7[1] = v82 + 1;
      *v82 = v84;
    }
    v3 = *v7;
    v85 = v83 - *v7;
    if ( *v7 == v83 )
      v3 = nullptr;
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v87 = (_BYTE *)qword_4AD21C8;
    v88 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v88 = *v87 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v103.m128i_i64[0] = 26;
      v89 = operator new(0xC0u);
      *(_DWORD *)v89 = 0;
      *(_QWORD *)(v89 + 8) = v89 + 24;
      v90 = std::string::_M_create();
      v91 = v103.m128i_i64[0];
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E3C0);
      *(_QWORD *)(v89 + 8) = v90;
      *(_QWORD *)(v89 + 24) = v91;
      *(__m128i *)v90 = si128;
      *(__m128i *)(v90 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E3D0);
      v93 = v103.m128i_i64[0];
      v94 = *(_QWORD *)(v89 + 8);
      v95 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v89 + 16) = v103.m128i_i64[0];
      *(_BYTE *)(v94 + v93) = 0;
      *(_QWORD *)(v89 + 48) = v89 + 72;
      *(_BYTE *)(v89 + 40) = v88;
      *(__m128i *)(v89 + 56) = v95;
      *(_QWORD *)(v89 + 136) = &off_49DA340;
      *(_QWORD *)(v89 + 184) = v89 + 48;
      *(_DWORD *)(v89 + 144) = 2;
      *(_BYTE *)(v89 + 176) = 0;
      *(_DWORD *)(v89 + 180) = 1;
      *(_QWORD *)(v89 + 168) = 0;
      *(_OWORD *)(v89 + 152) = 0;
      sub_2623850(v89 + 136, 0, 0, 0, v96, v97);
      v98 = *(_QWORD *)(v89 + 168);
      v99 = *(_QWORD *)(v89 + 160);
      ++*(_DWORD *)v89;
      if ( (unsigned __int64)(v99 - v98) <= 0x15 )
      {
        sub_26240F0(v89 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v98 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v98 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v89 + 168) += 22LL;
      }
      sub_5FF0F0(v89 + 136, "<NULL TU>");
      v24 = (*(_DWORD *)v89)-- == 1;
      if ( v24 )
      {
        sub_60C330((pthread_mutex_t *)v89, (__int64 (*)())"<NULL TU>", v100, v101);
        operator delete((void *)v89, 0xC0u);
      }
    }
    v7 = nullptr;
    LODWORD(v85) = 0;
  }
  *(_QWORD *)a1 = v7;
  *(_DWORD *)(a1 + 8) = v85;
  *(_QWORD *)(a1 + 16) = v3;
  return a1;
}

