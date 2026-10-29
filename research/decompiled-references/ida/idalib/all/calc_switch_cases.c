bool __fastcall calc_switch_cases(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD v5[7]; // [rsp+0h] [rbp-38h] BYREF

  v5[5] = __readfsqword(0x28u);
  v5[2] = a2;
  v5[3] = a1;
  v5[0] = &off_2B28A10;
  v5[1] = -1;
  return (unsigned int)sub_44E140(*(__int64 **)(qword_2CCB598 + 1672), a3, a4, (__int64)v5, a1 == 0) != -1;
}
