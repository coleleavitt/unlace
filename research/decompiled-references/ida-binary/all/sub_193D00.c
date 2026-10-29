__int64 __fastcall sub_193D00(__int64 a1, __int64 a2, _DWORD *a3)
{
  int dirtree_id; // eax
  const char *v5; // r13
  __int64 v6; // r8
  __int64 v8; // [rsp+0h] [rbp-68h] BYREF
  __int64 v9; // [rsp+8h] [rbp-60h] BYREF
  __m128i v10; // [rsp+10h] [rbp-58h] BYREF
  __m128i v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  if ( !*(_QWORD *)(a1 + 40) )
    return 0;
  dirtree_id = bookmarks_t_get_dirtree_id();
  if ( dirtree_id == 4 )
  {
    v5 = "Address bookmarks";
  }
  else
  {
    if ( dirtree_id != 6 )
      return 0;
    v5 = "Local Types bookmarks";
  }
  v6 = (unsigned int)*a3;
  v8 = -1;
  v9 = sub_1985C0(0, a1, a2, v5, v6, 1);
  v10 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)&v9, (__m128i)(unsigned __int64)&v8);
  v11 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_85C650), (__m128i)(unsigned __int64)sub_191BC0);
  sub_4C21B0(v5, v9, 0, &v10, 0);
  if ( v11.m128i_i64[0] )
    ((void (__fastcall *)(__m128i *, __m128i *, __int64))v11.m128i_i64[0])(&v10, &v10, 3);
  if ( v8 >= 0 )
  {
    *a3 = v8;
    return 1;
  }
  return 0;
}
