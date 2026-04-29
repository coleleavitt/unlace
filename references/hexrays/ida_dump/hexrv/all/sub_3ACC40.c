__int64 __fastcall sub_3ACC40(__int64 a1, unsigned __int64 a2, char a3, __int64 a4, __int64 a5)
{
  __int64 *v7; // r15
  __int64 v8; // rbp
  __int64 *v9; // rbx
  __int64 v11; // rdx
  __int64 *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 *v15; // rax
  unsigned __int64 v16; // rsi
  _QWORD *v17; // rdi
  _QWORD *v18; // r12
  _QWORD *v19; // r15
  _QWORD *v20; // rbx
  unsigned __int64 v21; // rax
  _QWORD *v22; // rdx
  bool v23; // al
  _QWORD *i; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rdi
  void *v28; // rax
  char v29; // [rsp+7h] [rbp-41h]
  unsigned __int64 v30[8]; // [rsp+8h] [rbp-40h] BYREF

  v7 = *(__int64 **)a1;
  v30[0] = a2;
  if ( !v7 )
    goto LABEL_35;
  v8 = *(_QWORD *)(a1 + 8);
  if ( !v8 )
    goto LABEL_36;
  v9 = (__int64 *)v7[1];
  if ( v7 == v9 )
  {
LABEL_35:
    v8 = 0;
    goto LABEL_36;
  }
  v29 = 0;
  v8 = 0;
  do
  {
    while ( 1 )
    {
LABEL_5:
      v11 = v9[6];
      if ( v11 )
      {
        v12 = (__int64 *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL);
        if ( !v12 )
          goto LABEL_20;
        if ( (*(_BYTE *)(*(_QWORD *)v11 & 0xFFFFFFFFFFFFFFFCLL) & 2) == 0 )
        {
          do
          {
            v13 = v12[3];
            if ( a2 >= v13 )
            {
              if ( v13 >= a2 )
              {
                if ( (__int64 *)v11 != v12 )
                {
LABEL_20:
                  if ( a3 || !*(_BYTE *)(a1 + 65) )
                  {
                    ++v8;
                    sub_3AC9F0((unsigned __int64 **)v9 + 6, v12);
                  }
                  else
                  {
                    v29 = *(_BYTE *)(a1 + 65);
                  }
                }
                break;
              }
              v12 = (__int64 *)v12[2];
            }
            else
            {
              v12 = (__int64 *)v12[1];
            }
          }
          while ( (*(_BYTE *)v12 & 2) == 0 );
        }
      }
      if ( (*v9 & 2) != 0 )
        goto LABEL_15;
      v11 = v9[2];
      if ( (*(_BYTE *)v11 & 2) != 0 )
        break;
      while ( (**(_BYTE **)(v11 + 8) & 2) == 0 )
        v11 = *(_QWORD *)(v11 + 8);
      v9 = (__int64 *)v11;
LABEL_15:
      if ( v7 == v9 )
        goto LABEL_16;
    }
    v15 = (__int64 *)(*v9 & 0xFFFFFFFFFFFFFFFCLL);
    v11 = *v15;
    if ( (*v15 & 2) == 0 )
    {
      while ( (__int64 *)v15[2] == v9 )
      {
        v9 = v15;
        v16 = v11 & 0xFFFFFFFFFFFFFFFCLL;
        v11 = *(_QWORD *)(v11 & 0xFFFFFFFFFFFFFFFCLL);
        if ( (v11 & 2) != 0 )
        {
          v9 = (__int64 *)v16;
          if ( v7 != (__int64 *)v16 )
            goto LABEL_5;
          goto LABEL_16;
        }
        v15 = (__int64 *)v16;
      }
    }
    v9 = v15;
  }
  while ( v7 != v15 );
LABEL_16:
  if ( v29 )
  {
    sub_175840((_QWORD *)(a1 + 16), v30, v11, a4, a5);
    return v8;
  }
LABEL_36:
  v17 = *(_QWORD **)(a1 + 32);
  v18 = (_QWORD *)(a1 + 24);
  v19 = (_QWORD *)(a1 + 24);
  if ( v17 )
  {
    v20 = *(_QWORD **)(a1 + 32);
    while ( 1 )
    {
      while ( 1 )
      {
        v21 = v20[4];
        if ( v21 >= a2 )
          break;
        v20 = (_QWORD *)v20[3];
        if ( !v20 )
          goto LABEL_42;
      }
      v22 = (_QWORD *)v20[2];
      if ( a2 >= v21 )
        break;
      v19 = v20;
      v20 = (_QWORD *)v20[2];
      if ( !v22 )
      {
LABEL_42:
        v23 = v19 == v18;
        goto LABEL_43;
      }
    }
    for ( i = (_QWORD *)v20[3]; i; i = (_QWORD *)i[3] )
    {
      while ( 1 )
      {
        v25 = i[2];
        if ( a2 >= i[4] )
          break;
        v19 = i;
        i = (_QWORD *)i[2];
        if ( !v25 )
          goto LABEL_50;
      }
    }
LABEL_50:
    while ( v22 )
    {
      while ( 1 )
      {
        v26 = v22[2];
        if ( v22[4] < a2 )
          break;
        v20 = v22;
        v22 = (_QWORD *)v22[2];
        if ( !v26 )
          goto LABEL_53;
      }
      v22 = (_QWORD *)v22[3];
    }
LABEL_53:
    if ( *(_QWORD **)(a1 + 40) == v20 && v18 == v19 )
      goto LABEL_45;
    while ( v20 != v19 )
    {
      v27 = v20;
      v20 = (_QWORD *)std::_Rb_tree_increment(v20);
      v28 = (void *)std::_Rb_tree_rebalance_for_erase(v27, a1 + 24);
      operator delete(v28, 0x28u);
      --*(_QWORD *)(a1 + 56);
    }
  }
  else
  {
    v23 = 1;
LABEL_43:
    if ( *(_QWORD **)(a1 + 40) == v19 && v23 )
    {
LABEL_45:
      sub_3A5E30(v17);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 40) = v18;
      *(_QWORD *)(a1 + 48) = v18;
      *(_QWORD *)(a1 + 56) = 0;
    }
  }
  return v8;
}
