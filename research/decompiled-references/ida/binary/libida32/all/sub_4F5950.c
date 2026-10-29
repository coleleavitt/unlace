void *__fastcall sub_4F5950(__int64 *a1, unsigned int a2)
{
  char *v4; // r8
  __int64 v5; // rdi
  __int64 v6; // rdx
  char *v7; // rbx
  __int64 i; // rax
  char *v9; // rsi
  unsigned __int64 v10; // rdi
  char *v11; // r13
  void *result; // rax
  __int64 v13; // rax

  v4 = (char *)*a1;
  v5 = a1[1];
  v6 = 4 * v5;
  v7 = v4;
  for ( i = (4 * v5) >> 2; i > 0; i >>= 1 )
  {
    while ( 1 )
    {
      v9 = &v7[4 * (i >> 1)];
      if ( *(_DWORD *)v9 >= a2 )
        break;
      v7 = v9 + 4;
      i = i - 1 - (i >> 1);
      if ( i <= 0 )
        goto LABEL_5;
    }
  }
LABEL_5:
  if ( &v4[4 * v5] != v7 && *(_DWORD *)v7 == a2 )
  {
    if ( !under_debugger )
      interr(1247);
    BUG();
  }
  v10 = v5 + 1;
  v11 = (char *)(v7 - v4);
  if ( a1[2] < v10 )
  {
    v13 = qvector_reserve(a1, v4, v10, 4);
    *a1 = v13;
    v7 = &v11[v13];
    v6 = 4 * a1[1];
  }
  result = memmove(v7 + 4, v7, v6 - (_QWORD)v11);
  *(_DWORD *)v7 = a2;
  ++a1[1];
  return result;
}

