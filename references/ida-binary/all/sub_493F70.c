unsigned __int64 __fastcall sub_493F70(QT::QAbstractItemView *this, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r12
  __m128i *v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  volatile signed __int32 *v11; // rax
  __int64 v12; // rbx
  __int64 v13; // rbp
  QT::QPersistentModelIndex *v14; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v2 = QT::QAbstractItemView::model(this);
  vars0 = 0;
  v3 = v2;
  vars8 = 0;
  v4 = (__m128i *)sub_4DE140(&vars0, this, 1);
  v4->m128i_i64[0] = (__int64)this;
  sub_48BFB0(v3, v4, a2);
  v5 = QT::QAbstractItemView::selectionModel(this);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 120LL))(v5);
  sub_4E7970(&vars0, 0);
  v6 = vars0;
  if ( vars0 )
  {
    v7 = vars8;
    if ( (_QWORD)vars8 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        v10 = v6 + v8;
        v11 = *(volatile signed __int32 **)(v6 + v8 + 8);
        if ( v11 )
        {
          if ( !_InterlockedSub(v11, 1u) )
          {
            v12 = *(_QWORD *)(v10 + 16);
            v13 = v12 + 16LL * *(_QWORD *)(v10 + 24);
            while ( v13 != v12 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v12 + 8));
              v14 = (QT::QPersistentModelIndex *)v12;
              v12 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v14);
            }
            free(*(void **)(v10 + 8));
          }
          v6 = vars0;
        }
        ++v9;
        v8 += 56;
      }
      while ( v7 != v9 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v6, nullptr);
  }
  return vars18 - __readfsqword(0x28u);
}
