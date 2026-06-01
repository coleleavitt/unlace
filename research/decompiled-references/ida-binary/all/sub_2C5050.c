__int64 __fastcall sub_2C5050(
        _QWORD *a1,
        unsigned __int8 a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  __int64 v10; // rdx
  __int32 v11; // eax
  double v12; // xmm4_8
  double v13; // xmm5_8
  unsigned int v14; // ebx
  __int64 v16; // [rsp+0h] [rbp-38h] BYREF
  __int128 v17; // [rsp+8h] [rbp-30h]
  unsigned __int64 v18; // [rsp+18h] [rbp-20h]

  v10 = a1[55];
  v18 = __readfsqword(0x28u);
  v16 = 0;
  v17 = 0;
  if ( v10 )
    v10 = *(_QWORD *)(v10 + 8);
  v11 = sub_2BDB00(a1, (__int64)&v16, v10, a2, (__m128)0LL, a4, a5, a6, a7, a8, a9, a10);
  v14 = sub_2C4D80((__int64)a1, (__int64)&v16, v11, a2, (__m128)0LL, a4, a5, a6, v12, v13, a9, a10);
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16, (const char *)&v16);
  }
  return v14;
}
