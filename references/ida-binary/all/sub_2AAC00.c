_BOOL8 __fastcall sub_2AAC00(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  char v20; // [rsp+0h] [rbp-8h]

  v11 = *(_QWORD *)(a11 + 8);
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a10 + 128LL))(a10);
  if ( v11 )
    return (*(int (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 288LL))(v11, v12) >= 0;
  sub_169700(
    (int)"Coherency check failed: g != nullptr\n",
    a10,
    v13,
    v14,
    v15,
    v16,
    a1,
    a2,
    a3,
    a4,
    v17,
    v18,
    a7,
    a8,
    v20);
  return 0;
}
