_QWORD *__fastcall sub_299470(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 tinfo_property; // rax
  __int64 v6; // rsi
  __int64 v7; // rax
  _QWORD vars0[5]; // [rsp+0h] [rbp+0h] BYREF

  vars0[1] = __readfsqword(0x28u);
  while ( (get_tinfo_property(*a2, 2) & 0xF) == 0xA )
  {
    v4 = *a2;
    vars0[0] = 0;
    tinfo_property = get_tinfo_property(v4, 10);
    v6 = *a2;
    vars0[0] = tinfo_property;
    if ( !(unsigned int)lexcompare_tinfo(tinfo_property, v6, 0) )
    {
      clear_tinfo_t(vars0);
      break;
    }
    v7 = *a2;
    *a2 = vars0[0];
    vars0[0] = v7;
    clear_tinfo_t(vars0);
  }
  *a1 = 0;
  copy_tinfo_t(a1, a2);
  return a1;
}
