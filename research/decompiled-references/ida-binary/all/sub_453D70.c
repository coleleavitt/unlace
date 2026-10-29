unsigned __int64 __fastcall sub_453D70(QT::QAbstractItemView *a1, const char *a2, _QWORD *a3)
{
  char *v3; // rbx
  bool v4; // zf
  __int64 v6; // rax
  const char **v7; // rdx
  __int64 v8; // rcx
  __int128 v9; // kr00_16
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-38h] BYREF
  __int128 v13; // [rsp+8h] [rbp-30h]
  unsigned __int64 v14; // [rsp+18h] [rbp-20h]

  v3 = (char *)a2;
  v4 = *a3 == -1;
  v14 = __readfsqword(0x28u);
  if ( v4 && a3[1] )
  {
    v8 = 0;
    v9 = 0u;
  }
  else
  {
    v6 = QT::QAbstractItemView::model(a1);
    v7 = *(const char ***)(v6 + 216);
    if ( !v7 )
      v7 = *(const char ***)(v6 + 208);
    v12 = 0;
    v13 = 0;
    a2 = *v7;
    dirtree_get_abspath_by_cursor(&v12, *v7, a3, 0);
    v8 = v12;
    v9 = v13;
  }
  v10 = *(_QWORD *)v3;
  *((_QWORD *)v3 + 1) = v9;
  *(_QWORD *)v3 = v8;
  *((_QWORD *)v3 + 2) = *((_QWORD *)&v9 + 1);
  if ( v10 )
    qfree(v10, a2);
  return v14 - __readfsqword(0x28u);
}
