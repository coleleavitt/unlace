__int64 __fastcall sub_3B8CF0(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v12; // r12
  unsigned __int64 v13; // r15
  unsigned __int64 v14; // rdx
  _QWORD *v15; // rbx
  _QWORD *i; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  char v19; // r14
  __int64 v20; // rax
  _QWORD *v22; // r13
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-90h]
  _QWORD v25[6]; // [rsp+10h] [rbp-88h] BYREF
  char v26; // [rsp+40h] [rbp-58h]
  __int64 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v4 = a1[3];
  v5 = (__int64 (__fastcall *)(_QWORD, _QWORD))a1[2];
  v29 = __readfsqword(0x28u);
  v26 = 0;
  v24 = v4;
  v27 = v5;
  v25[3] = 0;
  v7 = *(_QWORD *)(qword_2CCB598 + 1672);
  v28 = v4;
  v25[5] = 0;
  v25[1] = v7 + 1528;
  v8 = v7 + 1536;
  v9 = *(_QWORD *)(v7 + 1552);
  v25[2] = v8;
  v25[4] = v9;
  v25[0] = off_2B260E0;
  if ( a3 == 1 )
  {
    v12 = a1[1] + 952LL;
  }
  else
  {
    if ( a3 != 2 )
    {
      if ( a3 )
      {
        if ( !under_debugger )
          interr(63);
        BUG();
      }
      *(_QWORD *)(a1[1] + 1024LL) = -1;
      return sub_8B9740(*(_QWORD *)(a1[1] + 1016LL), *a2, a2[1] - *a2, v25);
    }
    v12 = a1[1] + 904LL;
  }
  v13 = *a2;
  v14 = a2[1];
  v15 = (_QWORD *)(v12 + 8);
  for ( i = *(_QWORD **)(v12 + 16); i; i = (_QWORD *)i[2] )
  {
    while ( 1 )
    {
      v17 = i[3];
      if ( i[4] >= v14 )
        break;
      i = (_QWORD *)i[3];
      if ( !v17 )
        goto LABEL_11;
    }
    v15 = i;
  }
LABEL_11:
  if ( v5 )
  {
LABEL_12:
    if ( v15 != *(_QWORD **)(v12 + 24) )
    {
      while ( 1 )
      {
        v18 = std::_Rb_tree_decrement(v15);
        if ( *(_QWORD *)(v18 + 32) < v13 )
          break;
        v19 = v5(*(unsigned int *)(v18 + 48), v24);
        v20 = std::_Rb_tree_decrement(v15);
        v10 = *(_QWORD *)(v20 + 32);
        v15 = (_QWORD *)v20;
        if ( v19 )
          return v10;
        if ( v10-- == 0 )
          break;
        if ( *(_QWORD *)(v12 + 24) == v20 )
        {
          if ( v13 >= v10 )
            return -1;
LABEL_18:
          if ( !(unsigned __int8)v5(0, v24) )
            goto LABEL_12;
          return v10;
        }
        if ( *(_QWORD *)(std::_Rb_tree_decrement(v20) + 32) < v10 )
          goto LABEL_18;
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v10 = v14 - 1;
      if ( v14 - 1 < v13 )
        break;
      v22 = *(_QWORD **)(v12 + 24);
      if ( v22 == v15 )
        return v10;
      while ( 1 )
      {
        v23 = std::_Rb_tree_decrement(v15);
        v14 = *(_QWORD *)(v23 + 32);
        if ( v10 >= v14 )
          break;
        v10 = v14 - 1;
        if ( v22 == (_QWORD *)v23 )
          return v10;
        v15 = (_QWORD *)v23;
      }
      if ( v10 >= v14 + *(_QWORD *)(v23 + 40) )
        return v10;
      if ( (*(_BYTE *)(v23 + 49) & 6) == 0 )
        return *(_QWORD *)(v23 + 32);
    }
  }
  return -1;
}
