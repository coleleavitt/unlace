unsigned __int64 __fastcall sub_3FB5C0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  QT::QStandardItem *v4; // r12
  _BYTE *v5; // r13
  _QWORD *v6; // r12
  __int64 v7; // rax
  __int64 *v9; // rax
  void *v10; // rdi
  void *v11; // r15
  int v12; // r14d
  __int64 v13; // r12
  __int64 v14; // rax
  _BYTE v15[8]; // [rsp+8h] [rbp-80h] BYREF
  _QWORD v16[2]; // [rsp+10h] [rbp-78h] BYREF
  __int64 v17; // [rsp+20h] [rbp-68h]
  __m128i ptr; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  unsigned __int64 v20; // [rsp+48h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v3 = sub_3F27F0(a1, a2);
  if ( v3 )
  {
    v4 = (QT::QStandardItem *)v3;
    sub_3F2890(v16, a1, a2);
    if ( (LODWORD(v16[0]) | HIDWORD(v16[0])) >= 0 )
    {
      if ( v17 )
      {
        if ( (unsigned int)QT::QStandardItem::rowCount(v4) == 1 )
        {
          v9 = (__int64 *)QT::QStandardItem::child(v4, 0, 0);
          sub_3F6130(&ptr, v9);
          v10 = (void *)ptr.m128i_i64[1];
          v11 = (void *)ptr.m128i_i64[0];
          if ( !ptr.m128i_i64[1] )
            v10 = &QT::QString::_empty;
          v12 = QT::QString::compare_helper(v10, v19, "Loading...", 10, 1);
          if ( v11 && !_InterlockedSub((volatile signed __int32 *)v11, 1u) )
            free(v11);
          if ( !v12 )
          {
            QT::QStandardItem::removeRow(v4, 0);
            if ( (HIDWORD(v16[0]) | LODWORD(v16[0])) >= 0 && v17 )
              sub_3F62A0(*(QT::QStandardItem **)(a1 + 112), (__int64)v16);
            v13 = *(_QWORD *)(a1 + 104);
            v14 = operator new(0x18u);
            *(_DWORD *)v14 = 1;
            *(_QWORD *)(v14 + 8) = sub_3EE980;
            *(_QWORD *)(v14 + 16) = a1;
            QT::QTimer::singleShotImpl(0, 0, v13);
          }
        }
        if ( (HIDWORD(v16[0]) | LODWORD(v16[0])) >= 0 && v17 )
        {
          v5 = (_BYTE *)(a1 + 408);
          QT::QPersistentModelIndex::QPersistentModelIndex(v15);
          v6 = *(_QWORD **)(a1 + 416);
          if ( !v6 )
            goto LABEL_29;
          do
          {
            if ( (QT::compareThreeWay(
                    (const QT::QPersistentModelIndex *)(v6 + 4),
                    (const QT::QPersistentModelIndex *)v15)
                & 0x80u) == 0LL )
            {
              v5 = v6;
              v6 = (_QWORD *)v6[2];
            }
            else
            {
              v6 = (_QWORD *)v6[3];
            }
          }
          while ( v6 );
          if ( (_BYTE *)(a1 + 408) == v5
            || (QT::compareThreeWay(
                  (const QT::QPersistentModelIndex *)v15,
                  (const QT::QPersistentModelIndex *)(v5 + 32))
              & 0x80u) != 0LL )
          {
LABEL_29:
            ptr.m128i_i64[0] = (__int64)v15;
            v5 = sub_3FB4D0((_QWORD *)(a1 + 400), v5, (const QT::QPersistentModelIndex **)&ptr);
          }
          v5[40] = 1;
          QT::QPersistentModelIndex::~QPersistentModelIndex((QT::QPersistentModelIndex *)v15);
        }
        v7 = QT::QMetaObject::cast((QT::QMetaObject *)&off_893520, *(const QT::QObject **)(a1 + 120));
        if ( v7 )
          sub_3F3740(a1, a2, *(_QWORD *)(a1 + 104), v7, a1 + 400);
      }
    }
  }
  return v20 - __readfsqword(0x28u);
}
