unsigned __int64 __fastcall sub_198320(_DWORD *a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r13
  void *v6; // r14
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  __m128i v8; // [rsp+8h] [rbp-60h]
  __int64 v9; // [rsp+18h] [rbp-50h]
  unsigned __int64 v10; // [rsp+28h] [rbp-40h]

  v3 = *(_QWORD *)(a2 + 8);
  v10 = __readfsqword(0x28u);
  v8 = 0;
  v9 = -1;
  if ( v3 )
  {
    v6 = (void *)qalloc_or_throw();
    memcpy(v6, *(const void **)a2, 8 * v3);
    v9 = a3;
    v7 = v6;
    v8 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)v3);
    sub_1981B0(a1, (__int64)&v7, 19);
    if ( v6 )
      qfree();
  }
  else
  {
    v9 = a3;
    v7 = nullptr;
    sub_1981B0(a1, (__int64)&v7, 19);
  }
  return v10 - __readfsqword(0x28u);
}

