bool __fastcall add_byte(unsigned __int64 a1, unsigned int a2)
{
  __int64 *v2; // rbp
  __int64 v4[5]; // [rsp+0h] [rbp-28h] BYREF

  v4[1] = __readfsqword(0x28u);
  v2 = *(__int64 **)(qword_2CCB598 + 1672);
  sub_3BEFF0(v2, v4, a1);
  return sub_3CF0D0((__int64)v2, a1, v4[0] + a2);
}
