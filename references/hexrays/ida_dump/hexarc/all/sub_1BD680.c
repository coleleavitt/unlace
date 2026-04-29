__int64 __fastcall sub_1BD680(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __m128i v5; // xmm5
  unsigned int v6; // ebx
  __m128i v8; // [rsp+0h] [rbp-F8h] BYREF
  _QWORD v9[2]; // [rsp+10h] [rbp-E8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-D8h] BYREF
  __int128 v11; // [rsp+28h] [rbp-D0h]
  _QWORD v12[2]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v13; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v14; // [rsp+58h] [rbp-A0h]
  __m128i v15; // [rsp+70h] [rbp-88h] BYREF
  __int64 v16; // [rsp+80h] [rbp-78h]
  __int128 v17; // [rsp+88h] [rbp-70h]
  __int64 v18; // [rsp+98h] [rbp-60h]
  int v19; // [rsp+A0h] [rbp-58h]
  __int64 v20; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v21; // [rsp+B8h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  v9[0] = 0;
  v11 = 0;
  v9[1] = 0;
  v10 = 0;
  v12[0] = 0;
  v12[1] = 0;
  v13 = 0;
  v16 = 0;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  v8 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AB080, (__m128i)(unsigned __int64)v12);
  v14 = 0;
  v15 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)off_4AB080, (__m128i)(unsigned __int64)v9);
  v17 = 0;
  for_all_arglocs(&v15, a1, a4, 0);
  v15.m128i_i64[0] = (__int64)off_4AB080;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  v5 = _mm_load_si128(&v8);
  v16 = 0;
  v18 = 0;
  v19 = -1;
  v20 = 0;
  v15 = v5;
  v17 = 0;
  for_all_arglocs(&v15, a2, a3, 0);
  v15.m128i_i64[0] = (__int64)off_4AB080;
  if ( v16 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v16);
  }
  v6 = sub_5E2A0(v12, v9);
  if ( (_BYTE)v6 )
    v6 = sub_310BC0(&v10, &v13);
  if ( v13 )
  {
    *(_QWORD *)&v14 = 0;
    qfree(v13);
  }
  qfree(v12[0]);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  qfree(v9[0]);
  return v6;
}
