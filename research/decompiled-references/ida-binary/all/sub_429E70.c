__int64 sub_429E70()
{
  __int64 v0; // rax
  __int64 Child_helper; // rdi
  QT::QWidget *v3; // rax

  v0 = sub_41A4D0("Vault files");
  if ( v0 && (Child_helper = QT::qt_qFindChild_helper(v0, 0, 0, &off_876A60, 1)) != 0 )
  {
    sub_42D340(Child_helper);
    return 1;
  }
  else
  {
    v3 = sub_429C40();
    sub_42D340(v3);
    return 1;
  }
}
