__int64 __fastcall sub_3B5200(_QWORD *a1, unsigned int *a2, int a3)
{
  __int64 v4; // r13
  unsigned __int8 (__fastcall *v5)(_QWORD, _QWORD); // r12
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ebp
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // r14
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rax
  __int64 v21; // r12
  int v22; // eax
  unsigned int v23; // eax
  unsigned int v24; // eax
  _QWORD v25[6]; // [rsp+10h] [rbp-88h] BYREF
  char v26; // [rsp+40h] [rbp-58h]
  unsigned __int8 (__fastcall *v27)(_QWORD, _QWORD); // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  unsigned __int64 v29; // [rsp+58h] [rbp-40h]

  v4 = a1[3];
  v5 = (unsigned __int8 (__fastcall *)(_QWORD, _QWORD))a1[2];
  v29 = __readfsqword(0x28u);
  v26 = 0;
  v25[3] = 0;
  v27 = v5;
  v25[5] = 0;
  v7 = *(_QWORD *)(qword_2CA1698 + 1480);
  v28 = v4;
  v25[1] = v7 + 1480;
  v8 = v7 + 1488;
  v9 = *(_QWORD *)(v7 + 1504);
  v25[2] = v8;
  v25[4] = v9;
  v25[0] = off_2AFCFA0;
  switch ( a3 )
  {
    case 1:
      v12 = a1[1] + 944LL;
      break;
    case 2:
      v12 = a1[1] + 896LL;
      break;
    case 0:
      *(_DWORD *)(a1[1] + 1016LL) = -1;
      return (unsigned int)sub_895D90(*(_QWORD *)(a1[1] + 1008LL), *a2, a2[1] - *a2, v25);
    default:
      if ( !under_debugger )
        interr(62);
LABEL_51:
      BUG();
  }
  v13 = *(_QWORD *)(v12 + 16);
  v14 = a2[1];
  v15 = v12 + 8;
  v10 = *a2;
  if ( !v13 )
  {
    if ( !v5 )
    {
      v21 = *(_QWORD *)(v12 + 24);
      v16 = v12 + 8;
      goto LABEL_31;
    }
    return (unsigned int)-1;
  }
  v16 = v12 + 8;
  do
  {
    while ( 1 )
    {
      v17 = *(_QWORD *)(v13 + 16);
      v18 = *(_QWORD *)(v13 + 24);
      if ( *(_DWORD *)(v13 + 32) < v10 )
        break;
      v16 = v13;
      v13 = *(_QWORD *)(v13 + 16);
      if ( !v17 )
        goto LABEL_12;
    }
    v13 = *(_QWORD *)(v13 + 24);
  }
  while ( v18 );
LABEL_12:
  if ( !v5 )
  {
    if ( v15 != v16 )
    {
      if ( v10 < *(_DWORD *)(v16 + 32) )
      {
        v21 = *(_QWORD *)(v12 + 24);
        if ( v21 != v16 )
        {
          v16 = std::_Rb_tree_decrement();
          if ( v15 == v16 )
          {
            do
            {
LABEL_31:
              if ( v21 == v16 )
                return v10;
              v16 = std::_Rb_tree_decrement();
            }
            while ( (*(_BYTE *)(v16 + 41) & 4) == 0 );
            while ( 1 )
            {
LABEL_38:
              if ( v10 >= v14 )
                return (unsigned int)-1;
              if ( v15 == v16 )
                return v10;
              while ( 1 )
              {
                v23 = *(_DWORD *)(v16 + 32);
                if ( v23 >= v10 )
                  break;
                v24 = *(_DWORD *)(v16 + 36) + v23;
                if ( v10 < v24 )
                  v10 = v24;
                v16 = std::_Rb_tree_increment();
                if ( v15 == v16 )
                  return v10;
              }
              if ( v10 != v23 )
                return v10;
              v22 = *(_DWORD *)(v16 + 36);
              if ( (*(_BYTE *)(v16 + 41) & 6) == 0 )
                return v10;
              if ( !v22 )
                break;
              v10 += v22;
            }
            if ( !under_debugger )
              interr(1149);
            goto LABEL_51;
          }
        }
      }
      if ( *(_DWORD *)(v16 + 36) )
        goto LABEL_38;
    }
    v21 = *(_QWORD *)(v12 + 24);
    goto LABEL_31;
  }
  if ( v15 == v16 )
    return (unsigned int)-1;
LABEL_14:
  if ( *(_DWORD *)(v16 + 32) >= v14 )
    return (unsigned int)-1;
  while ( 1 )
  {
    v19 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64))v5)(*(unsigned int *)(v16 + 40), v4, v18);
    v10 = *(_DWORD *)(v16 + 32);
    if ( v19 )
      return v10;
    ++v10;
    v20 = std::_Rb_tree_increment();
    v16 = v20;
    if ( v15 == v20 )
    {
      if ( v10 < v14 && v5(0, v4) )
        return v10;
      return (unsigned int)-1;
    }
    if ( v10 >= *(_DWORD *)(v20 + 32) )
      goto LABEL_14;
    if ( v5(0, v4) )
      return v10;
    if ( *(_DWORD *)(v16 + 32) >= v14 )
      return (unsigned int)-1;
  }
}

