unsigned __int64 __fastcall sub_3D8920(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __m128i *v6; // rbx
  unsigned __int64 v7; // rax
  __m128i *v8; // rdx
  __m128i *v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rcx
  unsigned __int64 v13; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int64 *v14; // [rsp+8h] [rbp-60h] BYREF
  __m128i v15; // [rsp+10h] [rbp-58h] BYREF
  _BYTE v16[24]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+40h] [rbp-28h]
  unsigned __int64 v19; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v19 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 1672);
  v15 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v7 = unpack_dq(&v15);
  v13 = v7;
  if ( a3 )
  {
    sub_3D85B0((__int64)&v6[154].m128i_i64[1], v7);
    return v19 - __readfsqword(0x28u);
  }
  *(_QWORD *)v16 = 0;
  v17 = 0;
  v18 = 0;
  *(__m128i *)&v16[8] = _mm_load_si128((const __m128i *)&xmmword_23A76C0);
  sub_41C0A0(v16, &v15);
  v8 = (__m128i *)v6[155].m128i_i64[1];
  if ( v8 )
  {
    v9 = v6 + 155;
    do
    {
      while ( 1 )
      {
        v10 = v8[1].m128i_i64[0];
        v11 = v8[1].m128i_i64[1];
        if ( v8[2].m128i_i64[0] < v13 )
          break;
        v9 = v8;
        v8 = (__m128i *)v8[1].m128i_i64[0];
        if ( !v10 )
          goto LABEL_7;
      }
      v8 = (__m128i *)v8[1].m128i_i64[1];
    }
    while ( v11 );
LABEL_7:
    if ( &v6[155] != v9 && v13 >= v9[2].m128i_i64[0] )
      goto LABEL_10;
  }
  else
  {
    v9 = v6 + 155;
  }
  v14 = &v13;
  v9 = sub_3B9250(&v6[154].m128i_i64[1], v9, &v14);
LABEL_10:
  *(__m128i *)((char *)v9 + 40) = _mm_load_si128((const __m128i *)v16);
  *(__m128i *)((char *)v9 + 56) = _mm_load_si128((const __m128i *)&v16[16]);
  v9[4].m128i_i64[1] = v18;
  return v19 - __readfsqword(0x28u);
}
