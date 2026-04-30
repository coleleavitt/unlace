unsigned __int64 __fastcall sub_1E70E0(QT::QWidget **this, __int64 a2)
{
  QT::QAbstractSlider *v3; // rbp
  QT::QAbstractSlider *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  bool v7; // zf
  QT::QAbstractSlider *v8; // r12
  int v9; // eax
  __int64 v10; // rdi
  int v12; // r14d
  int v13; // ebp
  QT::QWidget *v14; // rax
  __int64 (__fastcall *v15)(QT::QAbstractScrollArea *); // rax
  QT::QWidget *v16; // rax
  QT::QWidget *v17; // rdi
  int v18[4]; // [rsp+0h] [rbp-58h] BYREF
  int v19[6]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v20; // [rsp+28h] [rbp-30h]

  v20 = __readfsqword(0x28u);
  v3 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::horizontalScrollBar((QT::QAbstractScrollArea *)this);
  v4 = (QT::QAbstractSlider *)QT::QAbstractScrollArea::verticalScrollBar((QT::QAbstractScrollArea *)this);
  v7 = *((_BYTE *)this + 968) == 0;
  v8 = v4;
  *(_OWORD *)v18 = 0;
  *(_OWORD *)v19 = 0;
  if ( v7 )
  {
    v10 = 0;
  }
  else
  {
    if ( !*(this + 53) )
    {
      sub_1E69C0(0.0, (__int64)this, a2, v5, v6);
      return object_lifecycle_monitor_t__::vfunc_4(this);
    }
    v9 = *((_DWORD *)this + 104);
    if ( v9 == 2 )
    {
      v10 = (__int64)*(this + 112);
    }
    else if ( v9 == 3 )
    {
      v10 = (__int64)*(this + 113);
    }
    else
    {
      v10 = 0;
      if ( v9 == 1 )
        v10 = (__int64)*(this + 111);
    }
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64, int *, int *, QT::QAbstractSlider *, QT::QAbstractSlider *, _QWORD))(*(_QWORD *)v10 + 296LL))(
         v10,
         v18,
         v19,
         v3,
         v8,
         (unsigned __int8)a2) )
  {
    QT::QAbstractSlider::setMaximum(v3, v18[0]);
    QT::QAbstractSlider::setSingleStep(v3, v18[1]);
    QT::QAbstractSlider::setPageStep(v3, v18[2]);
    v12 = v18[3];
    if ( v18[3] >= 0 && v12 != (unsigned int)QT::QAbstractSlider::value(v3) )
    {
      QT::QAbstractSlider::setValue(v3, v18[3]);
      v14 = *this;
      *((_BYTE *)this + 880) = 0;
      v15 = *((__int64 (__fastcall **)(QT::QAbstractScrollArea *))v14 + 95);
      if ( v15 == sub_1E6980 )
      {
        v16 = (QT::QWidget *)QT::QAbstractScrollArea::viewport((QT::QAbstractScrollArea *)this);
        QT::QWidget::update(v16);
        v17 = *(this + 96);
        if ( v17 && *(char *)(*((_QWORD *)v17 + 4) + 9LL) < 0 )
          QT::QWidget::update(v17);
      }
      else
      {
        v15((QT::QAbstractScrollArea *)this);
      }
    }
    QT::QAbstractSlider::setMaximum(v8, v19[0]);
    QT::QAbstractSlider::setSingleStep(v8, v19[1]);
    QT::QAbstractSlider::setPageStep(v8, v19[2]);
    if ( (_BYTE)a2 )
    {
      v13 = v19[3];
      if ( v19[3] >= 0 && v13 != (unsigned int)QT::QAbstractSlider::value(v8) && (*((_BYTE *)this + 954) & 2) == 0 )
        QT::QAbstractSlider::setValue(v8, v19[3]);
    }
  }
  return v20 - __readfsqword(0x28u);
}
