unsigned __int64 __fastcall sub_493E20(_QWORD *a1, QT::QAbstractItemView *a2, double a3, double a4, __m128 a5)
{
  __int64 v5; // rax
  __int64 v6; // r12
  __m128i *v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // r13
  __int64 v12; // r12
  __int64 v13; // r14
  volatile signed __int32 *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  QT::QPersistentModelIndex *v17; // rdi
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  __int128 vars8; // [rsp+8h] [rbp+8h]
  unsigned __int64 vars18; // [rsp+18h] [rbp+18h]

  vars18 = __readfsqword(0x28u);
  v5 = QT::QAbstractItemView::model(a2);
  vars0 = 0;
  v6 = v5;
  vars8 = 0;
  v7 = (__m128i *)sub_4DE140(&vars0, a2, 1);
  v7->m128i_i64[0] = (__int64)a2;
  sub_48C3B0(v6, v7, a1, 0.0, a4, a5);
  v8 = QT::QAbstractItemView::selectionModel(a2);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 120LL))(v8);
  sub_4E7970(&vars0, 0);
  v9 = vars0;
  if ( vars0 )
  {
    v10 = vars8;
    if ( (_QWORD)vars8 )
    {
      v11 = 0;
      v12 = 0;
      do
      {
        v13 = v9 + v11;
        v14 = *(volatile signed __int32 **)(v9 + v11 + 8);
        if ( v14 )
        {
          if ( !_InterlockedSub(v14, 1u) )
          {
            v15 = *(_QWORD *)(v13 + 16);
            v16 = v15 + 16LL * *(_QWORD *)(v13 + 24);
            while ( v16 != v15 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v15 + 8));
              v17 = (QT::QPersistentModelIndex *)v15;
              v15 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v17);
            }
            free(*(void **)(v13 + 8));
          }
          v9 = vars0;
        }
        ++v12;
        v11 += 56;
      }
      while ( v10 != v12 );
    }
    *(_QWORD *)&vars8 = 0;
    qfree(v9, nullptr);
  }
  return vars18 - __readfsqword(0x28u);
}
