__int64 __fastcall sub_2D7E70(
        QT::QAccessibleWidget *this,
        const char *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        int a6,
        int a7)
{
  QT::QAbstractScrollArea *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  char *v10; // rax
  char *v11; // rbp
  char *v12; // r14
  char v13; // al
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 i; // r13
  __int64 *v17; // rax
  __int64 v18; // rdi
  bool v19; // zf
  double (*v20)(); // rax
  QT::QAbstractSlider *v21; // rax
  __int64 v22; // rax
  int v23; // r8d
  int v24; // r9d
  int v26; // ecx
  int v27; // eax
  int v28; // r8d
  int v29; // r9d
  double v30; // [rsp+0h] [rbp-138h]
  int v31; // [rsp+18h] [rbp-120h]
  int v32; // [rsp+1Ch] [rbp-11Ch]
  unsigned __int64 v33; // [rsp+28h] [rbp-110h] BYREF
  __int64 v34; // [rsp+30h] [rbp-108h] BYREF
  __int64 v35; // [rsp+38h] [rbp-100h]
  _QWORD v36[2]; // [rsp+40h] [rbp-F8h] BYREF
  __m128i v37[4]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v38[16]; // [rsp+90h] [rbp-A8h] BYREF
  _BYTE v39[24]; // [rsp+A0h] [rbp-98h] BYREF
  double v40; // [rsp+B8h] [rbp-80h]
  double x; // [rsp+C8h] [rbp-70h]
  unsigned __int64 v42; // [rsp+F8h] [rbp-40h]

  v31 = (int)a2;
  v42 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 2) != 0 )
  {
    v26 = (int)a2;
    a2 = "%s IDAMemoAccessible::characterRect(offset=%d)\n";
    sub_4F7CB0(
      2,
      (unsigned int)"%s IDAMemoAccessible::characterRect(offset=%d)\n",
      (unsigned int)&unk_5C2F25,
      v26,
      a6,
      a7);
  }
  v34 = 0;
  v35 = -1;
  v7 = (QT::QAbstractScrollArea *)QT::QAccessibleWidget::widget(this);
  v10 = (char *)sub_1EB5B0((__int64)v7, (__int64)a2, v8, v9, a3);
  v11 = v10;
  v12 = v10 + 40;
  if ( v10[68] )
    goto LABEL_13;
  v13 = (*(__int64 (__fastcall **)(char *, char *))(*(_QWORD *)v10 + 520LL))(v10, v12);
  v11[68] = v13;
  if ( v13 )
    goto LABEL_13;
  v14 = *((_QWORD *)v11 + 5);
  if ( !v14 )
  {
    *((_DWORD *)v11 + 16) = -1;
    goto LABEL_19;
  }
  v15 = *((_QWORD *)v11 + 6);
  if ( v15 )
  {
    for ( i = 0; i != v15; ++i )
    {
      v17 = (__int64 *)(v14 + 24 * i);
      v18 = *v17;
      if ( *v17 )
      {
        v17[1] = 0;
        qfree(v18, v12);
        v14 = *((_QWORD *)v11 + 5);
      }
    }
  }
  *((_QWORD *)v11 + 6) = 0;
  a3 = qfree(v14, v12);
  v19 = v11[68] == 0;
  *((_QWORD *)v11 + 5) = 0;
  *((_QWORD *)v11 + 7) = 0;
  *((_DWORD *)v11 + 16) = -1;
  if ( !v19 )
  {
LABEL_13:
    v20 = *(double (**)())(*(_QWORD *)v11 + 312LL);
    v30 = 1.0;
    if ( v20 != sub_172F90 )
      v30 = ((double (__fastcall *)(char *))v20)(v11);
    memset(v37, 0, sizeof(v37));
    QT::QFont::QFont((QT::QFont *)v38);
    QT::QFont::QFont((QT::QFont *)v36);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v39, (const QT::QFont *)v36);
    QT::QFont::~QFont((QT::QFont *)v36);
    sub_1C8200(v37, (__int64)v7, (__m128d)*(unsigned __int64 *)&v30);
    a3 = round(x);
    v21 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar(v7);
    v32 = QT::QAbstractSlider::value(v21);
    v33 = sub_176860((__int64 *)v12, v31);
    v36[0] = (*(__int64 (__fastcall **)(char *, __m128i *, unsigned __int64 *))(*(_QWORD *)v11 + 560LL))(v11, v37, &v33);
    v22 = QT::QAbstractScrollArea::viewport(v7);
    v34 = QT::QWidget::mapToGlobal(v22, v36);
    LODWORD(v35) = (int)v40 + v34 - 1;
    HIDWORD(v35) = (int)a3 + HIDWORD(v34) - 1;
    if ( (debug & 0x80000) != 0 && (::a6[0] & 2) != 0 )
      sub_4F7CB0(
        2,
        (unsigned int)"%s IDAMemoAccessible::characterRect() horizontal scroll bar value=%d\n",
        (unsigned int)&unk_5C2F25,
        v32,
        v23,
        v24);
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v39);
    QT::QFont::~QFont((QT::QFont *)v38);
  }
LABEL_19:
  if ( (debug & 0x80000) != 0 && (::a6[0] & 2) != 0 )
  {
    v27 = sub_4F7B70(&v34, a3);
    sub_4F7CB0(
      2,
      (unsigned int)"%s IDAMemoAccessible::characterRect() => %s\n",
      (unsigned int)&unk_5C2F25,
      v27,
      v28,
      v29);
  }
  return v34;
}
