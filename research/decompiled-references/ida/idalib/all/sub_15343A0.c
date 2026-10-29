__int64 __fastcall sub_15343A0(const __m128i *a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int16 v5; // ax
  unsigned int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rdi
  __int32 v9; // r14d
  unsigned __int64 v10; // r15
  __int16 v11; // r13
  __int64 *v12; // rdi
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rdi
  char *v20; // rax
  __m128i v22; // [rsp+8h] [rbp-90h] BYREF
  __m128i v23; // [rsp+18h] [rbp-80h] BYREF
  __int64 v24; // [rsp+28h] [rbp-70h]
  __m128i v25; // [rsp+30h] [rbp-68h] BYREF
  __int32 v26; // [rsp+40h] [rbp-58h]

  v2 = a1->m128i_i64[1];
  v3 = *(_QWORD *)(v2 + 2944);
  if ( v3 >= *(unsigned int *)(v2 + 2912) )
    v4 = sub_14180A0(v2, 1u);
  else
    v4 = *(_QWORD *)(v2 + 2904) + 24 * v3;
  v5 = *(_WORD *)(v4 + 16);
  v6 = 1;
  if ( v5 != 62 )
  {
    LOBYTE(v6) = v5 == 20 || v5 == 158;
    if ( (_BYTE)v6 )
    {
      v7 = a1[5].m128i_i64[0];
      v8 = a1->m128i_i64[1];
      v22 = _mm_loadu_si128(a1 + 3);
      v9 = a1[5].m128i_i32[2];
      v24 = v7;
      LODWORD(v7) = a1[2].m128i_i32[0];
      v23 = _mm_loadu_si128(a1 + 4);
      v10 = a1[169].m128i_u32[2];
      v11 = a1[5].m128i_i16[6];
      v25 = _mm_loadu_si128(a1 + 1);
      v26 = v7;
      sub_1418D30(v8, 0);
      v12 = (__int64 *)a1->m128i_i64[1];
      a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
      sub_14634E0(v12, a1[1].m128i_i32);
      sub_14A1B60((__int64)a1);
      LOBYTE(v6) = a1[2].m128i_i16[0] == 62;
      sub_1417BC0(a1->m128i_i64[1]);
      v13 = _mm_loadu_si128(&v22);
      v14 = _mm_loadu_si128(&v23);
      v15 = _mm_load_si128(&v25);
      a1[5].m128i_i64[0] = v24;
      v16 = v26;
      a1[3] = v13;
      a1[2].m128i_i32[0] = v16;
      v17 = a1[169].m128i_u32[2];
      a1[4] = v14;
      a1[1] = v15;
      if ( v17 != v10 )
      {
        if ( v17 <= v10 )
        {
          if ( v10 > a1[169].m128i_u32[3] )
          {
            sub_2237220(&a1[169], &a1[170], v10, 8);
            v17 = a1[169].m128i_u32[2];
          }
          v18 = a1[169].m128i_i64[0];
          v19 = (char *)(v18 + 8 * v17);
          v20 = (char *)(v18 + 8 * v10);
          if ( v19 != v20 )
            memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8);
        }
        a1[169].m128i_i32[2] = v10;
      }
      a1[5].m128i_i32[2] = v9;
      a1[5].m128i_i16[6] = v11;
    }
  }
  return v6;
}
