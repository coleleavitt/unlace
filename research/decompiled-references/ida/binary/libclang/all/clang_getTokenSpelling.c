__int64 __fastcall clang_getTokenSpelling(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        __m128 si128,
        __int64 a8,
        size_t n,
        _QWORD *src)
{
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rbp
  size_t v17; // rdx
  _BYTE *v18; // rbx
  char v19; // bp
  pthread_mutex_t *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v25[4]; // [rsp+8h] [rbp-20h] BYREF

  if ( (unsigned int)a8 <= 2 )
  {
    if ( (_DWORD)a8 )
      return sub_6904A0(src[2] + 16LL);
  }
  else if ( (_DWORD)a8 == 3 )
  {
    return sub_6905C0(src, (unsigned int)n);
  }
  if ( a1 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( !v11 )
      return sub_690460(*(double *)si128.m128_u64);
    v12 = sub_600EA0(*(_QWORD *)(v11 + 32), SHIDWORD(a8));
    LOBYTE(v25[0]) = 0;
    v13 = v12;
    v14 = sub_CAC050(*(_QWORD *)(v11 + 32), (unsigned int)v12, v25);
    if ( LOBYTE(v25[0]) )
    {
      return sub_690460(*(double *)si128.m128_u64);
    }
    else
    {
      v16 = HIDWORD(v13);
      if ( v16 > v15 )
        v16 = v15;
      v17 = v15 - v16;
      if ( v17 > (unsigned int)n )
        v17 = (unsigned int)n;
      return sub_6905C0((void *)(v16 + v14), v17);
    }
  }
  else
  {
    if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
    {
      qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
      __cxa_guard_release(&qword_4AD21C0);
    }
    v18 = (_BYTE *)qword_4AD21C8;
    v19 = 0;
    if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
      v19 = *v18 == 50;
    sub_5FF1E0((__int64 *)v25, "clang_getTokenSpelling", 0x16u, v19);
    v20 = (pthread_mutex_t *)v25[0];
    if ( v25[0] )
    {
      v21 = *((_QWORD *)v25[0] + 21);
      if ( (unsigned __int64)(*((_QWORD *)v25[0] + 20) - v21) <= 0x15 )
      {
        sub_26240F0((char *)v25[0] + 136, "called with a bad TU: ", 22);
      }
      else
      {
        si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
        *(__m128 *)v21 = si128;
        *(_QWORD *)(v21 + 14) = 0x203A555420646162LL;
        *(&v20[4].__align + 1) += 22;
      }
      sub_5FF0F0((__int64)(&v20[3].__align + 2), "<NULL TU>");
      if ( v20->__lock-- == 1 )
      {
        sub_60C330(v20, (__int64 (*)())"<NULL TU>", v22, v23);
        operator delete(v20, 0xC0u);
      }
    }
    return sub_690460(*(double *)si128.m128_u64);
  }
}

