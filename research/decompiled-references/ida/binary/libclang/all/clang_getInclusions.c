void __fastcall clang_getInclusions(__int64 a1, void (__fastcall *a2)(_QWORD, void *, _QWORD, __int64), __int64 a3)
{
  _DWORD *v4; // rax
  unsigned int v5; // r13d
  _BYTE *v6; // r13
  bool v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __m128i si128; // xmm0
  __m128i v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx

  if ( a1 )
  {
    v4 = *(_DWORD **)(*(_QWORD *)(a1 + 8) + 32LL);
    v5 = v4[48];
    if ( v5 == 1 )
    {
      sub_635640(0, v4[50], a1, a2, a3);
    }
    else
    {
      if ( v4[113] )
        sub_635640(0, v4[50], a1, a2, a3);
      sub_635640(1, v5, a1, a2, a3);
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v6 = (_BYTE *)qword_4AD21C8;
    v7 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v7 = *v6 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v8 = operator new(0xC0u);
      *(_DWORD *)v8 = 0;
      *(_QWORD *)(v8 + 8) = v8 + 24;
      v9 = std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E4F0);
      *(_QWORD *)(v8 + 8) = v9;
      *(_QWORD *)(v8 + 24) = 19;
      *(__m128i *)v9 = si128;
      v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_DWORD *)(v9 + 15) = 1936617321;
      v12 = *(_QWORD *)(v8 + 8);
      *(_QWORD *)(v8 + 16) = 19;
      *(_BYTE *)(v12 + 19) = 0;
      *(_QWORD *)(v8 + 48) = v8 + 72;
      *(_BYTE *)(v8 + 40) = v7;
      *(__m128i *)(v8 + 56) = v11;
      *(_QWORD *)(v8 + 136) = &off_49DA340;
      *(_QWORD *)(v8 + 184) = v8 + 48;
      *(_DWORD *)(v8 + 144) = 2;
      *(_BYTE *)(v8 + 176) = 0;
      *(_DWORD *)(v8 + 180) = 1;
      *(_QWORD *)(v8 + 168) = 0;
      *(_OWORD *)(v8 + 152) = 0;
      sub_2623850(v8 + 136, 0, 0, 0, v13, v14);
      v15 = *(_QWORD *)(v8 + 168);
      v16 = *(_QWORD *)(v8 + 160);
      ++*(_DWORD *)v8;
      if ( (unsigned __int64)(v16 - v15) <= 0x15 )
      {
        sub_26240F0(v8 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v15 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v15 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v8 + 168) += 22LL;
      }
      sub_60BBA0(v8, 0);
      if ( (*(_DWORD *)v8)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v8, nullptr, v17, v18);
        operator delete((void *)v8, 0xC0u);
      }
    }
  }
}

