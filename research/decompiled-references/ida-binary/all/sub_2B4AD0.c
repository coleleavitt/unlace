unsigned __int64 __fastcall sub_2B4AD0(QT::QCoreApplication *this)
{
  bool v1; // zf
  __int64 v3; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  sub_176AA0((__int64)this, 1);
  *(_OWORD *)((char *)this + 200) = 0;
  *((_QWORD *)this + 24) = 0;
  *((_OWORD *)this + 14) = 0;
  *(_QWORD *)this = &GraphRenderer___vtable;
  *((_QWORD *)this + 27) = 0;
  QT::QObject::QObject((QT::QCoreApplication *)((char *)this + 240), nullptr);
  *(_OWORD *)((char *)this + 268) = -1;
  *((_QWORD *)this + 32) = this;
  *((_QWORD *)this + 30) = &graph_mouse_pos_t___vtable;
  *((_DWORD *)this + 66) = 1;
  *((_WORD *)this + 144) = 256;
  *((_QWORD *)this + 37) = 0;
  *((_QWORD *)this + 45) = 0;
  *((_QWORD *)this + 46) = -1;
  *((_QWORD *)this + 47) = 0;
  *((_DWORD *)this + 96) = 0;
  *((_OWORD *)this + 19) = 0;
  *((_OWORD *)this + 20) = 0;
  *(_OWORD *)((char *)this + 344) = 0;
  QT::QObject::QObject((QT::QCoreApplication *)((char *)this + 392), nullptr);
  *((_WORD *)this + 204) = 0;
  *(_QWORD *)((char *)this + 412) = -1;
  *((_QWORD *)this + 49) = &blinking_t___vtable;
  *((_DWORD *)this + 105) = 0;
  *((_DWORD *)this + 106) = reg_int_op("DbgEdgeBlinkInterval", 0, 250, 0);
  *((_QWORD *)this + 55) = 0;
  QT::QObject::QObject((QT::QCoreApplication *)((char *)this + 448), nullptr);
  *((_QWORD *)this + 58) = this;
  *((_QWORD *)this + 59) = 0;
  v1 = byte_8CCA70 == 0;
  *((_QWORD *)this + 62) = 0;
  *((_QWORD *)this + 56) = &highlit_t___vtable;
  *((_OWORD *)this + 30) = 0;
  *(_OWORD *)((char *)this + 504) = 0;
  if ( v1 )
  {
    byte_8CCA70 = 1;
    byte_8CCA9E = (unsigned int)reg_int_op("AnimateGraph", 0, 1, 0) != 0;
    byte_8CCA9D = (unsigned int)reg_int_op("DrawGraphShadows", 0, 1, 0) != 0;
    byte_8CCA9C = (unsigned int)reg_int_op("AutoFitWindow", 0, 0, 0) != 0;
    byte_8CCA9B = (unsigned int)reg_int_op("FitMax100", 0, 1, 0) != 0;
    byte_8CCA9A = (unsigned int)reg_int_op("AutoRelayout", 0, 1, 0) != 0;
    byte_8CCA99 = (unsigned int)reg_int_op("TruncateNodes", 0, 0, 0) != 0;
    byte_8CCA98 = (unsigned int)reg_int_op("LockGraph", 0, 0, 0) != 0;
    dword_8CCA94 = reg_int_op("MaxGraphNodes", 0, 1000, 0);
  }
  sub_3742D0();
  *((_DWORD *)this + 108) = 0;
  sub_176C30(this, nullptr, 0);
  *((_BYTE *)this + 288) = 0;
  *((_DWORD *)this + 56) = -1;
  *((_OWORD *)this + 11) = 0;
  QT::QObject::connect(&v3, (char *)this + 392, "2blinkingChanged(bool)", this, "1on_blinking_changed(bool)", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(
    &v3,
    (char *)this + 240,
    "2mouseOverChanged(const selection_item_t *)",
    this,
    "1on_mouse_over_changed(const selection_item_t *)",
    0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(&v3, (char *)this + 448, "2nodesChanged()", this, "1on_highlit_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(&v3, (char *)this + 448, "2edgesChanged()", this, "1on_highlit_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  return v4 - __readfsqword(0x28u);
}
