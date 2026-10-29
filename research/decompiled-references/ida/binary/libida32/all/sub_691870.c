void __fastcall sub_691870(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  void (__fastcall *v5)(__int64); // rax
  void *v6; // rdi
  char **v7; // r12
  char *v8; // rdi
  char *v9; // r13
  char *i; // rbp
  __int64 v11; // rax

  v2 = *(_DWORD *)a2;
  if ( *(_DWORD *)a2 == 2 )
  {
    v7 = *(char ***)(a2 + 8);
    if ( v7 )
    {
      v8 = *v7;
      if ( *v7 )
      {
        v9 = v7[1];
        if ( v9 )
        {
          for ( i = nullptr; i != v9; ++i )
          {
            v11 = 3LL * (_QWORD)i;
            cleanup_argloc(&v8[8 * v11]);
            v8 = *v7;
          }
        }
        v7[1] = nullptr;
        qfree(v8);
      }
      qfree(v7);
    }
  }
  else if ( v2 == 5 )
  {
    v6 = *(void **)(a2 + 8);
    if ( v6 )
      operator delete(v6, 8u);
  }
  else if ( v2 > 6 )
  {
    v3 = v2 - 7;
    if ( v3 < *(_QWORD *)(a1 + 2576) )
    {
      v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2568) + 8 * v3);
      if ( v4 )
      {
        v5 = *(void (__fastcall **)(__int64))(v4 + 24);
        if ( v5 )
          v5(a2);
      }
    }
  }
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0;
}

