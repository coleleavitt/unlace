__int64 __fastcall sub_3673C0(__int64 a1, __m128i *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  void *v4; // rdi
  __m128i v5; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v8; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+18h] [rbp-10h]

  v2 = *(unsigned int *)(a1 + 8);
  v9 = __readfsqword(0x28u);
  ptr = nullptr;
  v8 = 0;
  v3 = netnode_qhashlast(v2, &ptr, 72);
  v4 = ptr;
  if ( v3 < 0 )
  {
    if ( ptr )
    {
      v8.m128i_i64[0] = 0;
      qfree(ptr);
    }
  }
  else
  {
    v5 = _mm_loadu_si128(&v8);
    a2->m128i_i8[0] = 7;
    a2->m128i_i64[1] = (__int64)v4;
    a2[1] = v5;
  }
  return 0;
}

