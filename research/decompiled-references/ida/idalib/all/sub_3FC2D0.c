void __fastcall sub_3FC2D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 *v7; // r13
  unsigned __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rax
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r13
  void *v15; // rdi
  unsigned __int64 v16; // [rsp+8h] [rbp-50h]
  _QWORD *v18; // [rsp+18h] [rbp-40h]

  v5 = a2;
  if ( a2 == -1 )
  {
    v13 = a1[109];
    while ( v13 )
    {
      v14 = (_QWORD *)v13;
      sub_3FBD10(*(_QWORD **)(v13 + 24));
      v15 = *(void **)(v13 + 40);
      v13 = *(_QWORD *)(v13 + 16);
      if ( v15 )
      {
        v14[6] = 0;
        qfree(v15);
      }
      operator delete(v14, 0x48u);
    }
    a1[109] = 0;
    a1[110] = (__int64)(a1 + 108);
    a1[111] = (__int64)(a1 + 108);
    a1[112] = 0;
  }
  else
  {
    v6 = a1[110];
    v7 = a1 + 108;
    v16 = a2 + a3 - 1;
    while ( (__int64 *)v6 != v7 )
    {
      while ( 1 )
      {
        v8 = *(_QWORD *)(v6 + 32);
        v9 = v6;
        v6 = std::_Rb_tree_increment(v6, a2, a3, a4);
        if ( v16 < v8 || v8 + *(__int16 *)(v9 + 66) - 1 < v5 )
          break;
        v10 = (_QWORD *)std::_Rb_tree_rebalance_for_erase(v9, v7);
        v11 = (void *)v10[5];
        if ( v11 )
        {
          v10[6] = 0;
          v18 = v10;
          qfree(v11);
          v10 = v18;
        }
        a2 = 72;
        operator delete(v10, 0x48u);
        --a1[112];
        if ( (__int64 *)v6 == v7 )
          goto LABEL_9;
      }
    }
  }
LABEL_9:
  v12 = *a1;
  a1[128] = -1;
  sub_359AE0(v12, v5, v5 + a3);
}
