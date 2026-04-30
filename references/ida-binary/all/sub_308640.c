void __fastcall sub_308640(__int64 a1)
{
  QT::QFileInfo *v2; // rbx
  QT::QFileInfo *v3; // r12
  QT::QFileInfo *v4; // rdi

  if ( *(_QWORD *)a1 && !_InterlockedSub(*(volatile signed __int32 **)a1, 1u) )
  {
    v2 = *(QT::QFileInfo **)(a1 + 8);
    v3 = (QT::QFileInfo *)((char *)v2 + 8 * *(_QWORD *)(a1 + 16));
    while ( v3 != v2 )
    {
      v4 = v2;
      v2 = (QT::QFileInfo *)((char *)v2 + 8);
      QT::QFileInfo::~QFileInfo(v4);
    }
    free(*(void **)a1);
  }
}
