__int64 __fastcall sub_227E030(__int64 a1)
{
  const char *v1; // rax
  __int64 result; // rax
  const char *v3; // rcx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // [rsp+8h] [rbp-10h] BYREF

  v1 = *(const char **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) <= 0 )
  {
    if ( !*(_DWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 16) = 7;
    v1 = (const char *)&unk_2D0ADA8;
    v6.m128i_i64[0] = (__int64)&unk_2D0ADA8;
    v5 = _mm_loadl_epi64(&v6);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v5, v5);
    goto LABEL_4;
  }
  if ( *(_QWORD *)(a1 + 8) - *(_QWORD *)a1 == 1 || *v1 != 91 || v1[1] != 46 )
  {
LABEL_4:
    *(_QWORD *)a1 = v1 + 1;
    return *(unsigned __int8 *)v1;
  }
  *(_QWORD *)a1 = v1 + 2;
  result = sub_227DF00((const char **)a1, 46);
  v3 = *(const char **)a1;
  if ( (__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) > 1 && *v3 == 46 && v3[1] == 93 )
  {
    *(_QWORD *)a1 = v3 + 2;
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      *(_DWORD *)(a1 + 16) = 3;
    v6.m128i_i64[0] = (__int64)&unk_2D0ADA8;
    v4 = _mm_loadl_epi64(&v6);
    *(__m128i *)a1 = _mm_unpacklo_epi64(v4, v4);
  }
  return result;
}
