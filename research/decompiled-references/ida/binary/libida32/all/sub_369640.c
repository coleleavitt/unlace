__int64 __fastcall sub_369640(__int64 a1, __m128i *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 segm_name; // rax
  void *v5; // rdi
  __m128i v6; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v2 = *(unsigned int *)(a1 + 8);
  v10 = __readfsqword(0x28u);
  ptr = nullptr;
  v9 = 0;
  v3 = getseg(v2);
  segm_name = get_segm_name(&ptr, v3, 0);
  v5 = ptr;
  if ( segm_name <= 0 )
  {
    if ( ptr )
    {
      v9.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    v6 = _mm_loadu_si128(&v9);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v5;
    a2[1] = v6;
  }
  return 0;
}

