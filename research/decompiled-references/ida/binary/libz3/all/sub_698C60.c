void __fastcall sub_698C60(_QWORD *a1, char *a2)
{
  _QWORD *v2; // r13
  size_t v4; // rax
  char *v5; // rdi
  __int64 v6; // rdx
  size_t v7; // rbp
  unsigned __int64 v8; // rax

  v2 = a1 + 597;
  v4 = strlen(a2);
  v5 = (char *)a1[597];
  v6 = a1[598];
  v7 = v4;
  if ( v5 == (char *)(a1 + 599) )
    v8 = 15;
  else
    v8 = a1[599];
  if ( v8 < v7 )
  {
    sub_23A830(v2, 0, v6, a2, v7);
    v5 = (char *)a1[597];
  }
  else if ( a2 < v5 || &v5[v6] < a2 )
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        *v5 = *a2;
      else
        memcpy(v5, a2, v7);
      v5 = (char *)a1[597];
    }
  }
  else
  {
    std::string::_M_replace_cold();
    v5 = (char *)a1[597];
  }
  a1[598] = v7;
  v5[v7] = 0;
}

