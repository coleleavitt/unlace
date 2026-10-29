__int64 __fastcall sub_AD5F20(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // r9
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  __int64 v8; // r12
  __m128i v9; // rax
  __int64 v10; // r13
  __int64 v11; // rcx
  __m128i v13; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v14; // [rsp+10h] [rbp-C8h]
  __m128i v15; // [rsp+20h] [rbp-B8h]
  __int64 v16; // [rsp+30h] [rbp-A8h]
  __m128i v17; // [rsp+40h] [rbp-98h] BYREF
  __m128i v18; // [rsp+50h] [rbp-88h] BYREF
  __m128i v19; // [rsp+60h] [rbp-78h] BYREF
  __int64 v20; // [rsp+70h] [rbp-68h]
  __int64 v21; // [rsp+78h] [rbp-60h]
  __int64 v22; // [rsp+80h] [rbp-58h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = *(unsigned int *)(a2 + 16);
  v15.m128i_i64[0] = 0;
  v13 = (__m128i)(unsigned __int64)(a2 + 32);
  v14.m128i_i64[1] = a2 + 8 * (((v2 & 8) != 0) + v3 + 1) + 32;
  sub_ACC9C0((__int64)&v17, (__int64)&v13, a1);
  v9.m128i_i64[0] = v17.m128i_i64[0];
  v5 = _mm_load_si128(&v17);
  v6 = _mm_load_si128(&v18);
  v7 = _mm_load_si128(&v19);
  v16 = v20;
  v13 = v5;
  v8 = v21;
  v9.m128i_i64[1] = v5.m128i_i64[1];
  v10 = v22;
  v14 = v6;
  v15 = v7;
LABEL_2:
  if ( v8 != v9.m128i_i64[0] )
    goto LABEL_3;
  while ( v10 != v9.m128i_i64[1] )
  {
    do
    {
LABEL_3:
      if ( (v9.m128i_i8[8] & 3) != 0 )
        v9.m128i_i64[0] = sub_EF2B30(&v13);
      sub_AD2220(a1 + 8, 0, 0, *(_QWORD *)v9.m128i_i64[0], a1, v4);
      v9.m128i_i64[1] = v13.m128i_i64[1];
      if ( (v13.m128i_i8[8] & 3) != 0 )
      {
        if ( (v13.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_EF2960(&v13);
        else
          sub_EF2750(&v13, 1);
        v9 = v13;
      }
      else
      {
        v9.m128i_i64[0] = v13.m128i_i64[0] + 8;
        v13.m128i_i64[0] += 8;
      }
      v11 = v14.m128i_i64[1];
LABEL_8:
      if ( v9.m128i_i64[0] != v11 )
      {
LABEL_9:
        if ( (v9.m128i_i8[8] & 3) != 0 )
          goto LABEL_20;
LABEL_10:
        if ( *(_DWORD *)(v16 + 4) == 1 )
        {
          if ( (**(_WORD **)v9.m128i_i64[0] & 0x1FF) != 0x70 )
            goto LABEL_12;
          goto LABEL_16;
        }
        goto LABEL_17;
      }
      while ( 1 )
      {
        if ( v15.m128i_i64[0] == v9.m128i_i64[1] )
          goto LABEL_2;
        if ( (v9.m128i_i8[8] & 3) == 0 )
          goto LABEL_10;
LABEL_20:
        v9.m128i_i64[0] = sub_EF2B30(&v13);
        v9.m128i_i64[1] = v13.m128i_i64[1];
        if ( *(_DWORD *)(v16 + 4) == 1 && (**(_WORD **)v9.m128i_i64[0] & 0x1FF) != 0x70 )
          break;
        if ( (v13.m128i_i8[8] & 3) != 0 )
        {
          if ( (v13.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_EF2960(&v13);
          else
            sub_EF2750(&v13, 1);
          v9 = v13;
          v11 = v14.m128i_i64[1];
          goto LABEL_8;
        }
        v11 = v14.m128i_i64[1];
LABEL_16:
        v9.m128i_i64[0] = v13.m128i_i64[0];
LABEL_17:
        v9.m128i_i64[0] += 8;
        v13.m128i_i64[0] = v9.m128i_i64[0];
        if ( v9.m128i_i64[0] != v11 )
          goto LABEL_9;
      }
LABEL_12:
      v9.m128i_i64[0] = v13.m128i_i64[0];
    }
    while ( v8 != v13.m128i_i64[0] );
  }
  return v9.m128i_i64[0];
}
