bool __fastcall sub_323E80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  _QWORD v6[7]; // [rsp+0h] [rbp-38h] BYREF

  v6[3] = __readfsqword(0x28u);
  v6[0] = a1;
  v6[1] = a2;
  if ( !(unsigned __int8)sub_3237C0(v6, 0) && !(unsigned __int8)sub_3237C0(v6, a3) )
    return 1;
  v4 = getinf(27);
  return (unsigned int)sub_1698A0(
                         0,
                         (int)"HIDECANCEL\n"
                              "Sorry, due to internal limitations relocating segments\n"
                              "around %a may cause various problems.\n"
                              "We strongly advise against it. Do you want to continue?",
                         v4) == 1;
}
