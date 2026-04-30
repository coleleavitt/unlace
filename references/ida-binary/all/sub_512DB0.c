__int64 __fastcall sub_512DB0(QT::QAbstractScrollArea *a1, int a2, double a3, double a4)
{
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // r12
  int v7; // ebx
  int i; // ebp
  int v9; // eax
  int v10; // eax
  QT::QAbstractSlider *v11; // rax
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+4h] [rbp-84h]
  __int64 v17; // [rsp+18h] [rbp-70h] BYREF
  __int64 v18; // [rsp+20h] [rbp-68h] BYREF
  _DWORD v19[2]; // [rsp+28h] [rbp-60h] BYREF
  void *ptr[2]; // [rsp+30h] [rbp-58h] BYREF
  int v21; // [rsp+40h] [rbp-48h]
  unsigned __int64 v22; // [rsp+48h] [rbp-40h]

  v4 = *((_QWORD *)a1 + 7);
  v22 = __readfsqword(0x28u);
  v5 = *((_QWORD *)a1 + 8);
  v19[0] = 0;
  v6 = v4 + 48 * v5;
  if ( v4 == v6 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    for ( i = 0; ; i = v10 )
    {
      QT::QTextLayout::text((QT::QTextLayout *)ptr);
      v9 = v21 + 1;
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
      {
        v16 = v9;
        free(ptr[0]);
        v9 = v16;
      }
      v10 = i + v9;
      if ( v10 > a2 )
        break;
      v4 += 48;
      ++v7;
      if ( v6 == v4 )
        goto LABEL_10;
    }
    v19[0] = a2 - i;
  }
LABEL_10:
  v19[1] = v7;
  v17 = 0;
  sub_512C90((__int64)a1, &v17, (__int64)v19, (double *)&v18, a3, a4);
  v11 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar(a1);
  v12 = QT::QAbstractSlider::value(v11);
  HIDWORD(v17) -= v12;
  v13 = QT::QAbstractScrollArea::viewport(a1);
  v14 = QT::QWidget::mapToGlobal(v13, &v17);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)ptr, (const QT::QFont *)(*((_QWORD *)a1 + 4) + 56LL));
  QT::QFontMetricsF::averageCharWidth((QT::QFontMetricsF *)ptr);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)ptr);
  return (v14 >> 32 << 32) | (unsigned int)v14;
}
