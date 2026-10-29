__int64 __fastcall CoinPartitionedVector::clearAndReset(CoinPartitionedVector *this)
{
  __int64 v1; // rbp
  int v2; // eax
  __int64 result; // rax

  if ( *((_DWORD *)this + 25) )
  {
    v1 = 1;
    if ( *((int *)this + 25) > 0 )
    {
      do
      {
        memset((void *)(*((_QWORD *)this + 1) + 8LL * *((int *)this + v1 + 7)), 0, 8LL * *((int *)this + v1 + 16));
        *((_DWORD *)this + v1 + 16) = 0;
        v2 = v1++;
      }
      while ( *((_DWORD *)this + 25) > v2 );
    }
  }
  else
  {
    memset(*((void **)this + 1), 0, 8LL * *((int *)this + 4));
  }
  result = *((unsigned int *)this + 5);
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_BYTE *)this + 28) = 0;
  *((_DWORD *)this + 9) = result;
  return result;
}

