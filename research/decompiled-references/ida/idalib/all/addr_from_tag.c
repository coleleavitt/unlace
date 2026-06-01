unsigned __int64 __fastcall addr_from_tag(int a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __m128i v6; // xmm0
  __m128i v8; // [rsp+0h] [rbp-28h] BYREF
  char v9; // [rsp+10h] [rbp-18h]
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v6 = _mm_loadu_si128((const __m128i *)(a2 + 2));
  v10 = __readfsqword(0x28u);
  v9 = 0;
  v8 = v6;
  qsscanf((unsigned int)&v8, (unsigned int)"%a", a1, a4, a5, a6);
  return v10 - __readfsqword(0x28u);
}
