__int64 __fastcall sub_3E4280(_QWORD *a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v6; // al
  __int8 v7; // al
  __m128i v8; // xmm0
  __m128i v10; // [rsp+0h] [rbp-58h] BYREF
  __int128 v11; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+28h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v10.m128i_i64[0] = -1;
  v10.m128i_i8[8] = 0;
  if ( (a4 & 2) != 0
    || ((a4 & 1) != 0 ? (v6 = sub_3E2000(a1, (__int64)&v10, a3)) : (v6 = sub_3E3290(a1, (__int64)&v10, a3)), !v6) )
  {
    if ( (a4 & 4) != 0 || !(unsigned __int8)sub_4108F0(a1, &v10, a3) )
    {
      *(_QWORD *)a2 = -1;
      return 0;
    }
    v6 = 0;
  }
  *(_BYTE *)(a2 + 16) = v6;
  v7 = v10.m128i_i8[8];
  v8 = _mm_loadl_epi64(&v10);
  *(_BYTE *)(a2 + 19) = a4;
  *(_BYTE *)(a2 + 17) = v7 & 0x1F;
  *(_BYTE *)(a2 + 18) = (v7 & 0x20) != 0;
  *(__m128i *)a2 = _mm_unpacklo_epi64(v8, (__m128i)a3);
  if ( (a4 & 0x18) == 0 )
    return 1;
  v11 = 0;
  getinf_buf(26, &v11, 16);
  if ( (v10.m128i_i64[0] >= (unsigned __int64)v11 && v10.m128i_i64[0] < *((_QWORD *)&v11 + 1)) == ((a4 & 0x10) != 0) )
    return 1;
  else
    return sub_3E4150(a1, a2);
}
