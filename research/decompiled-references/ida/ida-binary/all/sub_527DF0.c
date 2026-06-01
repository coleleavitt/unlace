__int64 __fastcall sub_527DF0(QT::QWidget *this)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int *v3; // rax
  char *v4; // rdx
  QT::QWidget **v5; // rbx
  unsigned __int32 v6; // r15d
  QT::QWidget **i; // r12
  QT::QWidget *v8; // rbp
  int v9; // r14d
  __m128i v10; // rax
  __int64 v11; // rax
  unsigned int v12; // rdx^4
  __int64 v13; // rdi
  __m128i v15; // [rsp+8h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v17; // [rsp+28h] [rbp-48h]
  unsigned __int64 v18; // [rsp+30h] [rbp-40h]

  v18 = __readfsqword(0x28u);
  *(_OWORD *)ptr = 0;
  v17 = 0;
  QT::qt_qFindChildren_helper(this, 0, 0, &off_89E220, ptr, 1);
  v3 = (int *)ptr[0];
  if ( !ptr[0] || *(int *)ptr[0] > 1 )
  {
    sub_3D22B0((__int64)ptr, 0, 0, 0, v1, v2);
    v3 = (int *)ptr[0];
  }
  v4 = (char *)ptr[1];
  v5 = (QT::QWidget **)ptr[1];
  if ( !v3 || *v3 > 1 )
  {
    sub_3D22B0((__int64)ptr, 0, 0, 0, v1, v2);
    v4 = (char *)ptr[1];
  }
  v6 = 0;
  for ( i = (QT::QWidget **)&v4[8 * v17]; i != v5; ++v5 )
  {
    v8 = *v5;
    if ( *(char *)(*((_QWORD *)*v5 + 4) + 9LL) < 0 )
    {
      v9 = (*(__int64 (__fastcall **)(QT::QWidget *))(*(_QWORD *)v8 + 112LL))(*v5);
      QT::QWidget::setMinimumWidth(v8, v9);
      v6 += v9;
    }
  }
  v10.m128i_i64[0] = QT::QAbstractScrollArea::viewportMargins(this);
  v15 = v10;
  if ( v6 != v10.m128i_i32[0] )
  {
    v15.m128i_i32[0] = v6;
    QT::QAbstractScrollArea::setViewportMargins(this, &v15);
  }
  v11 = QT::QWidget::contentsRect(this);
  v13 = *((_QWORD *)this + 18);
  if ( v13 )
  {
    v15 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(HIDWORD(v11))),
            _mm_unpacklo_epi32(_mm_cvtsi32_si128(v6 + (unsigned int)v11 - 1), _mm_cvtsi32_si128(v12)));
    QT::QWidget::setGeometry(v13, &v15);
  }
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  return v6;
}
