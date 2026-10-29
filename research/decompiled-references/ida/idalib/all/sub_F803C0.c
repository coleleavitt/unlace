const char *__fastcall sub_F803C0(_QWORD *a1, unsigned __int64 *a2)
{
  _QWORD *v2; // r13
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rax
  _QWORD *v5; // rbx
  const char *v8; // rsi
  unsigned __int64 v9; // rax
  const char *v10; // rax
  _QWORD *v11; // rdx
  const char *v12; // r14
  _BOOL8 v13; // rdi
  _QWORD *v15; // rdi

  v2 = a1 + 1;
  v3 = (_QWORD *)a1[2];
  if ( v3 )
  {
    v4 = *a2;
    v5 = a1 + 1;
    do
    {
      while ( v3[4] >= v4 )
      {
        v5 = v3;
        v3 = (_QWORD *)v3[2];
        if ( !v3 )
          goto LABEL_6;
      }
      v3 = (_QWORD *)v3[3];
    }
    while ( v3 );
LABEL_6:
    if ( v2 != v5 && v5[4] <= v4 )
      return (const char *)(v5 + 5);
  }
  else
  {
    v5 = a1 + 1;
  }
  v8 = (const char *)v5;
  v5 = (_QWORD *)operator new(0x48u);
  v9 = *a2;
  v5[6] = 0;
  v5[4] = v9;
  v5[5] = v5 + 7;
  *((_BYTE *)v5 + 56) = 0;
  v10 = sub_F802D0(a1, v8, v5 + 4);
  v12 = v10;
  if ( v11 )
  {
    v13 = v10 || v2 == v11 || v5[4] < v11[4];
    std::_Rb_tree_insert_and_rebalance(v13, v5, v11, v2);
    ++a1[5];
    return (const char *)(v5 + 5);
  }
  v15 = (_QWORD *)v5[5];
  if ( v5 + 7 != v15 )
    operator delete(v15);
  operator delete(v5);
  return v12 + 40;
}
