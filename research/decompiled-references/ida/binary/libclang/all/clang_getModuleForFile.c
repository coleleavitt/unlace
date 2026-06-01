unsigned __int64 __fastcall clang_getModuleForFile(__int64 a1, __int64 a2)
{
  _BYTE *v3; // rbx
  char v4; // bp
  pthread_mutex_t *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v10; // [rsp+8h] [rbp-20h] BYREF

  if ( a1 )
  {
    if ( a2 )
      return sub_114AEB0(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) + 104LL), a2, 0, 0) & 0xFFFFFFFFFFFFFFF8LL;
    return 0;
  }
  if ( !(_BYTE)qword_4AD21C0 && __cxa_guard_acquire(&qword_4AD21C0) )
  {
    qword_4AD21C8 = (__int64)getenv("LIBCLANG_LOGGING");
    __cxa_guard_release(&qword_4AD21C0);
  }
  v3 = (_BYTE *)qword_4AD21C8;
  v4 = 0;
  if ( qword_4AD21C8 && strlen((const char *)qword_4AD21C8) == 1 )
    v4 = *v3 == 50;
  sub_5FF1E0((__int64 *)&v10, "clang_getModuleForFile", 0x16u, v4);
  v5 = (pthread_mutex_t *)v10;
  if ( !v10 )
    return 0;
  v6 = *((_QWORD *)v10 + 21);
  if ( (unsigned __int64)(*((_QWORD *)v10 + 20) - v6) <= 0x15 )
  {
    sub_26240F0((char *)v10 + 136, "called with a bad TU: ", 22);
  }
  else
  {
    *(__m128i *)v6 = _mm_load_si128((const __m128i *)&xmmword_3C7E2B0);
    *(_QWORD *)(v6 + 14) = 0x203A555420646162LL;
    *(&v5[4].__align + 1) += 22;
  }
  sub_5FF0F0((__int64)(&v5[3].__align + 2), "<NULL TU>");
  if ( v5->__lock-- != 1 )
    return 0;
  sub_60C330(v5, (__int64 (*)())"<NULL TU>", v7, v8);
  operator delete(v5, 0xC0u);
  return 0;
}

