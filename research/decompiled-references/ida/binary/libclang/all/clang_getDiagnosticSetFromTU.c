_QWORD *__fastcall clang_getDiagnosticSetFromTU(__int64 a1)
{
  _BYTE *v2; // r13
  bool v3; // r12
  __int64 v4; // rbx
  __int64 v5; // rax
  __m128i si128; // xmm0
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
      return sub_62FF70(a1, 0);
    else
      return nullptr;
  }
  else
  {
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
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E460);
      *(_QWORD *)(v4 + 8) = v5;
      *(_QWORD *)(v4 + 24) = 28;
      *(__m128i *)v5 = si128;
      *(__m128i *)(v5 + 12) = _mm_load_si128((const __m128i *)&xmmword_3C7E470);
      v7 = *(_QWORD *)(v4 + 8);
      v8 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v4 + 16) = 28;
      *(_BYTE *)(v7 + 28) = 0;
      *(_QWORD *)(v4 + 48) = v4 + 72;
      *(_BYTE *)(v4 + 40) = v3;
      *(__m128i *)(v4 + 56) = v8;
      *(_QWORD *)(v4 + 136) = &off_49DA340;
      *(_QWORD *)(v4 + 184) = v4 + 48;
      *(_DWORD *)(v4 + 144) = 2;
      *(_BYTE *)(v4 + 176) = 0;
      *(_DWORD *)(v4 + 180) = 1;
      *(_QWORD *)(v4 + 168) = 0;
      *(_OWORD *)(v4 + 152) = 0;
      sub_2623850(v4 + 136, 0, 0, 0, v9, v10);
      v11 = *(_QWORD *)(v4 + 168);
      v12 = *(_QWORD *)(v4 + 160);
      ++*(_DWORD *)v4;
      if ( (unsigned __int64)(v12 - v11) <= 0x15 )
      {
        sub_26240F0(v4 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v11 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v4 + 168) += 22LL;
      }
      sub_60BBA0(v4, 0);
      if ( (*(_DWORD *)v4)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v4, nullptr, v13, v14);
        operator delete((void *)v4, 0xC0u);
      }
    }
    return nullptr;
  }
}

