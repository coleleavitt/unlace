__int64 __fastcall sub_43320(__int64 a1, __int64 a2, const char *a3, unsigned __int64 *a4)
{
  __int64 v5; // rsi
  __m128i v8; // xmm0
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // rcx
  unsigned __int64 *v11; // rdi
  __m128i v12; // xmm1
  double v13; // xmm0_8
  unsigned __int64 v14; // rbx

  v5 = *(_QWORD *)(a1 + 592);
  if ( !v5 || *(_DWORD *)(a2 + 4) != 1 || (*(_BYTE *)(a2 + 8) & 2) == 0 )
    return 1;
  v8 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  v9 = *(unsigned __int64 **)(a1 + 584);
  v10 = v8.m128i_i64[0];
  v11 = &v9[3 * v5];
  v12 = _mm_srli_si128(v8, 8);
  *(_QWORD *)&v13 = _mm_add_epi64(v8, v12).m128i_u64[0];
  if ( v11 == v9 )
  {
LABEL_13:
    sub_EAA0(
      (__int64)"Section '%s' address %llX file offset %llX has been ignored as suspicious\n",
      a3,
      *(_QWORD *)(a2 + 16),
      v10);
    return 0;
  }
  else
  {
    while ( v10 < *v9 || v9[1] < *(_QWORD *)&v13 )
    {
      v9 += 3;
      if ( v11 == v9 )
        goto LABEL_13;
    }
    v14 = v9[2] + v10 - *v9;
    if ( *a4 != v14 )
    {
      sub_EAA0(
        (__int64)"The loading address of the section '%s' was wrong (%a), fixed it to be %a\n",
        a3,
        v13,
        *(double *)v12.m128i_i64);
      *a4 = v14;
    }
    return 1;
  }
}
