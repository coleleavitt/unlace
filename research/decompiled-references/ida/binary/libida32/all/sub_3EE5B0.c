__int64 __fastcall sub_3EE5B0(__m128i **a1, __int64 a2, unsigned __int8 a3)
{
  const __m128i *v4; // rbx
  int v5; // r12d
  __m128i *v6; // rdi
  void (__fastcall *v7)(__m128i *, const __m128i *); // rax
  __m128i *v8; // rdi
  void (__fastcall *v9)(__m128i *, const __m128i *); // rax
  __m128i *v10; // rdi
  __m128i *v11; // rsi
  __int64 (*v12)(); // rax

  v4 = &a1[2][2 * a2];
  v5 = v4[1].m128i_i32[2];
  if ( v5 == 3 )
  {
    if ( a3 != 2 )
    {
      if ( a3 > 2u )
      {
        if ( (unsigned __int8)(a3 - 3) <= 2u )
          return 0;
      }
      else if ( a3 == 1 )
      {
        v5 = 1;
        goto LABEL_2;
      }
      if ( !under_debugger )
        interr(1856);
      BUG();
    }
    v5 = 2;
  }
LABEL_2:
  v6 = *a1;
  v7 = *(void (__fastcall **)(__m128i *, const __m128i *))((*a1)->m128i_i64[0] + 24);
  if ( v7 != sub_3D58D0 )
  {
    v7(v6, v4);
    v8 = a1[1];
    v9 = *(void (__fastcall **)(__m128i *, const __m128i *))(v8->m128i_i64[0] + 24);
    if ( v9 == sub_3D58D0 )
      goto LABEL_4;
LABEL_17:
    v9(v8, v4);
    goto LABEL_5;
  }
  v6[1] = _mm_loadu_si128(v4);
  v8 = a1[1];
  v9 = *(void (__fastcall **)(__m128i *, const __m128i *))(v8->m128i_i64[0] + 24);
  if ( v9 != sub_3D58D0 )
    goto LABEL_17;
LABEL_4:
  v8[1] = _mm_loadu_si128(v4);
LABEL_5:
  v10 = *a1;
  v11 = a1[1];
  if ( v5 != 2 )
  {
    v11 = *a1;
    v10 = a1[1];
  }
  v12 = *(__int64 (**)())(v10->m128i_i64[0] + 104);
  if ( v12 == j__diff_source_merge_region )
    diff_source_merge_region(v10, v11, v4);
  else
    ((void (__fastcall *)(__m128i *, __m128i *, const __m128i *))v12)(v10, v11, v4);
  return 1;
}

