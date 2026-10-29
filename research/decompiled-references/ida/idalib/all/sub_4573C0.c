void __fastcall __noreturn sub_4573C0(const char *a1, __int64 a2)
{
  _QWORD v2[9]; // [rsp+30h] [rbp-48h] BYREF

  v2[3] = __readfsqword(0x28u);
  if ( (unsigned __int8)qfileexist(a1, a2) )
  {
    v2[0] = 0;
    v2[2] = 0;
    v2[1] = a1;
    init_database(3, (__int64)v2);
  }
  sub_378C70((__int64)"%s: cannot find", a1);
}
