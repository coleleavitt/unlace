__int128 *__fastcall sub_2BDFD0(
        _QWORD *a1,
        unsigned int a2,
        unsigned int a3,
        double a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        __m128 a9,
        __m128 a10,
        __m128 a11)
{
  unsigned __int64 v11; // rbx
  int v12; // eax
  __int64 (__fastcall *v13)(__int64, int, int); // rcx
  __int64 v14; // rdx
  _QWORD *v15; // rdx
  __int128 *result; // rax
  __m128i v17; // [rsp+8h] [rbp-30h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v11 = (int)a3;
  v18 = __readfsqword(0x28u);
  v17.m128i_i64[0] = __PAIR64__(a3, a2);
  v17.m128i_i64[1] = -1;
  v12 = sub_2B6070(a1, &v17, (__int64)&v17.m128i_i64[1], 0, a4, a5, a6, a7, a8, a9, a10, a11);
  if ( v12 != -1 )
  {
    v13 = *(__int64 (__fastcall **)(__int64, int, int))(*a1 + 672LL);
    if ( v13 != sub_2B23E0 )
    {
      result = (__int128 *)v13((__int64)a1, v12, v11);
LABEL_8:
      if ( result )
        return result;
      return &xmmword_8C95C0;
    }
    if ( v12 >= 0 )
    {
      v14 = a1[55];
      if ( (unsigned __int64)v12 < *(_QWORD *)(v14 + 24) )
      {
        v15 = (_QWORD *)(*(_QWORD *)(v14 + 16) + 24LL * v12);
        if ( (v11 & 0x80000000) == 0LL && v11 < v15[1] )
        {
          result = (__int128 *)(*v15 + 272 * v11);
          goto LABEL_8;
        }
      }
    }
  }
  return &xmmword_8C95C0;
}
