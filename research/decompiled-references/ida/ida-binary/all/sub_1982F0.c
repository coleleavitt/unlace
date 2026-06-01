__int64 __fastcall sub_1982F0(const __m128i *a1, int a2)
{
  __int32 v3; // eax
  __m128i v4; // xmm0
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbx
  int v12; // [rsp+Ch] [rbp-4Ch] BYREF
  _OWORD v13[2]; // [rsp+10h] [rbp-48h] BYREF
  __int32 v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+38h] [rbp-20h]
  unsigned __int64 v16; // [rsp+48h] [rbp-10h]

  v12 = a2;
  v16 = __readfsqword(0x28u);
  v3 = a1[160].m128i_i32[0];
  v13[0] = _mm_loadu_si128(a1 + 158);
  v4 = _mm_loadu_si128(a1 + 159);
  v15 = 0;
  v5 = a1[160].m128i_i64[1];
  v14 = v3;
  v13[1] = v4;
  if ( v5 )
    v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = 0;
  if ( (unsigned __int8)bookmarks_t_get(v13, 0, &v12, a1[161].m128i_i64[0]) )
  {
    v6 = a1[161].m128i_i64[0];
    v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, v6);
  }
  else
  {
    v10 = -1;
  }
  if ( v15 )
    qfree(v15, v6, v7, v8, v9);
  return v10;
}
