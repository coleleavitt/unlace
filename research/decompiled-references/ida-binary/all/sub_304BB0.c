__int64 __fastcall sub_304BB0(__int64 a1, QT::QFont **a2)
{
  QT::QFont *v3; // rbx
  __int64 v4; // rbp
  QT::QFont *v5; // rdi

  v3 = *a2;
  v4 = (__int64)*a2 + 72 * (_QWORD)a2[1];
  if ( (QT::QFont *)v4 != *a2 )
  {
    do
    {
      v5 = v3;
      v3 = (QT::QFont *)((char *)v3 + 72);
      sub_3D7600(v5);
    }
    while ( v3 != (QT::QFont *)v4 );
  }
  return sub_47F900(a1, a2);
}
