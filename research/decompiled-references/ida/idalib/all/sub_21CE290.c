char **__fastcall sub_21CE290(char **a1, char **a2)
{
  char *v3; // r15
  char *v4; // r13
  char *v5; // r14
  signed __int64 v6; // rbp
  unsigned __int64 v7; // rax
  char *v8; // rdi
  size_t v9; // rdx
  char *v11; // r12
  char *v12; // rax
  char *v13; // rbp

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v5 = *a1;
    v6 = v3 - *a2;
    v7 = v6 >> 4;
    if ( v6 >> 4 > (unsigned __int64)((a1[2] - *a1) >> 4) )
    {
      v11 = nullptr;
      if ( v7 )
      {
        if ( v7 > 0xFFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v12 = (char *)operator new(a2[1] - *a2);
        v5 = *a1;
        v11 = v12;
      }
      if ( v4 != v3 )
        memmove(v11, v4, v6);
      if ( v5 )
        operator delete(v5);
      v13 = &v11[v6];
      *a1 = v11;
      a1[2] = v13;
      goto LABEL_19;
    }
    v8 = a1[1];
    v9 = v8 - v5;
    if ( v7 > (v8 - v5) >> 4 )
    {
      if ( v9 )
      {
        memmove(v5, *a2, v9);
        v8 = a1[1];
        v5 = *a1;
        v3 = a2[1];
        v4 = *a2;
        v9 = v8 - *a1;
      }
      if ( &v4[v9] != v3 )
      {
        memmove(v8, &v4[v9], v3 - &v4[v9]);
        v13 = &(*a1)[v6];
        goto LABEL_19;
      }
    }
    else if ( v4 != v3 )
    {
      memmove(v5, *a2, a2[1] - *a2);
      a1[1] = &(*a1)[v6];
      return a1;
    }
    v13 = &v5[v6];
LABEL_19:
    a1[1] = v13;
  }
  return a1;
}
