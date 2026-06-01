char __fastcall sub_3FDCC0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, double a7)
{
  char result; // al
  __int64 v8; // rbx
  int *v9; // rax
  QT::QRegularExpression *v10; // rbx
  char hasMatch; // [rsp+Fh] [rbp-29h]
  _BYTE v12[8]; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  result = 0;
  if ( !*(_BYTE *)(a3 + 25) )
    return QT::QString::indexOf(a2, a3, 0, *(unsigned int *)(a3 + 28), a7) != -1;
  v8 = a4;
  if ( a4 < *(_QWORD *)(a1 + 56) )
  {
    v9 = *(int **)(a1 + 40);
    if ( !v9 || *v9 > 1 )
      sub_3FD800((__m128i *)(a1 + 40), 0, 0, 0, a5, a6);
    v10 = (QT::QRegularExpression *)(*(_QWORD *)(a1 + 48) + 8 * v8);
    result = QT::QRegularExpression::isValid(v10);
    if ( result )
    {
      QT::QRegularExpression::match(v12, v10, a2, 0, 0, 0);
      hasMatch = QT::QRegularExpressionMatch::hasMatch((QT::QRegularExpressionMatch *)v12);
      QT::QRegularExpressionMatch::~QRegularExpressionMatch((QT::QRegularExpressionMatch *)v12);
      return hasMatch;
    }
  }
  return result;
}
