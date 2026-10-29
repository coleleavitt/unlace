unsigned __int64 __fastcall sub_49A810(QT::QAbstractItemView *this, QT::QKeyEvent *a2)
{
  __int64 *v3; // rdi
  __int64 v4; // rax
  void (*v5)(void); // rdx
  int v7; // r12d
  int v8; // eax
  unsigned int v9; // r13d
  unsigned int v10; // eax
  unsigned int v11; // r14d
  _QWORD *v12; // r15
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rax
  QT::QPersistentModelIndex *v16; // r12
  QT::QPersistentModelIndex *v17; // r13
  QT::QPersistentModelIndex *v18; // rdi
  __int64 (__fastcall *v19)(__int64); // [rsp+10h] [rbp-C8h]
  void (__fastcall *v20)(_BYTE *, __int64, _QWORD, _QWORD, _BYTE *); // [rsp+10h] [rbp-C8h]
  __int64 v21; // [rsp+18h] [rbp-C0h]
  _DWORD v22[4]; // [rsp+20h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+30h] [rbp-A8h]
  _BYTE v24[32]; // [rsp+40h] [rbp-98h] BYREF
  void *ptr; // [rsp+60h] [rbp-78h] BYREF
  QT::QPersistentModelIndex *v26; // [rsp+68h] [rbp-70h]
  __int64 v27; // [rsp+70h] [rbp-68h]
  _BYTE v28[24]; // [rsp+80h] [rbp-58h] BYREF
  unsigned __int64 v29; // [rsp+98h] [rbp-40h]

  v3 = *((__int64 **)this + 5);
  v29 = __readfsqword(0x28u);
  v4 = *v3;
  v5 = *(void (**)(void))(*v3 + 672);
  if ( v5 != nullsub_263 )
  {
    v5();
    v3 = *((__int64 **)this + 5);
    v4 = *v3;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64 *, QT::QAbstractItemView *, QT::QKeyEvent *))(v4 + 760))(v3, this, a2) )
    return v29 - __readfsqword(0x28u);
  v7 = QT::QKeyEvent::modifiers(a2);
  v8 = *((_DWORD *)a2 + 16);
  if ( (unsigned int)(v8 - 16777232) <= 1 )
  {
    (*(void (__fastcall **)(_DWORD *, QT::QAbstractItemView *, _QWORD, _QWORD))(*(_QWORD *)this + 680LL))(
      v22,
      this,
      (unsigned int)(v8 != 16777232) + 4,
      v7 | 0x4000000u);
    v9 = v22[0];
    if ( (v22[1] | v22[0]) >= 0 && v23 )
    {
      v10 = 0;
      if ( *(int *)(*(_QWORD *)(*((_QWORD *)this + 5) + 2392LL) + 176LL) >= 0 )
        v10 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 2392LL) + 176LL);
      v11 = v10;
      v12 = (_QWORD *)QT::QAbstractItemView::model(this);
      v19 = *(__int64 (__fastcall **)(__int64))(*v12 + 128LL);
      QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)v28);
      if ( v19 == sub_499320 )
        v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v12[3] + 40LL) + 2392LL) + 48LL);
      else
        v13 = ((__int64 (__fastcall *)(_QWORD *, _BYTE *))v19)(v12, v28);
      if ( (int)v11 >= v13 )
        v11 = v13 - 1;
      v21 = QT::QAbstractItemView::model(this);
      v20 = *(void (__fastcall **)(_BYTE *, __int64, _QWORD, _QWORD, _BYTE *))(*(_QWORD *)v21 + 112LL);
      QT::QAbstractItemView::rootIndex((QT::QAbstractItemView *)v28);
      v20(v24, v21, v9, v11, v28);
      if ( (v7 & 0x2000000) != 0 && (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 5) + 2392LL) + 12LL) & 4) != 0 )
      {
        QT::QAbstractItemView::currentIndex((QT::QAbstractItemView *)v28);
        QT::QItemSelection::QItemSelection(&ptr, v28, v24);
        QT::QAbstractItemView::setCurrentIndex(this, v24);
        v15 = QT::QAbstractItemView::selectionModel(this);
        (*(void (__fastcall **)(__int64, void **, __int64))(*(_QWORD *)v15 + 112LL))(v15, &ptr, 35);
        (*(void (__fastcall **)(QT::QAbstractItemView *, _BYTE *, _QWORD))(*(_QWORD *)this + 488LL))(this, v24, 0);
        if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
        {
          v16 = v26;
          v17 = (QT::QPersistentModelIndex *)((char *)v26 + 16 * v27);
          if ( v26 != v17 )
          {
            do
            {
              QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)((char *)v16 + 8));
              v18 = v16;
              v16 = (QT::QPersistentModelIndex *)((char *)v16 + 16);
              QT::QPersistentModelIndex::~QPersistentModelIndex(v18);
            }
            while ( v17 != v16 );
          }
          free(ptr);
        }
      }
      else
      {
        QT::QAbstractItemView::setCurrentIndex(this, v24);
      }
    }
    *((_BYTE *)a2 + 12) = 1;
    v14 = *((_QWORD *)this + 5);
    *(_QWORD *)(v14 + 1168) = 0;
    *(_BYTE *)(v14 + 144) = 0;
    return v29 - __readfsqword(0x28u);
  }
  return QT::QAbstractItemView::keyPressEvent(this, a2);
}
