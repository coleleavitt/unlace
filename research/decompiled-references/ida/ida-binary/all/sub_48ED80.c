unsigned __int64 __fastcall sub_48ED80(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v2; // rax
  QT::QPersistentModelIndex *v4; // rbx
  QT::QPersistentModelIndex *v5; // rbp
  QT::QPersistentModelIndex *v6; // rdi
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  QT::QPersistentModelIndex *v8; // [rsp+8h] [rbp-30h]
  __int64 v9; // [rsp+10h] [rbp-28h]
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  QT::QAbstractItemView::setCurrentIndex(this, a2);
  QT::QItemSelection::QItemSelection(&ptr, a2, a2);
  v2 = QT::QAbstractItemView::selectionModel(this);
  (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v2 + 112LL))(v2, &ptr, 35);
  (*(void (__fastcall **)(QT::QAbstractItemView *, __int64, _QWORD))(*(_QWORD *)this + 488LL))(this, a2, 0);
  if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    v4 = v8;
    v5 = (QT::QPersistentModelIndex *)((char *)v8 + 16 * v9);
    if ( v8 != v5 )
    {
      do
      {
        QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)((char *)v4 + 8));
        v6 = v4;
        v4 = (QT::QPersistentModelIndex *)((char *)v4 + 16);
        QT::QPersistentModelIndex::~QPersistentModelIndex(v6);
      }
      while ( v5 != v4 );
    }
    free(ptr);
  }
  return v10 - __readfsqword(0x28u);
}
