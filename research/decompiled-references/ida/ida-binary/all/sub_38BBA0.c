unsigned __int64 __fastcall sub_38BBA0(_QWORD *a1, const char *a2)
{
  QT::QTreeWidget *v3; // rdi
  __int64 v4; // rax
  __int64 v5; // r12
  __int64 i; // rbx
  __int64 v7; // rdi
  void (__fastcall ***v8)(_QWORD, _QWORD *, _QWORD); // rbx
  void (__fastcall *v9)(_QWORD, _QWORD *, _QWORD); // r12
  unsigned __int8 isChecked; // al
  _QWORD v12[3]; // [rsp+0h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+18h] [rbp-20h]

  v13 = __readfsqword(0x28u);
  v12[1] = a1;
  v3 = (QT::QTreeWidget *)a1[10];
  v12[0] = &TStructureOffsetsForm::load_register_paths;
  QT::QTreeWidget::clear(v3);
  v4 = a1[13];
  if ( v4 )
  {
    v5 = a1[14];
    if ( v5 )
    {
      for ( i = 0; i != v5; ++i )
      {
        v7 = *(_QWORD *)(v4 + 8 * i);
        if ( v7 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
          v4 = a1[13];
        }
      }
    }
    a1[14] = 0;
    qfree(v4, a2);
    a1[13] = 0;
    a1[15] = 0;
  }
  v8 = (void (__fastcall ***)(_QWORD, _QWORD *, _QWORD))a1[8];
  v9 = **v8;
  isChecked = QT::QAbstractButton::isChecked(*(QT::QAbstractButton **)(a1[9] + 112LL));
  v9(v8, v12, isChecked);
  return v13 - __readfsqword(0x28u);
}
