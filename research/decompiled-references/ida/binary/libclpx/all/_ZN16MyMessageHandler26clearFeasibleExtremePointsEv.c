__int64 __fastcall MyMessageHandler::clearFeasibleExtremePoints(
        MyMessageHandler *this,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  const __m128i *v7; // rdi
  __int64 v8; // r12
  __m128i v9; // xmm1
  __int64 v10; // r15
  __int64 v11; // r14
  __m128i v12; // xmm0
  void **v13; // rbx
  __m128i v14; // xmm2
  unsigned __int64 v15; // rbp
  void *v16; // rdi
  __int64 v18; // [rsp+8h] [rbp-80h]
  _OWORD v19[2]; // [rsp+10h] [rbp-78h] BYREF
  _OWORD v20[5]; // [rsp+30h] [rbp-58h] BYREF

  v7 = (const __m128i *)((char *)this + 1608);
  v8 = v7[2].m128i_i64[1];
  v9 = _mm_loadu_si128(v7 + 1);
  v10 = v7[1].m128i_i64[0];
  v11 = v7[1].m128i_i64[1];
  v12 = _mm_loadu_si128(v7 + 2);
  v13 = (void **)(v8 + 8);
  v18 = v7[2].m128i_i64[0];
  v14 = _mm_loadu_si128(v7 + 4);
  v19[0] = _mm_loadu_si128(v7 + 3);
  v19[1] = v14;
  v20[0] = v9;
  v20[1] = v12;
  std::deque<std::vector<double>>::_M_destroy_data_aux(v7, v20, v19, a4, a5, a6);
  v15 = *((_QWORD *)this + 210) + 8LL;
  if ( v15 > v8 + 8 )
  {
    do
    {
      v16 = *v13++;
      operator delete(v16);
    }
    while ( v15 > (unsigned __int64)v13 );
  }
  *((_QWORD *)this + 207) = v10;
  *((_QWORD *)this + 208) = v11;
  *((_QWORD *)this + 210) = v8;
  *((_QWORD *)this + 209) = v18;
  return v18;
}

