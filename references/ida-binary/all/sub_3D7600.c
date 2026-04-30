unsigned __int64 __fastcall sub_3D7600(QT::QFont *this, const char *a2)
{
  const char *v2; // rbp
  void *v3; // rdx
  unsigned int v4; // eax
  int v5; // eax
  int v6; // eax
  void *v7; // rdx
  const char *v9; // [rsp+0h] [rbp-88h] BYREF
  __int128 v10; // [rsp+8h] [rbp-80h]
  void *ptr[4]; // [rsp+20h] [rbp-68h] BYREF
  void *v12; // [rsp+40h] [rbp-48h] BYREF
  void *v13; // [rsp+48h] [rbp-40h]
  unsigned __int64 v14; // [rsp+58h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  v9 = nullptr;
  v10 = 0;
  sub_169A50((__int64 *)&v9, (__int64)"Font\\%s", a2);
  v2 = &s1;
  if ( (_QWORD)v10 )
    v2 = v9;
  QT::QFont::family((QT::QFont *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v12, (const QT::QString *)ptr);
  v3 = v13;
  if ( !v13 )
    v3 = &QT::QByteArray::_empty;
  reg_str_set("Name", v2, v3);
  if ( v12 && !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
    free(v12);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v4 = QT::QFont::pointSize(this);
  reg_int_op("Size", 1, v4, v2);
  v5 = QT::QFont::weight(this);
  reg_int_op("Bold", 1, v5 > 500, v2);
  v6 = QT::QFont::style(this);
  reg_int_op("Italic", 1, v6 != 0, v2);
  QT::QFont::styleName((QT::QFont *)ptr);
  QT::QString::toUtf8_helper((QT::QString *)&v12, (const QT::QString *)ptr);
  v7 = v13;
  if ( !v13 )
    v7 = &QT::QByteArray::_empty;
  reg_str_set("Style", v2, v7);
  if ( v12 && !_InterlockedSub((volatile signed __int32 *)v12, 1u) )
    free(v12);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  if ( v9 )
  {
    *(_QWORD *)&v10 = 0;
    qfree(v9, v2);
  }
  return v14 - __readfsqword(0x28u);
}
