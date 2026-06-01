bool __fastcall sub_47B440(__int64 (__fastcall ***a1)(_QWORD))
{
  QT::QMetaObject *v1; // rax

  v1 = (QT::QMetaObject *)(**a1)(a1);
  return (unsigned int)QT::QMetaObject::indexOfMethod(v1, "form_activate()") != -1;
}
