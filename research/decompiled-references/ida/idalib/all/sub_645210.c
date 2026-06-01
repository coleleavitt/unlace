__int64 __fastcall sub_645210(__m128i *a1, __int64 *a2)
{
  __int64 v3; // rax
  const char *v4; // rdx
  __m128i v5; // xmm0
  unsigned int v6; // ebp
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  _QWORD v12[7]; // [rsp+0h] [rbp-38h] BYREF

  v12[1] = __readfsqword(0x28u);
  netnode_check(v12, "$ fileregions", 0, 0);
  if ( v12[0] == -1 )
    return 1;
  v3 = a1->m128i_i64[0];
  v4 = haystack;
  v5 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)off_2B37180), (__m128i)(unsigned __int64)sub_63FCD0);
  a1[183] = v5;
  if ( *(_QWORD *)(v3 + 32) )
    v4 = *(const char **)(v3 + 24);
  v6 = sub_508110(
         (_QWORD *)a1[182].m128i_i64[1],
         (__int64)&a1[179].m128i_i64[1],
         v4,
         (__int64)"$ fileregions",
         24,
         *(double *)v5.m128i_i64,
         COERCE_DOUBLE(sub_63FCD0));
  if ( (_BYTE)v6 )
  {
    a1[184].m128i_i8[8] = 1;
    sub_504B40((__int64)&a1[179].m128i_i64[1]);
    return 1;
  }
  sub_506F50((__int64)&a1[179].m128i_i64[1]);
  v8 = a2[1];
  v9 = *a2;
  if ( a2[2] < (unsigned __int64)(v8 + 1) )
  {
    v11 = qvector_reserve(a2, v9, v8 + 1, 24);
    v8 = a2[1];
    *a2 = v11;
    v9 = v11;
  }
  v10 = v9 + 24 * v8;
  *(_QWORD *)v10 = 0;
  *(_OWORD *)(v10 + 8) = 0;
  ++a2[1];
  sub_35A790((char **)v10);
  return v6;
}
