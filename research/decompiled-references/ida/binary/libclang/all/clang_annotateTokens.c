void __fastcall clang_annotateTokens(__int64 a1, __int64 a2, int a3, __m128i *a4)
{
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __m128i si128; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (*v16)(); // rsi
  __int64 v17; // rax
  int v18; // r8d
  int v19; // r9d
  _BYTE *v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r14
  __m128i v24; // xmm0
  __m128i *v25; // rcx
  int v26; // edx
  __m128i v27; // xmm0
  int v28; // ecx
  int v29; // r8d
  int v30; // r9d
  __int64 v31; // rdx
  __int64 v32; // rcx
  int v33; // eax
  _BYTE *v34; // rbx
  bool v35; // bp
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rdx
  char *v39; // rsi
  __m128i v40; // xmm0
  __m128i v41; // xmm0
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  void *v47; // rdx
  __int64 v48; // rax
  bool v49; // zf
  __m128i v50; // xmm1
  __m128i v51; // xmm0
  __m128i *v52; // rax
  unsigned __int64 v53; // r15
  unsigned int v54; // ebx
  char v55; // al
  _BYTE *v56; // rbx
  char v57; // bp
  __m128i v58; // [rsp+0h] [rbp-108h]
  int v59; // [rsp+8h] [rbp-100h]
  __m128i v60; // [rsp+18h] [rbp-F0h]
  bool v61; // [rsp+30h] [rbp-D8h]
  _BYTE *v62; // [rsp+38h] [rbp-D0h]
  _BYTE v63[32]; // [rsp+40h] [rbp-C8h] BYREF
  __m128i v64; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+70h] [rbp-98h]
  __m128i v66; // [rsp+80h] [rbp-88h] BYREF
  __m128i v67; // [rsp+90h] [rbp-78h] BYREF
  __m128i v68; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v69; // [rsp+B0h] [rbp-58h]
  int v70; // [rsp+B8h] [rbp-50h]
  __m128i *v71; // [rsp+C0h] [rbp-48h]

  if ( !a1 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v56 = (_BYTE *)qword_4AD21C8;
    v57 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v57 = *v56 == 50;
    sub_5FF1E0(v68.m128i_i64, "clang_annotateTokens", 0x14u, v57);
    v36 = v68.m128i_i64[0];
    if ( v68.m128i_i64[0] )
    {
      sub_5FF0F0(v68.m128i_i64[0] + 136, "called with a bad TU: ");
      v39 = "<NULL TU>";
      sub_5FF0F0(v36 + 136, "<NULL TU>");
      v49 = (*(_DWORD *)v36)-- == 1;
      if ( v49 )
        goto LABEL_25;
    }
    return;
  }
  v61 = a3 == 0 || a4 == nullptr || a2 == 0;
  if ( !v61 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 && (v62 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
    {
      v61 = *v62 == 50;
      if ( (_BYTE)qword_4AD21C0 )
        goto LABEL_7;
    }
    else if ( (_BYTE)qword_4AD21C0 )
    {
      goto LABEL_7;
    }
    if ( __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
LABEL_7:
    if ( !qword_4AD21C8 )
    {
      v23 = (unsigned int)(a3 - 1);
      goto LABEL_27;
    }
    v68.m128i_i64[0] = 20;
    v7 = operator new(0xC0u);
    *(_DWORD *)v7 = 0;
    *(_QWORD *)(v7 + 8) = v7 + 24;
    v8 = std::string::_M_create();
    v9 = v68.m128i_i64[0];
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E370);
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v7 + 24) = v9;
    *(__m128i *)v8 = si128;
    v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_DWORD *)(v8 + 16) = 1936614763;
    v12 = v68.m128i_i64[0];
    v13 = *(_QWORD *)(v7 + 8);
    *(_QWORD *)(v7 + 16) = v68.m128i_i64[0];
    *(_BYTE *)(v13 + v12) = 0;
    *(_DWORD *)(v7 + 144) = 2;
    *(_BYTE *)(v7 + 40) = v61;
    *(_QWORD *)(v7 + 48) = v7 + 72;
    *(_BYTE *)(v7 + 176) = 0;
    *(__m128i *)(v7 + 56) = v11;
    *(_QWORD *)(v7 + 136) = &off_49DA340;
    *(_QWORD *)(v7 + 184) = v7 + 48;
    *(_DWORD *)(v7 + 180) = 1;
    *(_QWORD *)(v7 + 168) = 0;
    *(_OWORD *)(v7 + 152) = 0;
    sub_2623850(v7 + 136, 0, 0, 0, v14, v15);
    ++*(_DWORD *)v7;
    v16 = (__int64 (*)())a1;
    v17 = sub_60BBA0(v7, a1);
    v20 = *(_BYTE **)(v17 + 168);
    if ( (unsigned __int64)v20 >= *(_QWORD *)(v17 + 160) )
    {
      v16 = (__int64 (*)())&qword_20;
      sub_26239D0(v17 + 136, 32);
    }
    else
    {
      *(_QWORD *)(v17 + 168) = v20 + 1;
      *v20 = 32;
    }
    v21 = *(_QWORD *)(a1 + 8);
    if ( v21 && *(_DWORD *)(a2 + 4) )
    {
      v22 = *(_QWORD *)(v21 + 80);
      v67.m128i_i32[0] = *(_DWORD *)(a2 + 4);
      v23 = (unsigned int)(a3 - 1);
      v24 = _mm_loadu_si128((const __m128i *)(v22 + 2152));
      v25 = &v66;
      v26 = *(_DWORD *)(a2 + 24 * v23 + 4);
      v66 = v24;
    }
    else
    {
      v23 = (unsigned int)(a3 - 1);
      clang_getNullLocation(&v66);
      v21 = *(_QWORD *)(a1 + 8);
      if ( !v21 )
        goto LABEL_50;
      v23 = (unsigned int)(a3 - 1);
      v26 = *(_DWORD *)(a2 + 24 * v23 + 4);
    }
    if ( v26 )
    {
      v27 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v21 + 80) + 2152LL));
      LODWORD(v69) = v26;
      v68 = v27;
      goto LABEL_15;
    }
