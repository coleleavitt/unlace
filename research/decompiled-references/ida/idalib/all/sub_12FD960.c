__int64 __fastcall sub_12FD960(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rax
  __int64 (__fastcall *v3)(__int64, __m128i *); // rdi
  __int64 v4; // rsi
  __m128i v6[2]; // [rsp+0h] [rbp-38h] BYREF
  __int16 v7; // [rsp+20h] [rbp-18h]

  v1 = *a1;
  v2 = a1[1];
  v7 = 260;
  v3 = *(__int64 (__fastcall **)(__int64, __m128i *))v1;
  v4 = *(_QWORD *)(v1 + 8);
  v6[0].m128i_i64[0] = v2 + 216;
  return sub_12FD7D0(v3, v4, 0xC3Fu, v6);
}
