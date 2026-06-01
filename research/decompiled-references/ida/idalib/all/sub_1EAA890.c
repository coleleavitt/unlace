__m128i *__fastcall sub_1EAA890(__m128i *a1, __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // rdx
  _BYTE *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  _QWORD v9[2]; // [rsp+0h] [rbp-78h] BYREF
  __m128i v10; // [rsp+10h] [rbp-68h] BYREF
  _QWORD v11[2]; // [rsp+20h] [rbp-58h] BYREF
  __m128i v12; // [rsp+30h] [rbp-48h] BYREF
  __int64 v13; // [rsp+40h] [rbp-38h]

  if ( *(_BYTE *)(a2 + 96) == 2 )
  {
    v4 = *(_BYTE **)(a2 + 128);
    v5 = *(_QWORD *)(a2 + 136);
    v9[0] = &v10;
    sub_1EA9CC0(v9, v4, (__int64)&v4[v5]);
    v6 = *(_BYTE **)(a2 + 160);
    v7 = *(_QWORD *)(a2 + 168);
    v11[0] = &v12;
    sub_1EA9CC0(v11, v6, (__int64)&v6[v7]);
    v13 = *(_QWORD *)(a2 + 88);
    a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
    if ( (__m128i *)v9[0] == &v10 )
    {
      a1[1] = _mm_load_si128(&v10);
    }
    else
    {
      a1->m128i_i64[0] = v9[0];
      a1[1].m128i_i64[0] = v10.m128i_i64[0];
    }
    a1->m128i_i64[1] = v9[1];
    a1[2].m128i_i64[0] = (__int64)a1[3].m128i_i64;
    if ( (__m128i *)v11[0] == &v12 )
    {
      a1[3] = _mm_load_si128(&v12);
    }
    else
    {
      a1[2].m128i_i64[0] = v11[0];
      a1[3].m128i_i64[0] = v12.m128i_i64[0];
    }
    v8 = v11[1];
    a1[4].m128i_i8[8] = 1;
    a1[2].m128i_i64[1] = v8;
    a1[4].m128i_i64[0] = v13;
    return a1;
  }
  else
  {
    a1[4].m128i_i8[8] = 0;
    return a1;
  }
}
