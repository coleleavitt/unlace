__int64 *__fastcall sub_182CC0(_QWORD *a1, unsigned __int64 a2)
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
  __int64 v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  _BYTE *v19; // rax
  _BYTE *v20; // rdx
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  bool v24; // zf
  __int64 v25; // [rsp+0h] [rbp-48h]

  v2 = a1 + 215;
  v4 = (_QWORD *)a1[216];
  if ( !v4 )
    goto LABEL_8;
  v5 = a1 + 215;
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
  v8 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD *, unsigned __int64))(*a1 + 144LL))(a1, a2);
  if ( v8 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) )
    {
      v19 = (_BYTE *)a1[236];
      v20 = &v19[80 * a1[237]];
      if ( v19 != v20 )
      {
        while ( (*v19 & 0x40) != 0 )
        {
          v19 += 80;
          if ( v20 == v19 )
            goto LABEL_38;
        }
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) && (a1[220] & 2) == 0 )
          sub_182BB0(a1);
        sub_17EC50(v8, (__int64)(a1 + 151));
      }
LABEL_38:
      v21 = a1[239];
      if ( v21 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1) && (a1[220] & 2) == 0 )
          sub_182BB0(a1);
        sub_17EAE0((__int64)v8, (__int64)(a1 + 151), v21);
      }
    }
    v9 = (_QWORD *)a1[216];
    if ( !v9 )
      goto LABEL_47;
    v10 = a1 + 215;
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
LABEL_47:
      v25 = (__int64)(a1 + 214);
      v23 = operator new(0x30u);
      v24 = a1[219] == 0;
      *(_QWORD *)(v23 + 32) = a2;
      v14 = (_QWORD *)v23;
      *(_QWORD *)(v23 + 40) = 0;
      if ( !v24 )
      {
        v16 = (_QWORD *)a1[218];
        v10 = nullptr;
        if ( v16[4] < a2 )
        {
LABEL_22:
          if ( v16 )
          {
LABEL_23:
            v10 = v14;
            std::_Rb_tree_insert_and_rebalance();
            ++*(_QWORD *)(v25 + 40);
            goto LABEL_29;
          }
LABEL_27:
          if ( v14 )
            operator delete(v14, 0x30u);
          goto LABEL_29;
        }
      }
    }
    else
    {
      if ( a2 >= v10[4] )
      {
LABEL_29:
        v10[5] = v8;
        return v8;
      }
      v25 = (__int64)(a1 + 214);
      v13 = operator new(0x30u);
      *(_QWORD *)(v13 + 32) = a2;
      v14 = (_QWORD *)v13;
      *(_QWORD *)(v13 + 40) = 0;
      v15 = v10[4];
      if ( a2 >= v15 )
      {
        if ( v15 >= a2 )
          goto LABEL_27;
        if ( (_QWORD *)a1[218] == v10 )
        {
          if ( v10 )
            goto LABEL_23;
          goto LABEL_27;
        }
        v22 = std::_Rb_tree_increment();
        v16 = (_QWORD *)v22;
        if ( a2 < *(_QWORD *)(v22 + 32) )
        {
          if ( !v10[3] )
          {
            if ( v10 )
              goto LABEL_23;
            goto LABEL_27;
          }
          v10 = (_QWORD *)v22;
          goto LABEL_22;
        }
      }
      else
      {
        v16 = v10;
        if ( (_QWORD *)a1[217] == v10 )
          goto LABEL_22;
        v17 = std::_Rb_tree_decrement();
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
    v10 = sub_17DF40(v25, a2);
    goto LABEL_22;
  }
  return v8;
}

