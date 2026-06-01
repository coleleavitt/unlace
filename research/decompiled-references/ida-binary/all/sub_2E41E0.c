__int64 __fastcall sub_2E41E0(QT::QAbstractItemView *this)
{
  const char *v1; // rsi
  __int64 v2; // rax
  const char **v3; // rdx
  unsigned __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v7; // rax
  char v8; // [rsp+16h] [rbp-52h]
  __int64 v9; // [rsp+17h] [rbp-51h] BYREF
  char v10; // [rsp+1Fh] [rbp-49h]
  __int64 v11; // [rsp+20h] [rbp-48h]
  __int128 v12; // [rsp+28h] [rbp-40h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v1 = nullptr;
  v14 = __readfsqword(0x28u);
  v12 = 0;
  v11 = 0;
  v13 = -1;
  sub_48FB10(this);
  if ( *((_QWORD *)&v13 + 1) )
    goto LABEL_6;
  v2 = QT::QAbstractItemView::model(this);
  v3 = *(const char ***)(v2 + 216);
  if ( !v3 )
    v3 = *(const char ***)(v2 + 208);
  v1 = *v3;
  v9 = -1;
  v10 = 0;
  dirtree_resolve_cursor(&v9, v1, &v13);
  v4 = v9;
  v8 = v10;
  QT::QAbstractItemView::model(this);
  if ( v4 == -1 || v8 || (v7 = *((_QWORD *)this + 311), v4 >= *(_QWORD *)(v7 + 48)) )
LABEL_6:
    v5 = 0;
  else
    v5 = *(_QWORD *)(v7 + 40) + 96 * v4;
  if ( v11 )
  {
    *(_QWORD *)&v12 = 0;
    qfree(v11, v1);
  }
  return v5;
}
