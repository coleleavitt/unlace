__int64 __fastcall clang_getNumDiagnostics(__int64 a1)
{
  _QWORD *v1; // rax
  _BYTE *v3; // r13
  bool v4; // r12
  __int64 v5; // rbx
  __int64 v6; // rax
  __m128i si128; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v1 = sub_62FF70(a1, 1);
      return (__int64)(v1[2] - v1[1]) >> 3;
    }
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
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E450);
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)(v5 + 24) = 23;
      *(__m128i *)v6 = si128;
      v8 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v6 + 15) = 0x73636974736F6E67LL;
      v9 = *(_QWORD *)(v5 + 8);
      *(_QWORD *)(v5 + 16) = 23;
      *(_BYTE *)(v9 + 23) = 0;
      *(_QWORD *)(v5 + 48) = v5 + 72;
      *(_BYTE *)(v5 + 40) = v4;
      *(__m128i *)(v5 + 56) = v8;
      *(_QWORD *)(v5 + 136) = &off_49DA340;
      *(_QWORD *)(v5 + 184) = v5 + 48;
      *(_DWORD *)(v5 + 144) = 2;
      *(_BYTE *)(v5 + 176) = 0;
      *(_DWORD *)(v5 + 180) = 1;
      *(_QWORD *)(v5 + 168) = 0;
      *(_OWORD *)(v5 + 152) = 0;
      sub_2623850(v5 + 136, 0, 0, 0, v10, v11);
      v12 = *(_QWORD *)(v5 + 168);
      v13 = *(_QWORD *)(v5 + 160);
      ++*(_DWORD *)v5;
      if ( (unsigned __int64)(v13 - v12) <= 0x15 )
      {
        sub_26240F0(v5 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v12 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v12 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v5 + 168) += 22LL;
      }
      sub_60BBA0(v5, 0);
      if ( (*(_DWORD *)v5)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v5, nullptr, v14, v15);
        operator delete((void *)v5, 0xC0u);
      }
    }
  }
  return 0;
}

