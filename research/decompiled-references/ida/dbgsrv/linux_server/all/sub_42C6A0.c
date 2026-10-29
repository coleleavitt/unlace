/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C6A0
// Address: 0x000000000042C6A0

//----- (000000000042C6A0) ----------------------------------------------------
__int64 __fastcall sub_42C6A0(__int64 a1, __m128i *a2)
{
  char *v2; // rax
  bool v3; // zf
  void *v4; // rax
  __m128i v5; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v8; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = (char *)s1;
  v3 = *(_QWORD *)(a1 + 16) == 0;
  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  if ( !v3 )
    v2 = *(char **)(a1 + 8);
  sub_4837D0(v2, (__int64)&ptr);
  v4 = ptr;
  v5 = _mm_loadu_si128(&v8);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = (__int64)v4;
  a2[1] = v5;
  return 0;
}
