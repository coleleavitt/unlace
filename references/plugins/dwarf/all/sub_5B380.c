char *__fastcall sub_5B380(_QWORD *a1, unsigned __int16 *a2)
{
  _QWORD *v2; // r14
  __int64 v4; // rax
  unsigned __int16 v5; // di
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  char *v9; // rax
  unsigned int v10; // r13d
  char *v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  _BOOL8 v16; // rdi

  v2 = a1 + 1;
  v4 = a1[2];
  if ( v4 )
  {
    v5 = *a2;
    v6 = (__int64)v2;
    do
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(v4 + 16);
        v8 = *(_QWORD *)(v4 + 24);
        if ( *(_WORD *)(v4 + 32) < v5 )
          break;
        v6 = v4;
        v4 = *(_QWORD *)(v4 + 16);
        if ( !v7 )
          goto LABEL_6;
      }
      v4 = *(_QWORD *)(v4 + 24);
    }
    while ( v8 );
LABEL_6:
    if ( v2 != (_QWORD *)v6 && v5 >= *(_WORD *)(v6 + 32) )
      return (char *)(v6 + 40);
  }
  else
  {
    v6 = (__int64)(a1 + 1);
  }
  v9 = (char *)operator new(0x40u);
  v10 = *a2;
  *((_QWORD *)v9 + 5) = 0;
  v11 = v9;
  *((_WORD *)v9 + 16) = v10;
  *((_OWORD *)v9 + 3) = 0;
  v14 = sub_53340(a1, v6, v10, v12, v13);
  v6 = v14;
  if ( !v15 )
  {
    if ( v11 )
      operator delete(v11, 0x40u);
    return (char *)(v6 + 40);
  }
  v16 = v14 || v2 == (_QWORD *)v15 || (unsigned __int16)v10 < *(_WORD *)(v15 + 32);
  std::_Rb_tree_insert_and_rebalance(v16, v11, v15, v2);
  ++a1[5];
  return v11 + 40;
}
