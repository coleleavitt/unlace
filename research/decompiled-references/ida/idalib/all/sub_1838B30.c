__int64 __fastcall sub_1838B30(__int64 a1, __int64 a2)
{
  __m128i si128; // xmm0
  __int64 v3; // rbx
  __int64 v4; // r14
  __m128i v5; // rax
  _WORD *v6; // r15
  __int16 v7; // ax
  unsigned int v8; // eax
  __m128i v10; // [rsp+10h] [rbp-118h] BYREF
  __int64 v11; // [rsp+20h] [rbp-108h]
  __m128 v12; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v13; // [rsp+40h] [rbp-E8h]
  __int64 v14; // [rsp+48h] [rbp-E0h]
  __int64 v15; // [rsp+50h] [rbp-D8h]
  _BYTE v16[200]; // [rsp+60h] [rbp-C8h] BYREF

  sub_EE9E50(&v12, a2);
  si128 = _mm_load_si128((const __m128i *)&v12);
  v3 = v14;
  v10 = si128;
  v4 = v15;
  v11 = v13;
  v5 = si128;
LABEL_2:
  if ( v3 == v5.m128i_i64[0] )
    goto LABEL_11;
  do
  {
    do
    {
      if ( (v5.m128i_i8[8] & 3) == 0 )
      {
        v6 = *(_WORD **)v5.m128i_i64[0];
        if ( !*(_QWORD *)v5.m128i_i64[0] )
          goto LABEL_14;
        v7 = *v6 & 0x1FF;
        if ( v7 != 139 )
          goto LABEL_6;
LABEL_17:
        v8 = sub_EEB7E0((unsigned __int64)v6, a2, *(double *)si128.m128i_i64);
        a2 = a1 + 8;
        sub_168B9F0((__int64)v16, (__int64 *)(a1 + 8), v8, 0x1356u, 0);
        sub_15F7200(v16);
        v7 = *v6 & 0x1FF;
        goto LABEL_6;
      }
      v6 = *(_WORD **)sub_EF2B30((__int64)&v10);
      if ( !v6 )
        goto LABEL_8;
      v7 = *v6 & 0x1FF;
      if ( v7 == 139 )
        goto LABEL_17;
LABEL_6:
      if ( ((v7 + 509) & 0x1FFu) > 0x7E )
      {
        a2 = (__int64)v6;
        sub_1838B30(a1, v6);
      }
LABEL_8:
      v5.m128i_i64[1] = v10.m128i_i64[1];
      if ( (v10.m128i_i8[8] & 3) == 0 )
      {
        v5.m128i_i64[0] = v10.m128i_i64[0];
LABEL_14:
        v5.m128i_i64[0] += 8;
        v10.m128i_i64[0] = v5.m128i_i64[0];
        goto LABEL_2;
      }
      if ( (v10.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) == 0 )
      {
        a2 = 1;
        sub_EF2750((unsigned __int64 *)&v10, 1);
        v5 = v10;
        goto LABEL_2;
      }
      sub_EF2960((__int64)&v10);
      v5 = v10;
    }
    while ( v3 != v10.m128i_i64[0] );
LABEL_11:
    ;
  }
  while ( v4 != v5.m128i_i64[1] );
  return v5.m128i_i64[0];
}
