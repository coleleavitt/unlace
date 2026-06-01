__int64 __fastcall lsite_collect_files(
        void **a1,
        __int64 a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        const __m128i *a6,
        __int64 *a7)
{
  void (__fastcall *v9)(__int128 *, const __m128i *, __int64); // rax
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int128 v15; // [rsp+20h] [rbp-60h] BYREF
  __m128i v16; // [rsp+30h] [rbp-50h]
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]

  v9 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a6[1].m128i_i64[0];
  v17 = __readfsqword(0x28u);
  v16 = 0u;
  v15 = 0;
  if ( v9 )
  {
    v9(&v15, a6, 2);
    v16 = _mm_loadu_si128(a6 + 1);
    v11 = sub_8FA860(a1, a2, a3, a4, a5, (__int64)&v15, a7);
  }
  else
  {
    v11 = sub_8FA860(a1, a2, a3, a4, a5, (__int64)&v15, a7);
  }
  v12 = v11;
  if ( v16.m128i_i64[0] )
    ((void (__fastcall *)(__int128 *, __int128 *, __int64))v16.m128i_i64[0])(&v15, &v15, 3);
  return v12;
}
