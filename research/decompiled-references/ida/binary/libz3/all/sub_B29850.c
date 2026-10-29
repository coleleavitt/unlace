__int64 __fastcall sub_B29850(const __m128i *a1)
{
  __int32 v2; // eax
  __int32 v3; // r11d
  __int32 v4; // edx
  __int8 v5; // di
  __int64 v6; // rbp
  __int32 v7; // r8d
  __int8 v8; // r12
  __int8 v9; // r9
  __int8 v10; // cl
  __int64 v11; // r10
  char v12; // si
  __int8 v13; // r12
  __int64 v14; // rax
  void *v15; // rbp
  __int8 v16; // dl
  __m128d v17; // xmm0
  __int32 v18; // eax
  __int64 result; // rax
  __int32 v20; // [rsp+8h] [rbp-50h] BYREF
  char v21; // [rsp+Ch] [rbp-4Ch]
  __int64 v22; // [rsp+10h] [rbp-48h]
  __int32 v23; // [rsp+18h] [rbp-40h] BYREF
  char v24; // [rsp+1Ch] [rbp-3Ch]
  __int64 v25; // [rsp+20h] [rbp-38h]

  v2 = a1[3].m128i_i32[0];
  v3 = a1->m128i_i32[2];
  v4 = a1[1].m128i_i32[0];
  v5 = a1[1].m128i_i8[4];
  v6 = a1[1].m128i_i64[1];
  v7 = a1[2].m128i_i32[0];
  a1->m128i_i32[2] = v2;
  v8 = v5;
  v9 = v5;
  v5 &= 2u;
  v9 &= 1u;
  v10 = a1[2].m128i_i8[4];
  v11 = a1[2].m128i_i64[1];
  a1[1].m128i_i32[0] = a1[3].m128i_i32[2];
  a1[1].m128i_i64[1] = a1[4].m128i_i64[0];
  LOBYTE(v2) = a1[3].m128i_i8[12];
  v12 = v10 & 1;
  a1[3].m128i_i32[2] = v4;
  a1[1].m128i_i8[4] = v2 & 1 | v2 & 2 | v8 & 0xFC;
  v13 = v10;
  v10 &= 2u;
  a1[3].m128i_i8[12] = v9 | v5 & 0xFE | v2 & 0xFC;
  a1[2].m128i_i32[0] = a1[4].m128i_i32[2];
  a1[4].m128i_i32[2] = v7;
  v14 = a1[5].m128i_i64[0];
  v20 = v4;
  LOBYTE(v4) = v21;
  a1[2].m128i_i64[1] = v14;
  LOBYTE(v14) = a1[4].m128i_i8[12];
  a1[3].m128i_i32[0] = v3;
  a1[4].m128i_i64[0] = v6;
  a1[5].m128i_i64[0] = v11;
  v21 = v9 | v5 | v4 & 0xFC;
  LOBYTE(v4) = v24;
  a1[2].m128i_i8[4] = v14 & 3 | v13 & 0xFC;
  a1[4].m128i_i8[12] = v12 | v10 | v14 & 0xFC;
  v15 = qword_1C7F2C0;
  v23 = v7;
  v22 = 0;
  v25 = 0;
  v24 = v12 | v10 | v4 & 0xFC;
  sub_182CBA0(qword_1C7F2C0, &v20);
  sub_182CBA0(v15, &v23);
  v16 = a1[5].m128i_i8[9];
  v17 = (__m128d)_mm_loadu_si128(a1 + 6);
  a1[5].m128i_i8[9] = a1[5].m128i_i8[8];
  v18 = a1->m128i_i32[2];
  a1[5].m128i_i8[8] = v16;
  a1[6] = (const __m128i)_mm_shuffle_pd(v17, v17, 1);
  if ( v18 == 1 )
  {
    sub_1831620(qword_1C7F2C0, &a1[1]);
    goto LABEL_5;
  }
  if ( v18 != 2 )
  {
    if ( !v18 )
      a1->m128i_i32[2] = 2;
LABEL_5:
    result = a1[3].m128i_u32[0];
    if ( (_DWORD)result != 1 )
      goto LABEL_6;
    return sub_1831620(qword_1C7F2C0, &a1[3].m128i_u64[1]);
  }
  result = a1[3].m128i_u32[0];
  a1->m128i_i32[2] = 0;
  if ( (_DWORD)result == 1 )
    return sub_1831620(qword_1C7F2C0, &a1[3].m128i_u64[1]);
LABEL_6:
  if ( (_DWORD)result == 2 )
  {
    a1[3].m128i_i32[0] = 0;
  }
  else if ( !(_DWORD)result )
  {
    a1[3].m128i_i32[0] = 2;
  }
  return result;
}

