__int64 *__fastcall sub_F5AA90(__int64 *a1, __int64 a2)
{
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rcx
  int v6; // ebp
  __int64 v7; // rdi
  __int64 *v8; // rax
  unsigned __int64 v9; // r10
  __int64 v10; // rdx
  __int64 v12; // rax
  __int64 *v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // r9
  __int64 v18; // r8
  __int64 v19; // rsi

  if ( a1 != (__int64 *)a2 )
  {
    v3 = *(unsigned int *)(a2 + 8);
    v4 = *((unsigned int *)a1 + 2);
    v6 = *(_DWORD *)(a2 + 8);
    if ( v3 <= v4 )
    {
      if ( *(_DWORD *)(a2 + 8) )
      {
        v12 = *a1;
        v13 = *(__int64 **)a2;
        v14 = *a1 + 16 * v3;
        do
        {
          v15 = *v13;
          v16 = v13[1];
          v12 += 16;
          v13 += 2;
          *(_QWORD *)(v12 - 16) = v15;
          *(_QWORD *)(v12 - 8) = v16;
        }
        while ( v12 != v14 );
      }
    }
    else
    {
      if ( v3 > *((unsigned int *)a1 + 3) )
      {
        *((_DWORD *)a1 + 2) = 0;
        sub_22134E0(a1, a1 + 2, v3, 16);
        v3 = *(unsigned int *)(a2 + 8);
        v7 = *a1;
        v9 = 0;
        v8 = *(__int64 **)a2;
        v4 = 0;
      }
      else
      {
        v7 = *a1;
        v8 = *(__int64 **)a2;
        v9 = 0;
        if ( v4 )
        {
          v4 *= 16LL;
          v9 = v4;
          v17 = (__int64 *)((char *)v8 + v4);
          do
          {
            v18 = *v8;
            v19 = v8[1];
            v8 += 2;
            v7 += 16;
            *(_QWORD *)(v7 - 16) = v18;
            *(_QWORD *)(v7 - 8) = v19;
          }
          while ( v8 != v17 );
          v7 = *a1;
          v8 = *(__int64 **)a2;
        }
      }
      v10 = 2 * v3;
      if ( (__int64 *)((char *)v8 + v4) != &v8[v10] )
        memcpy((void *)(v4 + v7), (char *)v8 + v4, v10 * 8 - v9);
    }
    *((_DWORD *)a1 + 2) = v6;
  }
  return a1;
}

