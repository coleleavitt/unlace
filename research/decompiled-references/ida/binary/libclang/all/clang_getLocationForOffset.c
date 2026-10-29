__m128i *__fastcall clang_getLocationForOffset(__m128i *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
  __int32 v7; // eax
  __m128i v8; // xmm0
  _BYTE *v10; // r14
  bool v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __m128i si128; // xmm0
  __int64 v15; // rax
  __m128i v16; // xmm0
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx

  if ( a2 )
  {
    if ( a3 )
    {
      v4 = *(_QWORD *)(a2 + 8);
      v5 = *(_QWORD *)(a3 + 8);
      if ( v5 )
      {
        while ( 1 )
        {
          v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v5 & 4) == 0 || !v6 )
            break;
          v5 = *(_QWORD *)(v6 + 8);
          if ( !v5 )
            goto LABEL_10;
        }
        v7 = sub_FEDD70(v4, v6, a4);
        if ( !v7 )
          goto LABEL_6;
LABEL_11:
        v8 = _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v4 + 80) + 2152LL));
        goto LABEL_7;
      }
LABEL_10:
      v7 = sub_FEDD70(v4, 0, a4);
      if ( v7 )
        goto LABEL_11;
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v10 = (_BYTE *)qword_4AD21C8;
    v11 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v11 = *v10 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v12 = operator new(0xC0u);
      *(_DWORD *)v12 = 0;
      *(_QWORD *)(v12 + 8) = v12 + 24;
      v13 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E590);
      *(_QWORD *)(v12 + 8) = v13;
      *(_QWORD *)(v12 + 24) = 26;
      *(__m128i *)v13 = si128;
      *(__m128i *)(v13 + 10) = _mm_load_si128((const __m128i *)&xmmword_3C7E5A0);
      v15 = *(_QWORD *)(v12 + 8);
      v16 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v12 + 16) = 26;
      *(_BYTE *)(v15 + 26) = 0;
      *(_QWORD *)(v12 + 48) = v12 + 72;
      *(_BYTE *)(v12 + 40) = v11;
      *(__m128i *)(v12 + 56) = v16;
      *(_QWORD *)(v12 + 136) = &off_49DA340;
      *(_QWORD *)(v12 + 184) = v12 + 48;
      *(_DWORD *)(v12 + 144) = 2;
      *(_BYTE *)(v12 + 176) = 0;
      *(_DWORD *)(v12 + 180) = 1;
      *(_QWORD *)(v12 + 168) = 0;
      *(_OWORD *)(v12 + 152) = 0;
      sub_2623850(v12 + 136, 0, 0, 0, v17, v18);
      v19 = *(_QWORD *)(v12 + 168);
      v20 = *(_QWORD *)(v12 + 160);
      ++*(_DWORD *)v12;
      if ( (unsigned __int64)(v20 - v19) <= 0x15 )
      {
        sub_26240F0(v12 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v19 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v19 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v12 + 168) += 22LL;
      }
      sub_60BBA0(v12, 0);
      if ( (*(_DWORD *)v12)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v12, nullptr, v21, v22);
        operator delete((void *)v12, 0xC0u);
      }
    }
  }
LABEL_6:
  v8 = 0;
  v7 = 0;
LABEL_7:
  a1[1].m128i_i32[0] = v7;
  *a1 = v8;
  return a1;
}

