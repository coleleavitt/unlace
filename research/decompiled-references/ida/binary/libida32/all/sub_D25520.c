__int64 __fastcall sub_D25520(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __m128i v6; // rax
  __int64 v7; // rbp
  __m128i v9; // [rsp+0h] [rbp-78h] BYREF
  __m128i v10; // [rsp+10h] [rbp-68h] BYREF
  __m128i v11; // [rsp+20h] [rbp-58h] BYREF
  void *v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned int v13; // [rsp+38h] [rbp-40h]
  char v14; // [rsp+3Ch] [rbp-3Ch]
  void *v15; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-30h]

  v6.m128i_i64[0] = sub_D21170(a1, a2, a3, a4, a5, a6);
  v7 = a1[22];
  v10 = v6;
  v9 = _mm_loadu_si128((const __m128i *)sub_DFDA20(v7, 16));
  sub_DFDA50(v7, 16);
  v11 = _mm_load_si128(&v9);
  sub_D23FD0((__int64)&v12, (__int64)&v11, 0);
  if ( v14 )
    sub_21E3050(&v15, &v12, a2);
  else
    sub_21E30A0(&v15, &v12, a2);
  if ( v13 > 0x40 && v12 )
    operator delete[](v12);
  sub_CE8850((void **)&v10, (__int64)&v15);
  if ( v16 > 0x40 && v15 )
    operator delete[](v15);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v10);
  return 1;
}

