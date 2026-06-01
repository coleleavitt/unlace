void __fastcall sub_6C0400(_QWORD *a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, char a6)
{
  char v10; // al
  int v11; // eax
  __int64 v12; // rcx
  char v13; // r8
  char data; // al
  char v15; // r8
  _QWORD *v16; // r12
  _QWORD *v17; // r13
  unsigned __int64 v18; // rdx
  _QWORD *v19; // rax
  char v20; // cl
  _BOOL4 v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  char v25; // [rsp+Fh] [rbp-39h]
  char v26; // [rsp+Fh] [rbp-39h]

  v10 = sub_3BD540((__int64)a1, a3);
  if ( v10 )
  {
    v25 = v10;
    v11 = sub_3BE900(a1, a3, 4);
    if ( (v11 & 0x600) != 0x400 || (v11 & 0xF0000000) != 0x60000000 )
      goto LABEL_3;
    if ( a5 == a4 )
    {
      if ( (get_merge_state(a1, a3) & 3) != 0 )
        goto LABEL_3;
      get_item_end(a3, a3, v23, v24);
      v13 = v25;
      if ( !a6 )
        goto LABEL_3;
    }
    else
    {
      get_item_end(a3, a3, 1024, v12);
      v13 = v25;
      if ( !a6 )
      {
        data = create_data(a3);
        v15 = v25;
        goto LABEL_8;
      }
    }
    v26 = v13;
    data = create_data(a3);
    v15 = v26;
LABEL_8:
    if ( !data )
    {
      v16 = (_QWORD *)a1[93];
      v17 = a1 + 92;
      if ( !v16 )
      {
        if ( v17 != (_QWORD *)a1[94] && *(_QWORD *)(std::_Rb_tree_decrement(a1 + 92) + 32) >= a3 )
          goto LABEL_3;
        v16 = a1 + 92;
        v21 = 1;
        goto LABEL_19;
      }
      while ( 1 )
      {
        v18 = v16[4];
        v19 = (_QWORD *)v16[2];
        v20 = v15;
        if ( a3 >= v18 )
        {
          v19 = (_QWORD *)v16[3];
          v20 = 0;
        }
        if ( !v19 )
          break;
        v16 = v19;
      }
      if ( v20 )
      {
        if ( (_QWORD *)a1[94] == v16 )
        {
LABEL_17:
          v21 = 1;
          if ( v17 != v16 )
            v21 = a3 < v16[4];
LABEL_19:
          v22 = operator new(0x28u);
          *(_QWORD *)(v22 + 32) = a3;
          std::_Rb_tree_insert_and_rebalance(v21, v22, v16, a1 + 92);
          ++a1[96];
          goto LABEL_3;
        }
        v18 = *(_QWORD *)(std::_Rb_tree_decrement(v16) + 32);
      }
      if ( v18 < a3 )
        goto LABEL_17;
    }
LABEL_3:
    sub_3A61A0(a1, a3, a3 + 1, 0x28u);
  }
}
