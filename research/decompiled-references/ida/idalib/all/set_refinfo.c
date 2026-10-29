__int64 __fastcall set_refinfo(__int64 a1, char a2, unsigned __int8 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD v7[3]; // [rsp+0h] [rbp-38h] BYREF
  int v8; // [rsp+18h] [rbp-20h]
  unsigned __int64 v9; // [rsp+28h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v8 = a3;
  v7[0] = a4;
  v7[1] = a5;
  v7[2] = a6;
  return sub_4E22A0(*(__int64 **)(qword_2CCB598 + 1672), a1, a2, (__int64)v7);
}
