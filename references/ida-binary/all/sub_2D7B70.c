__int64 __fastcall sub_2D7B70(
        QT::QAccessibleWidget *this,
        const char *a2,
        double a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  QT::QAbstractScrollArea *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rbx
  double (*v11)(); // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  int v14; // r8d
  int v15; // r9d
  const char *v17; // rsi
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 i; // r12
  __int64 *v22; // rax
  __int64 v23; // rdi
  bool v24; // zf
  int v25; // ecx
  int v26; // r8d
  double v27; // [rsp+8h] [rbp-120h]
  __int64 (__fastcall *v28)(__int64, __m128i *, _QWORD *); // [rsp+8h] [rbp-120h]
  const char *v29; // [rsp+10h] [rbp-118h]
  __int64 *v30; // [rsp+18h] [rbp-110h]
  __int64 v31; // [rsp+28h] [rbp-100h] BYREF
  _QWORD v32[2]; // [rsp+30h] [rbp-F8h] BYREF
  __m128i v33[4]; // [rsp+40h] [rbp-E8h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-A8h] BYREF
  _BYTE v35[88]; // [rsp+90h] [rbp-98h] BYREF
  unsigned __int64 v36; // [rsp+E8h] [rbp-40h]

  v29 = a2;
  v36 = __readfsqword(0x28u);
  if ( (debug & 0x80000) != 0 && (::a6[0] & 4) != 0 )
  {
    v25 = *(_DWORD *)a2;
    v26 = *((_DWORD *)a2 + 1);
    a2 = "%s IDAMemoAccessible::offsetAtPoint(point=%d,%d)\n";
    sub_4F7CB0(
      4,
      (unsigned int)"%s IDAMemoAccessible::offsetAtPoint(point=%d,%d)\n",
      (unsigned int)&unk_5C2F25,
      v25,
      v26,
      a7);
  }
  v7 = (QT::QAbstractScrollArea *)QT::QAccessibleWidget::widget(this);
  v10 = sub_1EB5B0((__int64)v7, (__int64)a2, v8, v9, a3);
  if ( *(_BYTE *)(v10 + 68) )
  {
    v30 = (__int64 *)(v10 + 40);
  }
  else
  {
    v30 = (__int64 *)(v10 + 40);
    v17 = (const char *)(v10 + 40);
    v18 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 520LL))(v10, v10 + 40);
    *(_BYTE *)(v10 + 68) = v18;
    if ( !v18 )
    {
      v19 = *(_QWORD *)(v10 + 40);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v10 + 48);
        if ( v20 )
        {
          for ( i = 0; i != v20; ++i )
          {
            v22 = (__int64 *)(v19 + 24 * i);
            v23 = *v22;
            if ( *v22 )
            {
              v22[1] = 0;
              qfree(v23, v17);
              v19 = *(_QWORD *)(v10 + 40);
            }
          }
        }
        *(_QWORD *)(v10 + 48) = 0;
        qfree(v19, v17);
        v24 = *(_BYTE *)(v10 + 68) == 0;
        *(_QWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 56) = 0;
        *(_DWORD *)(v10 + 64) = -1;
        if ( !v24 )
          goto LABEL_6;
      }
      else
      {
        *(_DWORD *)(v10 + 64) = -1;
      }
      v13 = -1;
      goto LABEL_9;
    }
  }
LABEL_6:
  v11 = *(double (**)())(*(_QWORD *)v10 + 312LL);
  v27 = 1.0;
  if ( v11 != sub_172F90 )
    v27 = ((double (__fastcall *)(__int64))v11)(v10);
  memset(v33, 0, sizeof(v33));
  QT::QFont::QFont((QT::QFont *)v34);
  QT::QFont::QFont((QT::QFont *)v32);
  QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v35, (const QT::QFont *)v32);
  QT::QFont::~QFont((QT::QFont *)v32);
  sub_1C8200(v33, (__int64)v7, (__m128d)*(unsigned __int64 *)&v27);
  v28 = *(__int64 (__fastcall **)(__int64, __m128i *, _QWORD *))(*(_QWORD *)v10 + 568LL);
  v12 = QT::QAbstractScrollArea::viewport(v7);
  v32[0] = QT::QWidget::mapFromGlobal(v12, v29);
  v31 = v28(v10, v33, v32);
  v13 = sub_176780(v30, (__int64)&v31);
  QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v35);
  QT::QFont::~QFont((QT::QFont *)v34);
LABEL_9:
  if ( (debug & 0x80000) != 0 && (::a6[0] & 4) != 0 )
    sub_4F7CB0(
      4,
      (unsigned int)"%s IDAMemoAccessible::offsetAtPoint() => %d\n",
      (unsigned int)&unk_5C2F25,
      v13,
      v14,
      v15);
  return v13;
}
