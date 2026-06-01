__int64 __fastcall sub_36CC00(__int64 a1, __m128i *a2)
{
  int v2; // edx
  __int64 v4; // rsi
  void *v5; // rax
  __m128i v6; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 40);
  v10 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  ptr = nullptr;
  generate_disasm_line(&ptr, v4, v2 | 4u);
  v5 = ptr;
  v6 = _mm_loadu_si128(&v9);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = (__int64)v5;
  a2[1] = v6;
  return 0;
}
