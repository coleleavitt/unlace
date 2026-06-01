__int64 __fastcall CoinPresolveMatrix::initRowsToDo(CoinPresolveMatrix *this)
{
  bool v1; // zf
  __int64 result; // rax
  int *v3; // rcx
  int v4; // edx
  _BYTE *v5; // rcx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rsi

  v1 = *((_BYTE *)this + 440) == 0;
  *((_DWORD *)this + 108) = 0;
  result = *((unsigned int *)this + 1);
  if ( v1 )
  {
    if ( (int)result > 0 )
    {
      v3 = *((int **)this + 51);
      v4 = 0;
      do
      {
        *v3 = v4;
        result = *((unsigned int *)this + 1);
        ++v4;
        ++v3;
      }
      while ( (int)result > v4 );
    }
    *((_DWORD *)this + 104) = result;
  }
  else
  {
    *((_DWORD *)this + 104) = 0;
    if ( (int)result > 0 )
    {
      v5 = *((_BYTE **)this + 50);
      v6 = 0;
      do
      {
        while ( (*v5 & 2) == 0 )
        {
          v7 = *((int *)this + 104);
          v8 = *((_QWORD *)this + 51);
          ++v5;
          *((_DWORD *)this + 104) = v7 + 1;
          *(_DWORD *)(v8 + 4 * v7) = v6++;
          result = *((unsigned int *)this + 1);
          if ( v6 >= (int)result )
            return result;
        }
        ++v6;
        ++v5;
      }
      while ( v6 < (int)result );
    }
  }
  return result;
}

