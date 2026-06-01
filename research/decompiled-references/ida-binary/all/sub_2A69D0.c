unsigned __int64 __fastcall sub_2A69D0(__int64 a1, __int64 a2)
{
  __int64 v3; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  QT::QObject::connect(&v3, a2, "2model_loaded()", a1, "1graphrenderer_graph_layout_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(&v3, a2, "2graphLayoutChanged()", a1, "1graphrenderer_graph_layout_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(&v3, a2, "2currentNodeChanged(int, int)", a1, "1graphrenderer_graph_layout_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  QT::QObject::connect(&v3, a2, "2gliChanged()", a1, "1graphrenderer_gli_changed()", 0);
  QT::QMetaObject::Connection::~Connection((QT::QMetaObject::Connection *)&v3);
  return v4 - __readfsqword(0x28u);
}
