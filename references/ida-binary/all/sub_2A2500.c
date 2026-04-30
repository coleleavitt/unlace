unsigned __int64 __fastcall sub_2A2500(const __m128i *a1, __int64 (__fastcall *a2)(__m128i *, char *))
{
  __int8 *v2; // rbx
  __m128i v3; // xmm0
  __int32 v4; // eax
  char i; // al
  __m128i v6; // xmm0
  int v7; // eax
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-38h] BYREF
  __int32 v11; // [rsp+10h] [rbp-28h]
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v2 = &a1[-2].m128i_i8[12];
  v3 = _mm_loadu_si128(a1);
  v4 = a1[1].m128i_i32[0];
  v12 = __readfsqword(0x28u);
  v11 = v4;
  v10 = v3;
  for ( i = a2(&v10, &a1[-2].m128i_i8[12]); i; i = a2(&v10, v2) )
  {
    v6 = _mm_loadu_si128((const __m128i *)v2);
    v7 = *((_DWORD *)v2 + 4);
    v2 -= 20;
    *((_DWORD *)v2 + 14) = v7;
    *(__m128i *)(v2 + 40) = v6;
  }
  v8 = _mm_load_si128(&v10);
  *((_DWORD *)v2 + 9) = v11;
  *(__m128i *)(v2 + 20) = v8;
  return v12 - __readfsqword(0x28u);
}
