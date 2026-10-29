unsigned __int64 __fastcall sub_677220(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v6; // rbx
  _BYTE *v7; // rcx
  __m128i v8; // rax
  _BYTE *v9; // rsi
  _BYTE *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v16; // [rsp+8h] [rbp-60h] BYREF
  unsigned int *v17; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v18; // [rsp+18h] [rbp-50h] BYREF
  int v19; // [rsp+1Ch] [rbp-4Ch]
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
  v18 = unpack_dd(&v20);
  v19 = unpack_dd(&v20);
  if ( a3 )
  {
    sub_677170(v6 + 56, &v18);
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
    sub_673050();
  v11 = *(_QWORD *)(v6 + 72);
  v12 = v6 + 64;
  if ( !v11 )
  {
LABEL_37:
    v17 = &v18;
    v12 = sub_676470((_QWORD *)(v6 + 56), v12, (__int64 **)&v17);
    goto LABEL_31;
  }
  do
  {
    while ( 1 )
    {
      v13 = *(_DWORD *)(v11 + 32);
      if ( v13 < v18 )
      {
        v11 = *(_QWORD *)(v11 + 24);
        goto LABEL_27;
      }
      if ( v18 == v13 && v19 > *(_DWORD *)(v11 + 36) )
        break;
      v12 = v11;
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_28;
    }
    v11 = *(_QWORD *)(v11 + 24);
LABEL_27:
    ;
  }
  while ( v11 );
LABEL_28:
  if ( v6 + 64 == v12 )
    goto LABEL_37;
  v14 = *(_DWORD *)(v12 + 32);
  if ( v18 < v14 || v14 == v18 && *(_DWORD *)(v12 + 36) > v19 )
    goto LABEL_37;
LABEL_31:
  copy_tinfo_t(v12 + 40);
  clear_tinfo_t(&v16);
  return v23 - __readfsqword(0x28u);
}

