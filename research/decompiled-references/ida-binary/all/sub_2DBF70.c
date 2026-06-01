__int64 __fastcall sub_2DBF70(QT::QGuiApplication *this, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  __int64 v5; // rbp
  int v6; // eax

  v3 = *a3;
  v4 = *a3 + 16 * a3[1];
  if ( v4 == *a3 )
    return 0;
  while ( 1 )
  {
    v5 = sub_2DBE90(this, v3);
    if ( v5 != -1 )
      break;
    v3 += 16;
    if ( v4 == v3 )
      return 0;
  }
  v6 = QT::QGuiApplication::keyboardModifiers(this);
  sub_192AA0(0, v5, -1, (v6 & 0x18000000) == 0 ? 1 : 9);
  return 1;
}
