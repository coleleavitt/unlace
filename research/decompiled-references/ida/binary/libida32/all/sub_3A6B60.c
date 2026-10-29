unsigned __int64 __fastcall sub_3A6B60(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int *v5; // rbx
  unsigned int *v6; // r13
  __int64 v7; // rbp
  __int64 v8; // rax
  unsigned int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  char *v13; // rdi
  char *v14; // rdx
  __int64 v17; // rax
  void *v18; // rdi
  _QWORD *v19; // r14
  void *v20; // rdi
  int v21; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v22; // [rsp+8h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v4 = sub_3A5530(a2, &v21);
  if ( v21 > 0 )
  {
    v5 = (unsigned int *)v4;
    v6 = (unsigned int *)(v4 + 4LL * v21);
    v7 = a1 + 8;
    while ( 1 )
    {
      v8 = *(_QWORD *)(a1 + 16);
      v9 = *v5;
      if ( !v8 )
        break;
      v10 = a1 + 8;
      do
      {
        while ( 1 )
        {
          v11 = *(_QWORD *)(v8 + 16);
          v12 = *(_QWORD *)(v8 + 24);
          if ( *(_DWORD *)(v8 + 32) < v9 )
            break;
          v10 = v8;
          v8 = *(_QWORD *)(v8 + 16);
          if ( !v11 )
            goto LABEL_8;
        }
        v8 = *(_QWORD *)(v8 + 24);
      }
      while ( v12 );
LABEL_8:
      if ( v10 == v7 || v9 < *(_DWORD *)(v10 + 32) )
        break;
      v13 = *(char **)(v10 + 40);
      v14 = &v13[8 * *(_QWORD *)(v10 + 48)];
      if ( v13 == v14 )
        goto LABEL_25;
      while ( *(_QWORD *)v13 != a2 )
      {
        v13 += 8;
        if ( v14 == v13 )
          goto LABEL_25;
      }
      if ( v14 == v13 )
      {
LABEL_25:
        if ( !under_debugger )
          interr(40039);
LABEL_27:
        BUG();
      }
      memmove(v13, v13 + 8, v14 - v13 - 8);
      if ( (*(_QWORD *)(v10 + 48))-- == 1 )
      {
        v17 = std::_Rb_tree_rebalance_for_erase();
        v18 = *(void **)(v17 + 64);
        v19 = (_QWORD *)v17;
        if ( v18 )
        {
          *(_QWORD *)(v17 + 72) = 0;
          qfree(v18);
        }
        v20 = (void *)v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          qfree(v20);
        }
        operator delete(v19, 0x58u);
        --*(_QWORD *)(a1 + 40);
      }
      if ( v6 == ++v5 )
        return v22 - __readfsqword(0x28u);
    }
    if ( !under_debugger )
      interr(40038);
    goto LABEL_27;
  }
  return v22 - __readfsqword(0x28u);
}

