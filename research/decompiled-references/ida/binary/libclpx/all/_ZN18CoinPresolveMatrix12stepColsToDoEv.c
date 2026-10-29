__int64 __fastcall CoinPresolveMatrix::stepColsToDo(CoinPresolveMatrix *this)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // ecx
  __int64 v4; // rsi

  result = *((unsigned int *)this + 98);
  if ( (int)result > 0 )
  {
    v2 = 0;
    v3 = 0;
    do
    {
      ++v3;
      v4 = *(int *)(*((_QWORD *)this + 48) + v2);
      *(_BYTE *)(*((_QWORD *)this + 45) + v4) &= ~1u;
      *(_DWORD *)(*((_QWORD *)this + 46) + v2) = v4;
      v2 += 4;
      result = *((unsigned int *)this + 98);
    }
    while ( (int)result > v3 );
  }
  *((_DWORD *)this + 94) = result;
  *((_DWORD *)this + 98) = 0;
  return result;
}

