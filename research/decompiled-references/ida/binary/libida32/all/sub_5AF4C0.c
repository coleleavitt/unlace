unsigned __int64 __fastcall sub_5AF4C0(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 a5,
        double a6,
        double a7,
        double a8)
{
  _DWORD v11[4]; // [rsp+10h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11[0] = a2;
  v11[2] = a4;
  v11[1] = a3;
  sub_4F0F80(
    a1 + 1624,
    a2,
    a3,
    a4,
    a5,
    (__int64 (__fastcall *)(unsigned int *, _QWORD, _QWORD, __int64))sub_5AF980,
    a6,
    a7,
    a8,
    (__int64)v11);
  sub_5ABCA0(*(_QWORD *)(*(_QWORD *)a1 + 1424LL), a2, a3, a4);
  return v12 - __readfsqword(0x28u);
}

