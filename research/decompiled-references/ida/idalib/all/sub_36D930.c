__int64 __fastcall sub_36D930(__int64 a1, __m128i *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  __int64 extra_cmt; // rax
  void *v6; // rdi
  __m128i v7; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v10; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v11; // [rsp+18h] [rbp-10h]

  v2 = *(unsigned int *)(a1 + 40);
  v11 = __readfsqword(0x28u);
  v4 = *(_QWORD *)(a1 + 8);
  v10 = 0;
  ptr = nullptr;
  extra_cmt = get_extra_cmt(&ptr, v4, v2);
  v6 = ptr;
  if ( extra_cmt < 0 )
  {
    if ( ptr )
    {
      v10.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    v7 = _mm_loadu_si128(&v10);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v6;
    a2[1] = v7;
  }
  return 0;
}
