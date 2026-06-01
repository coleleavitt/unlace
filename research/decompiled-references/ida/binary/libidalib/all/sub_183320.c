unsigned __int64 __fastcall sub_183320(__int64 **a1, unsigned __int8 a2, __int64 a3, __int64 a4, size_t a5)
{
  unsigned __int8 v6[2]; // [rsp+6h] [rbp-12h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-10h]

  v7 = __readfsqword(0x28u);
  v6[0] = a2;
  v6[1] = 0;
  sub_182C10(a1, v6, 1, 0, a5);
  return v7 - __readfsqword(0x28u);
}

