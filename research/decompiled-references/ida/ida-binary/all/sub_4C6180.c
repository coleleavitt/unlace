unsigned __int64 __fastcall sub_4C6180(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rbp
  __int64 v5; // rax
  __m128i v6; // xmm1
  _DWORD *v7; // rsi
  _DWORD *v9; // r9
  _QWORD *v10; // rsi
  __int64 v11; // rdi
  __int64 v12; // r8
  int v13; // ebp
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // r8
  int v18; // eax
  int v19; // ebp
  __int64 v20; // rdi
  __int64 v21; // rax
  QT::QWidget *v22; // rbx
  QT::QWidget *v23; // r12
  QT::QWidget *v24; // rbp
  QT::QWidget *v25; // r12
  unsigned __int64 v26; // [rsp+8h] [rbp-30h] BYREF
  __int64 v27; // [rsp+10h] [rbp-28h] BYREF
  unsigned __int64 v28; // [rsp+18h] [rbp-20h]

  v3 = a1[5];
  v28 = __readfsqword(0x28u);
  v4 = a2;
  if ( (unsigned __int8)QT::QTimer::isActive((QT::QTimer *)(v3 + 48)) )
    QT::QTimer::stop((QT::QTimer *)(a1[5] + 48LL));
  if ( a2 )
  {
    v5 = a1[5];
    if ( *(_QWORD *)(v5 + 72) != a2 || *(char *)(*(_QWORD *)(*(_QWORD *)(v5 + 8) + 32LL) + 9LL) >= 0 )
    {
      *(_QWORD *)(v5 + 72) = a2;
      if ( sub_4CD6B0(a2, 0) )
        v4 = sub_4CD6B0(a2, 0);
      v6 = _mm_sub_epi32(
             _mm_add_epi32(
               _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v4 + 32) + 28LL)),
               _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
             _mm_loadl_epi64((const __m128i *)(*(_QWORD *)(v4 + 32) + 20LL)));
      v7 = *(_DWORD **)(*(_QWORD *)(a1[5] + 8LL) + 32LL);
      v26 = _mm_add_epi32(
              _mm_unpacklo_epi32(
                _mm_cvtsi32_si128((v7[7] + 1 - v7[5]) / -2),
                _mm_cvtsi32_si128((v7[8] + 1 - v7[6]) / -2)),
              _mm_srai_epi32(_mm_sub_epi32(v6, _mm_cmpgt_epi32((__m128i)0LL, v6)), 1u)).m128i_u64[0];
      v27 = QT::QWidget::mapTo(v4, a1, &v26);
      QT::QWidget::move(*(_QWORD *)(a1[5] + 8LL), &v27);
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[5] + 8LL) + 104LL))(*(_QWORD *)(a1[5] + 8LL), 1);
      QT::QWidget::raise(*(QT::QWidget **)(a1[5] + 8LL));
    }
  }
  if ( QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, *(const QT::QObject **)(a1[1] + 16LL)) )
    return v28 - __readfsqword(0x28u);
  v9 = (_DWORD *)a1[4];
  v10 = (_QWORD *)a1[5];
  v11 = v10[2];
  v12 = *(_QWORD *)(v11 + 32);
  v13 = (v9[7] + 1 - v9[5]) / 2 - (*(_DWORD *)(v12 + 28) + 1 - *(_DWORD *)(v12 + 20)) / 2;
  if ( *(char *)(v12 + 9) >= 0 )
  {
    v27 = (unsigned int)((v9[7] + 1 - v9[5]) / 2 - (*(_DWORD *)(v12 + 28) + 1 - *(_DWORD *)(v12 + 20)) / 2);
    QT::QWidget::move(v11, &v27);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[5] + 16LL) + 104LL))(*(_QWORD *)(a1[5] + 16LL), 1);
    v25 = *(QT::QWidget **)(a1[5] + 16LL);
    sub_47C810(nullptr);
    QT::QWidget::raise(v25);
    v10 = (_QWORD *)a1[5];
    v9 = (_DWORD *)a1[4];
  }
  v14 = v10[3];
  v15 = *(_QWORD *)(v14 + 32);
  if ( *(char *)(v15 + 9) >= 0 )
  {
    v27 = __PAIR64__(*(_DWORD *)(v15 + 24) + v9[8] - v9[6] - *(_DWORD *)(v15 + 32), v13);
    QT::QWidget::move(v14, &v27);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[5] + 24LL) + 104LL))(*(_QWORD *)(a1[5] + 24LL), 1);
    v24 = *(QT::QWidget **)(a1[5] + 24LL);
    sub_47C810(nullptr);
    QT::QWidget::raise(v24);
    v10 = (_QWORD *)a1[5];
    v9 = (_DWORD *)a1[4];
  }
  v16 = v10[4];
  v17 = *(_QWORD *)(v16 + 32);
  v18 = (*(_DWORD *)(v17 + 32) + 1 - *(_DWORD *)(v17 + 24)) / 2;
  v19 = (v9[8] + 1 - v9[6]) / 2 - v18;
  if ( *(char *)(v17 + 9) >= 0 )
  {
    HIDWORD(v27) = (v9[8] + 1 - v9[6]) / 2 - v18;
    LODWORD(v27) = 0;
    QT::QWidget::move(v16, &v27);
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[5] + 32LL) + 104LL))(*(_QWORD *)(a1[5] + 32LL), 1);
    v23 = *(QT::QWidget **)(a1[5] + 32LL);
    sub_47C810(nullptr);
    QT::QWidget::raise(v23);
    v10 = (_QWORD *)a1[5];
  }
  v20 = v10[5];
  v21 = *(_QWORD *)(v20 + 32);
  if ( *(char *)(v21 + 9) < 0 )
    return v28 - __readfsqword(0x28u);
  v27 = __PAIR64__(
          v19,
          *(_DWORD *)(v21 + 20) + *(_DWORD *)(a1[4] + 28LL) - *(_DWORD *)(a1[4] + 20LL) - *(_DWORD *)(v21 + 28));
  QT::QWidget::move(v20, &v27);
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1[5] + 40LL) + 104LL))(*(_QWORD *)(a1[5] + 40LL), 1);
  v22 = *(QT::QWidget **)(a1[5] + 40LL);
  sub_47C810(nullptr);
  return QT::QWidget::raise(v22);
}
