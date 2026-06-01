__int64 __fastcall sub_48E2D0(_QWORD *a1)
{
  __int64 *v2; // r13
  __int64 *i; // r14
  __int64 v4; // rbx
  __int64 j; // rbp
  __int64 v6; // r15
  __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rax
  _QWORD *v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rbp
  void *v13; // rdi
  __int64 result; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rbp
  void *v18; // rdi

  v2 = (__int64 *)a1[1];
  if ( v2 )
  {
    for ( i = &v2[2 * *((unsigned int *)v2 - 1)]; i != v2; v2 += 2 )
    {
      v4 = *v2;
      if ( *v2 )
      {
        for ( j = v4 + 40LL * *(unsigned int *)(v4 - 4); j != v4; *(_DWORD *)(v4 - 24) = 1 )
        {
          v6 = *a1;
          sub_182F200(*a1, v4);
          sub_182EF00(v6, v4 + 16);
          *(_BYTE *)(v4 + 20) &= ~1u;
          v4 += 40;
        }
      }
    }
  }
  v7 = a1[7];
  sub_182EF00(v7, a1 + 8);
  sub_182EF00(v7, a1 + 10);
  v8 = a1[5];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[4];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (_QWORD *)a1[3];
  if ( v10 )
  {
    v11 = *((unsigned int *)v10 - 1);
    if ( (_DWORD)v11 )
    {
      v12 = &v10[3 * v11];
      do
      {
        while ( *v10 )
        {
          v13 = (void *)(*v10 - 8LL);
          v10 += 3;
          sub_186B220(v13);
          if ( v12 == v10 )
          {
            v10 = (_QWORD *)a1[3];
            goto LABEL_17;
          }
        }
        v10 += 3;
      }
      while ( v12 != v10 );
      v10 = (_QWORD *)a1[3];
    }
LABEL_17:
    sub_186B220(v10 - 1);
  }
  result = a1[2];
  if ( result )
    result = sub_186B220((void *)(result - 8));
  v15 = (_QWORD *)a1[1];
  if ( v15 )
  {
    v16 = *((unsigned int *)v15 - 1);
    if ( (_DWORD)v16 )
    {
      v17 = &v15[2 * v16];
      do
      {
        while ( *v15 )
        {
          v18 = (void *)(*v15 - 8LL);
          v15 += 2;
          sub_186B220(v18);
          if ( v17 == v15 )
          {
            v15 = (_QWORD *)a1[1];
            return sub_186B220(v15 - 1);
          }
        }
        v15 += 2;
      }
      while ( v17 != v15 );
      v15 = (_QWORD *)a1[1];
    }
    return sub_186B220(v15 - 1);
  }
  return result;
}

