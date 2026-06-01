__int64 __fastcall sub_4E2930(__int64 *a1, void *a2, unsigned int a3, int a4, __int64 a5, __int64 a6, __int64 a7)
{
  __m128i v8; // [rsp+0h] [rbp-38h] BYREF
  int v9[2]; // [rsp+10h] [rbp-28h]
  int v10; // [rsp+18h] [rbp-20h]
  void *ptr; // [rsp+28h] [rbp-10h]

  ptr = (void *)__readfsqword(0x28u);
  v10 = a4;
  v8.m128i_i64[0] = a5;
  v8.m128i_i64[1] = a6;
  *(_QWORD *)v9 = a7;
  return sub_4E2470(a1, a2, a3, &v8);
}
