void __fastcall __noreturn sub_151340(const __m128i *a1)
{
  __int64 v1; // rax
  __m128i v2; // xmm0
  _QWORD *v3; // rbx

  qmutex_lock();
  qmutex_unlock();
  while ( 1 )
  {
    do
    {
      qsleep();
      qmutex_lock();
      v1 = operator new(0x38u);
      v2 = _mm_loadu_si128(a1);
      *(_QWORD *)(v1 + 8) = 0;
      v3 = (_QWORD *)v1;
      *(_QWORD *)(v1 + 16) = 0;
      *(_QWORD *)v1 = off_234130;
      *(_QWORD *)(v1 + 24) = a1;
      *(__m128i *)(v1 + 32) = v2;
      *(_QWORD *)(v1 + 48) = a1[1].m128i_i64[0];
      qmutex_unlock();
      sub_175450(v3, 1, 0);
    }
    while ( !v3 );
    *v3 = &off_235C80;
    qsem_free();
    operator delete(v3, 0x38u);
  }
}

