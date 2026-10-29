char *__fastcall sub_2DDDF0(int **a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  int *v9; // rcx
  int *v10; // rax
  __int64 v11; // rbp
  int *v12; // rdx
  int *v13; // rsi

  v6 = a2 - (_QWORD)a1[1];
  if ( a2 != a3 )
  {
    if ( !*a1 || **a1 > 1 )
      sub_1C92D0((__int64)a1, 0, 0, 0, a5, a6);
    v9 = a1[1];
    v10 = a1[2];
    v11 = a3 - a2;
    v12 = &v9[2 * (_QWORD)v10];
    v13 = (int *)((char *)v9 + v6 + v11);
    if ( v9 == (int *)((char *)v9 + v6) )
    {
      if ( v13 != v12 )
        a1[1] = v13;
    }
    else if ( v13 != v12 )
    {
      memmove((char *)v9 + v6, v13, (char *)v12 - (char *)v13);
      v10 = a1[2];
    }
    a1[2] = (int *)((char *)v10 - (v11 >> 3));
  }
  if ( !*a1 || **a1 > 1 )
    sub_1C92D0((__int64)a1, 0, 0, 0, a5, a6);
  return (char *)a1[1] + v6;
}
