__int64 __fastcall sub_3E2FA0(_QWORD *a1, int a2, const char *a3, unsigned int *a4)
{
  const char **v6; // rbx
  const char *v7; // rsi
  __int64 v8; // r13
  __int64 v10; // r14
  _QWORD *v11; // r13
  const char *v12; // r15
  __int64 v13; // rax
  void *v14; // rdi
  void *v15; // rbx

  v6 = (const char **)a1[6];
  if ( v6 && (v7 = *v6) != nullptr )
  {
    v8 = a1[6];
    while ( strcmp(a3, v7) )
    {
      v7 = *(const char **)(v8 + 8);
      v8 += 8;
      if ( !v7 )
        goto LABEL_7;
    }
    netnode_hashdel(*a4, a3, 72);
    return 1;
  }
  else
  {
LABEL_7:
    v10 = a1[3];
    v11 = a1 + 1;
    if ( (_QWORD *)v10 != a1 + 1 )
    {
      while ( *(_DWORD *)(v10 + 56) != a2 )
      {
        v10 = std::_Rb_tree_increment();
        if ( (_QWORD *)v10 == v11 )
          return 0;
      }
      if ( (_QWORD *)v10 != v11 )
      {
        v12 = haystack;
        if ( *(_QWORD *)(v10 + 40) )
          v12 = *(const char **)(v10 + 32);
        if ( !v6 )
LABEL_19:
          sub_375400();
        while ( 1 )
        {
          if ( !*v6 )
            goto LABEL_19;
          if ( !strcmp(v12, *v6) )
            break;
          ++v6;
        }
        netnode_hashdel(*a4, v12, 72);
        v13 = std::_Rb_tree_rebalance_for_erase();
        v14 = *(void **)(v13 + 32);
        v15 = (void *)v13;
        if ( v14 )
        {
          *(_QWORD *)(v13 + 40) = 0;
          qfree(v14);
        }
        operator delete(v15, 0x40u);
        --a1[5];
      }
    }
    return 0;
  }
}

