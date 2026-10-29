void __fastcall sub_546920(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r12
  QT::QPersistentModelIndex *v4; // rdi

  if ( *(_QWORD *)a2 && !_InterlockedSub(*(volatile signed __int32 **)a2, 1u) )
  {
    v2 = *(_QWORD *)(a2 + 8);
    v3 = v2 + 16LL * *(_QWORD *)(a2 + 16);
    while ( v3 != v2 )
    {
      QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v2 + 8));
      v4 = (QT::QPersistentModelIndex *)v2;
      v2 += 16;
      QT::QPersistentModelIndex::~QPersistentModelIndex(v4);
    }
    free(*(void **)a2);
  }
}
