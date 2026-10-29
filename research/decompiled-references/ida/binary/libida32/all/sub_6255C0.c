unsigned __int64 __fastcall sub_6255C0(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4, double a5, double a6)
{
  unsigned int v7[2]; // [rsp+0h] [rbp-28h] BYREF
  __int64 v8; // [rsp+8h] [rbp-20h]
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v7[0] = a2;
  v7[1] = a3;
  v8 = a4;
  sub_4EE3F0(a1 + 2672, v7, a5, a6);
  sub_4ED600((unsigned int *)(a1 + 2672));
  return v9 - __readfsqword(0x28u);
}

