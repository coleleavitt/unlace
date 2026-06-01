void __fastcall sub_1BF0CF0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6,
        __m128 a7,
        __m128 a8,
        unsigned int *a9,
        char a10,
        unsigned int a11)
{
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  _QWORD *v15; // rax
  unsigned __int8 v16; // r9
  __int128 v17; // [rsp-40h] [rbp-68h]

  v13 = *(_QWORD *)((a2 & 0xFFFFFFFFFFFFFFF8LL) + 16);
  v14 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v15 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF8LL);
  if ( (v13 & 4) != 0 )
    v15 = (_QWORD *)*v15;
  if ( v15 )
    v15 -= 8;
  v16 = *(_BYTE *)(v14 + 28) & 0x7F;
  if ( (unsigned int)v16 - 53 <= 1 )
  {
    v14 = *(_QWORD *)(v14 + 64);
    v16 = *(_BYTE *)(v14 + 28) & 0x7F;
  }
  if ( v16 == 71 )
  {
    *((_QWORD *)&v17 + 1) = a5;
    *(_QWORD *)&v17 = a4;
    sub_1BF0A40(
      a1,
      (_QWORD *)v14,
      a2,
      (__int64)v15,
      0,
      a3,
      *(double *)a7.m128_u64,
      a8,
      v17,
      a6,
      (__int64)a9,
      a10,
      0,
      a11);
  }
  else
  {
    sub_1BEF9D0(a1, v14, a2, (__int64)v15, a3, a4, a7, a8, a5, a6, a9, a10, 0, 0, 0, a11, 0);
  }
}
