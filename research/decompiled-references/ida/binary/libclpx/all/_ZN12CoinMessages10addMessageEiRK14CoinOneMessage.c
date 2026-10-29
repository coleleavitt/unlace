__int64 __fastcall CoinMessages::addMessage(CoinMessages *this, int a2, const CoinOneMessage *a3)
{
  __int64 v4; // rbx
  unsigned __int64 v6; // rdi
  _QWORD *v7; // rax
  __int64 v8; // rsi
  _QWORD *v9; // r14
  unsigned __int64 v10; // r13
  int v11; // edi
  __int64 v12; // rax
  unsigned int v13; // edx
  unsigned int v14; // r8d
  __int64 v15; // rcx
  unsigned __int64 v16; // r10
  _QWORD *v17; // rcx
  signed int v18; // edi
  __int64 v19; // rax
  int v20; // edi
  __int64 v21; // rax
  void *v22; // r13
  CoinOneMessage *v23; // r13
  __int64 result; // rax
  unsigned __int64 v25; // rax

  v4 = a2;
  if ( *(_DWORD *)this <= a2 )
  {
    v6 = a2 + 1;
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v7 = (_QWORD *)operator new[](8 * v6);
    v8 = *(int *)this;
    v9 = v7;
    if ( (int)v8 <= 0 )
    {
      v10 = *((_QWORD *)this + 3);
      v8 = 0;
    }
    else
    {
      v10 = *((_QWORD *)this + 3);
      if ( (v10 >= (unsigned __int64)(v7 + 2) || (unsigned __int64)v7 >= v10 + 16) && (unsigned int)v8 > 0x18 )
      {
        v11 = 0;
        if ( ((v10 >> 3) & 1) != 0 )
        {
          v11 = 1;
          *v7 = *(_QWORD *)v10;
        }
        v12 = 0;
        v13 = 0;
        v14 = v8 - ((v10 >> 3) & 1);
        v15 = (v10 >> 3) & 1;
        v16 = v10 + v15 * 8;
        v17 = &v9[v15];
        do
        {
          ++v13;
          *(__m128i *)&v17[v12] = _mm_load_si128((const __m128i *)(v16 + v12 * 8));
          v12 += 2;
        }
        while ( v14 >> 1 > v13 );
        v18 = (v14 & 0xFFFFFFFE) + v11;
        if ( v14 != (v14 & 0xFFFFFFFE) )
        {
          v19 = v18;
          v20 = v18 + 1;
          v9[v19] = *(_QWORD *)(v10 + 8 * v19);
          if ( v20 < (int)v8 )
            v9[v20] = *(_QWORD *)(v10 + 8LL * v20);
        }
      }
      else
      {
        v25 = 0;
        do
        {
          v9[v25 / 8] = *(_QWORD *)(v10 + v25);
          v25 += 8LL;
        }
        while ( 8LL * (unsigned int)(v8 - 1) + 8 != v25 );
      }
    }
    if ( (int)v4 >= (int)v8 )
      memset(&v9[v8], 0, 8LL * (unsigned int)(v4 - v8) + 8);
    if ( v10 )
      operator delete[]((void *)v10);
    *((_QWORD *)this + 3) = v9;
  }
  if ( *((int *)this + 5) >= 0 )
    CoinMessages::fromCompact(this);
  v21 = *((_QWORD *)this + 3);
  v22 = *(void **)(v21 + 8 * v4);
  if ( v22 )
  {
    CoinOneMessage::~CoinOneMessage(*(CoinOneMessage **)(v21 + 8 * v4));
    operator delete(v22);
  }
  v23 = (CoinOneMessage *)operator new(0x198u);
  CoinOneMessage::CoinOneMessage(v23, a3);
  result = *((_QWORD *)this + 3);
  *(_QWORD *)(result + 8 * v4) = v23;
  return result;
}

