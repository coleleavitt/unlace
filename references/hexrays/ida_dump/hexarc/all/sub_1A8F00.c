__int64 *__fastcall sub_1A8F00(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  int v4; // ebp

  v4 = a3;
  if ( !*(_QWORD *)(a1 + 8) )
    return sub_F4410(a2, (__int64)"%d", a3);
  sub_3234D0(a2, 41, a3, a4);
  tag_addr(a2, 8LL * v4, 0);
  sub_F4410(a2, (__int64)"%d", v4);
  return (__int64 *)sub_3235B0(a2, 41);
}
