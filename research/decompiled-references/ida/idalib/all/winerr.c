char *__fastcall winerr(int errnum)
{
  char **v1; // rbx
  char *v2; // rax
  char *v3; // rbp
  size_t v4; // rax
  size_t v5; // r12
  void *v7; // rdi
  char *v8; // r13
  __int64 v9; // rax

  v1 = (char **)sub_82F090();
  v2 = strerror(errnum);
  if ( v2 )
  {
    v3 = v2;
    v4 = strlen(v2);
    v5 = v4;
    if ( v4 )
    {
      v7 = *v1;
      v8 = (char *)(v4 + 1);
      if ( (unsigned __int64)v1[2] < v4 + 1 )
      {
        v9 = qvector_reserve(v1, *v1, v4 + 1, 1);
        *v1 = (char *)v9;
        v7 = (void *)v9;
      }
      v1[1] = v8;
      memmove(v7, v3, v5);
      (*v1)[v5] = 0;
      return *v1;
    }
    else
    {
      v1[1] = nullptr;
      return *v1;
    }
  }
  else
  {
    sub_35A790(v1);
    return *v1;
  }
}
