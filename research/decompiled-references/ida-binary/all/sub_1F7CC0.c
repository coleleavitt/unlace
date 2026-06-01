__int64 __fastcall sub_1F7CC0(__int64 a1, __int64 a2, double a3)
{
  QT::QFont *v3; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  QT::QScreen *v7; // r13
  int v8; // eax
  __int64 v9; // rdi
  double v10; // r15
  int v11; // rax^4
  int v12; // rdx^4
  unsigned int v13; // ebx
  struct _Unwind_Exception *v15; // rbx
  _BYTE v16[16]; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v17[4]; // [rsp+10h] [rbp-E8h] BYREF
  _BYTE v18[16]; // [rsp+50h] [rbp-A8h] BYREF
  _BYTE v19[40]; // [rsp+60h] [rbp-98h] BYREF
  double v20; // [rsp+88h] [rbp-70h]
  unsigned __int64 v21; // [rsp+B8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v7 = (QT::QScreen *)QT::QWidget::screen((QT::QWidget *)a1);
  if ( v7 || (v7 = (QT::QScreen *)QT::QGuiApplication::primaryScreen((QT::QGuiApplication *)a1)) != nullptr )
  {
    if ( *(_BYTE *)(a1 + 968) )
    {
      if ( !*(_QWORD *)(a1 + 424) )
      {
        v15 = (struct _Unwind_Exception *)sub_1E69C0(a3, a1, a2, v5, v6);
        QT::QFont::~QFont(v3);
        _Unwind_Resume(v15);
      }
      v8 = *(_DWORD *)(a1 + 416);
      if ( v8 == 2 )
      {
        v9 = *(_QWORD *)(a1 + 896);
      }
      else if ( v8 == 3 )
      {
        v9 = *(_QWORD *)(a1 + 904);
      }
      else
      {
        v9 = 0;
        if ( v8 == 1 )
          v9 = *(_QWORD *)(a1 + 888);
      }
    }
    else
    {
      v9 = 0;
    }
    v10 = (*(double (__fastcall **)(__int64))(*(_QWORD *)v9 + 312LL))(v9);
    memset(v17, 0, sizeof(v17));
    QT::QFont::QFont((QT::QFont *)v18);
    QT::QFont::QFont((QT::QFont *)v16);
    QT::QFontMetricsF::QFontMetricsF((QT::QFontMetricsF *)v19, (const QT::QFont *)v16);
    QT::QFont::~QFont((QT::QFont *)v16);
    sub_1C8200(v17, a1, (__m128d)*(unsigned __int64 *)&v10);
    v11 = QT::QScreen::geometry(v7) >> 32;
    v13 = (int)((double)(v12 + 1 - v11) / v20);
    QT::QFontMetricsF::~QFontMetricsF((QT::QFontMetricsF *)v19);
    QT::QFont::~QFont((QT::QFont *)v18);
  }
  else
  {
    return 0;
  }
  return v13;
}
