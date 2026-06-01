__int64 __fastcall sub_36BC80(__int64 a1, __m128i *a2)
{
  __int64 v3; // rsi
  void *v4; // rax
  __m128i v5; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v8; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v9 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v8 = 0;
  ptr = nullptr;
  get_func_name(&ptr, v3);
  v4 = ptr;
  v5 = _mm_loadu_si128(&v8);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = (__int64)v4;
  a2[1] = v5;
  return 0;
}
