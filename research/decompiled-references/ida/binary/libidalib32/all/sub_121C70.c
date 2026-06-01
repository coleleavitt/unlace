bool __fastcall sub_121C70(int a1, int a2, int a3, double a4)
{
  _DWORD v6[2]; // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  v6[0] = a1;
  v6[1] = a2;
  if ( !(unsigned __int8)sub_121420((__int64)v6, 0) && !(unsigned __int8)sub_121420((__int64)v6, a3) )
    return 1;
  getinf();
  return (unsigned int)sub_924A0(
                         0,
                         (__int64)"HIDECANCEL\n"
                                  "Sorry, due to internal limitations relocating segments\n"
                                  "around %a may cause various problems.\n"
                                  "We strongly advise against it. Do you want to continue?",
                         a4) == 1;
}

