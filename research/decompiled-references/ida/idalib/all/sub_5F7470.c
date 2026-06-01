int __fastcall sub_5F7470(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
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
  __int64 v16; // rdi
  __int64 v17; // rcx
  __int64 *v18; // r13
  __int64 v19; // r12
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 *v23; // rbp
  __int64 v24; // rdi
  __int64 *i; // rbp
  void *v26; // rdi
  __int64 v27; // rax
  _BYTE *v28; // rbp
  const char *v29; // rsi
  const char *v30; // rdi
  unsigned int v31; // eax
  __int64 v33; // [rsp+0h] [rbp-58h]
  __int64 v34; // [rsp+8h] [rbp-50h]

  if ( (_BYTE)a4 )
  {
    v6 = (*a1)[1];
  }
  else
  {
    v23 = a1[2];
    v24 = v23[3];
    for ( i = v23 + 1; (__int64 *)v24 != i; v24 = std::_Rb_tree_increment(v24, a2, a3, a4) )
      ++*(_QWORD *)(v24 + 56);
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
    v33 = (__int64)a1[2];
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
    v14 = sub_5F6F10(v33, (__int64)(v11 + 4));
    if ( v15 )
    {
      v16 = 1;
      v17 = v33 + 8;
      if ( !v14 && v15 != v17 )
      {
        v29 = haystack;
        if ( *(_QWORD *)(v15 + 40) )
          v29 = *(const char **)(v15 + 32);
        v30 = haystack;
        if ( v11[5] )
          v30 = (const char *)v11[4];
        v34 = v15;
        v31 = strcmp(v30, v29);
        v17 = v33 + 8;
        v15 = v34;
        v16 = v31 >> 31;
      }
      std::_Rb_tree_insert_and_rebalance(v16, v11, v15, v17);
      ++*(_QWORD *)(v33 + 40);
    }
    else if ( v11 )
    {
      v26 = (void *)v11[4];
      if ( v26 )
      {
        v11[5] = 0;
        qfree(v26);
      }
      operator delete(v11, 0x40u);
    }
  }
  v18 = *a1;
  v19 = 8 * v6;
  v20 = v18[1];
  v21 = *v18;
  if ( v18[2] < (unsigned __int64)(v20 + 1) )
  {
    v27 = qvector_reserve(v18, v21, v20 + 1, 8);
    v20 = v18[1];
    *v18 = v27;
    v21 = v27;
  }
  memmove((void *)(v21 + v19 + 8), (const void *)(v21 + v19), 8 * v20 - v19);
  *(_QWORD *)(v21 + v19) = a3;
  ++v18[1];
  LODWORD(v22) = *(_BYTE *)(a3 + 186) & 0xF;
  if ( (_BYTE)v22 == 10 )
  {
    v22 = *(_QWORD *)(a3 + 48);
    if ( *(_QWORD *)v22 )
    {
      v28 = *(_BYTE **)(v22 + 72);
      LODWORD(v22) = strcmp(*(const char **)v22, "__vftable");
      if ( !(_DWORD)v22 )
      {
        if ( v28 )
        {
          LODWORD(v22) = sub_5E1D80(a2, v28);
          if ( (_BYTE)v22 )
            *(_QWORD *)(a3 + 40) = 0x400000;
        }
      }
    }
  }
  return v22;
}
