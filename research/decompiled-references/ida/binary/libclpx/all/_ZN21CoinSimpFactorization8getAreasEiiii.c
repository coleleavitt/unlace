__int64 __fastcall CoinSimpFactorization::getAreas(CoinSimpFactorization *this, int a2, int a3)
{
  int v4; // ebp
  __int64 result; // rax
  int v6; // ebp
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  unsigned __int64 v12; // rdi

  v4 = *((_DWORD *)this + 12);
  result = (unsigned int)((a2 + 1) >> 1);
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 10) = a3;
  if ( (int)result >= v4 )
    v4 = (a2 + 1) >> 1;
  v6 = a2 * (a2 + v4);
  if ( *((_DWORD *)this + 16) < v6 )
  {
    v7 = *((void **)this + 10);
    if ( v7 )
      operator delete[](v7);
    if ( (unsigned __int64)v6 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_17;
    result = operator new[](8LL * v6);
    a2 = *((_DWORD *)this + 9);
    *((_QWORD *)this + 10) = result;
    *((_DWORD *)this + 16) = v6;
  }
  if ( *((_DWORD *)this + 15) < a2 )
  {
    v8 = *((void **)this + 9);
    *((_DWORD *)this + 15) = a2;
    if ( v8 )
      operator delete[](v8);
    v9 = *((void **)this + 11);
    if ( v9 )
      operator delete[](v9);
    v10 = *((_DWORD *)this + 12) + 2 * *((_DWORD *)this + 15);
    if ( v10 <= 0x1FFFFFFFFFFFFFFELL )
    {
      v11 = operator new[](4 * v10);
      v12 = *((int *)this + 15);
      *((_QWORD *)this + 9) = v11;
      if ( v12 <= 0xFFFFFFFFFFFFFFFLL )
      {
        *((_QWORD *)this + 11) = operator new[](8 * v12);
        return CoinSimpFactorization::allocateSomeArrays(this);
      }
    }
LABEL_17:
    __cxa_throw_bad_array_new_length();
  }
  return result;
}

