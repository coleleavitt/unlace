unsigned __int64 __fastcall sub_48EC20(QT::QAbstractItemView *this, const char ***a2, double a3)
{
  __int64 v3; // rax
  _QWORD *v4; // r13
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r12
  const char **v8; // rbx
  __int64 v9; // rbp
  const char *v10; // rdx
  __int64 v11; // rsi
  __int64 v13; // [rsp+Fh] [rbp-39h] BYREF
  char v14; // [rsp+17h] [rbp-31h]
  unsigned __int64 v15; // [rsp+18h] [rbp-30h]

  v15 = __readfsqword(0x28u);
  v3 = QT::QAbstractItemView::model(this);
  v4 = *(_QWORD **)(v3 + 216);
  v5 = v3;
  if ( v4 )
  {
    delete_dirtree(*v4);
    operator delete(v4, 8u);
  }
  *(_QWORD *)(v5 + 216) = 0;
  v6 = QT::QAbstractItemView::model(this);
  v7 = *(_QWORD **)(v6 + 216);
  if ( !v7 )
    v7 = *(_QWORD **)(v6 + 208);
  v8 = *a2;
  v9 = (__int64)&(*a2)[3 * (_QWORD)a2[1]];
  if ( *a2 != (const char **)v9 )
  {
    while ( 1 )
    {
      if ( v8[1] )
      {
        v10 = *v8;
        if ( **v8 == 47 && !v10[1] )
          goto LABEL_9;
      }
      else
      {
        v10 = &s1;
      }
      v11 = *v7;
      v14 = 0;
      v13 = -1;
      dirtree_resolve_path(&v13, v11, v10, a3);
      if ( v13 == -1 || dirtree_get_dir_size(*v7) )
      {
LABEL_9:
        v8 += 3;
        if ( (const char **)v9 == v8 )
          return v15 - __readfsqword(0x28u);
      }
      else
      {
        if ( v8[1] )
          dirtree_rmdir(*v7, *v8, a3);
        else
          dirtree_rmdir(*v7, &s1, a3);
        v8 += 3;
        if ( (const char **)v9 == v8 )
          return v15 - __readfsqword(0x28u);
      }
    }
  }
  return v15 - __readfsqword(0x28u);
}
