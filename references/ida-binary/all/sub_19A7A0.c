__int64 __fastcall sub_19A7A0(__int64 a1, __m128i *a2)
{
  __int64 bpt_kernel_interface; // rax
  const __m128i *v3; // rax
  const __m128i *v4; // rbx
  unsigned __int64 v5; // r12
  const void *v6; // r14
  void *v7; // rax

  bpt_kernel_interface = get_bpt_kernel_interface(a1, a2);
  v3 = (const __m128i *)(*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)bpt_kernel_interface + 40LL))(
                          bpt_kernel_interface,
                          a1);
  if ( !v3 )
    return 0;
  if ( a2 )
  {
    v4 = v3;
    a2->m128i_i64[0] = v3->m128i_i64[0];
    if ( &a2->m128i_u64[1] != &v3->m128i_u64[1] )
    {
      v5 = v3[1].m128i_u64[0];
      if ( v5 < 2 )
      {
        a2[1].m128i_i64[0] = 0;
      }
      else
      {
        v6 = (const void *)v3->m128i_i64[1];
        v7 = (void *)a2->m128i_i64[1];
        if ( a2[1].m128i_i64[1] < v5 )
        {
          v7 = (void *)qvector_reserve(&a2->m128i_u64[1], a2->m128i_i64[1], v4[1].m128i_i64[0], 1);
          a2->m128i_i64[1] = (__int64)v7;
        }
        a2[1].m128i_i64[0] = v5;
        memmove(v7, v6, v5 - 1);
        *(_BYTE *)(a2->m128i_i64[1] + v5 - 1) = 0;
      }
    }
    a2[2] = _mm_loadu_si128(v4 + 2);
    a2[3].m128i_i32[0] = v4[3].m128i_i32[0];
    a2[3].m128i_i32[1] = v4[3].m128i_i32[1];
    a2[3].m128i_i64[1] = v4[3].m128i_i64[1];
    a2[4].m128i_i32[0] = v4[4].m128i_i32[0];
    a2[4].m128i_i32[1] = v4[4].m128i_i32[1];
    a2[4].m128i_i32[2] = v4[4].m128i_i32[2];
    a2[4].m128i_i32[3] = v4[4].m128i_i32[3];
    a2[5].m128i_i32[0] = v4[5].m128i_i32[0];
    a2[5].m128i_i32[1] = v4[5].m128i_i32[1];
    a2[5].m128i_i64[1] = v4[5].m128i_i64[1];
  }
  return 1;
}
