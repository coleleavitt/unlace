unsigned __int64 __fastcall sub_365A90(
        unsigned int *a1,
        double a2,
        double a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  unsigned __int64 v10; // rbx
  _QWORD v11[2]; // [rsp+0h] [rbp-68h] BYREF
  __int64 (__fastcall **v12)(); // [rsp+10h] [rbp-58h]
  void *v13; // [rsp+38h] [rbp-30h]
  unsigned __int64 v14; // [rsp+48h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  if ( !batch )
  {
    sub_365390((QT::QDialog *)v11, (__int64)qword_8CD748, a1, a2, a3, a4, a5, a6, a7, a8, a9);
    if ( (unsigned int)sub_53AB40((QT::QWidget *)v11) == 1 )
    {
      if ( (_QWORD)xmmword_8CB528 )
      {
        v10 = 0;
        do
        {
          (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(qword_8CB520 + 8 * v10) + 984LL))(
            *(_QWORD *)(qword_8CB520 + 8 * v10),
            0);
          ++v10;
        }
        while ( v10 < (unsigned __int64)xmmword_8CB528 );
      }
      sub_1F9CB0();
      sub_5110C0();
      sub_3477F0(qword_8CF010);
    }
    v12 = OptionsDialog___vtable_at__16;
    v11[0] = &OptionsDialog___vtable;
    dword_8CF098 = QT::QTabWidget::currentIndex(*((QT::QTabWidget **)v13 + 2));
    if ( v13 )
      operator delete(v13, 0x800u);
    v11[0] = &ui_dialog_t___vtable;
    v12 = ui_dialog_t___vtable_at__16;
    QT::QDialog::~QDialog((QT::QDialog *)v11);
  }
  return v14 - __readfsqword(0x28u);
}
