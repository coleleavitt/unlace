__int64 __fastcall sub_2DF640(__int64 a1, const char *a2)
{
  QT::QAbstractScrollArea **v2; // rbx
  __int64 result; // rax

  v2 = (QT::QAbstractScrollArea **)&unk_8CD320;
  do
  {
    if ( *v2 )
      result = sub_27D430(*v2, a2);
    ++v2;
  }
  while ( v2 != (QT::QAbstractScrollArea **)&unk_8CD3F0 );
  return result;
}
