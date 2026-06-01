void __fastcall sub_140070(TApplication *this)
{
  __m128i v2; // xmm0
  __int64 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 i; // rbp
  _QWORD *v7; // rax
  __int64 *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // r15
  __int64 j; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rdi
  __m128i v14; // xmm0
  __m128i si128; // xmm5
  __int64 v16; // rdi
  __m128i v17[4]; // [rsp+0h] [rbp-48h] BYREF

  v2 = _mm_loadl_epi64((const __m128i *)&off_233600);
  v3 = (__int64 *)qword_2532F8;
  *((_QWORD *)this + 17) = off_238900;
  *((_QWORD *)this + 35) = off_238A18;
  *((_QWORD *)this + 38) = off_238AA8;
  v17[0] = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&unk_2384C8, (__m128i)(unsigned __int64)&unk_23B0B8);
  *(__m128i *)this = _mm_unpacklo_epi64(v2, (__m128i)(unsigned __int64)off_238838);
  if ( v3 )
  {
    v4 = *v3;
    if ( *v3 )
    {
      v5 = v3[1];
      if ( v5 )
      {
        for ( i = 0; i != v5; ++i )
        {
          v7 = (_QWORD *)(v4 + 24 * i);
          if ( *v7 )
          {
            v7[1] = 0;
            qfree();
            v4 = *v3;
          }
        }
      }
      v3[1] = 0;
      qfree();
    }
    operator delete(v3, 0x18u);
    qword_2532F8 = 0;
  }
  v8 = qword_252E48;
  if ( qword_252E48 )
  {
    v9 = *qword_252E48;
    if ( *qword_252E48 )
    {
      v10 = qword_252E48[1];
      if ( v10 )
      {
        for ( j = 0; j != v10; ++j )
        {
          v12 = (_QWORD *)(v9 + 24 * j);
          if ( *v12 )
          {
            v12[1] = 0;
            qfree();
            v9 = *v8;
          }
        }
      }
      v8[1] = 0;
      qfree();
    }
    operator delete(v8, 0x18u);
    qword_252E48 = nullptr;
  }
  v13 = *((_QWORD *)this + 41);
  v14 = _mm_loadl_epi64((const __m128i *)&off_233608);
  *((_QWORD *)this + 17) = &unk_237E98;
  *((_QWORD *)this + 35) = &unk_237FB0;
  *((_QWORD *)this + 38) = off_238040;
  *(__m128i *)this = _mm_unpacklo_epi64(v14, (__m128i)(unsigned __int64)&unk_237DD0);
  if ( v13 )
  {
    *((_QWORD *)this + 42) = 0;
    qfree();
  }
  si128 = _mm_load_si128(v17);
  v16 = *((_QWORD *)this + 31);
  *((_QWORD *)this + 17) = &unk_23B180;
  *(__m128i *)this = si128;
  if ( v16 )
  {
    *((_QWORD *)this + 32) = 0;
    qfree();
  }
  sub_174CF0((char *)this + 136);
  TApplication::~TApplication(this);
}

