__int64 __fastcall clang_findIncludesInFile(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  bool v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i v9; // xmm0
  char *v10; // rsi
  __int64 v11; // rdx
  __m128i v12; // xmm0
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  _WORD *v17; // rdx
  __int64 v18; // r15
  _BYTE *v19; // rdx
  __int64 v20; // r15
  bool v21; // zf
  unsigned int v22; // ebp
  __int64 v23; // r15
  __int64 v24; // rax
  _BYTE *v25; // r12
  bool v26; // bp
  __int64 v27; // rbx
  __int64 v28; // rax
  __m128i si128; // xmm0
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // rcx
  _BYTE *v40; // [rsp+8h] [rbp-50h]

  if ( !a1 )
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v25 = (_BYTE *)qword_4AD21C8;
    v26 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v26 = *v25 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v27 = operator new(0xC0u);
      *(_DWORD *)v27 = 0;
      *(_QWORD *)(v27 + 8) = v27 + 24;
      v28 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E4E0);
      *(_QWORD *)(v27 + 8) = v28;
      *(_QWORD *)(v27 + 24) = 24;
      *(_QWORD *)(v28 + 16) = 0x656C69466E497365LL;
      *(__m128i *)v28 = si128;
      v30 = *(_QWORD *)(v27 + 8);
      v31 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v27 + 16) = 24;
      *(_BYTE *)(v30 + 24) = 0;
      *(_QWORD *)(v27 + 48) = v27 + 72;
      *(_BYTE *)(v27 + 40) = v26;
      *(__m128i *)(v27 + 56) = v31;
      *(_QWORD *)(v27 + 136) = &off_49DA340;
      *(_QWORD *)(v27 + 184) = v27 + 48;
      *(_DWORD *)(v27 + 144) = 2;
      *(_BYTE *)(v27 + 176) = 0;
      *(_DWORD *)(v27 + 180) = 1;
      *(_QWORD *)(v27 + 168) = 0;
      *(_OWORD *)(v27 + 152) = 0;
      sub_2623850(v27 + 136, 0, 0, 0, v32, v33);
      v34 = *(_QWORD *)(v27 + 168);
      v35 = *(_QWORD *)(v27 + 160);
      ++*(_DWORD *)v27;
      if ( (unsigned __int64)(v35 - v34) <= 0x15 )
      {
        sub_26240F0(v27 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v34 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v34 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v27 + 168) += 22LL;
      }
      sub_60BBA0(v27, 0);
      v21 = (*(_DWORD *)v27)-- == 1;
      if ( v21 )
      {
        sub_60C330((pthread_mutex_t *)v27, nullptr, v36, v37);
        operator delete((void *)v27, 0xC0u);
      }
    }
    return 1;
  }
  v4 = a2;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v6 = 0;
  if ( qword_4AD21C8 && (v40 = (_BYTE *)qword_4AD21C8, strlen((const char *)qword_4AD21C8) == 1) )
  {
    v6 = *v40 == 50;
    if ( (_BYTE)qword_4AD21C0 )
      goto LABEL_6;
  }
  else if ( (_BYTE)qword_4AD21C0 )
  {
    goto LABEL_6;
  }
  if ( __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
LABEL_6:
  v7 = qword_4AD21C8;
  if ( !qword_4AD21C8 )
  {
    if ( a2 )
    {
      if ( a4 )
      {
        v20 = *(_QWORD *)(a1 + 8);
        if ( v20 )
          goto LABEL_17;
      }
    }
    return 1;
  }
  v7 = operator new(0xC0u);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = v7 + 24;
  v8 = std::string::_M_create();
  v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E4E0);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 24) = 24;
  *(_QWORD *)(v8 + 16) = 0x656C69466E497365LL;
  v10 = nullptr;
  *(__m128i *)v8 = v9;
  v11 = *(_QWORD *)(v7 + 8);
  v12 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(_QWORD *)(v7 + 16) = 24;
  *(_BYTE *)(v11 + 24) = 0;
  *(_QWORD *)(v7 + 48) = v7 + 72;
  *(_BYTE *)(v7 + 40) = v6;
  *(__m128i *)(v7 + 56) = v12;
  *(_QWORD *)(v7 + 136) = &off_49DA340;
  *(_DWORD *)(v7 + 144) = 2;
  *(_BYTE *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 180) = 1;
  *(_QWORD *)(v7 + 168) = 0;
  *(_QWORD *)(v7 + 184) = v7 + 48;
  *(_OWORD *)(v7 + 152) = 0;
  sub_2623850(v7 + 136, 0, 0, 0, v13, v14);
  ++*(_DWORD *)v7;
  if ( !v4 )
  {
    v19 = *(_BYTE **)(v7 + 168);
    if ( *(_QWORD *)(v7 + 160) - (_QWORD)v19 <= 8u )
    {
      v10 = "Null file";
      sub_26240F0(v7 + 136, "Null file", 9);
    }
    else
    {
      v19[8] = 101;
      *(_QWORD *)v19 = 0x6C6966206C6C754ELL;
      *(_QWORD *)(v7 + 168) += 9LL;
    }
    goto LABEL_12;
  }
  if ( !a4 )
  {
    v19 = *(_BYTE **)(v7 + 168);
    if ( *(_QWORD *)(v7 + 160) - (_QWORD)v19 <= 0xBu )
    {
      v10 = "Null visitor";
      sub_26240F0(v7 + 136, "Null visitor", 12);
    }
    else
    {
      qmemcpy(v19, "Null visitor", 12);
      *(_QWORD *)(v7 + 168) += 12LL;
    }
    goto LABEL_12;
  }
  v16 = sub_60BBA0(v7, a1);
  v17 = *(_WORD **)(v16 + 168);
  v18 = v16;
  if ( *(_QWORD *)(v16 + 160) - (_QWORD)v17 <= 1u )
  {
    sub_26240F0(v16 + 136, &byte_3B7789D, 2);
  }
  else
  {
    *v17 = 16416;
    *(_QWORD *)(v16 + 168) += 2LL;
  }
  v10 = (char *)v4;
  sub_60BE10(v18, v4);
  v20 = *(_QWORD *)(a1 + 8);
  if ( v20 )
  {
LABEL_17:
    v23 = v20 + 2048;
    nullsub_173(v23);
    while ( 1 )
    {
      v24 = *(_QWORD *)(v4 + 8);
      if ( !v24 )
        break;
      v4 = v24 & 0xFFFFFFFFFFFFFFF8LL;
      if ( (v24 & 4) == 0 || !v4 )
        goto LABEL_21;
    }
    v4 = 0;
LABEL_21:
    v10 = (char *)v4;
    v22 = 2 * (unsigned __int8)sub_6326A0(a1, v4, a3, a4);
    nullsub_174(v23);
    if ( v7 )
    {
      v21 = (*(_DWORD *)v7)-- == 1;
      if ( v21 )
        goto LABEL_13;
    }
    return v22;
  }
LABEL_12:
  v21 = (*(_DWORD *)v7)-- == 1;
  v22 = 1;
  if ( v21 )
  {
LABEL_13:
    sub_60C330((pthread_mutex_t *)v7, (__int64 (*)())v10, (__int64)v19, v15);
    operator delete((void *)v7, 0xC0u);
  }
  return v22;
}

