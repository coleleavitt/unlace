unsigned __int64 __fastcall sub_5CA1A0(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        double a6,
        double a7,
        double a8)
{
  _QWORD v11[3]; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+20h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v11[0] = a2;
  v11[2] = a4;
  v11[1] = a3;
  sub_508600(
    a1 + 1704,
    a2,
    a3,
    a4,
    a5,
    (__int64 (__fastcall *)(__int64 *, __int64, _QWORD, __int64))sub_5CA680,
    a6,
    a7,
    a8,
    (__int64)v11);
  sub_5C6720(*(_QWORD *)(*(_QWORD *)a1 + 1616LL), a2, a3, a4);
  return v12 - __readfsqword(0x28u);
}
