__int64 __fastcall sub_3B4560(_QWORD *a1, unsigned int *a2, int a3)
{
  __int64 v4; // rbx
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // r13
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v12; // r12
  unsigned int v13; // r15d
  unsigned int v14; // edx
  __int64 v15; // rbx
  __int64 i; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  char v19; // r14
  __int64 v20; // rax
  __int64 v22; // r13
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
  v7 = *(_QWORD *)(qword_2CA1698 + 1480);
  v28 = v4;
  v25[5] = 0;
  v25[1] = v7 + 1480;
  v8 = v7 + 1488;
  v9 = *(_QWORD *)(v7 + 1504);
  v25[2] = v8;
  v25[4] = v9;
  v25[0] = off_2AFCFA0;
  if ( a3 == 1 )
  {
    v12 = a1[1] + 944LL;
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
      *(_DWORD *)(a1[1] + 1016LL) = -1;
      return (unsigned int)sub_895D00(*(_QWORD *)(a1[1] + 1008LL), *a2, a2[1] - *a2, v25);
    }
    v12 = a1[1] + 896LL;
  }
  v13 = *a2;
  v14 = a2[1];
  v15 = v12 + 8;
  for ( i = *(_QWORD *)(v12 + 16); i; i = *(_QWORD *)(i + 16) )
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(i + 24);
      if ( *(_DWORD *)(i + 32) >= v14 )
        break;
      i = *(_QWORD *)(i + 24);
      if ( !v17 )
        goto LABEL_11;
    }
    v15 = i;
  }
LABEL_11:
  if ( v5 )
  {
LABEL_12:
    if ( v15 != *(_QWORD *)(v12 + 24) )
    {
      while ( 1 )
      {
        v18 = std::_Rb_tree_decrement();
        if ( *(_DWORD *)(v18 + 32) < v13 )
          break;
        v19 = v5(*(unsigned int *)(v18 + 40), v24);
        v20 = std::_Rb_tree_decrement();
        v10 = *(_DWORD *)(v20 + 32);
        v15 = v20;
        if ( v19 )
          return v10;
        if ( v10-- == 0 )
          break;
        if ( *(_QWORD *)(v12 + 24) == v20 )
        {
          if ( v13 >= v10 )
            return (unsigned int)-1;
LABEL_18:
          if ( !(unsigned __int8)v5(0, v24) )
            goto LABEL_12;
          return v10;
        }
        if ( *(_DWORD *)(std::_Rb_tree_decrement() + 32) < v10 )
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
      v22 = *(_QWORD *)(v12 + 24);
      if ( v22 == v15 )
        return v10;
      while ( 1 )
      {
        v23 = std::_Rb_tree_decrement();
        v14 = *(_DWORD *)(v23 + 32);
        if ( v10 >= v14 )
          break;
        v10 = v14 - 1;
        if ( v22 == v23 )
          return v10;
        v15 = v23;
      }
      if ( v10 >= v14 + *(_DWORD *)(v23 + 36) )
        return v10;
      if ( (*(_BYTE *)(v23 + 41) & 6) == 0 )
        return *(unsigned int *)(v23 + 32);
    }
  }
  return (unsigned int)-1;
}

