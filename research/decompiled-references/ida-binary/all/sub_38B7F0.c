__int64 __fastcall sub_38B7F0(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ebp
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[3] = __readfsqword(0x28u);
  v5[1] = a1;
  v2 = *(_QWORD *)(a1 + 64);
  v5[0] = &TStructureOffsetsForm::load_offsets_table;
  v3 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v2 + 48LL))(v2, v5);
  if ( v3 == 2 && (unsigned int)QT::QComboBox::count(*(QT::QComboBox **)(*(_QWORD *)(a1 + 72) + 48LL)) == 1 )
  {
    QT::QWidget::hide(*(QT::QWidget **)(*(_QWORD *)(a1 + 72) + 40LL));
    QT::QWidget::hide(*(QT::QWidget **)(*(_QWORD *)(a1 + 72) + 48LL));
  }
  return v3;
}
