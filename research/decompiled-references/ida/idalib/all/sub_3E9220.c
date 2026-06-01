__int64 __fastcall sub_3E9220(_QWORD *a1, const char *a2, const char *a3, _QWORD *a4)
{
  int v4; // r12d
  const char **v6; // rbx
  __int64 v7; // r13
  __int64 v9; // r14
  _QWORD *v10; // r13
  const char *v11; // r15
  __int64 v12; // rax
  void *v13; // rdi
  void *v14; // rbx

  v4 = (int)a2;
  v6 = (const char **)a1[6];
  if ( v6 && (a2 = *v6) != nullptr )
  {
    v7 = a1[6];
    while ( strcmp(a3, a2) )
    {
      a2 = *(const char **)(v7 + 8);
      v7 += 8;
      if ( !a2 )
        goto LABEL_7;
    }
    netnode_hashdel(*a4, a3, 72);
    return 1;
  }
  else
  {
LABEL_7:
    v9 = a1[3];
    v10 = a1 + 1;
    if ( (_QWORD *)v9 != a1 + 1 )
    {
      while ( *(_DWORD *)(v9 + 56) != v4 )
      {
        v9 = std::_Rb_tree_increment(v9, a2, a3, a4);
        if ( (_QWORD *)v9 == v10 )
          return 0;
      }
      if ( (_QWORD *)v9 != v10 )
      {
        v11 = haystack;
        if ( *(_QWORD *)(v9 + 40) )
          v11 = *(const char **)(v9 + 32);
        if ( !v6 )
LABEL_19:
          sub_378D50();
        while ( 1 )
        {
          if ( !*v6 )
            goto LABEL_19;
          if ( !strcmp(v11, *v6) )
            break;
          ++v6;
        }
        netnode_hashdel(*a4, v11, 72);
        v12 = std::_Rb_tree_rebalance_for_erase(v9, v10);
        v13 = *(void **)(v12 + 32);
        v14 = (void *)v12;
        if ( v13 )
        {
          *(_QWORD *)(v12 + 40) = 0;
          qfree(v13);
        }
        operator delete(v14, 0x40u);
        --a1[5];
      }
    }
    return 0;
  }
}
