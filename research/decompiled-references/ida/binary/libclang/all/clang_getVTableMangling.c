__int64 __fastcall clang_getVTableMangling(int a1, int a2, int a3, int a4, int a5, int a6, __int128 a7, __int128 a8)
{
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r12
  __m128i v12; // [rsp+0h] [rbp-78h]
  _BYTE v13[8]; // [rsp+28h] [rbp-50h] BYREF
  void *src[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v15; // [rsp+40h] [rbp-38h] BYREF

  if ( (_DWORD)a7 != 800 )
    return sub_690460();
  v12 = _mm_loadu_si128((const __m128i *)&a7);
  v9 = sub_639EF0(
         a1,
         a2,
         a3,
         a4,
         a5,
         a6,
         v12.m128i_i32[0],
         v12.m128i_i32[2],
         _mm_loadu_si128((const __m128i *)&a8).m128i_i64[0]);
  v10 = sub_798D40(v9);
  sub_A55990(v13, v10);
  sub_A56130(src, v13, v9);
  v11 = sub_6905C0(src[0], (size_t)src[1]);
  if ( src[0] != &v15 )
    operator delete(src[0], v15 + 1);
  sub_A55A00(v13);
  return v11;
}

