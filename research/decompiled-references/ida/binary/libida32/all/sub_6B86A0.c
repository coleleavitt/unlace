__int64 __fastcall sub_6B86A0(_QWORD *a1, __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v5; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rbp
  const void *v9; // r13
  void *v10; // rdi
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  _QWORD *v13; // r9
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rax

  if ( a1[36] )
  {
    v11 = a1[34];
    v12 = a3 % v11;
    v13 = *(_QWORD **)(a1[33] + 8 * v12);
    if ( !v13 )
      return 0;
    v14 = (_QWORD *)*v13;
    if ( a3 != *(_QWORD *)(*v13 + 8LL) )
    {
      do
      {
        v15 = (_QWORD *)*v14;
        if ( !*v14 )
          return 0;
        v13 = v14;
        if ( v12 != v15[1] % v11 )
          return 0;
        v14 = (_QWORD *)*v14;
      }
      while ( a3 != v15[1] );
    }
    if ( !v13 )
      return 0;
    v5 = (_QWORD *)*v13;
    if ( !*v13 )
      return 0;
    if ( a2 )
      goto LABEL_7;
  }
  else
  {
    v5 = (_QWORD *)a1[35];
    if ( !v5 )
      return 0;
    while ( v5[1] != a3 )
    {
      v5 = (_QWORD *)*v5;
      if ( !v5 )
        return 0;
    }
    if ( a2 )
    {
LABEL_7:
      v7 = a1[30] + 24LL * v5[2];
      if ( a2 != (__int64 *)v7 )
      {
        v8 = *(_QWORD *)(v7 + 8);
        if ( v8 < 2 )
        {
          a2[1] = 0;
        }
        else
        {
          v9 = *(const void **)v7;
          v10 = (void *)*a2;
          if ( a2[2] < v8 )
          {
            v16 = qvector_reserve(a2, *a2, *(_QWORD *)(v7 + 8), 1);
            *a2 = v16;
            v10 = (void *)v16;
          }
          a2[1] = v8;
          memmove(v10, v9, v8 - 1);
          *(_BYTE *)(*a2 + v8 - 1) = 0;
        }
      }
    }
  }
  return 1;
}

