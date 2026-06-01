__int64 __fastcall clang_visitFiles(__int64 a1, unsigned int (__fastcall *a2)(__int64, __int64), __int64 a3)
{
  __int64 v4; // rdx
  int v5; // eax
  __int64 *v6; // rdx
  __int64 v7; // rdi
  __int64 *v8; // rbx
  __int64 *v9; // rbp
  __int64 *v10; // rax
  _BYTE *v12; // r13
  bool v13; // r12
  __int64 v14; // rbx
  _OWORD *v15; // rax
  __m128i si128; // xmm0
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rcx

  if ( a1 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    v5 = *(_DWORD *)(v4 + 528);
    if ( !v5 )
      return 0;
    v6 = *(__int64 **)(v4 + 520);
    v7 = *v6;
    v8 = v6;
    if ( *v6 == -8 || !v7 )
    {
      do
      {
        do
        {
          v7 = v8[1];
          ++v8;
        }
        while ( !v7 );
      }
      while ( v7 == -8 );
    }
    v9 = &v6[v5];
    if ( v8 == v9 )
      return 0;
    while ( (*(_BYTE *)(v7 + 24) & 1) != 0 || (*(_BYTE *)(v7 + 8) & 4) != 0 || a2(v7, a3) )
    {
      v7 = v8[1];
      if ( v7 && v7 != -8 )
      {
        if ( v9 == ++v8 )
          return 0;
      }
      else
      {
        v10 = v8 + 2;
        do
        {
          do
          {
            v7 = *v10;
            v8 = v10++;
          }
          while ( !v7 );
        }
        while ( v7 == -8 );
        if ( v9 == v8 )
          return 0;
      }
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v12 = (_BYTE *)qword_4AD21C8;
    v13 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v13 = *v12 == 50;
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    if ( qword_4AD21C8 )
    {
      v14 = operator new(0xC0u);
      *(_DWORD *)v14 = 0;
      *(_QWORD *)(v14 + 8) = v14 + 24;
      v15 = (_OWORD *)std::string::_M_create();
      si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E360);
      *(_QWORD *)(v14 + 8) = v15;
      *(_QWORD *)(v14 + 24) = 16;
      *v15 = si128;
      v17 = *(_QWORD *)(v14 + 8);
      v18 = _mm_load_si128((const __m128i *)&xmmword_3C7E260);
      *(_QWORD *)(v14 + 16) = 16;
      *(_BYTE *)(v17 + 16) = 0;
      *(_QWORD *)(v14 + 48) = v14 + 72;
      *(_BYTE *)(v14 + 40) = v13;
      *(__m128i *)(v14 + 56) = v18;
      *(_QWORD *)(v14 + 136) = &off_49DA340;
      *(_QWORD *)(v14 + 184) = v14 + 48;
      *(_DWORD *)(v14 + 144) = 2;
      *(_BYTE *)(v14 + 176) = 0;
      *(_DWORD *)(v14 + 180) = 1;
      *(_QWORD *)(v14 + 168) = 0;
      *(_OWORD *)(v14 + 152) = 0;
      sub_2623850(v14 + 136, 0, 0, 0, v19, v20);
      v21 = *(_QWORD *)(v14 + 168);
      v22 = *(_QWORD *)(v14 + 160);
      ++*(_DWORD *)v14;
      if ( (unsigned __int64)(v22 - v21) <= 0x15 )
      {
        sub_26240F0(v14 + 136, "called with a bad TU: ", 22);
      }
      else
      {
        *(__m128i *)v21 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(_QWORD *)(v21 + 14) = 0x203A555420646162LL;
        *(_QWORD *)(v14 + 168) += 22LL;
      }
      sub_5FF0F0(v14 + 136, "<NULL TU>");
      if ( (*(_DWORD *)v14)-- == 1 )
      {
        sub_60C330((pthread_mutex_t *)v14, (__int64 (*)())"<NULL TU>", v23, v24);
        operator delete((void *)v14, 0xC0u);
      }
    }
  }
  return 1;
}

