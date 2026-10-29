__int64 __fastcall get_wide_byte(unsigned __int64 a1)
{
  __int64 v2[3]; // [rsp+0h] [rbp-18h] BYREF

  v2[1] = __readfsqword(0x28u);
  sub_3BEFF0(*(__int64 **)(qword_2CCB598 + 1672), v2, a1);
  return v2[0];
}
