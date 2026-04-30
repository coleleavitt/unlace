unsigned __int64 __fastcall sub_4FD2C0(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 v4; // rax
  signed int v6; // r13d
  __int64 v7; // rax
  __int64 *v8; // rbp
  __int64 *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // rdi
  __int64 *v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  void *v18; // rax
  bool v20; // al
  __int64 i; // rdx
  __int64 v22; // rcx
  __int64 j; // rsi
  char v24; // al
  __int64 v25; // rax
  int v26; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v27; // [rsp+8h] [rbp-30h]

  v2 = a1[6];
  v27 = __readfsqword(0x28u);
  v3 = a1[5];
  v4 = v3 + 72 * v2;
  if ( v3 == v4 )
    return v27 - __readfsqword(0x28u);
  while ( a2 != *(_QWORD *)v3 )
  {
    v3 += 72;
    if ( v4 == v3 )
      return v27 - __readfsqword(0x28u);
  }
  if ( !v3 )
    return v27 - __readfsqword(0x28u);
  v6 = *(_DWORD *)(v3 + 56);
  v7 = a1[30];
  v8 = a1 + 29;
  v26 = v6;
  if ( v7 )
  {
    v9 = a1 + 29;
    do
    {
      while ( 1 )
      {
        v10 = *(_QWORD *)(v7 + 16);
        v11 = *(_QWORD *)(v7 + 24);
        if ( v6 <= *(_DWORD *)(v7 + 32) )
          break;
        v7 = *(_QWORD *)(v7 + 24);
        if ( !v11 )
          goto LABEL_11;
      }
      v9 = (__int64 *)v7;
      v7 = *(_QWORD *)(v7 + 16);
    }
    while ( v10 );
LABEL_11:
    if ( v8 != v9 && v6 >= *((_DWORD *)v9 + 8) )
      return v27 - __readfsqword(0x28u);
  }
  sub_37BDF0((__int64)(a1 + 28), &v26);
  if ( v6 )
    sub_4F9A60(a1, v6);
  if ( !*(_QWORD *)(v3 + 32) )
  {
    v24 = toupper(*(unsigned __int8 *)(v3 + 52));
    if ( v24 == 67 || v24 == 82 )
    {
      if ( QT::QMetaObject::cast((QT::QMetaObject *)&QT::QAbstractButton::staticMetaObject, *(const QT::QObject **)v3) )
      {
        v25 = QT::QAbstractButton::group(*(QT::QAbstractButton **)v3);
        sub_4FD2C0(a1, v25);
      }
    }
  }
  v12 = (_QWORD *)a1[30];
  v13 = a1 + 29;
  if ( v12 )
  {
    v14 = a1[30];
    while ( 1 )
    {
      if ( v6 > *(_DWORD *)(v14 + 32) )
      {
        v14 = *(_QWORD *)(v14 + 24);
      }
      else
      {
        v15 = *(_QWORD *)(v14 + 16);
        if ( v6 >= *(_DWORD *)(v14 + 32) )
        {
          for ( i = *(_QWORD *)(v14 + 24); i; i = v22 )
          {
            v22 = *(_QWORD *)(i + 16);
            for ( j = *(_QWORD *)(i + 24); v6 >= *(_DWORD *)(i + 32); j = *(_QWORD *)(j + 24) )
            {
              i = j;
              if ( !j )
                goto LABEL_24;
              v22 = *(_QWORD *)(j + 16);
            }
            v13 = (__int64 *)i;
          }
LABEL_24:
          while ( v15 )
          {
            while ( 1 )
            {
              v16 = *(_QWORD *)(v15 + 24);
              if ( v6 <= *(_DWORD *)(v15 + 32) )
                break;
              v15 = *(_QWORD *)(v15 + 24);
              if ( !v16 )
                goto LABEL_27;
            }
            v14 = v15;
            v15 = *(_QWORD *)(v15 + 16);
          }
LABEL_27:
          if ( a1[31] == v14 && v13 == v8 )
            goto LABEL_36;
          while ( v13 != (__int64 *)v14 )
          {
            v17 = v14;
            v14 = std::_Rb_tree_increment(v14);
            v18 = (void *)std::_Rb_tree_rebalance_for_erase(v17, a1 + 29);
            operator delete(v18, 0x28u);
            --a1[33];
          }
          return v27 - __readfsqword(0x28u);
        }
        v13 = (__int64 *)v14;
        v14 = *(_QWORD *)(v14 + 16);
      }
      if ( !v14 )
      {
        v20 = v8 == v13;
        goto LABEL_34;
      }
    }
  }
  v20 = 1;
LABEL_34:
  if ( (__int64 *)a1[31] == v13 && v20 )
  {
LABEL_36:
    sub_4F8E60(v12);
    a1[31] = (__int64)v8;
    a1[30] = 0;
    a1[32] = (__int64)v8;
    a1[33] = 0;
  }
  return v27 - __readfsqword(0x28u);
}
