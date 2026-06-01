__int64 __fastcall sub_ABDFC0(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  __int64 v7; // r12
  __m128i v8; // rax
  __int64 v9; // r13
  __int64 v10; // rcx
  __m128i v12; // [rsp+0h] [rbp-D8h] BYREF
  __m128i v13; // [rsp+10h] [rbp-C8h]
  __m128i v14; // [rsp+20h] [rbp-B8h]
  __int64 v15; // [rsp+30h] [rbp-A8h]
  __m128i v16; // [rsp+40h] [rbp-98h] BYREF
  __m128i v17; // [rsp+50h] [rbp-88h] BYREF
  __m128i v18; // [rsp+60h] [rbp-78h] BYREF
  __int64 v19; // [rsp+70h] [rbp-68h]
  __int64 v20; // [rsp+78h] [rbp-60h]
  __int64 v21; // [rsp+80h] [rbp-58h]

  v2 = *(_BYTE *)(a2 + 2);
  v3 = *(unsigned int *)(a2 + 16);
  v14.m128i_i64[0] = 0;
  v12 = (__m128i)(unsigned __int64)(a2 + 32);
  v13.m128i_i64[1] = a2 + 8 * (((v2 & 8) != 0) + v3 + 1) + 32;
  sub_AA9170((__int64)&v16, (__int64)&v12, a1);
  v8.m128i_i64[0] = v16.m128i_i64[0];
  v4 = _mm_load_si128(&v16);
  v5 = _mm_load_si128(&v17);
  v6 = _mm_load_si128(&v18);
  v15 = v19;
  v12 = v4;
  v7 = v20;
  v8.m128i_i64[1] = v4.m128i_i64[1];
  v9 = v21;
  v13 = v5;
  v14 = v6;
LABEL_2:
  if ( v7 != v8.m128i_i64[0] )
    goto LABEL_3;
  while ( v9 != v8.m128i_i64[1] )
  {
    do
    {
LABEL_3:
      if ( (v8.m128i_i8[8] & 3) != 0 )
        v8.m128i_i64[0] = sub_ECEDF0(&v12);
      sub_ABAAB0(a1 + 8, 0, 0, *(_QWORD *)v8.m128i_i64[0], a1);
      v8.m128i_i64[1] = v12.m128i_i64[1];
      if ( (v12.m128i_i8[8] & 3) != 0 )
      {
        if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
          sub_ECEC20(&v12);
        else
          sub_ECEA10(&v12, 1);
        v8 = v12;
      }
      else
      {
        v8.m128i_i64[0] = v12.m128i_i64[0] + 8;
        v12.m128i_i64[0] += 8;
      }
      v10 = v13.m128i_i64[1];
LABEL_8:
      if ( v8.m128i_i64[0] != v10 )
      {
LABEL_9:
        if ( (v8.m128i_i8[8] & 3) != 0 )
          goto LABEL_20;
LABEL_10:
        if ( *(_DWORD *)(v15 + 4) == 1 )
        {
          if ( (**(_WORD **)v8.m128i_i64[0] & 0x1FF) != 0x70 )
            goto LABEL_12;
          goto LABEL_16;
        }
        goto LABEL_17;
      }
      while ( 1 )
      {
        if ( v14.m128i_i64[0] == v8.m128i_i64[1] )
          goto LABEL_2;
        if ( (v8.m128i_i8[8] & 3) == 0 )
          goto LABEL_10;
LABEL_20:
        v8.m128i_i64[0] = sub_ECEDF0(&v12);
        v8.m128i_i64[1] = v12.m128i_i64[1];
        if ( *(_DWORD *)(v15 + 4) == 1 && (**(_WORD **)v8.m128i_i64[0] & 0x1FF) != 0x70 )
          break;
        if ( (v12.m128i_i8[8] & 3) != 0 )
        {
          if ( (v12.m128i_i64[1] & 0xFFFFFFFFFFFFFFFCLL) != 0 )
            sub_ECEC20(&v12);
          else
            sub_ECEA10(&v12, 1);
          v8 = v12;
          v10 = v13.m128i_i64[1];
          goto LABEL_8;
        }
        v10 = v13.m128i_i64[1];
LABEL_16:
        v8.m128i_i64[0] = v12.m128i_i64[0];
LABEL_17:
        v8.m128i_i64[0] += 8;
        v12.m128i_i64[0] = v8.m128i_i64[0];
        if ( v8.m128i_i64[0] != v10 )
          goto LABEL_9;
      }
LABEL_12:
      v8.m128i_i64[0] = v12.m128i_i64[0];
    }
    while ( v7 != v12.m128i_i64[0] );
  }
  return v8.m128i_i64[0];
}

