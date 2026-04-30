__int64 *__fastcall sub_310F00(__int64 a1, char a2)
{
  __int64 *result; // rax
  __int64 *v3; // rbp

  result = &qword_8CC980;
  if ( !byte_8CC998 )
  {
    result = (__int64 *)qword_8CC990;
    if ( qword_8CC990 )
    {
      result = (__int64 *)QT::QMetaObject::cast(
                            (QT::QMetaObject *)&off_887F00,
                            *(const QT::QObject **)(*(_QWORD *)(qword_8CC990 + 8) + 16LL));
      v3 = result;
      if ( result )
      {
        result = (__int64 *)sub_4C6A70();
        if ( !(_DWORD)result )
        {
          if ( a2 )
            return (__int64 *)sub_4CB2D0(qword_8CD8B8);
          else
            return (__int64 *)sub_4C9900(qword_8CD8B8, v3);
        }
      }
    }
  }
  return result;
}
