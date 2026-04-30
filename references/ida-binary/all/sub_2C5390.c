__int64 __fastcall sub_2C5390(
        _QWORD *a1,
        double a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // rbp
  int v10; // eax
  double v11; // xmm4_8
  double v12; // xmm5_8
  unsigned int v13; // ebp
  __int64 v15; // [rsp+0h] [rbp-38h] BYREF
  __int128 v16; // [rsp+8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+18h] [rbp-20h]

  v9 = a1[55];
  v17 = __readfsqword(0x28u);
  v15 = 0;
  v16 = 0;
  if ( v9 )
    v9 = *(_QWORD *)(v9 + 8);
  v10 = sub_2BDB00(a1, (__int64)&v15, v9, 1, (__m128)0LL, a3, a4, a5, a6, a7, a8, a9);
  if ( (_QWORD)v16
    || (v10 = sub_2BDB00(a1, (__int64)&v15, v9, 0, (__m128)0LL, a3, a4, a5, v11, v12, a8, a9), v13 = 0, (_QWORD)v16) )
  {
    v13 = sub_2C5150((__int64)a1, (__int64)&v15, v10, (__m128)0LL, a3, a4, a5, v11, v12, a8, a9);
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, (const char *)&v15);
  }
  return v13;
}
