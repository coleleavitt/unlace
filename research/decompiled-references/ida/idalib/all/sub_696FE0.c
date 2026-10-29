unsigned __int64 __fastcall sub_696FE0(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __m128i *v6; // rbx
  _BYTE *v7; // rcx
  __m128i v8; // rax
  _BYTE *v9; // rsi
  _BYTE *v10; // rsi
  __m128i *v11; // rdx
  __m128i *v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rax
  __int64 v16; // [rsp+0h] [rbp-68h] BYREF
  const __m128i *v17; // [rsp+8h] [rbp-60h] BYREF
  unsigned __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int32 v19; // [rsp+18h] [rbp-50h]
  __m128i v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v22; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v23 = __readfsqword(0x28u);
  v6 = *(__m128i **)(a1 + 1816);
  v22 = nullptr;
  v20 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v21 = 0;
  v18 = unpack_dq(&v20);
  v19 = unpack_dd(&v20);
  if ( a3 )
  {
    sub_696F30((__int64)&v6[3].m128i_i64[1], &v18);
    return v23 - __readfsqword(0x28u);
  }
  v7 = (_BYTE *)v20.m128i_i64[0];
  v16 = 0;
  v8 = v20;
  do
  {
    if ( v8.m128i_i64[0] >= (unsigned __int64)v20.m128i_i64[1] )
    {
      v9 = nullptr;
      goto LABEL_6;
    }
    ++v8.m128i_i64[0];
  }
  while ( *(_BYTE *)(v8.m128i_i64[0] - 1) );
  v9 = (_BYTE *)v20.m128i_i64[0];
  v20.m128i_i64[0] = v8.m128i_i64[0];
  v7 = (_BYTE *)v8.m128i_i64[0];
LABEL_6:
  if ( !*v9 )
    v9 = nullptr;
  v8.m128i_i64[0] = (__int64)v7;
  *(_QWORD *)&v21 = v9;
  do
  {
    if ( v8.m128i_i64[0] >= (unsigned __int64)v8.m128i_i64[1] )
    {
      v10 = nullptr;
      goto LABEL_12;
    }
    ++v8.m128i_i64[0];
  }
  while ( *(_BYTE *)(v8.m128i_i64[0] - 1) );
  v10 = v7;
  v20.m128i_i64[0] = v8.m128i_i64[0];
  v7 = (_BYTE *)v8.m128i_i64[0];
LABEL_12:
  if ( !*v10 )
    v10 = nullptr;
  v8.m128i_i64[0] = (__int64)v7;
  *((_QWORD *)&v21 + 1) = v10;
  do
  {
    if ( v8.m128i_i64[0] >= (unsigned __int64)v8.m128i_i64[1] )
    {
      v7 = nullptr;
      goto LABEL_18;
    }
    ++v8.m128i_i64[0];
  }
  while ( *(_BYTE *)(v8.m128i_i64[0] - 1) );
  v20.m128i_i64[0] = v8.m128i_i64[0];
LABEL_18:
  if ( !*v7 )
    v7 = nullptr;
  v22 = v7;
  if ( !(unsigned __int8)deserialize_tinfo(&v16, 0, &v21, (char *)&v21 + 8, &v22, 0) )
    sub_692CE0(&v16);
  v11 = (__m128i *)v6[4].m128i_i64[1];
  v12 = v6 + 4;
  if ( !v11 )
  {
LABEL_37:
    v17 = (const __m128i *)&v18;
    v12 = sub_6961E0(&v6[3].m128i_i64[1], (__int64)v12, &v17);
    goto LABEL_31;
  }
  do
  {
    while ( 1 )
    {
      v13 = v11[2].m128i_u64[0];
      if ( v13 < v18 )
      {
        v11 = (__m128i *)v11[1].m128i_i64[1];
        goto LABEL_27;
      }
      if ( v18 == v13 && v19 > v11[2].m128i_i32[2] )
        break;
      v12 = v11;
      v11 = (__m128i *)v11[1].m128i_i64[0];
      if ( !v11 )
        goto LABEL_28;
    }
    v11 = (__m128i *)v11[1].m128i_i64[1];
LABEL_27:
    ;
  }
  while ( v11 );
LABEL_28:
  if ( &v6[4] == v12 )
    goto LABEL_37;
  v14 = v12[2].m128i_u64[0];
  if ( v18 < v14 || v14 == v18 && v12[2].m128i_i32[2] > v19 )
    goto LABEL_37;
LABEL_31:
  copy_tinfo_t(&v12[3]);
  clear_tinfo_t(&v16);
  return v23 - __readfsqword(0x28u);
}
