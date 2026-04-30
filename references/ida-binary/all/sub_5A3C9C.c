__int64 __fastcall sub_5A3C9C(__int64 a1, int a2, int a3)
{
  unsigned int v3; // ebx
  unsigned int v6[44]; // [rsp+10h] [rbp-1F0h] BYREF
  _BYTE v7[16]; // [rsp+C0h] [rbp-140h] BYREF
  _BYTE v8[16]; // [rsp+D0h] [rbp-130h] BYREF
  _QWORD v9[35]; // [rsp+E0h] [rbp-120h] BYREF

  sub_59EA9E((__int64)v9, a2);
  sub_59BABA((__int64)v9, -1);
  sub_5983C4((__int64)v9, a3);
  sub_593898((__int64)v8);
  sub_5938F8((__int64)v7);
  sub_5A014E(v6, a1, 0xFFFFFFFF, 0, (__int64)v8, (__int64)v7, 0, 0, 0, (__int64)v9);
  if ( (unsigned __int8)sub_5A0302(v6) != 1 )
    v3 = 0;
  else
    v3 = sub_5A062E((__int64)v6);
  sub_5A044E((__int64)v6);
  sub_5936BC((__int64)v7);
  sub_5936A0((__int64)v8);
  google_breakpad::LinuxPtraceDumper__::vfunc_0(v9);
  return v3;
}
