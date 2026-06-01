__int64 __fastcall sub_14B68F0(const __m128i *a1)
{
  __m128i v2; // xmm2
  __int32 v3; // eax
  unsigned __int64 v4; // r12
  __int32 v5; // eax
  __int64 v6; // rdi
  __int16 v7; // ax
  __int64 *v8; // rdi
  __int32 v9; // eax
  unsigned int v10; // r14d
  unsigned __int16 v11; // cx
  __int64 *v12; // rdi
  __m128i v13; // xmm3
  __m128i v14; // xmm4
  __m128i v15; // xmm5
  __int32 v16; // eax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  char *v19; // rdi
  char *v20; // rax
  unsigned __int32 v22; // eax
  unsigned __int16 v23; // si
  __int64 v24; // rdx
  __int16 v25; // [rsp+Ah] [rbp-AEh]
  __int32 v26; // [rsp+Ch] [rbp-ACh]
  int v27[3]; // [rsp+1Ch] [rbp-9Ch] BYREF
  __m128i v28; // [rsp+28h] [rbp-90h] BYREF
  __m128i v29; // [rsp+38h] [rbp-80h] BYREF
  __int64 v30; // [rsp+48h] [rbp-70h]
  __m128i v31; // [rsp+50h] [rbp-68h] BYREF
  __int32 v32; // [rsp+60h] [rbp-58h]

  v2 = _mm_loadu_si128(a1 + 1);
  v30 = a1[5].m128i_i64[0];
  v3 = a1[2].m128i_i32[0];
  v4 = a1[169].m128i_u32[2];
  v28 = _mm_loadu_si128(a1 + 3);
  v32 = v3;
  LOWORD(v3) = a1[5].m128i_i16[6];
  v29 = _mm_loadu_si128(a1 + 4);
  v25 = v3;
  v5 = a1[5].m128i_i32[2];
  v6 = a1->m128i_i64[1];
  v31 = v2;
  v26 = v5;
  sub_1418D30(v6, 0);
  v7 = a1[2].m128i_i16[0];
  while ( 1 )
  {
    v8 = (__int64 *)a1->m128i_i64[1];
    if ( v7 != 20 )
    {
      v10 = 0;
      goto LABEL_10;
    }
    v9 = a1[1].m128i_i32[0];
    ++a1[5].m128i_i16[5];
    a1[2].m128i_i32[2] = v9;
    sub_14634E0(v8, a1[1].m128i_i32);
    do
    {
      v27[0] = (int)&loc_1C10015;
      v10 = sub_15680D0(a1, v27, 2, 3);
    }
    while ( !(_BYTE)v10 );
    if ( a1[2].m128i_i16[0] != 21 )
    {
LABEL_9:
      v8 = (__int64 *)a1->m128i_i64[1];
      v10 = 0;
      goto LABEL_10;
    }
    v11 = a1[5].m128i_u16[5];
    if ( v11 )
    {
      v22 = a1[174].m128i_u32[2];
      if ( !v22 )
      {
LABEL_26:
        a1[5].m128i_i16[5] = v11 - 1;
        goto LABEL_7;
      }
      v23 = a1[5].m128i_u16[4];
      v24 = a1[174].m128i_i64[0] + 24LL * v22 - 24;
      while ( 1 )
      {
        if ( v23 == *(_WORD *)(v24 + 14) )
        {
          if ( *(_DWORD *)(v24 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
            goto LABEL_21;
        }
        else if ( v23 > *(_WORD *)(v24 + 14) )
        {
          goto LABEL_21;
        }
        if ( v11 <= *(_WORD *)(v24 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v24 + 18) )
          goto LABEL_26;
LABEL_21:
        --v22;
        v24 -= 24;
        a1[174].m128i_i32[2] = v22;
        if ( !v22 )
          goto LABEL_26;
      }
    }
LABEL_7:
    v12 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v12, a1[1].m128i_i32);
    v7 = a1[2].m128i_i16[0];
    if ( v7 == 23 )
      break;
    if ( v7 == 449 )
      goto LABEL_9;
  }
  v8 = (__int64 *)a1->m128i_i64[1];
LABEL_10:
  sub_1417BC0((__int64)v8);
  v13 = _mm_loadu_si128(&v28);
  v14 = _mm_loadu_si128(&v29);
  v15 = _mm_load_si128(&v31);
  a1[5].m128i_i64[0] = v30;
  v16 = v32;
  a1[3] = v13;
  a1[2].m128i_i32[0] = v16;
  v17 = a1[169].m128i_u32[2];
  a1[4] = v14;
  a1[1] = v15;
  if ( v4 != v17 )
  {
    if ( v4 >= v17 )
    {
      if ( v4 > a1[169].m128i_u32[3] )
      {
        sub_2237220(&a1[169], &a1[170], v4, 8);
        v17 = a1[169].m128i_u32[2];
      }
      v18 = a1[169].m128i_i64[0];
      v19 = (char *)(v18 + 8 * v17);
      v20 = (char *)(v18 + 8 * v4);
      if ( v19 != v20 )
        memset(v19, 0, 8 * ((unsigned __int64)(v20 - 8 - v19) >> 3) + 8);
    }
    a1[169].m128i_i32[2] = v4;
  }
  a1[5].m128i_i32[2] = v26;
  a1[5].m128i_i16[6] = v25;
  return v10;
}
