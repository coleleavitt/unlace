double __fastcall mr_chooser_t__::vfunc_0(_QWORD *a1, const char *a2)
{
  __int64 v3; // rbp
  char *v4; // rdi
  char *v5; // rdx
  __int64 v6; // rdi
  double result; // xmm0_8
  __int64 v8; // rdi
  __int64 v9; // rdi
  _QWORD *v10; // rbp
  _QWORD *v11; // rbx
  __int64 v12; // rdi

  v3 = a1[24];
  *a1 = mr_chooser_t___vtable;
  v4 = *(char **)(v3 + 24);
  v5 = &v4[8 * *(_QWORD *)(v3 + 32)];
  if ( v4 != v5 )
  {
    while ( a1 != *(_QWORD **)v4 )
    {
      v4 += 8;
      if ( v5 == v4 )
        goto LABEL_7;
    }
    if ( v5 != v4 )
    {
      a2 = v4 + 8;
      memmove(v4, v4 + 8, v5 - v4 - 8);
      --*(_QWORD *)(v3 + 32);
    }
  }
LABEL_7:
  v6 = a1[32];
  if ( v6 )
  {
    a1[33] = 0;
    result = qfree(v6, a2);
  }
  v8 = a1[29];
  if ( v8 )
  {
    a1[30] = 0;
    result = qfree(v8, a2);
  }
  v9 = a1[26];
  if ( v9 )
  {
    a1[27] = 0;
    result = qfree(v9, a2);
  }
  v10 = a1 + 22;
  v11 = a1 + 10;
  *(v11 - 10) = &stru_86F6A0;
  do
  {
    v12 = *(v10 - 3);
    v10 -= 3;
    if ( v12 )
    {
      v10[1] = 0;
      result = qfree(v12, a2);
    }
  }
  while ( v11 != v10 );
  return result;
}
