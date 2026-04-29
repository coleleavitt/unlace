__int64 __fastcall sub_3CD300(_QWORD *a1, int a2)
{
  unsigned __int64 v3; // rbx
  int v4; // ebp
  unsigned __int64 v5; // rdx
  __int64 v6; // r15
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rsi
  _QWORD *v17; // rax
  _QWORD *v18; // rcx
  __int64 v20; // [rsp+8h] [rbp-40h]

  v3 = a2;
  v4 = a2;
  v5 = a1[262];
  v20 = a2;
  if ( a2 < 0 )
  {
    v17 = (_QWORD *)a1[261];
    goto LABEL_14;
  }
  while ( 1 )
  {
LABEL_2:
    while ( v3 >= v5 )
    {
      v7 = a1[263];
      v8 = v5 + 1;
      if ( v7 >= v8 )
      {
        v6 = a1[261];
      }
      else
      {
        v9 = qvector_reserve(a1 + 261, 0, v8, 8);
        v10 = a1[262];
        v11 = a1[263];
        a1[263] = v7;
        v12 = (__int64 *)a1[261];
        v6 = v9;
        v13 = v10 - 1;
        if ( v13 >= 0 )
        {
          v14 = v9;
          do
          {
            v15 = *v12;
            v14 += 8;
            ++v12;
            *(_QWORD *)(v14 - 8) = v15;
          }
          while ( v13-- != 0 );
          v12 = (__int64 *)a1[261];
        }
        qfree(v12);
        a1[261] = v6;
        a1[263] = v11;
      }
      *(_QWORD *)(v6 + 8LL * a1[262]) = 0;
      v5 = a1[262] + 1LL;
      a1[262] = v5;
    }
    v17 = (_QWORD *)a1[261];
    if ( !v17[v20] )
      return (unsigned int)v4;
    v5 = a1[262];
LABEL_14:
    v18 = &v17[v5];
    if ( v17 != v18 )
    {
      v4 = 0;
      while ( *v17 )
      {
        ++v17;
        ++v4;
        if ( v18 == v17 )
        {
          v3 = v4;
          v20 = v4;
          goto LABEL_2;
        }
      }
      return (unsigned int)v4;
    }
    v20 = 0;
    v3 = 0;
    v4 = 0;
  }
}
