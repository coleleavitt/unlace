__int64 __fastcall clang_getDiagnostic(__int64 a1, unsigned int a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rdx
  _BYTE *v5; // r13
  bool v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rax
  __m128i si128; // xmm0
  __m128i v10; // xmm0
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  if ( a1 )
  {
    if ( *(_QWORD *)(a1 + 8) )
    {
      v2 = sub_62FF70(a1, 0);
      if ( v2 )
      {
        v3 = v2[1];
        if ( a2 < (unsigned __int64)((v2[2] - v3) >> 3) )
          return *(_QWORD *)(v3 + 8LL * a2);
      }
    }
    return 0;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v5 = (_BYTE *)qword_4AD21C8;
  v6 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v6 = *v5 == 50;
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  if ( !qword_4AD21C8 )
    return 0;
  v7 = operator new(0xC0u);
  *(_DWORD *)v7 = 0;
  *(_QWORD *)(v7 + 8) = v7 + 24;
  v8 = std::string::_M_create();
  si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E460);
  *(_QWORD *)(v7 + 8) = v8;
  *(_QWORD *)(v7 + 24) = 19;
  *(__m128i *)v8 = si128;
  v10 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
  *(_DWORD *)(v8 + 15) = 1667855475;
  v11 = *(_QWORD *)(v7 + 8);
  *(_QWORD *)(v7 + 16) = 19;
  *(_BYTE *)(v11 + 19) = 0;
  *(_QWORD *)(v7 + 48) = v7 + 72;
  *(_BYTE *)(v7 + 40) = v6;
  *(__m128i *)(v7 + 56) = v10;
  *(_QWORD *)(v7 + 136) = &off_49DA340;
  *(_QWORD *)(v7 + 184) = v7 + 48;
  *(_DWORD *)(v7 + 144) = 2;
  *(_BYTE *)(v7 + 176) = 0;
  *(_DWORD *)(v7 + 180) = 1;
  *(_QWORD *)(v7 + 168) = 0;
  *(_OWORD *)(v7 + 152) = 0;
  sub_2623850(v7 + 136, 0, 0, 0, v12, v13);
  v14 = *(_QWORD *)(v7 + 168);
  v15 = *(_QWORD *)(v7 + 160);
  ++*(_DWORD *)v7;
  if ( (unsigned __int64)(v15 - v14) <= 0x15 )
  {
    sub_26240F0(v7 + 136, "called with a bad TU: ", 22);
  }
  else
  {
    *(__m128i *)v14 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
    *(_QWORD *)(v14 + 14) = 0x203A555420646162LL;
    *(_QWORD *)(v7 + 168) += 22LL;
  }
  sub_60BBA0(v7, 0);
  if ( (*(_DWORD *)v7)-- != 1 )
    return 0;
  sub_60C330((pthread_mutex_t *)v7, nullptr, v16, v17);
  operator delete((void *)v7, 0xC0u);
  return 0;
}

