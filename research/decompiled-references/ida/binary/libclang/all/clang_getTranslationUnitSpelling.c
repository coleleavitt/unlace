__int64 __fastcall clang_getTranslationUnitSpelling(__int64 a1)
{
  _BYTE *v2; // r13
  bool v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  char *v6; // rsi
  __m128i si128; // xmm0
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx

  if ( a1 )
    return sub_6905C0(*(void **)(*(_QWORD *)(a1 + 8) + 344LL), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 352LL));
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v2 = (_BYTE *)qword_4AD21C8;
  v3 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v3 = *v2 == 50;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( qword_4AD21C8 )
  {
    v4 = operator new(0xC0u);
    *(_DWORD *)v4 = 0;
    *(_QWORD *)(v4 + 8) = v4 + 24;
    v5 = std::string::_M_create();
    v6 = nullptr;
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E2C0);
    *(_QWORD *)(v4 + 8) = v5;
    *(_QWORD *)(v4 + 24) = 32;
    *(__m128i *)v5 = si128;
    *(__m128i *)(v5 + 16) = _mm_load_si128((const __m128i *)&xmmword_3C7E2D0);
    v8 = *(_QWORD *)(v4 + 8);
    v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
    *(_QWORD *)(v4 + 16) = 32;
    *(_BYTE *)(v8 + 32) = 0;
    *(_QWORD *)(v4 + 48) = v4 + 72;
    *(_BYTE *)(v4 + 40) = v3;
    *(__m128i *)(v4 + 56) = v9;
    *(_QWORD *)(v4 + 136) = &off_49DA340;
    *(_QWORD *)(v4 + 184) = v4 + 48;
    *(_DWORD *)(v4 + 144) = 2;
    *(_BYTE *)(v4 + 176) = 0;
    *(_DWORD *)(v4 + 180) = 1;
    *(_QWORD *)(v4 + 168) = 0;
    *(_OWORD *)(v4 + 152) = 0;
    sub_2623850(v4 + 136, 0, 0, 0, v10, v11);
    v12 = *(_QWORD *)(v4 + 168);
    v13 = *(_QWORD *)(v4 + 160);
    ++*(_DWORD *)v4;
    if ( (unsigned __int64)(v13 - v12) <= 0x15 )
    {
      v6 = "called with a bad TU: ";
      sub_26240F0(v4 + 136, "called with a bad TU: ", 22);
      v14 = *(_QWORD *)(v4 + 168);
    }
    else
    {
      *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
      *(_QWORD *)(v12 + 14) = 0x203A555420646162LL;
      v14 = *(_QWORD *)(v4 + 168) + 22LL;
      *(_QWORD *)(v4 + 168) = v14;
    }
    v15 = *(_QWORD *)(v4 + 160) - v14;
    if ( v15 <= 8 )
    {
      v6 = "<NULL TU>";
      sub_26240F0(v4 + 136, "<NULL TU>", 9);
    }
    else
    {
      v16 = 0x5554204C4C554E3CLL;
      *(_BYTE *)(v14 + 8) = 62;
      *(_QWORD *)v14 = 0x5554204C4C554E3CLL;
      *(_QWORD *)(v4 + 168) += 9LL;
    }
    if ( (*(_DWORD *)v4)-- == 1 )
    {
      sub_60C330((pthread_mutex_t *)v4, (__int64 (*)())v6, v15, v16);
      operator delete((void *)v4, 0xC0u);
    }
  }
  return sub_690460();
}

