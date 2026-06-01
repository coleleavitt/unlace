__int64 __fastcall sub_198090(const __m128i *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int32 v7; // eax
  __m128i v8; // xmm0
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // r8
  __m128i v15; // [rsp+0h] [rbp-58h] BYREF
  __m128i v16; // [rsp+10h] [rbp-48h]
  __int32 v17; // [rsp+20h] [rbp-38h]
  __int64 v18; // [rsp+28h] [rbp-30h]
  unsigned __int64 v19; // [rsp+38h] [rbp-20h]

  v7 = a1[160].m128i_i32[0];
  v19 = __readfsqword(0x28u);
  v18 = 0;
  v15 = _mm_loadu_si128(a1 + 158);
  v8 = _mm_loadu_si128(a1 + 159);
  v9 = a1[160].m128i_i64[1];
  v17 = v7;
  v16 = v8;
  if ( v9 )
    v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int64, __int32))(*(_QWORD *)v9 + 16LL))(
            v9,
            a2,
            a3,
            a4,
            a5,
            a6,
            v15.m128i_i64[0],
            v15.m128i_i64[1],
            v16.m128i_i64[0],
            v16.m128i_i64[1],
            v17);
  v12 = bookmarks_t_get_by_inode(&v15, 0, a2, a1[161].m128i_i64[0]);
  if ( v18 )
    qfree(v18, 0, v10, v11, v13);
  return v12;
}
