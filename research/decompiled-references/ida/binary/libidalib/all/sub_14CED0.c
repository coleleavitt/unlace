unsigned __int64 __fastcall sub_14CED0(__int64 a1, __int64 a2, unsigned int a3)
{
  int v5; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_F2740(&v5, a1 + 2736);
  sub_1923D0(a1, a2, a3);
  sub_F27B0(&v5);
  return v6 - __readfsqword(0x28u);
}

