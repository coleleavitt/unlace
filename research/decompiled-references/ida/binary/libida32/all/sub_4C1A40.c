void __fastcall sub_4C1A40(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  const char *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r14
  int v13; // ebp
  size_t v14; // r13
  char *v15; // rbx
  char *v16; // r13
  __int64 v17; // [rsp+8h] [rbp-40h]

  v17 = *(_QWORD *)(a1 + 1528);
  v4 = v17 + 96;
  v5 = *(_QWORD *)(v17 + 104);
  if ( v5 )
  {
    v6 = v17 + 96;
    v7 = *(_QWORD *)(v17 + 104);
    do
    {
      v8 = *(_QWORD *)(v7 + 16);
      v9 = *(_QWORD *)(v7 + 24);
      if ( *(_DWORD *)(v7 + 32) < a2 )
      {
        v7 = *(_QWORD *)(v7 + 24);
      }
      else
      {
        v6 = v7;
        v7 = *(_QWORD *)(v7 + 16);
      }
    }
    while ( v7 );
    do
    {
      while ( 1 )
      {
        v10 = *(const char **)(v5 + 16);
        v11 = *(_QWORD *)(v5 + 24);
        if ( *(_DWORD *)(v5 + 32) >= (unsigned int)a3 )
          break;
        v5 = *(_QWORD *)(v5 + 24);
        if ( !v11 )
          goto LABEL_10;
      }
      v4 = v5;
      v5 = *(_QWORD *)(v5 + 16);
    }
    while ( v10 );
LABEL_10:
    while ( v4 != v6 )
    {
      while ( 1 )
      {
        v12 = *(_QWORD *)(v6 + 40);
        v13 = *(_DWORD *)(v6 + 32);
        v14 = *(_QWORD *)(v12 + 8);
        if ( !v14 )
          break;
        v15 = (char *)qalloc_or_throw(*(_QWORD *)(v12 + 8), v10, a3, a4, v8, v9);
        memcpy(v15, *(const void **)v12, v14);
        if ( (unsigned __int8)is_debugger_on() )
          v6 = std::_Rb_tree_increment();
        else
          v6 = sub_4BED20(v17, v6);
        v16 = v15;
LABEL_19:
        v10 = v15;
        set_name(v13, v15);
        if ( !v16 )
          goto LABEL_14;
        qfree(v16);
        if ( v4 == v6 )
          return;
      }
      if ( !(unsigned __int8)is_debugger_on() )
      {
        v6 = sub_4BED20(v17, v6);
        v16 = nullptr;
        v15 = (char *)haystack;
        goto LABEL_19;
      }
      v10 = haystack;
      v6 = std::_Rb_tree_increment();
      set_name(v13, (void *)haystack);
LABEL_14:
      ;
    }
  }
}

