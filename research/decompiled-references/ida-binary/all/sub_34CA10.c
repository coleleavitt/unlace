__int64 __fastcall sub_34CA10(
        __m128 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14)
{
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __m128 v20; // xmm4
  __m128 v21; // xmm5
  _QWORD v23[9]; // [rsp+0h] [rbp-48h] BYREF

  v23[1] = __readfsqword(0x28u);
  for ( v23[0] = &stru_10000;
        (unsigned int)sub_1697D0(
                        (int)"Add mapping\n"
                             "\n"
                             "<~F~rom:N::18::> (nonexisting address)\n"
                             "<~T~o  :N::18::> (existing address)\n"
                             "<~S~ize:N::18::>\n"
                             "\n"
                             "\n",
                        (__int64)&qword_8CF0A8,
                        (__int64)&qword_8CF0A0,
                        (__int64)v23,
                        a13,
                        a14,
                        a1,
                        a2,
                        a3,
                        a4,
                        a5,
                        a6,
                        a7,
                        a8,
                        v23[0]);
        sub_169630((int)"Cannot add mapping!", v15, v16, v17, v18, v19, a1, a2, a3, a4, v20, v21, a7, a8, v23[0]) )
  {
    v15 = qword_8CF0A0;
    if ( (unsigned __int8)add_mapping(qword_8CF0A8, qword_8CF0A0, v23[0]) )
    {
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a10 + 64LL))(a10, 1);
      return 0;
    }
  }
  return 0;
}
