// Alternative name is '_ZN16MyMessageHandlerD1Ev'
void __fastcall MyMessageHandler::~MyMessageHandler(MyMessageHandler *this)
{
  const __m128i *v2; // rdi
  __m128i v3; // xmm3
  __m128i v4; // xmm2
  __m128i v5; // xmm1
  __m128i v6; // xmm0
  void *v7; // rdi
  void **v8; // rbx
  unsigned __int64 v9; // r12
  void *v10; // rdi
  _OWORD v11[2]; // [rsp+0h] [rbp-58h] BYREF
  _OWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF

  v2 = (const __m128i *)((char *)this + 1608);
  v3 = _mm_loadu_si128(v2 + 3);
  v4 = _mm_loadu_si128(v2 + 4);
  v2[-101].m128i_i64[1] = (__int64)&off_4D1380;
  v5 = _mm_loadu_si128(v2 + 1);
  v6 = _mm_loadu_si128(v2 + 2);
  v11[0] = v3;
  v11[1] = v4;
  v12[0] = v5;
  v12[1] = v6;
  ((void (__fastcall *)(const __m128i *, _OWORD *, _OWORD *))std::deque<std::vector<double>>::_M_destroy_data_aux)(
    v2,
    v12,
    v11);
  v7 = *((void **)this + 201);
  if ( v7 )
  {
    v8 = *((void ***)this + 206);
    v9 = *((_QWORD *)this + 210) + 8LL;
    if ( v9 > (unsigned __int64)v8 )
    {
      do
      {
        v10 = *v8++;
        operator delete(v10);
      }
      while ( v9 > (unsigned __int64)v8 );
      v7 = *((void **)this + 201);
    }
    operator delete(v7);
  }
  CoinMessageHandler::~CoinMessageHandler(this);
}

