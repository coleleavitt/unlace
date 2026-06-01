__int64 (__fastcall **__fastcall sub_499420(QT::QAbstractItemModel *a1, QT::QObject *a2))()
{
  QT::QAbstractItemModel::QAbstractItemModel(a1, a2);
  *((_QWORD *)a1 + 3) = a2;
  *((_QWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &chooser_table_widget_model_t___vtable;
  return &chooser_table_widget_model_t___vtable;
}
