__int64 __fastcall sub_1CE860(const __m128i *a1)
{
  bool v1; // zf
  __int64 v2; // rbp
  char v4; // al
  const char *v5; // r12
  const char **v6; // r13
  const char *v7; // rsi
  __int64 v8; // r12
  __int64 v9; // rdx
  __m128i v10; // xmm0
  int v11; // ebp
  __int64 v12; // rsi
  __int64 v13; // r12
  int tinfo_size; // eax
  int v15; // eax
  __m128i v16; // [rsp+0h] [rbp-148h] BYREF
  const char *v17; // [rsp+10h] [rbp-138h] BYREF
  __int128 v18; // [rsp+18h] [rbp-130h]
  _QWORD v19[4]; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-F8h] BYREF
  _QWORD v21[2]; // [rsp+60h] [rbp-E8h] BYREF
  unsigned __int64 v22; // [rsp+70h] [rbp-D8h] BYREF
  __int64 v23; // [rsp+78h] [rbp-D0h]
  __m128i v24; // [rsp+E8h] [rbp-60h]
  __int64 v25; // [rsp+F8h] [rbp-50h]
  _QWORD v26[9]; // [rsp+100h] [rbp-48h] BYREF

  v1 = a1[2].m128i_i8[12] == 0;
  v2 = a1[2].m128i_i64[0];
  v26[3] = __readfsqword(0x28u);
  if ( v1 )
    goto LABEL_16;
  if ( *(_DWORD *)v2 != 56 )
    return 0;
  if ( *(_BYTE *)(v2 + 64) != 8 )
  {
    if ( !a1[2].m128i_i8[13] )
      return 0;
LABEL_21:
    if ( *(_BYTE *)(v2 + 32) == 6 )
    {
      v8 = sub_3EF7F0(*(_QWORD *)(v2 + 40), 0);
      if ( v8 )
      {
        v9 = *(_QWORD *)(v2 + 24);
        v16 = _mm_loadu_si128(a1 + 1);
        sub_3EE600(v19, *(_QWORD *)(v16.m128i_i64[0] + 64), v9);
        v10 = _mm_load_si128(&v16);
        v25 = v2;
        v19[0] = &off_4BDEE8;
        v26[0] = 0xFFFFFFFF00000000LL;
        v26[1] = 0;
        v24 = v10;
        v11 = sub_3F0520(v19, v8);
        v19[0] = &off_4BDEE8;
        sub_1188E0((__int64)v26);
        v25 = 0;
        v24 = 0;
        v19[0] = &off_4BC428;
        sub_3EE6F0(v19);
        if ( !v11 )
          ++a1[2].m128i_i32[2];
      }
    }
    return 0;
  }
  v4 = *(_BYTE *)(v2 + 32);
  v17 = nullptr;
  v18 = 0;
  if ( v4 == 11 )
  {
    v5 = *(const char **)(v2 + 40);
    goto LABEL_10;
  }
  if ( v4 != 6 )
  {
LABEL_16:
    if ( !a1[2].m128i_i8[13] || *(_DWORD *)v2 != 56 )
      return 0;
    goto LABEL_21;
  }
  if ( !(unsigned __int8)sub_1CE5D0((__int64 *)&v17, *(_QWORD *)(v2 + 40), 1u, 0) )
  {
LABEL_14:
    if ( v17 )
    {
      *(_QWORD *)&v18 = 0;
      qfree(v17);
    }
    goto LABEL_16;
  }
  v5 = s1;
  if ( !(_QWORD)v18 )
    goto LABEL_11;
  v5 = v17;
LABEL_10:
  while ( *v5 == 95 )
    ++v5;
LABEL_11:
  v6 = (const char **)off_4B1440;
  do
  {
    v7 = *v6;
    if ( !*v6 )
      goto LABEL_14;
    ++v6;
  }
  while ( strcmp(v5, v7) );
  v12 = *(_QWORD *)(v2 + 24);
  v20[1] = 0;
  v20[0] = 0xFFFFFFFF00000000LL;
  v21[0] = 0xFFFFFFFF00000000LL;
  v21[1] = 0;
  v22 = 0xFFFFFFFF00000000LL;
  v23 = 0;
  sub_32B5A0(v19, v12);
  v13 = *(_QWORD *)(v2 + 72);
  if ( !*(_QWORD *)(v13 + 32) )
    goto LABEL_33;
  sub_120CC0((__int64)v20, *(unsigned __int8 **)(v13 + 24));
  if ( v2 == a1[1].m128i_i64[1] )
  {
    LOBYTE(v22) = 1;
    v16.m128i_i64[0] = v13 + 96;
    if ( (unsigned __int8)sub_60500((_QWORD *)(v13 + 96)) )
      goto LABEL_33;
    LODWORD(v23) = sub_605E0(v16.m128i_i64[0], 0);
  }
  tinfo_size = get_tinfo_size(0, *(_QWORD *)(v13 + 72), 0);
  HIDWORD(v22) = tinfo_size;
  if ( tinfo_size > SHIDWORD(v20[0]) )
  {
LABEL_33:
    sub_1188E0((__int64)&v22);
    sub_1188E0((__int64)v21);
    sub_1188E0((__int64)v20);
    goto LABEL_14;
  }
  v1 = HIDWORD(v20[0]) == tinfo_size;
  v15 = 10;
  if ( v1 )
    v15 = 4;
  LODWORD(v19[0]) = v15;
  sub_1193D0(v2, (__int64)v19);
  ++a1[2].m128i_i32[2];
  sub_1188E0((__int64)&v22);
  sub_1188E0((__int64)v21);
  sub_1188E0((__int64)v20);
  if ( v17 )
  {
    *(_QWORD *)&v18 = 0;
    qfree(v17);
  }
  return 0;
}
