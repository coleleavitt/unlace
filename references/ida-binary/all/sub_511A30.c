double __fastcall sub_511A30(__int64 *a1, const char *a2)
{
  QT::QTextLayout *v3; // rbp
  __int64 v4; // rdi
  double result; // xmm0_8

  v3 = (QT::QTextLayout *)a1[3];
  *((_DWORD *)a1 + 10) = 0;
  if ( v3 )
  {
    QT::QTextLayout::~QTextLayout(v3);
    a2 = &byte_8;
    operator delete(v3, 8u);
  }
  v4 = *a1;
  if ( *a1 )
  {
    a1[1] = 0;
    return qfree(v4, a2);
  }
  return result;
}
