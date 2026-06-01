void __fastcall sub_193F00(_QWORD *a1, unsigned __int64 a2, __int64 a3)
{
  _QWORD *v4; // r13
  _QWORD *v6; // rsi
  _QWORD *v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // r15
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // [rsp+0h] [rbp-48h]

  v4 = a1 + 288;
  v6 = (_QWORD *)a1[289];
  if ( !v6 )
    goto LABEL_31;
  v7 = a1 + 288;
  v8 = (_QWORD *)a1[289];
  do
  {
    while ( 1 )
    {
      v9 = v8[2];
      v10 = v8[3];
      if ( v8[4] < a2 )
        break;
      v7 = v8;
      v8 = (_QWORD *)v8[2];
      if ( !v9 )
        goto LABEL_6;
    }
    v8 = (_QWORD *)v8[3];
  }
  while ( v10 );
LABEL_6:
  if ( v4 == v7 )
    goto LABEL_10;
  if ( a2 < v7[4] )
  {
    v11 = (_QWORD *)v6[2];
    v12 = (_QWORD *)v6[3];
    v7 = a1 + 288;
    if ( v6[4] < a2 )
      goto LABEL_11;
    while ( 1 )
    {
      v7 = v6;
      v6 = v11;
      if ( !v11 )
        break;
LABEL_10:
      while ( 1 )
      {
        v11 = (_QWORD *)v6[2];
        v12 = (_QWORD *)v6[3];
        if ( v6[4] >= a2 )
          break;
LABEL_11:
        v6 = v12;
        if ( !v12 )
          goto LABEL_12;
      }
    }
LABEL_12:
    if ( v4 != v7 )
    {
      if ( a2 >= v7[4] )
      {
LABEL_22:
        v7[5] = a3;
        return;
      }
      v21 = (__int64)(a1 + 287);
      v13 = operator new(0x30u);
      *(_QWORD *)(v13 + 32) = a2;
      v14 = (_QWORD *)v13;
      *(_QWORD *)(v13 + 40) = 0;
      v15 = v7[4];
      if ( a2 < v15 )
      {
        v16 = (_QWORD *)a1[290];
        if ( v16 == v7 )
          goto LABEL_20;
        v18 = std::_Rb_tree_decrement();
        v16 = (_QWORD *)v18;
        if ( *(_QWORD *)(v18 + 32) >= a2 )
          goto LABEL_33;
        if ( *(_QWORD *)(v18 + 24) )
        {
          v16 = v7;
          goto LABEL_20;
        }
      }
      else
      {
        if ( v15 >= a2 )
          goto LABEL_29;
        v16 = (_QWORD *)a1[291];
        if ( v16 != v7 )
        {
          v17 = std::_Rb_tree_increment();
          v16 = (_QWORD *)v17;
          if ( a2 < *(_QWORD *)(v17 + 32) )
          {
            if ( !v7[3] )
            {
              if ( v7 )
                goto LABEL_21;
              goto LABEL_29;
            }
            v7 = (_QWORD *)v17;
LABEL_20:
            if ( v16 )
            {
LABEL_21:
              v7 = v14;
              std::_Rb_tree_insert_and_rebalance();
              ++*(_QWORD *)(v21 + 40);
              goto LABEL_22;
            }
LABEL_29:
            if ( v14 )
              operator delete(v14, 0x30u);
            goto LABEL_22;
          }
LABEL_33:
          v7 = sub_18ED40(v21, a2);
          goto LABEL_20;
        }
      }
      v7 = nullptr;
      goto LABEL_20;
    }
LABEL_31:
    v21 = (__int64)(a1 + 287);
    v19 = operator new(0x30u);
    v20 = a1[292] == 0;
    *(_QWORD *)(v19 + 32) = a2;
    v14 = (_QWORD *)v19;
    *(_QWORD *)(v19 + 40) = 0;
    if ( !v20 )
    {
      v16 = (_QWORD *)a1[291];
      v7 = nullptr;
      if ( v16[4] < a2 )
        goto LABEL_20;
    }
    goto LABEL_33;
  }
}

