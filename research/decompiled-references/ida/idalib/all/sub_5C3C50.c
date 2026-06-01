unsigned __int64 __fastcall sub_5C3C50(_QWORD *a1)
{
  _BYTE *v1; // r13
  void **v2; // rax
  __int64 v3; // rsi
  __int64 v4; // rdx
  unsigned __int64 v5; // rbp
  __int64 i; // rax
  unsigned __int64 *v7; // rbx
  void *v8; // rdi
  __m128i v10; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v11; // [rsp+10h] [rbp-B8h] BYREF
  _QWORD v12[2]; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v13[48]; // [rsp+30h] [rbp-98h] BYREF
  char v14; // [rsp+60h] [rbp-68h] BYREF
  void *ptr; // [rsp+78h] [rbp-50h] BYREF
  __int128 v16; // [rsp+80h] [rbp-48h]
  __int64 v17; // [rsp+90h] [rbp-38h]
  unsigned __int64 v18; // [rsp+98h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v1 = v13;
  v2 = (void **)v13;
  v3 = a1[22];
  v4 = a1[1];
  v12[1] = v3;
  v12[0] = v4;
  do
  {
    *v2 = nullptr;
    v2 += 3;
    *((_OWORD *)v2 - 1) = 0;
  }
  while ( v2 != &ptr );
  ptr = nullptr;
  v17 = 0;
  v16 = 0;
  if ( v3 )
  {
    v5 = 0;
    for ( i = switch_dbctx(*(int *)(v4 + 16)); ; i = switch_dbctx(*(int *)(a1[1] + 4 * v5 + 16)) )
    {
      sub_5BB440(*(__m128i **)(i + 1672), (__int64)v1);
      ++v5;
      v1 += 24;
      if ( v5 >= a1[22] )
        break;
    }
  }
  v11 = 0u;
  v10 = 0;
  if ( sub_5B6250 )
  {
    v10.m128i_i64[0] = (__int64)sub_5B6250;
    v11 = _mm_unpacklo_epi64(_mm_loadl_epi64(&off_2B2F998), (__m128i)(unsigned __int64)sub_5B6060);
  }
  sub_5C1AA0(v12, &v10, 1);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128i_i64[0])(&v10, &v10, 3);
  sub_5BE780(v12, a1 + 19, 1);
  if ( ptr )
  {
    *(_QWORD *)&v16 = 0;
    qfree(ptr);
  }
  v7 = (unsigned __int64 *)&v14;
  do
  {
    v8 = (void *)*v7;
    if ( *v7 )
    {
      v7[1] = 0;
      qfree(v8);
    }
    v7 -= 3;
  }
  while ( v7 != &v11.m128i_u64[1] );
  return v18 - __readfsqword(0x28u);
}
