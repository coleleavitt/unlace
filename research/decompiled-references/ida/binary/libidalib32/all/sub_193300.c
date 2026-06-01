void __fastcall sub_193300(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // r13
  __int64 v6; // rsi
  __int64 v7; // rbp
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // r15
  unsigned int v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // [rsp+0h] [rbp-48h]

  v4 = a1 + 288;
  v6 = a1[289];
  if ( !v6 )
    goto LABEL_31;
  v7 = (__int64)(a1 + 288);
  v8 = a1[289];
  do
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(v8 + 16);
      v10 = *(_QWORD *)(v8 + 24);
      if ( *(_DWORD *)(v8 + 32) < a2 )
        break;
      v7 = v8;
      v8 = *(_QWORD *)(v8 + 16);
      if ( !v9 )
        goto LABEL_6;
    }
    v8 = *(_QWORD *)(v8 + 24);
  }
  while ( v10 );
LABEL_6:
  if ( v4 == (_QWORD *)v7 )
    goto LABEL_10;
  if ( a2 < *(_DWORD *)(v7 + 32) )
  {
    v11 = *(_QWORD *)(v6 + 16);
    v12 = *(_QWORD *)(v6 + 24);
    v7 = (__int64)(a1 + 288);
    if ( *(_DWORD *)(v6 + 32) < a2 )
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
        v11 = *(_QWORD *)(v6 + 16);
        v12 = *(_QWORD *)(v6 + 24);
        if ( *(_DWORD *)(v6 + 32) >= a2 )
          break;
LABEL_11:
        v6 = v12;
        if ( !v12 )
          goto LABEL_12;
      }
    }
LABEL_12:
    if ( v4 != (_QWORD *)v7 )
    {
      if ( a2 >= *(_DWORD *)(v7 + 32) )
      {
LABEL_22:
        *(_QWORD *)(v7 + 40) = a3;
        return;
      }
      v21 = (__int64)(a1 + 287);
      v13 = operator new(0x30u);
      *(_DWORD *)(v13 + 32) = a2;
      v14 = (void *)v13;
      *(_QWORD *)(v13 + 40) = 0;
      v15 = *(_DWORD *)(v7 + 32);
      if ( a2 < v15 )
      {
        v16 = a1[290];
        if ( v16 == v7 )
          goto LABEL_20;
        v18 = std::_Rb_tree_decrement();
        v16 = v18;
        if ( *(_DWORD *)(v18 + 32) >= a2 )
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
        v16 = a1[291];
        if ( v16 != v7 )
        {
          v17 = std::_Rb_tree_increment();
          v16 = v17;
          if ( a2 < *(_DWORD *)(v17 + 32) )
          {
            if ( !*(_QWORD *)(v7 + 24) )
            {
              if ( v7 )
                goto LABEL_21;
              goto LABEL_29;
            }
            v7 = v17;
LABEL_20:
            if ( v16 )
            {
LABEL_21:
              v7 = (__int64)v14;
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
          v7 = sub_18E140(v21, a2);
          goto LABEL_20;
        }
      }
      v7 = 0;
      goto LABEL_20;
    }
LABEL_31:
    v21 = (__int64)(a1 + 287);
    v19 = operator new(0x30u);
    v20 = a1[292] == 0;
    *(_DWORD *)(v19 + 32) = a2;
    v14 = (void *)v19;
    *(_QWORD *)(v19 + 40) = 0;
    if ( !v20 )
    {
      v16 = a1[291];
      v7 = 0;
      if ( *(_DWORD *)(v16 + 32) < a2 )
        goto LABEL_20;
    }
    goto LABEL_33;
  }
}

