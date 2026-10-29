char __fastcall sub_1562870(const __m128i *a1, char a2)
{
  int v3; // eax
  char result; // al
  __int64 v5; // rax
  __m128i v6; // xmm0
  __m128i v7; // xmm1
  __m128i v8; // xmm2
  __int64 v9; // rdi
  __int32 v10; // r14d
  unsigned __int64 v11; // r15
  __int16 v12; // r13
  int v13; // ebp
  __m128i v14; // xmm3
  __m128i v15; // xmm4
  __m128i v16; // xmm5
  __int32 v17; // eax
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  char *v20; // rdi
  char *v21; // rax
  bool v22; // [rsp+Fh] [rbp-99h] BYREF
  __m128i v23; // [rsp+18h] [rbp-90h] BYREF
  __m128i v24; // [rsp+28h] [rbp-80h] BYREF
  __int64 v25; // [rsp+38h] [rbp-70h]
  __m128i v26; // [rsp+40h] [rbp-68h] BYREF
  __int32 v27; // [rsp+50h] [rbp-58h]

  v22 = 0;
  v3 = sub_155DB90((__int64)a1, 0, 1u, &v22);
  if ( v3 != 2 )
    return v3 != 1;
  result = 0;
  if ( !v22 )
  {
    v5 = a1[5].m128i_i64[0];
    v6 = _mm_loadu_si128(a1 + 3);
    v7 = _mm_loadu_si128(a1 + 4);
    v8 = _mm_loadu_si128(a1 + 1);
    v9 = a1->m128i_i64[1];
    v23 = v6;
    v10 = a1[5].m128i_i32[2];
    v25 = v5;
    LODWORD(v5) = a1[2].m128i_i32[0];
    v24 = v7;
    v11 = a1[169].m128i_u32[2];
    v12 = a1[5].m128i_i16[6];
    v26 = v8;
    v27 = v5;
    sub_1418D30(v9, 0);
    v13 = sub_15627F0((__int64)a1, a2);
    sub_1417BC0(a1->m128i_i64[1]);
    v14 = _mm_loadu_si128(&v23);
    v15 = _mm_loadu_si128(&v24);
    v16 = _mm_load_si128(&v26);
    a1[5].m128i_i64[0] = v25;
    v17 = v27;
    a1[3] = v14;
    a1[2].m128i_i32[0] = v17;
    v18 = a1[169].m128i_u32[2];
    a1[4] = v15;
    a1[1] = v16;
    if ( v18 != v11 )
    {
      if ( v18 <= v11 )
      {
        if ( v11 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v11, 8);
          v18 = a1[169].m128i_u32[2];
        }
        v19 = a1[169].m128i_i64[0];
        v20 = (char *)(v19 + 8 * v18);
        v21 = (char *)(v19 + 8 * v11);
        if ( v20 != v21 )
          memset(v20, 0, 8 * ((unsigned __int64)(v21 - 8 - v20) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v11;
    }
    a1[5].m128i_i32[2] = v10;
    result = 1;
    a1[5].m128i_i16[6] = v12;
    if ( v13 != 3 )
      return (v13 & 0xFFFFFFFD) == 0;
  }
  return result;
}
