bool __fastcall sub_21A1FE0(__int64 a1)
{
  __int64 v1; // r13
  __int64 v2; // rdx
  __int64 v3; // r14
  __int128 v4; // rax
  __m256i v6; // [rsp+10h] [rbp-58h] BYREF
  __int128 v7; // [rsp+30h] [rbp-38h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  __int64 v9; // [rsp+48h] [rbp-20h]

  v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 360LL))(a1);
  v3 = v2;
  *(_QWORD *)&v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 352LL))(a1);
  v8 = v1;
  v6.m256i_i64[2] = v1;
  v6.m256i_i64[3] = v3;
  v7 = v4;
  v9 = v3;
  *(_OWORD *)v6.m256i_i8 = v4;
  while ( __PAIR128__(v6.m256i_u64[0], v3) != *(_OWORD *)&v6.m256i_u64[1]
       && !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6.m256i_i64[1] + 264LL))(
             v6.m256i_i64[1],
             v6.m256i_i64[0]) )
    (*(void (__fastcall **)(__int64, __m256i *))(*(_QWORD *)v6.m256i_i64[1] + 136LL))(v6.m256i_i64[1], &v6);
  *(__m128i *)&v6.m256i_u64[2] = _mm_load_si128((const __m128i *)&v6);
  return v3 != v6.m256i_i64[3] || v6.m256i_i64[2] != v1;
}
