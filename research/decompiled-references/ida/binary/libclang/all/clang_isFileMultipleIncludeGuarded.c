__int64 __fastcall clang_isFileMultipleIncludeGuarded(__int64 a1, __int64 a2)
{
  _BYTE *v3; // r13
  bool v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i si128; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rax
  __m128i v10; // xmm0
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  if ( a1 )
  {
    if ( a2 )
      return (unsigned __int8)sub_114AF00(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) + 104LL));
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v3 = (_BYTE *)qword_4AD21C8;
    v4 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v4 = *v3 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v5 = operator new(0xC0u);
      *(_DWORD *)v5 = 0;
      *(_QWORD *)(v5 + 8) = v5 + 24;
      v6 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E330);
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)(v5 + 24) = 34;
      *(__m128i *)v6 = si128;
      v8 = _mm_load_si128((const __m128i *)&xmmword_3C7E340);
      *(_WORD *)(v6 + 32) = 25701;
      *(__m128i *)(v6 + 16) = v8;
      v9 = *(_QWORD *)(v5 + 8);
      v10 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v5 + 16) = 34;
      *(_BYTE *)(v9 + 34) = 0;
      *(_QWORD *)(v5 + 48) = v5 + 72;
      *(_BYTE *)(v5 + 40) = v4;
      *(__m128i *)(v5 + 56) = v10;
      *(_QWORD *)(v5 + 136) = &off_49DA340;
      *(_QWORD *)(v5 + 184) = v5 + 48;
      *(_DWORD *)(v5 + 144) = 2;
      *(_BYTE *)(v5 + 176) = 0;
      *(_DWORD *)(v5 + 180) = 1;
      *(_QWORD *)(v5 + 168) = 0;
      *(_OWORD *)(v5 + 152) = 0;
      sub_2623850(v5 + 136, 0, 0, 0, v11, v12);
      v13 = *(_QWORD *)(v5 + 168);
      v14 = *(_QWORD *)(v5 + 160);
      ++*(_DWORD *)v5;
      if ( (unsigned __int64)(v14 - v13) <= 0x15 )
      {
        sub_26240F0(v5 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v13 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v5 + 168) += 22LL;
      }
      sub_5FF0F0(v5 + 136, "<NULL TU>");
      if ( (*(_DWORD *)v5)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v5, (__int64 (*)())"<NULL TU>", v15, v16);
        operator delete((void *)v5, 0xC0u);
      }
    }
  }
  return 0;
}

