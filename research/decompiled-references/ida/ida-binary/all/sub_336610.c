void __fastcall sub_336610(__int64 a1)
{
  QT::QKeySequence *v2; // rbx
  QT::QKeySequence *v3; // r12
  QT::QKeySequence *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(QT::QKeySequence **)(a1 + 8);
    v3 = (QT::QKeySequence *)((char *)v2 + 8 * *(_QWORD *)(a1 + 16));
    while ( v3 != v2 )
    {
      v4 = v2;
      v2 = (QT::QKeySequence *)((char *)v2 + 8);
      QT::QKeySequence::~QKeySequence(v4);
    }
    free(*(void **)a1);
  }
}
