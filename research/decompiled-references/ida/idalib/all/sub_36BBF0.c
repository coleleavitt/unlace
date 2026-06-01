__int64 __fastcall sub_36BBF0(__int64 a1, __m128i *a2)
{
  bool v2; // zf
  __int64 v3; // rdi
  bool v4; // bp
  __int64 func; // rax
  void *v6; // rax
  __m128i v7; // xmm0
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __m128i v10; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-20h]

  v2 = *(_QWORD *)(a1 + 40) == 0;
  v3 = *(_QWORD *)(a1 + 8);
  v11 = __readfsqword(0x28u);
  v4 = !v2;
  ptr = nullptr;
  v10 = 0;
  func = get_func(v3);
  get_func_cmt(&ptr, func, v4);
  v6 = ptr;
  v7 = _mm_loadu_si128(&v10);
  a2->m128i_i8[0] = 7;
  a2->m128i_i64[1] = (__int64)v6;
  a2[1] = v7;
  return 0;
}
