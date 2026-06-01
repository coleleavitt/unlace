__int64 __fastcall CoinArrayWithLength::allocate(CoinArrayWithLength *this, const CoinArrayWithLength *a2, int a3)
{
  __int64 result; // rax
  void *v5; // rdi
  int v6; // [rsp+Ch] [rbp-Ch]

  result = *((unsigned int *)a2 + 2);
  if ( a3 == -1 )
    goto LABEL_11;
  if ( (int)result < -1 )
  {
    if ( a3 > -2 - (int)result )
      goto LABEL_4;
    return CoinArrayWithLength::getCapacity(this, result, -1);
  }
  if ( a3 <= (int)result )
  {
LABEL_11:
    if ( (_DWORD)result == -1 )
      return CoinArrayWithLength::reallyFreeArray(this);
    return CoinArrayWithLength::getCapacity(this, result, -1);
  }
LABEL_4:
  if ( *((_DWORD *)this + 2) == -1 )
  {
    v5 = *(void **)this;
    if ( v5 )
    {
      v6 = a3;
      operator delete[](v5);
      a3 = v6;
      result = *((unsigned int *)a2 + 2);
    }
    *(_QWORD *)this = 0;
  }
  else
  {
    *((_DWORD *)this + 2) = -1;
    result = *((unsigned int *)a2 + 2);
  }
  if ( (int)result >= 0 )
    *((_DWORD *)this + 2) = a3;
  if ( a3 )
  {
    result = operator new[](a3);
    *(_QWORD *)this = result;
  }
  return result;
}

