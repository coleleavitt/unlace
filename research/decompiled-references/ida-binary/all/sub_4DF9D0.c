void (*__fastcall sub_4DF9D0(__int64 a1, __int64 a2, char a3))()
{
  void (*result)(); // rax
  QT::QWidget *v6; // rdi

  (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a1 + 240LL))(a1, a2, 0);
  if ( a3 )
  {
    if ( !*(_BYTE *)(a1 + 1120) )
    {
      v6 = *(QT::QWidget **)(a1 + 1112);
      if ( v6 )
        QT::QWidget::hide(v6);
    }
  }
  sub_5345F0(&qword_8D1E40, &off_8C3128, 1, 0);
  sub_531B30(1, 0, &qword_8D1E40);
  result = *(void (**)())(*(_QWORD *)a1 + 216LL);
  if ( result != nullsub_270 )
    return (void (*)())((__int64 (__fastcall *)(__int64))result)(a1);
  return result;
}
