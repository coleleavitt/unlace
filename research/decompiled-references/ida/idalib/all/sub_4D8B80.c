void __fastcall sub_4D8B80(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _QWORD *v3; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rdi
  const char *v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // rbp
  size_t v14; // r13
  char *v15; // rax
  const void *v16; // rsi
  char *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  char *v20; // r13
  __int64 v21; // [rsp+8h] [rbp-40h]

  v21 = *(_QWORD *)(a1 + 1720);
  v3 = (_QWORD *)(v21 + 104);
  v4 = *(_QWORD **)(v21 + 112);
  if ( v4 )
  {
    v5 = (_QWORD *)(v21 + 104);
    v6 = *(_QWORD **)(v21 + 112);
    do
    {
      if ( v6[4] < a2 )
      {
        v6 = (_QWORD *)v6[3];
      }
      else
      {
        v5 = v6;
        v6 = (_QWORD *)v6[2];
      }
    }
    while ( v6 );
    do
    {
      while ( 1 )
      {
        v7 = (const char *)v4[2];
        v8 = v4[3];
        if ( v4[4] >= a3 )
          break;
        v4 = (_QWORD *)v4[3];
        if ( !v8 )
          goto LABEL_10;
      }
      v3 = v4;
      v4 = (_QWORD *)v4[2];
    }
    while ( v7 );
LABEL_10:
    while ( v3 != v5 )
    {
      while ( 1 )
      {
        v12 = v5[5];
        v13 = v5[4];
        v14 = *(_QWORD *)(v12 + 8);
        if ( !v14 )
          break;
        v15 = (char *)qalloc_or_throw(*(_QWORD *)(v12 + 8));
        v16 = *(const void **)v12;
        v17 = v15;
        memcpy(v15, *(const void **)v12, v14);
        if ( (unsigned __int8)is_debugger_on() )
          v5 = (_QWORD *)std::_Rb_tree_increment(v5, v16, v18, v19);
        else
          v5 = (_QWORD *)sub_4D5DE0(v21, v5);
        v20 = v17;
LABEL_19:
        v7 = v17;
        set_name(v13, v17);
        if ( !v20 )
          goto LABEL_14;
        qfree(v20);
        if ( v3 == v5 )
          return;
      }
      if ( !(unsigned __int8)is_debugger_on() )
      {
        v5 = (_QWORD *)sub_4D5DE0(v21, v5);
        v20 = nullptr;
        v17 = (char *)haystack;
        goto LABEL_19;
      }
      v11 = std::_Rb_tree_increment(v5, v7, v9, v10);
      v7 = haystack;
      v5 = (_QWORD *)v11;
      set_name(v13, (void *)haystack);
LABEL_14:
      ;
    }
  }
}
