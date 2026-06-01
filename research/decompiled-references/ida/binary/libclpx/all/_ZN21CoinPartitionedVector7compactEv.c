__int64 __fastcall CoinPartitionedVector::compact(CoinPartitionedVector *this)
{
  __int64 result; // rax
  int v3; // ebp
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // r15
  void *v7; // rdi
  int v8; // edx
  __int64 v9; // r13
  int v10; // ebp
  int v11; // edx
  int v12; // edx
  int v13; // ecx
  int v14; // edx
  __int64 v15; // [rsp+0h] [rbp-40h]

  result = *((unsigned int *)this + 25);
  if ( (_DWORD)result )
  {
    v3 = *((_DWORD *)this + 17);
    *((_DWORD *)this + 17) = 0;
    if ( (int)result <= 1 )
    {
      *((_DWORD *)this + 4) = v3;
    }
    else
    {
      v4 = 2;
      do
      {
        v5 = *((int *)this + v4 + 16);
        v6 = v3;
        v7 = (void *)(*(_QWORD *)this + 4LL * v3);
        v15 = *((int *)this + v4 + 7);
        v3 += v5;
        memmove(v7, (const void *)(*(_QWORD *)this + 4 * v15), 4 * v5);
        memmove((void *)(*((_QWORD *)this + 1) + 8 * v6), (const void *)(*((_QWORD *)this + 1) + 8 * v15), 8 * v5);
        result = *((unsigned int *)this + 25);
        v8 = v4++;
      }
      while ( (int)result > v8 );
      *((_DWORD *)this + 4) = v3;
      if ( (int)result > 1 )
      {
        v9 = 2;
        while ( 1 )
        {
          v12 = *((_DWORD *)this + v9 + 16);
          v13 = *((_DWORD *)this + v9 + 7);
          *((_DWORD *)this + v9 + 16) = 0;
          if ( v12 + v13 > v3 )
          {
            v10 = v3 - v13;
            if ( v10 < 0 )
              v10 = 0;
            memset((void *)(*((_QWORD *)this + 1) + 8LL * (v13 + v10)), 0, 8LL * (v12 - v10));
            result = *((unsigned int *)this + 25);
            v11 = v9++;
            if ( v11 >= (int)result )
              break;
          }
          else
          {
            v14 = v9++;
            if ( v14 >= (int)result )
              break;
          }
          v3 = *((_DWORD *)this + 4);
        }
      }
    }
    *((_BYTE *)this + 28) = 1;
    *((_DWORD *)this + 25) = 0;
  }
  return result;
}

