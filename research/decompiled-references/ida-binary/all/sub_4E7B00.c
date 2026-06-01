__int64 __fastcall sub_4E7B00(__int64 *a1, __int64 a2, unsigned int a3)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  QT::QWidget *v7; // r15
  __int64 v8; // rax
  __int64 v9; // r13
  __int64 v10; // rbp
  __int64 v11; // rax
  int v12; // edi
  __int64 v13; // rbx
  __int64 v14; // rax
  QT::QPersistentModelIndex *v15; // r14
  QT::QPersistentModelIndex *v16; // rbp
  QT::QPersistentModelIndex *v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // r13
  __int64 v21; // rbp
  __int64 v22; // r14
  volatile signed __int32 *v23; // rax
  __int64 v24; // r15
  __int64 v25; // rbx
  QT::QPersistentModelIndex *v26; // rdi
  __int64 v27; // rax
  void (*v28)(); // rax
  __int64 *v30; // [rsp+0h] [rbp-A8h]
  __int64 v31; // [rsp+0h] [rbp-A8h]
  int v32; // [rsp+Ch] [rbp-9Ch]
  __int64 v33; // [rsp+10h] [rbp-98h] BYREF
  __int128 v34; // [rsp+18h] [rbp-90h]
  __int64 v35; // [rsp+30h] [rbp-78h] BYREF
  __int128 v36; // [rsp+38h] [rbp-70h]
  void *ptr[2]; // [rsp+50h] [rbp-58h] BYREF
  __int64 v38; // [rsp+60h] [rbp-48h]
  unsigned __int64 v39; // [rsp+68h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  *((_DWORD *)a1 + 420) |= 0xC0u;
  if ( !a1 )
    goto LABEL_42;
  v5 = qword_8D1E60;
  v6 = qword_8D1E60 + 16 * xmmword_8D1E68;
  if ( qword_8D1E60 == v6 )
    goto LABEL_42;
  while ( a1 != *(__int64 **)(v5 + 8) )
  {
    v5 += 16;
    if ( v6 == v5 )
      goto LABEL_42;
  }
  if ( v5 )
    v7 = *(QT::QWidget **)v5;
  else
LABEL_42:
    v7 = nullptr;
  v32 = *(_DWORD *)(*((_QWORD *)v7 + 4) + 8LL);
  if ( (v32 & 0x8000) != 0 )
    QT::QWidget::setUpdatesEnabled(v7, 0);
  v8 = *a1;
  v33 = 0;
  v34 = 0;
  (*(void (__fastcall **)(__int64 *, __int64 *))(v8 + 128))(a1, &v33);
  v9 = v34;
  v10 = 0;
  if ( (_QWORD)v34 )
  {
    do
    {
      v11 = QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)(v33 + 8 * v10));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 120LL))(v11);
      ++v10;
    }
    while ( v10 != v9 );
  }
  if ( (a3 & 1) != 0 )
    *((_DWORD *)a1 + 420) &= ~0x80u;
  v12 = *((_DWORD *)a1 + 458);
  v35 = 0;
  v30 = &v35;
  v36 = 0;
  if ( v12 > 0 )
    v30 = a1 + 220;
  (*(void (__fastcall **)(__int64 *, __int64 *, __int64, _QWORD))(*a1 + 160))(a1, v30, a2, a3);
  v13 = 0;
  if ( v9 )
  {
    do
    {
      v14 = QT::QAbstractItemView::model(*(QT::QAbstractItemView **)(v33 + 8 * v13));
      *(_OWORD *)ptr = 0;
      v38 = 0;
      QT::QAbstractItemModel::layoutChanged(v14, ptr, 0);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v15 = (QT::QPersistentModelIndex *)ptr[1];
        v16 = (QT::QPersistentModelIndex *)((char *)ptr[1] + 8 * v38);
        if ( ptr[1] != v16 )
        {
          do
          {
            v17 = v15;
            v15 = (QT::QPersistentModelIndex *)((char *)v15 + 8);
            QT::QPersistentModelIndex::~QPersistentModelIndex(v17);
          }
          while ( v16 != v15 );
        }
        free(ptr[0]);
      }
      ++v13;
    }
    while ( v13 != v9 );
  }
  v18 = (unsigned __int16)v32 & 0x8000;
  if ( (v32 & 0x8000) != 0 )
  {
    v18 = (v32 & 0x400) == 0;
    QT::QWidget::setUpdatesEnabled(v7, v18);
  }
  if ( *((int *)a1 + 458) <= 0 )
  {
    v18 = 1;
    sub_4E7970(v30, 1);
  }
  v19 = v35;
  if ( v35 )
  {
    v31 = v36;
    if ( (_QWORD)v36 )
    {
      v20 = 0;
      v21 = 0;
      do
      {
        v22 = v19 + v20;
        v23 = *(volatile signed __int32 **)(v19 + v20 + 8);
        if ( v23 )
        {
          if ( !_InterlockedSub(v23, 1u) )
          {
            v24 = *(_QWORD *)(v22 + 16);
            v25 = v24 + 16LL * *(_QWORD *)(v22 + 24);
            while ( v25 != v24 )
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)(v24 + 8));
              v26 = (QT::QPersistentModelIndex *)v24;
              v24 += 16;
              QT::QPersistentModelIndex::~QPersistentModelIndex(v26);
            }
            free(*(void **)(v22 + 8));
          }
          v19 = v35;
        }
        ++v21;
        v20 += 56;
      }
      while ( v31 != v21 );
    }
    *(_QWORD *)&v36 = 0;
    qfree(v19, (const char *)v18);
  }
  if ( v33 )
  {
    *(_QWORD *)&v34 = 0;
    qfree(v33, (const char *)v18);
  }
  v27 = *a1;
  *((_DWORD *)a1 + 420) &= 0xFFFFFF3F;
  v28 = *(void (**)())(v27 + 360);
  if ( v28 == nullsub_174 )
    return v39 - __readfsqword(0x28u);
  else
    return ((__int64 (__fastcall *)(__int64 *))v28)(a1);
}
