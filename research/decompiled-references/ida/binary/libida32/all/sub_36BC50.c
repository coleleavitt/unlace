__int64 __fastcall sub_36BC50(__int64 a1, __m128 *a2)
{
  __int64 v2; // rdx
  __int64 v4; // rsi
  void *v5; // rdx
  __m128 v6; // xmm0
  void *ptr; // [rsp+0h] [rbp-38h] BYREF
  __int128 v9; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-20h]

  v2 = *(unsigned int *)(a1 + 40);
  v10 = __readfsqword(0x28u);
  v4 = *(unsigned int *)(a1 + 8);
  v9 = 0;
  ptr = nullptr;
  print_operand(&ptr, v4, v2, 0, 0);
  if ( (unsigned __int64)v9 > 1 )
    tag_remove();
  v5 = ptr;
  a2->m128_i8[0] = 7;
  v6 = _mm_loadh_ps((const double *)&v9 + 1);
  a2->m128_u64[1] = (unsigned __int64)v5;
  a2[1] = v6;
  return 0;
}

