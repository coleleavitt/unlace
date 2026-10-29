__int64 __fastcall clang_CXRewriter_create(__int64 a1)
{
  const double *v1; // rbx
  __int64 result; // rax
  __m128 v3; // xmm0
  _BYTE *v4; // r13
  bool v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  if ( a1 )
  {
    v1 = *(const double **)(a1 + 8);
    result = operator new(0x40u);
    *(_DWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
    *(_QWORD *)(result + 40) = result + 24;
    v3 = _mm_loadh_ps(v1);
    *(_QWORD *)(result + 48) = result + 24;
    *(_QWORD *)(result + 56) = 0;
    *(__m128 *)result = v3;
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v4 = (_BYTE *)qword_4AD21C8;
    v5 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v5 = *v4 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v6 = operator new(0xC0u);
      *(_DWORD *)v6 = 0;
      *(_QWORD *)(v6 + 8) = v6 + 24;
      v7 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E600);
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)(v6 + 24) = 23;
      *(__m128i *)v7 = si128;
      v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v7 + 15) = 0x6574616572635F72LL;
      v10 = *(_QWORD *)(v6 + 8);
      *(_QWORD *)(v6 + 16) = 23;
      *(_BYTE *)(v10 + 23) = 0;
      *(_QWORD *)(v6 + 48) = v6 + 72;
      *(_BYTE *)(v6 + 40) = v5;
      *(__m128i *)(v6 + 56) = v9;
      *(_QWORD *)(v6 + 136) = &off_49DA340;
      *(_QWORD *)(v6 + 184) = v6 + 48;
      *(_DWORD *)(v6 + 144) = 2;
      *(_BYTE *)(v6 + 176) = 0;
      *(_DWORD *)(v6 + 180) = 1;
      *(_QWORD *)(v6 + 168) = 0;
      *(_OWORD *)(v6 + 152) = 0;
      sub_2623850(v6 + 136, 0, 0, 0, v11, v12);
      v13 = *(_QWORD *)(v6 + 168);
      v14 = *(_QWORD *)(v6 + 160);
      ++*(_DWORD *)v6;
      if ( (unsigned __int64)(v14 - v13) <= 0x15 )
      {
        sub_26240F0(v6 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v13 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v13 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v6 + 168) += 22LL;
      }
      sub_60BBA0(v6, 0);
      if ( (*(_DWORD *)v6)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v6, nullptr, v15, v16);
        operator delete((void *)v6, 0xC0u);
      }
    }
    return 0;
  }
  return result;
}

