__int64 __fastcall sub_36B5D0(__int64 a1, __m128i *a2)
{
  __int64 v3; // rsi
  __int64 entry_name; // rax
  void *v5; // rdi
  __m128i v6; // xmm0
  void *ptr; // [rsp+0h] [rbp-28h] BYREF
  __m128i v9; // [rsp+8h] [rbp-20h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h]

  v10 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 8);
  v9 = 0;
  ptr = nullptr;
  entry_name = get_entry_name(&ptr, v3);
  v5 = ptr;
  if ( entry_name < 0 )
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