LABEL_50:
    clang_getNullLocation(&v68);
LABEL_15:
    v60 = _mm_load_si128(&v68);
    v58 = _mm_load_si128(&v66);
    clang_getRange(
      (int)&v64,
      (int)v16,
      v26,
      (int)v25,
      v18,
      v19,
      v58.m128i_i64[0],
      v58.m128i_i64[1],
      v67.m128i_i32[0],
      v60.m128i_i64[0],
      v60.m128i_i64[1],
      v69);
    sub_60BFD0(v7, (int)v16, v59, v28, v29, v30, (__int128)_mm_load_si128(&v64), v65);
    v33 = *(_DWORD *)v7 - 1;
    *(_DWORD *)v7 = v33;
    if ( !v33 )
    {
      sub_60C330((pthread_mutex_t *)v7, v16, v31, v32);
      operator delete((void *)v7, 0xC0u);
    }
LABEL_27:
    sub_638F50(&v66, 70, 0);
    v50 = _mm_load_si128(&v66);
    v51 = _mm_load_si128(&v67);
    v52 = a4;
    do
    {
      *v52 = v50;
      v52 += 2;
      v52[-1] = v51;
    }
    while ( v52 != &a4[2 * v23 + 2] );
    v53 = *(_QWORD *)(a1 + 8);
    if ( !v53 )
      return;
    nullsub_173(v53 + 2048);
    v71 = a4;
    v69 = a2;
    v70 = a3;
    v68 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)a1, (__m128i)v53);
    sub_25A16F0(v63);
    v54 = dword_4A8D900;
    if ( 2 * dword_4A8D900 )
    {
      v54 = 2 * dword_4A8D900;
    }
    else if ( !dword_4A8D900 )
    {
      goto LABEL_33;
    }
    if ( !getenv("LIBCLANG_NOTHREADS") )
    {
      v55 = sub_25A1AD0(v63, sub_620560, &v68, v54);
      goto LABEL_34;
    }
LABEL_33:
    v55 = sub_25A1A00(v63, sub_620560, &v68);
LABEL_34:
    if ( !v55 )
      fwrite("libclang: crash detected while annotating tokens\n", 1u, 0x31u, stderr);
    sub_25A1710(v63);
    nullsub_174(v53 + 2048);
    return;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v34 = (_BYTE *)qword_4AD21C8;
  v35 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
  {
    v35 = *v34 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_21;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_21;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
LABEL_21:
  if ( qword_4AD21C8 )
  {
    v68.m128i_i64[0] = 20;
    v36 = operator new(0xC0u);
    *(_DWORD *)v36 = 0;
    *(_QWORD *)(v36 + 8) = v36 + 24;
    v37 = std::string::_M_create();
    v38 = v68.m128i_i64[0];
    v39 = nullptr;
    v40 = _mm_load_si128((const __m128i *)&xmmword_3C7E370);
    *(_QWORD *)(v36 + 8) = v37;
    *(_QWORD *)(v36 + 24) = v38;
    *(__m128i *)v37 = v40;
    v41 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_DWORD *)(v37 + 16) = 1936614763;
    v42 = v68.m128i_i64[0];
    v43 = *(_QWORD *)(v36 + 8);
    *(_QWORD *)(v36 + 16) = v68.m128i_i64[0];
    *(_BYTE *)(v43 + v42) = 0;
    *(_QWORD *)(v36 + 48) = v36 + 72;
    *(_BYTE *)(v36 + 40) = v35;
    *(__m128i *)(v36 + 56) = v41;
    *(_QWORD *)(v36 + 136) = &off_49DA340;
    *(_QWORD *)(v36 + 184) = v36 + 48;
    *(_DWORD *)(v36 + 144) = 2;
    *(_BYTE *)(v36 + 176) = 0;
    *(_DWORD *)(v36 + 180) = 1;
    *(_QWORD *)(v36 + 168) = 0;
    *(_OWORD *)(v36 + 152) = 0;
    sub_2623850(v36 + 136, 0, 0, 0, v44, v45);
    v47 = *(void **)(v36 + 168);
    v48 = *(_QWORD *)(v36 + 160);
    ++*(_DWORD *)v36;
    if ( (unsigned __int64)(v48 - (_QWORD)v47) <= 0xB )
    {
      v39 = "<null input>";
      sub_26240F0(v36 + 136, "<null input>", 12);
    }
    else
    {
      qmemcpy(v47, "<null input>", 12);
      *(_QWORD *)(v36 + 168) += 12LL;
    }
    v49 = (*(_DWORD *)v36)-- == 1;
    if ( v49 )
    {
LABEL_25:
      sub_60C330((pthread_mutex_t *)v36, (__int64 (*)())v39, (__int64)v47, v46);
      operator delete((void *)v36, 0xC0u);
    }
  }
}

