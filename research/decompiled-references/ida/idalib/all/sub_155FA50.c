__int64 __fastcall sub_155FA50(const __m128i *a1, char a2)
{
  unsigned int v2; // r12d
  __int32 v4; // r15d
  __m128i v5; // xmm1
  __m128i v6; // xmm2
  unsigned __int64 v7; // rbx
  __int16 v8; // r14
  __int32 v9; // eax
  __int64 v10; // rdi
  __int64 *v11; // rdi
  int v12; // eax
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rdi
  char *v20; // rax
  __int16 v22; // ax
  bool v23[9]; // [rsp+1Fh] [rbp-99h] BYREF
  __m128i v24; // [rsp+28h] [rbp-90h] BYREF
  __m128i v25; // [rsp+38h] [rbp-80h] BYREF
  __int64 v26; // [rsp+48h] [rbp-70h]
  __m128i v27; // [rsp+50h] [rbp-68h] BYREF
  __int32 v28; // [rsp+60h] [rbp-58h]

  v4 = a1[5].m128i_i32[2];
  v5 = _mm_loadu_si128(a1 + 4);
  v6 = _mm_loadu_si128(a1 + 1);
  v7 = a1[169].m128i_u32[2];
  v26 = a1[5].m128i_i64[0];
  v8 = a1[5].m128i_i16[6];
  v9 = a1[2].m128i_i32[0];
  v24 = _mm_loadu_si128(a1 + 3);
  v10 = a1->m128i_i64[1];
  v25 = v5;
  v27 = v6;
  v28 = v9;
  sub_1418D30(v10, 0);
  v11 = (__int64 *)a1->m128i_i64[1];
  a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
  sub_14634E0(v11, a1[1].m128i_i32);
  v23[0] = 0;
  v12 = sub_155DB90((__int64)a1, 0, 0, v23);
  if ( v12 != 2 )
    goto LABEL_2;
  v2 = 1;
  if ( (unsigned int)sub_155CFC0((__int64)a1) != 3 )
  {
    v22 = a1[2].m128i_i16[0];
    if ( v22 != 24 )
    {
      LOBYTE(v2) = a2 & (v22 == 63);
      if ( !(_BYTE)v2 )
      {
        v12 = sub_155DB90((__int64)a1, 0, 0, v23);
LABEL_2:
        LOBYTE(v2) = v12 != 1;
      }
    }
  }
  sub_1417BC0(a1->m128i_i64[1]);
  v13 = _mm_loadu_si128(&v24);
  v14 = _mm_loadu_si128(&v25);
  v15 = _mm_load_si128(&v27);
  a1[5].m128i_i64[0] = v26;
  v16 = v28;
  a1[3] = v13;
  a1[2].m128i_i32[0] = v16;
  v17 = a1[169].m128i_u32[2];
  a1[4] = v14;
  a1[1] = v15;
  if ( v7 != v17 )
  {
    if ( v7 >= v17 )
    {
      if ( v7 > a1[169].m128i_u32[3] )
      {
        sub_2237220(&a1[169], &a1[170], v7, 8);
        v17 = a1[169].m128i_u32[2];
      }
      v18 = a1[169].m128i_i64[0];
      v19 = (char *)(v18 + 8 * v17);
      v20 = (char *)(v18 + 8 * v7);
      if ( v19 != v20 )
        memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v7;
  }
  a1[5].m128i_i32[2] = v4;
  a1[5].m128i_i16[6] = v8;
  return v2;
}
