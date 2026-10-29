__int64 __fastcall sub_578320(const __m128i *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned int v3; // edx
  __int32 v5; // eax
  __m128i v6; // xmm0
  _OWORD v7[4]; // [rsp+0h] [rbp-58h] BYREF
  __int32 v8; // [rsp+40h] [rbp-18h]
  unsigned __int64 v9; // [rsp+48h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v2 = qlread(a2, a1, 128);
  if ( v2 == 128 )
  {
    v3 = 1;
    if ( a1->m128i_i64[0] == 0xA3E66616769623CLL )
      return v3;
LABEL_5:
    v5 = a1[4].m128i_i32[0];
    v7[0] = _mm_loadu_si128(a1);
    v6 = _mm_loadu_si128(a1 + 1);
    v8 = v5;
    v7[1] = v6;
    v7[2] = _mm_loadu_si128(a1 + 2);
    v7[3] = _mm_loadu_si128(a1 + 3);
    return (unsigned int)sub_578290((__int64)a1, v7);
  }
  v3 = 0;
  if ( v2 > 0x43 )
    goto LABEL_5;
  return v3;
}

