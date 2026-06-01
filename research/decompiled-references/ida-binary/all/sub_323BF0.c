__int64 __fastcall sub_323BF0(
        __int64 a1,
        unsigned int a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 result; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __m128 v16; // xmm4
  __m128 v17; // xmm5
  __int64 v18; // rbp
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __m128 v22; // xmm4
  __m128 v23; // xmm5
  const char *v24; // rsi
  const char *v25; // [rsp+0h] [rbp-38h] BYREF
  __int128 v26; // [rsp+8h] [rbp-30h]
  unsigned __int64 v27; // [rsp+18h] [rbp-20h]

  v27 = __readfsqword(0x28u);
  result = 0;
  if ( a2 )
  {
    v11 = move_segm_strerror(a2);
    v18 = v11;
    if ( a1 )
    {
      v25 = nullptr;
      v26 = 0;
      get_segm_name(&v25, a1, 0);
      v24 = &s1;
      if ( (_QWORD)v26 )
        v24 = v25;
      sub_169630((int)"%s: %s", (__int64)v24, v18, v19, v20, v21, (__m128)0LL, a4, a5, a6, v22, v23, a9, a10, (char)v25);
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree(v25, v24);
      }
    }
    else
    {
      sub_169630((int)"%s", v11, v12, v13, v14, v15, a3, a4, a5, a6, v16, v17, a9, a10, (char)v25);
    }
    return 1;
  }
  return result;
}
