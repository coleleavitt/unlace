__int64 __fastcall sub_36CB70(__int64 a1, __m128i *a2)
{
  __int64 v3; // rsi
  char v4; // al
  void *v5; // rdi
  __m128i v6; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  ptr = nullptr;
  v4 = print_insn_mnem(&ptr, v3);
  v5 = ptr;
  if ( v4 )
  {
    v6 = _mm_loadu_si128(&v9);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v5;
    a2[1] = v6;
  }
  else if ( ptr )
  {
    v9.m128i_i64[0] = 0;
    qfree(ptr);
  }
  return 0;
}
