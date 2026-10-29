int sub_582FD0()
{
  __int64 v0; // rdi

  qword_4AF0178 = (__int64)"VLIW scheduler";
  qword_4AF0168 = (__int64)"vliw-td";
  v0 = qword_4AEF180[2];
  qword_4AF0170 = 7;
  qword_4AF0180 = 14;
  qword_4AF0188 = (__int64)sub_2F3E790;
  qword_4AF0160 = qword_4AEF180[0];
  qword_4AEF180[0] = (__int64)&qword_4AF0160;
  if ( v0 )
    (*(void (__fastcall **)(__int64, const char *, __int64, __int64 (__fastcall *)(), const char *, __int64))(*(_QWORD *)v0 + 24LL))(
      v0,
      "vliw-td",
      7,
      sub_2F3E790,
      "VLIW scheduler",
      14);
  return __cxa_atexit(sub_2E11E00, &qword_4AF0160, &off_47CFE00);
}

