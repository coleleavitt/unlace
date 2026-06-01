__int64 __fastcall sub_4CC8E0(__int64 a1, __int64 a2)
{
  char v2; // dl
  __int64 result; // rax
  char v4; // dl
  char v5; // dl
  char v6; // dl

  v2 = QT::QRect::contains(a1 + 136, a2, 0);
  result = 1;
  if ( !v2 )
  {
    v4 = QT::QRect::contains(a1 + 104, a2, 0);
    result = 2;
    if ( !v4 )
    {
      v5 = QT::QRect::contains(a1 + 120, a2, 0);
      result = 3;
      if ( !v5 )
      {
        v6 = QT::QRect::contains(a1 + 72, a2, 0);
        result = 4;
        if ( !v6 )
          return (unsigned __int8)QT::QRect::contains(a1 + 88, a2, 0) != 0 ? 5 : 0;
      }
    }
  }
  return result;
}
