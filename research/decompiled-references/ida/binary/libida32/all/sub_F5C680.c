_QWORD *__fastcall sub_F5C680(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // rdx
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *v6; // rsi
  unsigned __int64 v7; // rax
  _QWORD *v8; // r14
  __int64 v9; // rdx
  void *v11; // rdi

  v2 = (_QWORD *)a1[2];
  if ( v2 )
  {
    v3 = *a2;
    v4 = (__int64)(a1 + 1);
    do
    {
      while ( v2[4] >= v3 )
      {
        v4 = (__int64)v2;
        v2 = (_QWORD *)v2[2];
        if ( !v2 )
          goto LABEL_6;
      }
      v2 = (_QWORD *)v2[3];
    }
    while ( v2 );
LABEL_6:
    if ( a1 + 1 != (_QWORD *)v4 && *(_QWORD *)(v4 + 32) <= v3 )
      return (_QWORD *)(v4 + 40);
  }
  else
  {
    v4 = (__int64)(a1 + 1);
  }
  v6 = (_QWORD *)v4;
  v4 = operator new(0x48u);
  v7 = *a2;
  *(_QWORD *)(v4 + 48) = 0;
  *(_QWORD *)(v4 + 32) = v7;
  *(_QWORD *)(v4 + 40) = v4 + 56;
  *(_BYTE *)(v4 + 56) = 0;
  v8 = sub_F5C590(a1, v6, (unsigned __int64 *)(v4 + 32));
  if ( v9 )
  {
    std::_Rb_tree_insert_and_rebalance();
    ++a1[5];
    return (_QWORD *)(v4 + 40);
  }
  v11 = *(void **)(v4 + 40);
  if ( (void *)(v4 + 56) != v11 )
    operator delete(v11);
  operator delete((void *)v4);
  return v8 + 5;
}

