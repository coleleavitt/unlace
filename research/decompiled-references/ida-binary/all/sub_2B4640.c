__int64 __fastcall sub_2B4640(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r13
  size_t v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  char *v10; // rbp
  __int64 v11; // rax
  __int64 v13; // rax

  v2 = 4 * a2[1];
  v3 = v2 >> 2;
  if ( v2 >> 2 )
  {
    v4 = a1[4];
    v5 = *a2;
    v6 = 0;
    v7 = a1[3];
    v8 = 4 * v4;
    v9 = v3 + v4;
    if ( a1[5] < v9 )
    {
      v13 = qvector_reserve(a1 + 3, v7, v9, 4);
      a1[3] = v13;
      v7 = v13;
      v6 = 4LL * a1[4] - v8;
    }
    v10 = (char *)(v7 + v8);
    memmove(&v10[v2], v10, v6);
    v11 = 0;
    if ( v2 )
    {
      do
      {
        *(_DWORD *)&v10[v11] = *(_DWORD *)(v5 + v11);
        v11 += 4;
      }
      while ( v2 != v11 );
    }
    a1[4] += v3;
  }
  return sub_466DA0(a1);
}
