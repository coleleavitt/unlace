__int64 __fastcall sub_3FC2F0(__int64 a1, QT::QAbstractItemView *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned int v5; // ebx
  int *v7; // rax
  __int64 v8; // rdx
  const __m128i *v9; // rbx
  const __m128i *i; // r12
  QT::QGuiApplication *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rax
  __m128i ptr; // [rsp+0h] [rbp-78h] BYREF
  __int64 v15; // [rsp+10h] [rbp-68h]
  void *v16[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  unsigned __int64 v18; // [rsp+38h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  QT::QAbstractItemView::selectionModel(a2);
  QT::QItemSelectionModel::selectedIndexes((QT::QItemSelectionModel *)&ptr);
  if ( !v15 )
  {
LABEL_2:
    v5 = 0;
    goto LABEL_3;
  }
  v7 = (int *)ptr.m128i_i64[0];
  v17 = 0;
  *(_OWORD *)v16 = 0;
  if ( !ptr.m128i_i64[0] || *(int *)ptr.m128i_i64[0] > 1 )
  {
    sub_3FB980(&ptr, 0, 0, 0, v3, v4);
    v7 = (int *)ptr.m128i_i64[0];
  }
  v8 = ptr.m128i_i64[1];
  v9 = (const __m128i *)ptr.m128i_i64[1];
  if ( !v7 || *v7 > 1 )
  {
    sub_3FB980(&ptr, 0, 0, 0, v3, v4);
    v8 = ptr.m128i_i64[1];
  }
  for ( i = (const __m128i *)(v8 + 24 * v15); v9 != i; v9 = (const __m128i *)((char *)v9 + 24) )
  {
    while ( 1 )
    {
      if ( !v9->m128i_i32[1] )
      {
        sub_3FBE30((__m128i *)v16, v17, v9, v2, v3, v4);
        if ( !v16[0] || *(int *)v16[0] > 1 )
          break;
      }
      v9 = (const __m128i *)((char *)v9 + 24);
      if ( v9 == i )
        goto LABEL_20;
    }
    sub_3FB980((__m128i *)v16, 0, 0, 0, v3, v4);
  }
LABEL_20:
  if ( !v17
    || (v11 = (QT::QGuiApplication *)QT::QAbstractItemView::model(a2),
        (v12 = (*(__int64 (__fastcall **)(QT::QGuiApplication *, void **))(*(_QWORD *)v11 + 208LL))(v11, v16)) == 0) )
  {
    if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
      free(v16[0]);
    goto LABEL_2;
  }
  v13 = QT::QGuiApplication::clipboard(v11);
  QT::QClipboard::setMimeData(v13, v12, 0);
  if ( v16[0] && !_InterlockedSub((volatile signed __int32 *)v16[0], 1u) )
    free(v16[0]);
  v5 = 1;
LABEL_3:
  if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    free((void *)ptr.m128i_i64[0]);
  return v5;
}
