__int64 (__fastcall **__fastcall sub_4CD6B0(QT::QWidget *a1, char a2))(_QWORD)
{
  __int64 (__fastcall ***v2)(_QWORD); // rax
  __int64 (__fastcall ***v3)(_QWORD); // rbx

  v2 = (__int64 (__fastcall ***)(_QWORD))sub_4CD420(a1, 1u);
  v3 = v2;
  if ( v2 && a2 && sub_4B7300(v2) )
    return v3[5];
  else
    return (__int64 (__fastcall **)(_QWORD))v3;
}
