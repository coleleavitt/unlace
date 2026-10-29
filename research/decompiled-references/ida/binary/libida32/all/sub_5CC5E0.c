void __fastcall sub_5CC5E0(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v3; // rbp
  char *v4; // rdi
  char *v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r12
  __int64 v8; // rax

  v1 = a1[73];
  if ( !v1 )
  {
    if ( !under_debugger )
      interr(80);
    BUG();
  }
  v3 = *(int *)(a1[72] + 4 * v1 - 4);
  a1[73] = v1 - 1;
  v4 = (char *)a1[75];
  v5 = v4;
  if ( v3 )
  {
    v6 = a1[76];
    v7 = v3 + 1;
    if ( v6 < v3 + 1 )
    {
      if ( a1[77] < v7 )
      {
        v8 = qvector_reserve(a1 + 75, v4, v3 + 1, 1);
        a1[75] = v8;
        v4 = (char *)v8;
        v6 = a1[76];
      }
      memset(&v4[v6], 0, v7 - v6);
      a1[76] = v7;
      v5 = (char *)a1[75];
    }
    else if ( v7 != v6 )
    {
      a1[76] = v7;
    }
    v5[v3] = 0;
  }
  else if ( v4 )
  {
    a1[76] = 0;
    qfree(v4);
    a1[75] = 0;
    a1[77] = 0;
  }
}

