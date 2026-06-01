unsigned __int64 __fastcall sub_1AF9490(__int64 a1)
{
  __m128 v2; // [rsp+0h] [rbp-18h] BYREF

  sub_1AF9420(
    &v2,
    (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 16)),
    (_QWORD *)(*(_QWORD *)a1 + 88LL * *(unsigned int *)(a1 + 16)),
    a1,
    1);
  return v2.m128_u64[0];
}
