void __fastcall sub_3E2340(__int64 a1)
{
  QT::QPersistentModelIndex *v2; // rbx
  QT::QPersistentModelIndex *v3; // r12
  QT::QPersistentModelIndex *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(QT::QPersistentModelIndex **)(a1 + 8);
    v3 = (QT::QPersistentModelIndex *)((char *)v2 + 8 * *(_QWORD *)(a1 + 16));
    while ( v3 != v2 )
    {
      v4 = v2;
      v2 = (QT::QPersistentModelIndex *)((char *)v2 + 8);
      QT::QPersistentModelIndex::~QPersistentModelIndex(v4);
    }
    free(*(void **)a1);
  }
}
