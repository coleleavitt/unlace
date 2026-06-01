__int64 __fastcall sub_54BE00(__int64 *a1, unsigned __int64 *a2, unsigned __int64 a3)
{
  _QWORD *v5; // r12
  _QWORD *v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  _QWORD *v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // r13
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx
  _BOOL8 v21; // rdi
  _QWORD *v22; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD **)(*a1 + 1824);
  clear_tinfo_t(a2);
  if ( (get_merge_state(a2, a2) & 2) == 0 )
  {
    v6 = (_QWORD *)v5[12];
    v7 = v5 + 11;
    if ( !v6 )
      goto LABEL_44;
    v8 = v5 + 11;
    do
    {
      while ( 1 )
      {
        v9 = v6[2];
        v10 = v6[3];
        if ( v6[4] < a3 )
          break;
        v8 = v6;
        v6 = (_QWORD *)v6[2];
        if ( !v9 )
          goto LABEL_7;
      }
      v6 = (_QWORD *)v6[3];
    }
    while ( v10 );
LABEL_7:
    if ( v7 != v8 && a3 >= v8[4] )
    {
      sub_534D30((__int64)v5, a2, v8[5], 0xDu);
    }
    else
    {
LABEL_44:
      if ( !(unsigned __int8)sub_54BCA0(a1, a2, a3) )
        return 0;
      v14 = (_QWORD *)v5[12];
      v15 = v5 + 11;
      v16 = *a2 >> 9;
      if ( !v14 )
        goto LABEL_31;
      do
      {
        if ( v14[4] >= a3 )
        {
          v15 = v14;
          v14 = (_QWORD *)v14[2];
        }
        else
        {
          v14 = (_QWORD *)v14[3];
        }
      }
      while ( v14 );
      if ( v7 == v15 || a3 < v15[4] )
      {
LABEL_31:
        v17 = (_QWORD *)operator new(0x30u);
        v17[4] = a3;
        v17[5] = 0;
        v22 = v17;
        v19 = sub_5325C0(v5 + 10, v15, a3, v18);
        v15 = v19;
        if ( v20 )
        {
          v21 = v19 || v7 == v20 || a3 < v20[4];
          std::_Rb_tree_insert_and_rebalance(v21, v22, v20, v5 + 11);
          ++v5[15];
          v15 = v22;
        }
        else if ( v22 )
        {
          operator delete(v22, 0x30u);
        }
      }
      v15[5] = v16;
    }
    v12 = *a2;
    if ( *a2 > 0xFF )
    {
      sub_53EAE0((__int64)v5, v12);
      v12 = *a2;
LABEL_14:
      if ( (v5[27] ^ v12) >> 9 )
        copy_tinfo_t(v5 + 27);
      return 1;
    }
    if ( (v12 & 0xF) <= 9 )
      goto LABEL_14;
LABEL_20:
    if ( !under_debugger )
      interr(933);
    BUG();
  }
  if ( !(unsigned __int8)sub_54BCA0(a1, a2, a3) )
    return 0;
  v13 = *a2;
  if ( *a2 > 0xFF )
  {
    sub_53EAE0((__int64)v5, v13);
  }
  else if ( (v13 & 0xF) > 9 )
  {
    goto LABEL_20;
  }
  return 1;
}
