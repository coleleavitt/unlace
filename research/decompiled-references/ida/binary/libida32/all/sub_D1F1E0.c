__int64 __fastcall sub_D1F1E0(_QWORD *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // rbp
  unsigned int v7; // r14d
  __m128i v8; // rax
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r14d
  __int64 v14; // [rsp+8h] [rbp-90h]
  __m128i v15; // [rsp+20h] [rbp-78h] BYREF
  void *v16; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v17; // [rsp+38h] [rbp-60h]
  char v18; // [rsp+3Ch] [rbp-5Ch]
  _QWORD v19[11]; // [rsp+40h] [rbp-58h] BYREF

  v6 = a1[22];
  v7 = *(_DWORD *)sub_DFDA20(v6, 8);
  sub_DFDA50(v6, 8);
  v8.m128i_i64[0] = sub_D1E4A0(a1, a3);
  v15 = v8;
  v9 = (a4 >> 3) & 7;
  if ( ((a4 >> 3) & 7) == 7 )
    v9 = 1;
  v17 = 32;
  v16 = (void *)v7;
  v18 = 1;
  v10 = sub_21D5390(a1, a3, v8.m128i_i64[1]);
  v14 = v10;
  if ( a3 == v10 )
    sub_21DBE90(v19, v10);
  else
    sub_21D7CC0(v19, a3);
  v11 = (unsigned __int8)v18 ^ 1u;
  if ( v19[0] == v14 )
    v12 = sub_21DE2A0(v19, &v16, v11, v9);
  else
    v12 = sub_21D7400(v19, &v16, v11, v9);
  sub_CDAFD0((__int64)&v15, v19);
  sub_971860(v19);
  if ( v17 > 0x40 && v16 )
    operator delete[](v16);
  *(__m128i *)sub_DFD980(a1[22], 16) = _mm_load_si128(&v15);
  return sub_DA7060(a1, a2, &v15, v12, a4);
}

