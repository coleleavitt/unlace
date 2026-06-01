unsigned __int64 __fastcall sub_1668770(__int64 a1)
{
  __m128 v2; // [rsp+0h] [rbp-18h] BYREF

  sub_152EEE0(
    &v2,
    (int *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 16)),
    (int *)(*(_QWORD *)a1 + 12LL * *(unsigned int *)(a1 + 16)),
    a1,
    1);
  return v2.m128_u64[0];
}
