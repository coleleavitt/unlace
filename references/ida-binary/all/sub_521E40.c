unsigned __int64 __fastcall sub_521E40(QT::QAbstractItemView *this, int a2)
{
  __int64 v2; // rax
  QT::QPersistentModelIndex *v3; // rbx
  QT::QPersistentModelIndex *v4; // rbp
  QT::QPersistentModelIndex *v5; // rdi
  __m128i v7; // [rsp+0h] [rbp-58h] BYREF
  __int64 v8; // [rsp+10h] [rbp-48h]
  void *ptr; // [rsp+20h] [rbp-38h] BYREF
  QT::QPersistentModelIndex *v10; // [rsp+28h] [rbp-30h]
  __int64 v11; // [rsp+30h] [rbp-28h]
  unsigned __int64 v12; // [rsp+38h] [rbp-20h]

  v12 = __readfsqword(0x28u);
  sub_48EFE0(&v7, this, a2, 0);
  if ( (v7.m128i_i32[1] | v7.m128i_i32[0]) >= 0 )
  {
    if ( v8 )
    {
      QT::QAbstractItemView::setCurrentIndex(this, &v7);
      QT::QItemSelection::QItemSelection(&ptr, &v7, &v7);
      v2 = QT::QAbstractItemView::selectionModel(this);
      (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v2 + 112LL))(v2, &ptr, 35);
      (*(void (__fastcall **)(QT::QAbstractItemView *, __m128i *, _QWORD))(*(_QWORD *)this + 488LL))(this, &v7, 0);
      if ( ptr )
      {
        if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          v3 = v10;
          v4 = (QT::QPersistentModelIndex *)((char *)v10 + 16 * v11);
          if ( v10 != v4 )
          {
            do
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)((char *)v3 + 8));
              v5 = v3;
              v3 = (QT::QPersistentModelIndex *)((char *)v3 + 16);
              QT::QPersistentModelIndex::~QPersistentModelIndex(v5);
            }
            while ( v4 != v3 );
          }
          free(ptr);
        }
      }
    }
  }
  return v12 - __readfsqword(0x28u);
}
