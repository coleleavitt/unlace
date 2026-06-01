__int64 __fastcall clang_Module_getTopLevelHeader(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  unsigned __int64 v5; // rdx
  _BYTE *v7; // rbx
  char v8; // bp
  pthread_mutex_t *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  void *v14; // [rsp+8h] [rbp-20h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      v4 = sub_C9E680(a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL));
      if ( a3 < v5 )
        return *(_QWORD *)(v4 + 8LL * a3);
    }
    return 0;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v7 = (_BYTE *)qword_4AD21C8;
  v8 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v8 = *v7 == 50;
  sub_5FF1E0((__int64 *)&v14, "clang_Module_getTopLevelHeader", 0x1Eu, v8);
  v9 = (pthread_mutex_t *)v14;
  if ( !v14 )
    return 0;
  v10 = *((_QWORD *)v14 + 21);
  if ( (unsigned __int64)(*((_QWORD *)v14 + 20) - v10) <= 0x15 )
  {
    sub_26240F0((char *)v14 + 136, "called with a bad TU: ", 22);
  }
  else
  {
    *(__m128i *)v10 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
    *(_QWORD *)(v10 + 14) = 0x203A555420646162LL;
    *(&v9[4].__align + 1) += 22;
  }
  sub_5FF0F0((__int64)(&v9[3].__align + 2), "<NULL TU>");
  if ( v9->__lock-- != 1 )
    return 0;
  sub_60C330(v9, (__int64 (*)())"<NULL TU>", v11, v12);
  operator delete(v9, 0xC0u);
  return 0;
}

