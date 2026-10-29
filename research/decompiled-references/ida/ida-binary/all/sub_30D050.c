unsigned __int64 __fastcall sub_30D050(__int64 a1, unsigned int a2, unsigned __int8 a3)
{
  int v5; // [rsp+4h] [rbp-34h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-30h]

  v6 = __readfsqword(0x28u);
  sub_277730(&v5, -1);
  sub_47BEA0(a1, a2, a3);
  sub_277860(&v5);
  return v6 - __readfsqword(0x28u);
}
