int sub_5A37E0()
{
  __int64 v0; // rdi

  qword_4B01CB8 = (__int64)"basic register allocator";
  qword_4B01CA8 = (__int64)"basic";
  v0 = qword_4AF5B80[2];
  qword_4B01CB0 = 5;
  qword_4B01CC0 = 24;
  qword_4B01CC8 = (__int64)sub_34E8F80;
  qword_4B01CA0 = qword_4AF5B80[0];
  qword_4AF5B80[0] = (__int64)&qword_4B01CA0;
  if ( v0 )
    (*(void (__fastcall **)(__int64, char *, __int64, __int64 (__fastcall *)(), const char *, __int64))(*(_QWORD *)v0 + 24LL))(
      v0,
      "basic",
      5,
      sub_34E8F80,
      "basic register allocator",
      24);
  return __cxa_atexit(sub_31E9AF0, &qword_4B01CA0, &off_47CFE00);
}

