unsigned __int64 __fastcall sub_4CFC40(
        __int64 a1,
        int a2,
        const __m128i *a3,
        const QT::QString *a4,
        const QT::QIcon *a5)
{
  __m128i v7; // xmm0
  volatile signed __int32 *v8; // r14
  volatile signed __int32 *v9; // r14
  char v11; // r15
  void *v12[2]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v13; // [rsp+10h] [rbp-68h]
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+28h] [rbp-50h]
  __int64 v16; // [rsp+30h] [rbp-48h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  if ( !a3 )
    goto LABEL_14;
  v7 = _mm_loadu_si128(a3);
  v13 = a3[1].m128i_i64[0];
  *(__m128i *)v12 = v7;
  if ( v7.m128i_i64[0] )
    _InterlockedAdd((volatile signed __int32 *)v7.m128i_i64[0], 1u);
  if ( unk_8D1D88 )
    unk_8D1D88(0, v12);
  QT::QTabBar::tabText((QT::QTabBar *)&ptr, *(_QWORD *)(a1 + 64));
  v8 = (volatile signed __int32 *)ptr;
  if ( v16 == v13 )
  {
    v11 = QT::QtPrivate::equalStrings(v16, v12[1], v16, v15);
    if ( v8 && !_InterlockedSub(v8, 1u) )
      free(ptr);
    if ( v11 )
      goto LABEL_11;
  }
  else if ( ptr && !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
  {
    free(ptr);
  }
  QT::QTabBar::setTabText(*(QT::QTabBar **)(a1 + 64), a2, (const QT::QString *)v12);
LABEL_11:
  if ( v12[0] && !_InterlockedSub((volatile signed __int32 *)v12[0], 1u) )
    free(v12[0]);
LABEL_14:
  if ( a4 )
  {
    QT::QTabBar::tabToolTip((QT::QTabBar *)&ptr, *(_QWORD *)(a1 + 64));
    v9 = (volatile signed __int32 *)ptr;
    if ( v16 == *((_QWORD *)a4 + 2) && (unsigned __int8)QT::QtPrivate::equalStrings(v16, *((_QWORD *)a4 + 1), v16, v15) )
    {
      if ( v9 && !_InterlockedSub(v9, 1u) )
        free(ptr);
    }
    else
    {
      if ( v9 && !_InterlockedSub(v9, 1u) )
        free(ptr);
      QT::QTabBar::setTabToolTip(*(QT::QTabBar **)(a1 + 64), a2, a4);
    }
  }
  if ( a5 )
    return QT::QTabBar::setTabIcon(*(QT::QTabBar **)(a1 + 64), a2, a5);
  else
    return v17 - __readfsqword(0x28u);
}
