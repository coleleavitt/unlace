__int64 __fastcall op_offset(void *a1, unsigned int a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v7; // [rsp+0h] [rbp-38h] BYREF
  int v8[2]; // [rsp+10h] [rbp-28h]
  int v9; // [rsp+18h] [rbp-20h]
  void *ptr; // [rsp+28h] [rbp-10h]

  ptr = (void *)__readfsqword(0x28u);
  v9 = a3;
  v7.m128i_i64[0] = a4;
  v7.m128i_i64[1] = a5;
  *(_QWORD *)v8 = a6;
  return sub_4E2470(*(__int64 **)(qword_2CCB598 + 1672), a1, a2, &v7);
}
