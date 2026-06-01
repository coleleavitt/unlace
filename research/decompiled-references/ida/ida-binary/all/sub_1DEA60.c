__int64 __fastcall sub_1DEA60()
{
  unsigned int v0; // ebp
  _QWORD v2[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 (__fastcall **v3)(); // [rsp+10h] [rbp-48h]
  void *v4; // [rsp+30h] [rbp-28h]
  unsigned __int64 v5; // [rsp+38h] [rbp-20h]

  v5 = __readfsqword(0x28u);
  sub_1DE960((QT::QWidget *)v2, 0);
  LOBYTE(v0) = (unsigned int)sub_53AB40((QT::QWidget *)v2) == 1;
  v2[0] = &CopyrightDialog___vtable;
  v3 = CopyrightDialog___vtable_at__16;
  if ( v4 )
    operator delete(v4, 0x28u);
  v3 = ui_dialog_t___vtable_at__16;
  v2[0] = &ui_dialog_t___vtable;
  QT::QDialog::~QDialog((QT::QDialog *)v2);
  return v0;
}
