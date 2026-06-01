__int64 __fastcall sub_4CDE80(QT::QWidget **a1)
{
  QT::QSplitter *v1; // rbp
  QT::QWidget *v2; // rax
  QT::QLayout *v3; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-28h] BYREF

  v5[1] = __readfsqword(0x28u);
  v1 = (QT::QSplitter *)operator new(0x28u);
  QT::QSplitter::QSplitter(v1, (QT::QWidget *)a1);
  v2 = a1[4];
  a1[13] = v1;
  v5[0] = _mm_sub_epi32(
            _mm_add_epi32(
              _mm_loadl_epi64((const __m128i *)((char *)v2 + 28)),
              _mm_loadl_epi64((const __m128i *)&qword_5DBD90)),
            _mm_loadl_epi64((const __m128i *)((char *)v2 + 20))).m128i_u64[0];
  QT::QWidget::resize(v1, v5);
  v3 = (QT::QLayout *)QT::QWidget::layout((QT::QWidget *)a1);
  QT::QLayout::addWidget(v3, a1[13]);
  QT::QSplitter::setOpaqueResize(a1[13], 0);
  QT::QSplitter::setChildrenCollapsible(a1[13], 0);
  return QT::QObject::installEventFilter(a1[13], (QT::QObject *)a1);
}
