__int64 __fastcall sub_1555AD0(const __m128i *a1, __int64 a2, unsigned int a3)
{
  __int32 v4; // r15d
  __m128i v5; // xmm0
  __m128i v6; // xmm1
  __m128i v7; // xmm2
  unsigned __int64 v8; // rbx
  __int16 v9; // ax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  __m128i v12; // xmm3
  __m128i v13; // xmm4
  __m128i v14; // xmm5
  __int32 v15; // eax
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  char *v18; // rdi
  char *v19; // rax
  unsigned __int64 v21; // rax
  __int64 v22; // rdx
  char *v23; // rdi
  char *v24; // rax
  __int16 v25; // [rsp+12h] [rbp-B6h]
  int v27; // [rsp+28h] [rbp-A0h] BYREF
  __int16 v28; // [rsp+2Ch] [rbp-9Ch]
  __m128i v29; // [rsp+38h] [rbp-90h] BYREF
  __m128i v30; // [rsp+48h] [rbp-80h] BYREF
  __int64 v31; // [rsp+58h] [rbp-70h]
  __m128i v32; // [rsp+60h] [rbp-68h] BYREF
  __int32 v33; // [rsp+70h] [rbp-58h]

  v4 = a1[5].m128i_i32[2];
  v5 = _mm_loadu_si128(a1 + 3);
  v6 = _mm_loadu_si128(a1 + 4);
  v31 = a1[5].m128i_i64[0];
  v7 = _mm_loadu_si128(a1 + 1);
  v8 = a1[169].m128i_u32[2];
  v33 = a1[2].m128i_i32[0];
  v9 = a1[5].m128i_i16[6];
  v10 = a1->m128i_i64[1];
  v29 = v5;
  v30 = v6;
  v32 = v7;
  v25 = v9;
  sub_1418D30(v10, 0);
  v28 = 75;
  v27 = 3473460;
  v11 = sub_15680D0(a1, &v27, 3, 3);
  if ( (_BYTE)v11 )
  {
    v21 = a1[169].m128i_u32[2];
    if ( v8 != v21 )
    {
      if ( v8 >= v21 )
      {
        if ( v8 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v8, 8);
          v21 = a1[169].m128i_u32[2];
        }
        v22 = a1[169].m128i_i64[0];
        v23 = (char *)(v22 + 8 * v21);
        v24 = (char *)(v22 + 8 * v8);
        if ( v23 != v24 )
          memset(v23, 0, 8 * ((unsigned __int64)(v24 - 8 - v23) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v8;
    }
    sub_1417B70(a1->m128i_i64[1]);
    v27 = 0;
    sub_1553D50((__int64)a1, a3, &v27, 1, 0);
    sub_1CC6660(a1[6].m128i_i64[0]);
  }
  else
  {
    sub_1417BC0(a1->m128i_i64[1]);
    v12 = _mm_loadu_si128(&v29);
    v13 = _mm_loadu_si128(&v30);
    v14 = _mm_load_si128(&v32);
    a1[5].m128i_i64[0] = v31;
    v15 = v33;
    a1[3] = v12;
    a1[2].m128i_i32[0] = v15;
    v16 = a1[169].m128i_u32[2];
    a1[4] = v13;
    a1[1] = v14;
    if ( v8 != v16 )
    {
      if ( v8 >= v16 )
      {
        if ( v8 > a1[169].m128i_u32[3] )
        {
          sub_2237220(&a1[169], &a1[170], v8, 8);
          v16 = a1[169].m128i_u32[2];
        }
        v17 = a1[169].m128i_i64[0];
        v18 = (char *)(v17 + 8 * v16);
        v19 = (char *)(v17 + 8 * v8);
        if ( v18 != v19 )
          memset(v18, 0, 8 * ((unsigned __int64)(v19 - 8 - v18) >> 3) + 8);
      }
      a1[169].m128i_i32[2] = v8;
    }
    a1[5].m128i_i32[2] = v4;
    a1[5].m128i_i16[6] = v25;
  }
  return v11;
}
