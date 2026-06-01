void __fastcall CoinOslFactorization::gutsOfDestructor(CoinOslFactorization *this, char a2)
{
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  __m128i si128; // xmm2
  __m128i v8; // xmm0
  __m128i v9; // xmm2
  __int64 v10; // rax

  v3 = *((void **)this + 10);
  if ( v3 )
    operator delete[](v3);
  v4 = *((void **)this + 9);
  if ( v4 )
    operator delete[](v4);
  v5 = *((void **)this + 11);
  if ( v5 )
    operator delete[](v5);
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 11) = 0;
  *(_QWORD *)((char *)this + 36) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_QWORD *)this + 7) = 0xFFFFFFFFLL;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 24) = 0;
  if ( a2 )
  {
    v6 = *((void **)this + 28);
    if ( v6 )
    {
      si128 = _mm_load_si128((const __m128i *)&xmmword_298420);
      *((_QWORD *)this + 29) += 8LL;
      *((__m128i *)this + 10) = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 10), si128);
      v8 = _mm_add_epi64(_mm_loadu_si128((const __m128i *)this + 11), si128);
      v9 = _mm_add_epi64(si128, _mm_loadu_si128((const __m128i *)this + 9));
      *((__m128i *)this + 11) = v8;
      *((__m128i *)this + 9) = v9;
    }
    v10 = *((_QWORD *)this + 34);
    if ( v10 )
    {
      *((_QWORD *)this + 33) += 4LL;
      *((_QWORD *)this + 35) += 8LL;
      *((_QWORD *)this + 34) = v10 + 4;
    }
    clp_free(v6);
    clp_free(*((void **)this + 36));
    clp_free(*((void **)this + 33));
    clp_free(*((void **)this + 34));
    clp_free(*((void **)this + 35));
    *((_DWORD *)this + 120) = 0;
    *((_QWORD *)this + 18) = 0;
    *((_QWORD *)this + 19) = 0;
    *((_QWORD *)this + 20) = 0;
    *((_QWORD *)this + 21) = 0;
    *((_QWORD *)this + 22) = 0;
    *((_QWORD *)this + 23) = 0;
    *((_QWORD *)this + 34) = 0;
    *((_QWORD *)this + 33) = 0;
    *((_QWORD *)this + 35) = 0;
    *((_QWORD *)this + 36) = 0;
    *((_QWORD *)this + 28) = 0;
    *((_QWORD *)this + 40) = 0;
    *((_QWORD *)this + 41) = 0;
    *((_QWORD *)this + 37) = 0;
    *((_QWORD *)this + 38) = 0;
    *((_QWORD *)this + 29) = 0;
    *((_QWORD *)this + 39) = 0;
  }
}

