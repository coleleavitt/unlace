bool __fastcall sub_122240(__int64 a1, __int64 a2, __int64 a3, double a4)
{
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[0] = a1;
  v6[1] = a2;
  if ( !(unsigned __int8)sub_1219D0((__int64)v6, 0) && !(unsigned __int8)sub_1219D0((__int64)v6, a3) )
    return 1;
  getinf();
  return (unsigned int)sub_92580(
                         0,
                         (__int64)"HIDECANCEL\n"
                                  "Sorry, due to internal limitations relocating segments\n"
                                  "around %a may cause various problems.\n"
                                  "We strongly advise against it. Do you want to continue?",
                         a4) == 1;
}

