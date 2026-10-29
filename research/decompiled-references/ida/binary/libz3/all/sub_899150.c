__int64 __fastcall sub_899150(_QWORD *a1)
{
  __int64 *v2; // r13
  __int64 v3; // rax
  __int64 *v4; // r14
  __int64 v5; // rbx
  __int64 i; // rbp
  __int64 v7; // r15
  __int64 *v8; // rbx
  void *v9; // rdi
  __int64 v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  _QWORD *v13; // rbp
  void *v14; // rdi
  __int64 v15; // rax
  __int64 result; // rax

  v2 = (__int64 *)a1[1];
  if ( !v2 )
    goto LABEL_15;
  v3 = *((unsigned int *)v2 - 1);
  v4 = &v2[2 * v3];
  if ( v2 != v4 )
  {
    do
    {
      v5 = *v2;
      if ( *v2 )
      {
        for ( i = v5 + 40LL * *(unsigned int *)(v5 - 4); i != v5; *(_DWORD *)(v5 - 24) = 1 )
        {
          v7 = *a1;
          sub_182F200(*a1, v5);
          sub_182EF00(v7, v5 + 16);
          *(_BYTE *)(v5 + 20) &= ~1u;
          v5 += 40;
        }
      }
      v2 += 2;
    }
    while ( v4 != v2 );
    v4 = (__int64 *)a1[1];
    if ( !v4 )
      goto LABEL_15;
    v3 = *((unsigned int *)v4 - 1);
  }
  if ( (_DWORD)v3 )
  {
    v8 = &v4[2 * v3];
    do
    {
      while ( *v4 )
      {
        v9 = (void *)(*v4 - 8);
        v4 += 2;
        sub_186B220(v9);
        if ( v8 == v4 )
        {
          v4 = (__int64 *)a1[1];
          goto LABEL_14;
        }
      }
      v4 += 2;
    }
    while ( v8 != v4 );
    v4 = (__int64 *)a1[1];
  }
LABEL_14:
  *((_DWORD *)v4 - 1) = 0;
LABEL_15:
  v10 = a1[2];
  if ( v10 )
    *(_DWORD *)(v10 - 4) = 0;
  v11 = (_QWORD *)a1[3];
  if ( v11 )
  {
    v12 = *((unsigned int *)v11 - 1);
    if ( (_DWORD)v12 )
    {
      v13 = &v11[3 * v12];
      do
      {
        while ( *v11 )
        {
          v14 = (void *)(*v11 - 8LL);
          v11 += 3;
          sub_186B220(v14);
          if ( v13 == v11 )
          {
            v11 = (_QWORD *)a1[3];
            goto LABEL_23;
          }
        }
        v11 += 3;
      }
      while ( v13 != v11 );
      v11 = (_QWORD *)a1[3];
    }
LABEL_23:
    *((_DWORD *)v11 - 1) = 0;
  }
  v15 = a1[4];
  if ( v15 )
    *(_DWORD *)(v15 - 4) = 0;
  result = a1[5];
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

