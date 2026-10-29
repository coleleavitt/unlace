void __fastcall sub_7BE350(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r13
  _QWORD *v4; // rbp
  void *v5; // rdi
  __int64 v6; // rbx
  void *v7; // rdi
  char *v8; // rdx
  __int64 v9; // r14
  __int64 i; // rbx
  char *v11; // rax
  void *v12; // rdi

  --*(_DWORD *)(*(_QWORD *)(a1 + 1736) + 48LL);
  v3 = *(_QWORD *)(a1 + 1736);
  if ( *(_DWORD *)(v3 + 48) != a2 )
  {
    if ( !under_debugger )
      interr(1916);
LABEL_21:
    BUG();
  }
  v4 = *(_QWORD **)(v3 + 8LL * a2 + 16);
  if ( v4 == *(_QWORD **)v3 )
  {
    if ( !under_debugger )
      interr(1980);
    goto LABEL_21;
  }
  if ( v4 )
  {
    sub_7AF120(*(char **)(v3 + 8LL * a2 + 16), 0, a3);
    v5 = (void *)v4[749];
    if ( v5 )
    {
      v4[750] = 0;
      qfree(v5);
    }
    v6 = v4[745];
    while ( v6 )
    {
      sub_7BDF50(*(_QWORD **)(v6 + 24));
      v7 = (void *)v6;
      v6 = *(_QWORD *)(v6 + 16);
      operator delete(v7, 0x30u);
    }
    v8 = (char *)v4[740];
    if ( v8 )
    {
      v9 = v4[741];
      if ( v9 )
      {
        for ( i = 0; i != v9; ++i )
        {
          v11 = &v8[24 * i];
          v12 = *(void **)v11;
          if ( *(_QWORD *)v11 )
          {
            *((_QWORD *)v11 + 1) = 0;
            qfree(v12);
            v8 = (char *)v4[740];
          }
        }
      }
      v4[741] = 0;
      qfree(v8);
    }
    sub_743350((__int64)v4);
    operator delete(v4, 0x1788u);
  }
  *(_QWORD *)(v3 + 8LL * a2 + 16) = 0;
}
