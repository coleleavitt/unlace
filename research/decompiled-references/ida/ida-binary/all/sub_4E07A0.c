__int64 *__fastcall sub_4E07A0(_QWORD *a1, unsigned __int64 a2)
{
  _QWORD *v2; // r12
  _QWORD *v4; // rax
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 *v8; // r13
  _QWORD *v9; // rax
  _QWORD *v10; // r14
  __int64 v11; // rcx
  __int64 v12; // rdx
  _QWORD *v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _BOOL8 v19; // rdi
  __int64 v21; // r14
  __int64 v22; // rax
  _QWORD *v23; // rax
  bool v24; // zf
  __int64 v25; // [rsp+0h] [rbp-48h]
  unsigned __int64 v26; // [rsp+8h] [rbp-40h]

  v2 = a1 + 205;
  v4 = (_QWORD *)a1[206];
  if ( !v4 )
    goto LABEL_8;
  v5 = a1 + 205;
  do
  {
    while ( 1 )
    {
      v6 = v4[2];
      v7 = v4[3];
      if ( v4[4] < a2 )
        break;
      v5 = v4;
      v4 = (_QWORD *)v4[2];
      if ( !v6 )
        goto LABEL_6;
    }
    v4 = (_QWORD *)v4[3];
  }
  while ( v7 );
LABEL_6:
  if ( v2 != v5 && a2 >= v5[4] )
    return (__int64 *)v5[5];
LABEL_8:
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 200LL))(a1, a2);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1) )
    {
      if ( (unsigned __int8)sub_4DADD0((__int64)(a1 + 231)) )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1) && (a1[210] & 2) == 0 )
          sub_4DFA70((char *)a1);
        sub_4DE9B0(v8, (__int64)(a1 + 141));
      }
      v21 = a1[234];
      if ( v21 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 96LL))(a1) && (a1[210] & 2) == 0 )
          sub_4DFA70((char *)a1);
        sub_4DE7C0((__int64)v8, (__int64)(a1 + 141), v21);
      }
    }
    v9 = (_QWORD *)a1[206];
    if ( !v9 )
      goto LABEL_45;
    v10 = a1 + 205;
    do
    {
      while ( 1 )
      {
        v11 = v9[2];
        v12 = v9[3];
        if ( v9[4] < a2 )
          break;
        v10 = v9;
        v9 = (_QWORD *)v9[2];
        if ( !v11 )
          goto LABEL_15;
      }
      v9 = (_QWORD *)v9[3];
    }
    while ( v12 );
LABEL_15:
    if ( v2 == v10 )
    {
LABEL_45:
      v25 = (__int64)(a1 + 204);
      v23 = (_QWORD *)operator new(0x30u);
      v24 = a1[209] == 0;
      v23[4] = a2;
      v14 = v23;
      v23[5] = 0;
      if ( !v24 )
      {
        v16 = (_QWORD *)a1[208];
        v10 = nullptr;
        if ( v16[4] < a2 )
        {
LABEL_22:
          if ( v16 )
          {
            if ( v10 || v2 == v16 )
            {
              v19 = 1;
              goto LABEL_40;
            }
            goto LABEL_25;
          }
          goto LABEL_30;
        }
      }
    }
    else
    {
      if ( a2 >= v10[4] )
      {
LABEL_32:
        v10[5] = v8;
        return v8;
      }
      v25 = (__int64)(a1 + 204);
      v13 = (_QWORD *)operator new(0x30u);
      v13[4] = a2;
      v14 = v13;
      v13[5] = 0;
      v15 = v10[4];
      if ( a2 >= v15 )
      {
        v26 = v10[4];
        if ( v15 >= a2 )
          goto LABEL_30;
        if ( (_QWORD *)a1[208] == v10 )
        {
          v16 = v10;
          if ( v10 )
          {
LABEL_25:
            v18 = v16[4];
LABEL_26:
            v19 = a2 < v18;
LABEL_40:
            v10 = v14;
            std::_Rb_tree_insert_and_rebalance(v19, v14, v16, v2);
            ++*(_QWORD *)(v25 + 40);
            goto LABEL_32;
          }
LABEL_30:
          if ( v14 )
            operator delete(v14, 0x30u);
          goto LABEL_32;
        }
        v22 = std::_Rb_tree_increment(v10);
        v16 = (_QWORD *)v22;
        if ( a2 < *(_QWORD *)(v22 + 32) )
        {
          v18 = v26;
          if ( !v10[3] )
          {
            v16 = v10;
            if ( v10 )
              goto LABEL_26;
            goto LABEL_30;
          }
          v10 = (_QWORD *)v22;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = v10;
        if ( (_QWORD *)a1[207] == v10 )
          goto LABEL_22;
        v17 = std::_Rb_tree_decrement(v10);
        v16 = (_QWORD *)v17;
        if ( *(_QWORD *)(v17 + 32) < a2 )
        {
          if ( *(_QWORD *)(v17 + 24) )
            v16 = v10;
          else
            v10 = nullptr;
          goto LABEL_22;
        }
      }
    }
    v10 = sub_4DCA80(v25, a2);
    goto LABEL_22;
  }
  return v8;
}
