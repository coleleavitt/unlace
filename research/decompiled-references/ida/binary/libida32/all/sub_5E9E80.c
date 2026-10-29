__int64 __fastcall sub_5E9E80(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  const char *v6; // rsi
  char *v7; // rdi
  __int64 v9; // rax
  unsigned __int64 v10; // r13
  unsigned __int64 v11; // rdi
  __int64 v12; // r15
  char *v13; // rax
  __int64 v14; // [rsp+8h] [rbp-40h]

  v4 = *(_QWORD *)(a2 + 8);
  v5 = a1[1];
  v6 = haystack;
  if ( v4 )
    v6 = *(const char **)a2;
  if ( v5 )
  {
    v9 = 0;
    v10 = v5 - 1;
    if ( v4 )
      v9 = v4 - 1;
    v11 = 1;
    v14 = v9;
    while ( v10 >= v11 )
    {
      v12 = *a1;
      v13 = strstr((const char *)(*a1 + v11), v6);
      if ( !v13 )
        break;
      v7 = &v13[-v12];
      if ( &v13[-v12] == (char *)-1LL || *(v13 - 1) == 45 && (&v7[v14] == (char *)v10 || v13[v14] == 45) )
        return (__int64)v7;
      v11 = (unsigned __int64)(v7 + 1);
      v6 = haystack;
      if ( v4 )
        v6 = *(const char **)a2;
    }
  }
  return -1;
}

