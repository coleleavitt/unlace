void __fastcall CoinIndexedVector::sortIncrElement(CoinIndexedVector *this)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rax
  __int64 v4; // r8
  void *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  _BYTE v9[25]; // [rsp+Fh] [rbp-19h] BYREF

  v2 = *((int *)this + 4);
  if ( v2 > 0xFFFFFFFFFFFFFFFLL )
    __cxa_throw_bad_array_new_length();
  v3 = operator new[](8 * v2);
  v4 = *((int *)this + 4);
  v5 = (void *)v3;
  if ( (int)v4 <= 0 )
  {
    v7 = *(_QWORD *)this;
  }
  else
  {
    v6 = *((_QWORD *)this + 1);
    v7 = *(_QWORD *)this;
    v8 = 0;
    do
    {
      *(_QWORD *)(v3 + 8 * v8) = *(_QWORD *)(v6 + 8LL * *(int *)(v7 + 4 * v8));
      ++v8;
    }
    while ( (unsigned int)(v4 - 1) + 1LL != v8 );
  }
  CoinSort_2<double,int,CoinFirstLess_2<double,int>>(v3, v3 + 8 * v4, v7, v9);
  operator delete[](v5);
}

