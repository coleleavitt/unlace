unsigned __int64 __fastcall sub_673A40(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  unsigned int v7; // eax
  _BYTE *v8; // rcx
  __m128i v9; // rax
  _BYTE *v10; // rsi
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // r8
  __int64 v15; // rcx
  unsigned int v17; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  unsigned int *v19; // [rsp+18h] [rbp-50h] BYREF
  __m128i v20; // [rsp+20h] [rbp-48h] BYREF
  __int128 v21; // [rsp+30h] [rbp-38h] BYREF
  _BYTE *v22; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v23; // [rsp+48h] [rbp-20h]

  v3 = *(_QWORD *)(a2 + 8);
  v4 = *(unsigned int *)(a2 + 4);
  v23 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a1 + 1624);
  v22 = nullptr;
  v20 = _mm_unpacklo_epi64((__m128i)v3, (__m128i)(v3 + v4));
  v21 = 0;
  v7 = unpack_dd(&v20);
  v17 = v7;
  if ( a3 )
  {
    sub_6738D0((_QWORD *)(v6 + 8), v7);
    return v23 - __readfsqword(0x28u);
  }
  v8 = (_BYTE *)v20.m128i_i64[0];
  v18 = 0;
  v9 = v20;
  do
  {
    if ( v9.m128i_i64[0] >= (unsigned __int64)v20.m128i_i64[1] )
    {
      v10 = nullptr;
      goto LABEL_6;
    }
    ++v9.m128i_i64[0];
  }
  while ( *(_BYTE *)(v9.m128i_i64[0] - 1) );
  v10 = (_BYTE *)v20.m128i_i64[0];
  v20.m128i_i64[0] = v9.m128i_i64[0];
  v8 = (_BYTE *)v9.m128i_i64[0];
LABEL_6:
  if ( !*v10 )
    v10 = nullptr;
  v9.m128i_i64[0] = (__int64)v8;
  *(_QWORD *)&v21 = v10;
  do
  {
    if ( v9.m128i_i64[0] >= (unsigned __int64)v9.m128i_i64[1] )
    {
      v11 = nullptr;
      goto LABEL_12;
    }
    ++v9.m128i_i64[0];
  }
  while ( *(_BYTE *)(v9.m128i_i64[0] - 1) );
  v11 = v8;
  v20.m128i_i64[0] = v9.m128i_i64[0];
  v8 = (_BYTE *)v9.m128i_i64[0];
LABEL_12:
  if ( !*v11 )
    v11 = nullptr;
  v9.m128i_i64[0] = (__int64)v8;
  *((_QWORD *)&v21 + 1) = v11;
  do
  {
    if ( v9.m128i_i64[0] >= (unsigned __int64)v9.m128i_i64[1] )
    {
      v8 = nullptr;
      goto LABEL_18;
    }
    ++v9.m128i_i64[0];
  }
  while ( *(_BYTE *)(v9.m128i_i64[0] - 1) );
  v20.m128i_i64[0] = v9.m128i_i64[0];
LABEL_18:
  if ( !*v8 )
    v8 = nullptr;
  v22 = v8;
  if ( !(unsigned __int8)deserialize_tinfo(&v18, 0, &v21, (char *)&v21 + 8, &v22, 0) )
    sub_673050();
  v12 = *(_QWORD *)(v6 + 24);
  if ( v12 )
  {
    v13 = v6 + 16;
    do
    {
      while ( 1 )
      {
        v14 = *(_QWORD *)(v12 + 16);
        v15 = *(_QWORD *)(v12 + 24);
        if ( *(_DWORD *)(v12 + 32) < v17 )
          break;
        v13 = v12;
        v12 = *(_QWORD *)(v12 + 16);
        if ( !v14 )
          goto LABEL_26;
      }
      v12 = *(_QWORD *)(v12 + 24);
    }
    while ( v15 );
LABEL_26:
    if ( v13 != v6 + 16 && v17 >= *(_DWORD *)(v13 + 32) )
      goto LABEL_29;
  }
  else
  {
    v13 = v6 + 16;
  }
  v19 = &v17;
  v13 = sub_6732D0((_QWORD *)(v6 + 8), v13, &v19);
LABEL_29:
  copy_tinfo_t(v13 + 40);
  clear_tinfo_t(&v18);
  return v23 - __readfsqword(0x28u);
}

