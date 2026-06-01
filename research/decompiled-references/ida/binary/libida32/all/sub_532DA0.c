__int64 __fastcall sub_532DA0(__int64 *a1, unsigned __int64 *a2, unsigned int a3)
{
  _QWORD *v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r14
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // r15
  unsigned __int64 v16; // r13
  __int64 v17; // rax
  __int64 v18; // rdx
  void *v19; // [rsp+8h] [rbp-40h]

  v5 = *(_QWORD **)(*a1 + 1632);
  clear_tinfo_t(a2);
  if ( (get_merge_state(a2, a2) & 2) == 0 )
  {
    v6 = v5[12];
    v7 = v5 + 11;
    if ( !v6 )
      goto LABEL_40;
    v8 = v5 + 11;
    do
    {
      while ( 1 )
      {
        v9 = *(_QWORD *)(v6 + 16);
        v10 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) < a3 )
          break;
        v8 = (_QWORD *)v6;
        v6 = *(_QWORD *)(v6 + 16);
        if ( !v9 )
          goto LABEL_7;
      }
      v6 = *(_QWORD *)(v6 + 24);
    }
    while ( v10 );
LABEL_7:
    if ( v7 != v8 && a3 >= *((_DWORD *)v8 + 8) )
    {
      sub_51C210((__int64)v5, a2, v8[5], 0xDu);
    }
    else
    {
LABEL_40:
      if ( !(unsigned __int8)sub_532C30(a1, a2, a3) )
        return 0;
      v14 = v5[12];
      v15 = (__int64)(v5 + 11);
      v16 = *a2 >> 9;
      if ( !v14 )
        goto LABEL_31;
      do
      {
        if ( *(_DWORD *)(v14 + 32) >= a3 )
        {
          v15 = v14;
          v14 = *(_QWORD *)(v14 + 16);
        }
        else
        {
          v14 = *(_QWORD *)(v14 + 24);
        }
      }
      while ( v14 );
      if ( v7 == (_QWORD *)v15 || a3 < *(_DWORD *)(v15 + 32) )
      {
LABEL_31:
        v17 = operator new(0x30u);
        *(_DWORD *)(v17 + 32) = a3;
        *(_QWORD *)(v17 + 40) = 0;
        v19 = (void *)v17;
        v15 = sub_51A080(v5 + 10, v15, a3);
        if ( v18 )
        {
          std::_Rb_tree_insert_and_rebalance();
          ++v5[15];
          v15 = (__int64)v19;
        }
        else if ( v19 )
        {
          operator delete(v19, 0x30u);
        }
      }
      *(_QWORD *)(v15 + 40) = v16;
    }
    v12 = *a2;
    if ( *a2 > 0xFF )
    {
      sub_525DE0((__int64)v5, v12);
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
  if ( !(unsigned __int8)sub_532C30(a1, a2, a3) )
    return 0;
  v13 = *a2;
  if ( *a2 > 0xFF )
  {
    sub_525DE0((__int64)v5, v13);
  }
  else if ( (v13 & 0xF) > 9 )
  {
    goto LABEL_20;
  }
  return 1;
}

