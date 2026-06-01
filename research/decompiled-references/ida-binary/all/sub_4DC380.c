unsigned __int64 __fastcall sub_4DC380(__int64 **a1, unsigned __int8 a2)
{
  unsigned __int8 v3[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-10h]

  v4 = __readfsqword(0x28u);
  v3[0] = a2;
  v3[1] = 0;
  sub_4DC0B0(a1, v3, 1, 0);
  return v4 - __readfsqword(0x28u);
}
