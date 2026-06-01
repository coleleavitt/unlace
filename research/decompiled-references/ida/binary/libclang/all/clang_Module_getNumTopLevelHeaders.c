__int64 __fastcall clang_Module_getNumTopLevelHeaders(__int64 a1, __int64 a2)
{
  unsigned int v2; // edx
  _BYTE *v4; // r13
  bool v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rax
  __m128i si128; // xmm0
  __m128i v9; // xmm0
  __int64 v10; // rax
  __m128i v11; // xmm0
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx

  if ( a1 )
  {
    if ( a2 )
    {
      sub_C9E680(a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
      return v2;
    }
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
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E310);
      *(_QWORD *)(v6 + 8) = v7;
      *(_QWORD *)(v6 + 24) = 34;
      *(__m128i *)v7 = si128;
      v9 = _mm_load_si128((const __m128i *)&xmmword_3C7E320);
      *(_WORD *)(v7 + 32) = 29554;
      *(__m128i *)(v7 + 16) = v9;
      v10 = *(_QWORD *)(v6 + 8);
      v11 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v6 + 16) = 34;
      *(_BYTE *)(v10 + 34) = 0;
      *(_QWORD *)(v6 + 48) = v6 + 72;
      *(_BYTE *)(v6 + 40) = v5;
      *(__m128i *)(v6 + 56) = v11;
      *(_QWORD *)(v6 + 136) = &off_49DA340;
      *(_QWORD *)(v6 + 184) = v6 + 48;
      *(_DWORD *)(v6 + 144) = 2;
      *(_BYTE *)(v6 + 176) = 0;
      *(_DWORD *)(v6 + 180) = 1;
      *(_QWORD *)(v6 + 168) = 0;
      *(_OWORD *)(v6 + 152) = 0;
      sub_2623850(v6 + 136, 0, 0, 0, v12, v13);
      v14 = *(_QWORD *)(v6 + 168);
      v15 = *(_QWORD *)(v6 + 160);
      ++*(_DWORD *)v6;
      if ( (unsigned __int64)(v15 - v14) <= 0x15 )
      {
        sub_26240F0(v6 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v14 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v14 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v6 + 168) += 22LL;
      }
      sub_5FF0F0(v6 + 136, "<NULL TU>");
      if ( (*(_DWORD *)v6)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v6, (__int64 (*)())"<NULL TU>", v16, v17);
        operator delete((void *)v6, 0xC0u);
      }
    }
  }
  return 0;
}

