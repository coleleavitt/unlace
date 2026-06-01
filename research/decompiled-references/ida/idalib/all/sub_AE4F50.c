__int64 __fastcall sub_AE4F50(const __m128i **a1, char *a2)
{
  const __m128i *v2; // rbx
  char v3; // r12
  bool v4; // zf
  _BYTE *v5; // rdi
  __int64 v6; // rdi
  unsigned int v7; // ebp
  __int64 *v8; // rax
  __m128d v9; // xmm0
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  void (__fastcall *v18)(__int64, __int64, __int64); // rcx
  __int64 v19; // rdx
  __int64 result; // rax
  __m128d v21; // [rsp+0h] [rbp-48h]
  char v22[41]; // [rsp+1Fh] [rbp-29h] BYREF

  v2 = *a1;
  v3 = *a2;
  v4 = (*a1)->m128i_i8[0] == 0;
  v5 = (_BYTE *)(*a1)->m128i_i64[1];
  if ( !v4 )
  {
    sub_222AB70(v5 + 1048, v2[1].m128i_i64[0], v2[1].m128i_i64[1]);
    sub_22297F0(v2->m128i_i64[1] + 1048);
    v5 = (_BYTE *)v2->m128i_i64[1];
  }
  *v5 = 1;
  v6 = v2->m128i_i64[1];
  v7 = *(_DWORD *)(v6 + 16);
  sub_22299F0(v6 + 1048);
  sub_E59C00(v2[3].m128i_i64[0] + 8, &v2[3].m128i_u64[1]);
  v8 = (__int64 *)v2[4].m128i_i64[0];
  if ( v8 )
    sub_AE36F0(v2[3].m128i_i64[0], *v8);
  v9 = (__m128d)_mm_loadu_si128(v2 + 3);
  v21 = _mm_shuffle_pd(v9, v9, 1);
  sub_ADE7F0(v2[3].m128i_i64[0] + 8, 0, 0, *(__int64 *)&v21.m128d_f64[0], *(__int64 *)&v21.m128d_f64[1]);
  v10 = v2->m128i_i64[1];
  v11 = *(unsigned int *)(v10 + 16);
  if ( v7 < (unsigned int)v11 )
  {
    v12 = *(_QWORD *)(v10 + 8);
    v22[0] = 1;
    v13 = v12 + 32 * v11 - 32;
    if ( !*(_QWORD *)(v13 + 16) )
LABEL_14:
      std::__throw_bad_function_call();
    while ( 1 )
    {
      (*(void (__fastcall **)(__int64, char *))(v13 + 24))(v13, v22);
      v15 = v2->m128i_i64[1];
      v16 = (unsigned int)(*(_DWORD *)(v15 + 16) - 1);
      *(_DWORD *)(v15 + 16) = v16;
      v17 = *(_QWORD *)(v15 + 8) + 32 * v16;
      v18 = *(void (__fastcall **)(__int64, __int64, __int64))(v17 + 16);
      if ( v18 )
      {
        v18(v17, v17, 3);
        v15 = v2->m128i_i64[1];
      }
      v19 = *(unsigned int *)(v15 + 16);
      v10 = v15;
      if ( v7 >= (unsigned int)v19 )
        break;
      v14 = *(_QWORD *)(v15 + 8);
      v22[0] = 1;
      v13 = v14 + 32 * v19 - 32;
      if ( !*(_QWORD *)(v13 + 16) )
        goto LABEL_14;
    }
  }
  result = sub_2229B60(v10 + 1048);
  if ( v3 )
  {
    sub_2229960(v2->m128i_i64[1] + 1048);
    return sub_2229BF0(v2->m128i_i64[1] + 1048);
  }
  return result;
}
