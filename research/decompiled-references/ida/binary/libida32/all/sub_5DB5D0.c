int __fastcall sub_5DB5D0(__int64 **a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v6; // r12
  __int64 j; // rdx
  char v8; // al
  const char *v9; // r15
  __int64 v10; // rax
  _QWORD *v11; // rbp
  size_t v12; // r14
  void *v13; // rax
  _QWORD *v14; // rax
  __int64 v15; // rdx
  __int64 *v16; // r13
  __int64 v17; // r12
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 *v21; // rbp
  __int64 v22; // rdi
  __int64 *i; // rbp
  void *v24; // rdi
  __int64 v25; // rax
  _BYTE *v26; // rbp
  const char *v27; // rsi
  const char *v28; // rdi
  __int64 v30; // [rsp+0h] [rbp-58h]

  if ( a4 )
  {
    v6 = (*a1)[1];
  }
  else
  {
    v21 = a1[2];
    v22 = v21[3];
    for ( i = v21 + 1; (__int64 *)v22 != i; v22 = std::_Rb_tree_increment() )
      ++*(_QWORD *)(v22 + 56);
    v6 = 0;
  }
  for ( j = a3; ; j = *(_QWORD *)(j + 48) )
  {
    v8 = *(_BYTE *)(j + 186) & 0xF;
    if ( v8 != 11 && v8 != 12 && v8 != 10 )
      break;
  }
  v9 = *(const char **)j;
  if ( *(_QWORD *)j )
  {
    v30 = (__int64)a1[2];
    v10 = operator new(0x40u);
    *(_QWORD *)(v10 + 32) = 0;
    v11 = (_QWORD *)v10;
    *(_OWORD *)(v10 + 40) = 0;
    v12 = strlen(v9);
    v13 = (void *)qvector_reserve(v11 + 4, 0, v12 + 1, 1);
    v11[4] = v13;
    v11[5] = v12 + 1;
    memmove(v13, v9, v12);
    *(_BYTE *)(v11[4] + v12) = 0;
    v11[7] = v6;
    v14 = sub_5DB070(v30, (__int64)(v11 + 4));
    if ( v15 )
    {
      if ( !v14 && v15 != v30 + 8 )
      {
        v27 = haystack;
        if ( *(_QWORD *)(v15 + 40) )
          v27 = *(const char **)(v15 + 32);
        v28 = haystack;
        if ( v11[5] )
          v28 = (const char *)v11[4];
        strcmp(v28, v27);
      }
      std::_Rb_tree_insert_and_rebalance();
      ++*(_QWORD *)(v30 + 40);
    }
    else if ( v11 )
    {
      v24 = (void *)v11[4];
      if ( v24 )
      {
        v11[5] = 0;
        qfree(v24);
      }
      operator delete(v11, 0x40u);
    }
  }
  v16 = *a1;
  v17 = 8 * v6;
  v18 = v16[1];
  v19 = *v16;
  if ( v16[2] < (unsigned __int64)(v18 + 1) )
  {
    v25 = qvector_reserve(v16, v19, v18 + 1, 8);
    v18 = v16[1];
    *v16 = v25;
    v19 = v25;
  }
  memmove((void *)(v19 + v17 + 8), (const void *)(v19 + v17), 8 * v18 - v17);
  *(_QWORD *)(v19 + v17) = a3;
  ++v16[1];
  LODWORD(v20) = *(_BYTE *)(a3 + 186) & 0xF;
  if ( (_BYTE)v20 == 10 )
  {
    v20 = *(_QWORD *)(a3 + 48);
    if ( *(_QWORD *)v20 )
    {
      v26 = *(_BYTE **)(v20 + 72);
      LODWORD(v20) = strcmp(*(const char **)v20, "__vftable");
      if ( !(_DWORD)v20 )
      {
        if ( v26 )
        {
          LODWORD(v20) = sub_5C6080(a2, v26);
          if ( (_BYTE)v20 )
            *(_QWORD *)(a3 + 40) = &loc_400000;
        }
      }
    }
  }
  return v20;
}

