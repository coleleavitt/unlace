char **__fastcall std::vector<CoinTreeSiblings *>::operator=(char **a1, char **a2)
{
  char *v3; // r15
  char *v4; // r14
  char *v6; // r13
  signed __int64 v7; // rbp
  unsigned __int64 v8; // rax
  char *v9; // rdi
  size_t v10; // rdx
  char *v11; // rbp
  char *v13; // r12
  __int64 v14; // rax
  char *v15; // rsi

  if ( a2 != a1 )
  {
    v3 = a2[1];
    v4 = *a2;
    v6 = *a1;
    v7 = v3 - *a2;
    v8 = v7 >> 3;
    if ( (a1[2] - *a1) >> 3 < (unsigned __int64)(v7 >> 3) )
    {
      v13 = nullptr;
      if ( v8 )
      {
        if ( v8 > 0x1FFFFFFFFFFFFFFFLL )
          std::__throw_bad_alloc();
        v14 = operator new(a2[1] - *a2);
        v6 = *a1;
        v13 = (char *)v14;
      }
      if ( v3 != v4 )
        memmove(v13, v4, v7);
      if ( v6 )
        operator delete(v6);
      v11 = &v13[v7];
      *a1 = v13;
      a1[2] = v11;
      goto LABEL_6;
    }
    v9 = a1[1];
    v10 = v9 - v6;
    if ( v8 <= (v9 - v6) >> 3 )
    {
      if ( v3 != v4 )
      {
        memmove(v6, *a2, a2[1] - *a2);
        v11 = &(*a1)[v7];
        goto LABEL_6;
      }
      goto LABEL_5;
    }
    v15 = &v4[v10];
    if ( v4 == &v4[v10] )
    {
      if ( v3 != v15 )
      {
LABEL_18:
        memmove(v9, v15, v3 - v15);
        v11 = &(*a1)[v7];
        goto LABEL_6;
      }
    }
    else
    {
      memmove(v6, v4, v10);
      v9 = a1[1];
      v6 = *a1;
      v3 = a2[1];
      v15 = &(*a2)[v9 - *a1];
      if ( v3 != v15 )
        goto LABEL_18;
    }
LABEL_5:
    v11 = &v6[v7];
LABEL_6:
    a1[1] = v11;
  }
  return a1;
}

