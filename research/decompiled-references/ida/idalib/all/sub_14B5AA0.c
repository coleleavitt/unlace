void __fastcall sub_14B5AA0(char **a1, char *a2, _BYTE *a3)
{
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rax
  char *v6; // r12
  char *v7; // rcx
  size_t v8; // rdx
  char *v9; // rbp
  char *v10; // rbp
  char *v11; // r14
  char *v12; // rax
  char *v13; // rbp

  v4 = a3 - a2;
  v5 = (a3 - a2) >> 3;
  v6 = *a1;
  if ( v5 > (a1[2] - *a1) >> 3 )
  {
    v11 = nullptr;
    if ( v5 )
    {
      if ( v5 > 0x1FFFFFFFFFFFFFFFLL )
        std::__throw_bad_alloc();
      v12 = (char *)operator new(v4);
      v6 = *a1;
      v11 = v12;
    }
    if ( a3 != a2 )
      memcpy(v11, a2, v4);
    if ( v6 )
      operator delete(v6);
    v13 = &v11[v4];
    *a1 = v11;
    a1[1] = v13;
    a1[2] = v13;
  }
  else
  {
    v7 = a1[1];
    v8 = v7 - v6;
    if ( v5 > (v7 - v6) >> 3 )
    {
      v10 = &a2[v8];
      if ( a2 != &a2[v8] )
      {
        memmove(v6, a2, v8);
        v7 = a1[1];
      }
      if ( a3 != v10 )
        v7 = (char *)memmove(v7, v10, a3 - v10);
      a1[1] = &v7[a3 - v10];
    }
    else
    {
      if ( a3 != a2 )
      {
        memmove(v6, a2, v4);
        v7 = a1[1];
      }
      v9 = &v6[v4];
      if ( v9 != v7 )
        a1[1] = v9;
    }
  }
}
