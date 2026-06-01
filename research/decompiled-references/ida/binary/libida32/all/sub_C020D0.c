__int64 *__fastcall sub_C020D0(__int64 *a1, __int64 *a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  int v5; // ebp
  __int64 v6; // r8
  __int64 v7; // rcx
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rax

  if ( a1 != a2 )
  {
    v3 = *((unsigned int *)a2 + 2);
    v4 = *((unsigned int *)a1 + 2);
    v5 = *((_DWORD *)a2 + 2);
    if ( v3 <= v4 )
    {
      if ( *((_DWORD *)a2 + 2) )
      {
        v11 = *a1;
        v12 = *a2;
        v13 = 8 * v3;
        v14 = 0;
        do
        {
          *(_QWORD *)(v11 + v14) = *(_QWORD *)(v12 + v14);
          v14 += 8;
        }
        while ( v13 != v14 );
      }
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        sub_22134E0(a1, a1 + 2, v3, 8);
        v6 = *a1;
        v7 = *a2;
        v8 = 0;
        v3 = *((unsigned int *)a2 + 2);
        v4 = 0;
      }
      else
      {
        v6 = *a1;
        v7 = *a2;
        v8 = 0;
        if ( v4 )
        {
          v4 *= 8LL;
          v15 = 0;
          v8 = v4;
          do
          {
            *(_QWORD *)(v6 + v15) = *(_QWORD *)(v7 + v15);
            v15 += 8;
          }
          while ( v4 != v15 );
        }
      }
      v9 = 8 * v3;
      if ( v7 + v4 != v9 + v7 )
        memcpy((void *)(v6 + v4), (const void *)(v7 + v4), v9 - v8);
    }
    *((_DWORD *)a1 + 2) = v5;
  }
  return a1;
}

