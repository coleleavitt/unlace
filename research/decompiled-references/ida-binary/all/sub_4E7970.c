unsigned __int64 __fastcall sub_4E7970(_QWORD *a1, char a2)
{
  __int64 v2; // rdx
  __int64 v3; // rbp
  __int64 i; // rbx
  QT::QAbstractItemView *v5; // r14
  unsigned int v6; // r15d
  __int64 v7; // r13
  void (__fastcall *v8)(__int64, __int64); // r15
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __m128i ptr; // [rsp+10h] [rbp-58h] BYREF
  unsigned __int64 v14; // [rsp+28h] [rbp-40h]

  v2 = a1[1];
  v14 = __readfsqword(0x28u);
  v3 = *a1 + 56 * v2;
  if ( *a1 != v3 )
  {
    for ( i = *a1 + 32LL; ; i += 56 )
    {
      if ( *(_QWORD *)(i - 8) )
      {
        v7 = *(_QWORD *)(i - 32);
        v8 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 480LL);
        QT::QItemSelection::indexes((QT::QItemSelection *)&ptr);
        if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
          sub_3FB980(&ptr, 0, 0, 0, v9, v10);
        v8(v7, ptr.m128i_i64[1]);
        if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
          free((void *)ptr.m128i_i64[0]);
        v11 = QT::QAbstractItemView::selectionModel(*(QT::QAbstractItemView **)(i - 32));
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 112LL))(v11, i - 24, a2 == 0 ? 2 : 34);
      }
      if ( *(int *)i >= 0 && *(int *)(i + 4) >= 0 && *(_QWORD *)(i + 16) )
      {
        if ( !*(_QWORD *)(i - 8) )
          (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(i - 32) + 480LL))(*(_QWORD *)(i - 32), i);
        v5 = *(QT::QAbstractItemView **)(i - 32);
        v6 = QT::QAbstractItemView::selectionMode(v5);
        QT::QAbstractItemView::setSelectionMode(v5, 0);
        QT::QAbstractItemView::setCurrentIndex(v5, i);
        QT::QAbstractItemView::setSelectionMode(v5, v6);
      }
      if ( v3 == i + 24 )
        break;
    }
  }
  return v14 - __readfsqword(0x28u);
}
