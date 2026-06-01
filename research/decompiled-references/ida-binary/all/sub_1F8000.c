unsigned __int64 __fastcall sub_1F8000(QT::QWidget **this, __int64 a2)
{
  QT::QAbstractSlider *v3; // rax
  unsigned int v4; // ebp
  QT::QAbstractSlider *v5; // rdi
  unsigned int v6; // eax
  __int64 v7; // rdx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  QT::QWidget *v18; // rax
  __int64 (__fastcall *v19)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v20; // rax
  QT::QWidget *v21; // rdi
  struct _Unwind_Exception *v22; // rbx
  __m128i v23; // [rsp+0h] [rbp-68h] BYREF
  __int64 v24; // [rsp+10h] [rbp-58h]
  __int64 v25; // [rsp+18h] [rbp-50h]
  __int64 v26; // [rsp+20h] [rbp-48h]
  __int64 v27; // [rsp+28h] [rbp-40h]
  _QWORD v28[3]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int64 v29; // [rsp+48h] [rbp-20h]

  v29 = __readfsqword(0x28u);
  v3 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar((QT::QAbstractScrollArea *)this);
  v4 = QT::QAbstractSlider::value(v3);
  v5 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar((QT::QAbstractScrollArea *)this);
  v6 = QT::QAbstractSlider::sliderPosition(v5);
  if ( v4 != v6 )
  {
    v9 = *((_BYTE *)this + 968) == 0;
    v10 = v6;
    v24 = 0;
    v25 = -1;
    v26 = 0;
    v27 = 0;
    v23 = 0;
    if ( v9 )
    {
      v12 = 0;
    }
    else
    {
      if ( !*(this + 53) )
      {
        v22 = (struct _Unwind_Exception *)sub_1E69C0(0.0, (__int64)v5, a2, v7, v6);
        _Unwind_Resume(v22);
      }
      v11 = *((_DWORD *)this + 104);
      if ( v11 == 2 )
      {
        v12 = (__int64)*(this + 112);
      }
      else if ( v11 == 3 )
      {
        v12 = (__int64)*(this + 113);
      }
      else
      {
        v12 = 0;
        if ( v11 == 1 )
          v12 = (__int64)*(this + 111);
      }
    }
    if ( (*(unsigned __int8 (__fastcall **)(__int64, __m128i *, _QWORD, __int64))(*(_QWORD *)v12 + 552LL))(
           v12,
           &v23,
           v4,
           v10) )
    {
      v14 = (__int64)*(this + 60);
      v28[0] = 0;
      v28[1] = v14;
      sub_1F0EE0((__int64)(this + 48), &v23, v28, 6, 0, v13, 0.0);
      v18 = *this;
      *((_BYTE *)this + 880) = 0;
      v19 = *((__int64 (__fastcall **)(QT::QAbstractScrollArea *))v18 + 95);
      if ( v19 == sub_1E6980 )
      {
        v20 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)this);
        QT::QWidget::update(v20);
        v21 = *(this + 96);
        if ( v21 && *(char *)(*((_QWORD *)v21 + 4) + 9LL) < 0 )
          QT::QWidget::update(v21);
      }
      else
      {
        ((void (__fastcall *)(QT::QWidget **, __m128i *, __int64 (__fastcall *)(QT::QAbstractScrollArea *), __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64))v19)(
          this,
          &v23,
          sub_1E6980,
          v15,
          v16,
          v17,
          v23.m128i_i64[0],
          v23.m128i_i64[1],
          v24,
          v25,
          v26);
      }
    }
    if ( v27 )
      qfree(v27, v23.m128i_i8);
  }
  return v29 - __readfsqword(0x28u);
}
