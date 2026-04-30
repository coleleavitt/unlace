__int64 __fastcall sub_515E30(__int64 a1, const char *a2, double a3, double a4)
{
  QT::QAbstractScrollArea *v4; // rbx
  __int64 result; // rax

  v4 = *(QT::QAbstractScrollArea **)(a1 + 256);
  result = 0;
  if ( v4 )
  {
    msg_entries_t__::vfunc_2((__int64)v4 + 40, a2);
    sub_514C10(v4, (int *)&qword_8D2398, 0, 0, a3, a4);
    return 1;
  }
  return result;
}
