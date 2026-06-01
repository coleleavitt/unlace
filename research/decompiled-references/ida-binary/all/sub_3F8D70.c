void __fastcall sub_3F8D70(__int64 a1)
{
  QT::QRegularExpression *v2; // rbx
  QT::QRegularExpression *v3; // r12
  QT::QRegularExpression *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(QT::QRegularExpression **)(a1 + 8);
    v3 = (QT::QRegularExpression *)((char *)v2 + 8 * *(_QWORD *)(a1 + 16));
    while ( v3 != v2 )
    {
      v4 = v2;
      v2 = (QT::QRegularExpression *)((char *)v2 + 8);
      QT::QRegularExpression::~QRegularExpression(v4);
    }
    free(*(void **)a1);
  }
}
