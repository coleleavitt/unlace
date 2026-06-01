__int64 __fastcall sub_3B99C0(_QWORD *a1, unsigned __int64 *a2, int a3)
{
  __int64 v4; // r13
  unsigned __int8 (__fastcall *v5)(_QWORD, _QWORD); // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned __int64 v10; // rbp
  __int64 v12; // rsi
  _QWORD *v13; // rax
  unsigned __int64 v14; // r15
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rax
  _QWORD v27[6]; // [rsp+10h] [rbp-88h] BYREF
  char v28; // [rsp+40h] [rbp-58h]
  unsigned __int8 (__fastcall *v29)(_QWORD, _QWORD); // [rsp+48h] [rbp-50h]
  __int64 v30; // [rsp+50h] [rbp-48h]
  unsigned __int64 v31; // [rsp+58h] [rbp-40h]

  v4 = a1[3];
  v5 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))a1[2];
  v31 = __readfsqword(0x28u);
  v28 = 0;
  v27[3] = 0;
  v29 = v5;
  v27[5] = 0;
  v7 = *(_QWORD *)(qword_2CCB598 + 1672);
  v30 = v4;
  v27[1] = v7 + 1528;
  v8 = v7 + 1536;
  v9 = *(_QWORD *)(v7 + 1552);
  v27[2] = v8;
  v27[4] = v9;
  v27[0] = off_2B260E0;
  switch ( a3 )
  {
    case 1:
      v12 = a1[1] + 952LL;
      break;
    case 2:
      v12 = a1[1] + 904LL;
      break;
    case 0:
      *(_QWORD *)(a1[1] + 1024LL) = -1;
      return sub_8B97D0(*(_QWORD *)(a1[1] + 1016LL), *a2, a2[1] - *a2, v27);
    default:
      if ( !under_debugger )
        interr(62);
LABEL_51:
      BUG();
  }
  v13 = *(_QWORD **)(v12 + 16);
  v14 = a2[1];
  v15 = v12 + 8;
  v10 = *a2;
  if ( !v13 )
  {
    if ( !v5 )
    {
      v23 = *(_QWORD *)(v12 + 24);
      v16 = v12 + 8;
      goto LABEL_31;
    }
    return -1;
  }
  v16 = v12 + 8;
  do
  {
    while ( 1 )
    {
      v17 = v13[2];
      v18 = v13[3];
      if ( v13[4] < v10 )
        break;
      v16 = (__int64)v13;
      v13 = (_QWORD *)v13[2];
      if ( !v17 )
        goto LABEL_12;
    }
    v13 = (_QWORD *)v13[3];
  }
  while ( v18 );
LABEL_12:
  if ( !v5 )
  {
    if ( v15 != v16 )
    {
      if ( v10 < *(_QWORD *)(v16 + 32) )
      {
        v23 = *(_QWORD *)(v12 + 24);
        if ( v23 != v16 )
        {
          v16 = std::_Rb_tree_decrement(v16);
          if ( v15 == v16 )
          {
            do
            {
LABEL_31:
              if ( v23 == v16 )
                return v10;
              v16 = std::_Rb_tree_decrement(v16);
            }
            while ( (*(_BYTE *)(v16 + 49) & 4) == 0 );
            while ( 1 )
            {
LABEL_38:
              if ( v10 >= v14 )
                return -1;
              if ( v15 == v16 )
                return v10;
              while ( 1 )
              {
                v25 = *(_QWORD *)(v16 + 32);
                if ( v25 >= v10 )
                  break;
                v26 = *(_QWORD *)(v16 + 40) + v25;
                if ( v10 < v26 )
                  v10 = v26;
                v16 = std::_Rb_tree_increment(v16, v12, v18, v17);
                if ( v15 == v16 )
                  return v10;
              }
              if ( v10 != v25 )
                return v10;
              v24 = *(_QWORD *)(v16 + 40);
              if ( (*(_BYTE *)(v16 + 49) & 6) == 0 )
                return v10;
              if ( !v24 )
                break;
              v10 += v24;
            }
            if ( !under_debugger )
              interr(1149);
            goto LABEL_51;
          }
        }
      }
      if ( *(_QWORD *)(v16 + 40) )
        goto LABEL_38;
    }
    v23 = *(_QWORD *)(v12 + 24);
    goto LABEL_31;
  }
  if ( v15 == v16 )
    return -1;
LABEL_14:
  if ( *(_QWORD *)(v16 + 32) >= v14 )
    return -1;
  while ( 1 )
  {
    v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v5)(*(unsigned int *)(v16 + 48), v4, v18);
    v10 = *(_QWORD *)(v16 + 32);
    if ( v19 )
      return v10;
    ++v10;
    v22 = std::_Rb_tree_increment(v16, v4, v20, v21);
    v16 = v22;
    if ( v15 == v22 )
    {
      if ( v10 < v14 && v5(0, v4) )
        return v10;
      return -1;
    }
    if ( v10 >= *(_QWORD *)(v22 + 32) )
      goto LABEL_14;
    if ( v5(0, v4) )
      return v10;
    if ( *(_QWORD *)(v16 + 32) >= v14 )
      return -1;
  }
}
