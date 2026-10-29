__int64 __fastcall sub_48CBD0(__int64 a1, const __m128i *a2)
{
  __int64 v2; // rdx
  int v3; // eax
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v8; // [rsp+7h] [rbp-41h] BYREF
  unsigned __int8 v9; // [rsp+Fh] [rbp-39h]
  __int64 v10; // [rsp+10h] [rbp-38h] BYREF
  __int64 v11; // [rsp+18h] [rbp-30h]
  __m128i v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

  v14 = __readfsqword(0x28u);
  v2 = a2->m128i_u32[0];
  if ( (int)v2 < 0 )
    return 0;
  v3 = a2->m128i_i32[1];
  if ( v3 < 0 )
    return 0;
  v5 = a2[1].m128i_i64[0];
  if ( !v5 )
    return 0;
  if ( v3 )
  {
    (*(void (__fastcall **)(__m128i *, __int64, __int64, _QWORD, const __m128i *))(*(_QWORD *)v5 + 112LL))(
      &v12,
      v5,
      v2,
      0,
      a2);
  }
  else
  {
    v13 = v5;
    v12 = _mm_loadu_si128(a2);
  }
  if ( (v12.m128i_i32[1] | v12.m128i_i32[0]) < 0 || !v13 )
    return 0;
  if ( HIDWORD(v12.m128i_i64[1]) == 0xFFFFFFFF )
  {
    v10 = -1;
    v11 = v12.m128i_u32[2];
    if ( v12.m128i_i32[2] )
      return 0;
  }
  else
  {
    v10 = HIDWORD(v12.m128i_i64[1]);
    v11 = v12.m128i_u32[2];
  }
  v6 = **(_QWORD **)(a1 + 208);
  v9 = 0;
  v8 = -1;
  dirtree_resolve_cursor(&v8, v6, &v10);
  if ( v8 != -1 )
    return 2 - (unsigned int)v9;
  return 0;
}
