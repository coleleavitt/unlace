void __fastcall sub_A37980(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rbx
  __m128i *v4; // r14
  __int64 v5; // r12
  __int64 v6; // r12
  __m128i *v7; // rbx
  unsigned int *v8; // rsi
  __m128i v9; // xmm0
  __m128i *v10; // rbx
  __int32 v11; // r10d
  __m128i *v12; // rbp
  int v13; // edx
  unsigned int v14; // r14d
  unsigned int v15; // r12d
  char v16; // al
  __int64 v17; // rcx
  unsigned int v18; // esi
  __m128i v19; // xmm0
  __int8 v20; // al
  __int8 v21; // al
  __int8 v22; // al
  __int8 v23; // al
  __m128i *v24; // r12
  __int64 v25; // r14
  const __m128i *v26; // rsi
  const __m128i *v27; // r12
  __m128i v28; // xmm5
  const __m128i *v29; // rsi
  __m128i *v30; // r12
  __m128i v31; // xmm7
  char v32; // al
  __m128i v33; // xmm0
  char v34; // al
  __m128i v35; // xmm6
  unsigned int *v36; // [rsp+8h] [rbp-170h]
  unsigned int v37; // [rsp+10h] [rbp-168h]
  unsigned __int32 v38; // [rsp+18h] [rbp-160h]
  __m128i *v39; // [rsp+18h] [rbp-160h]
  __m128i *v40; // [rsp+20h] [rbp-158h]
  __int64 v41; // [rsp+28h] [rbp-150h]
  const __m128i *v42; // [rsp+30h] [rbp-148h]
  __m128i v43; // [rsp+40h] [rbp-138h] BYREF
  __m128i v44[7]; // [rsp+50h] [rbp-128h] BYREF
  __m128i v45; // [rsp+C0h] [rbp-B8h] BYREF
  __m128i v46; // [rsp+D0h] [rbp-A8h] BYREF
  char v47; // [rsp+E0h] [rbp-98h]
  __int64 v48[4]; // [rsp+E8h] [rbp-90h] BYREF
  char v49; // [rsp+108h] [rbp-70h]
  __int64 v50[13]; // [rsp+110h] [rbp-68h] BYREF

  v3 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 2048 )
    return;
  v4 = a2;
  if ( !a3 )
  {
    v24 = a2;
    v42 = a1 + 1;
    goto LABEL_22;
  }
  v5 = a3;
  v36 = (unsigned int *)&a1[8];
  v42 = a1 + 1;
  do
  {
    v6 = v5 - 1;
    v7 = &a1[8 * (v3 >> 8)];
    v8 = (unsigned int *)&v4[-8];
    if ( !(unsigned __int8)sub_A09E20(v36, (unsigned int *)v7) )
    {
      if ( (unsigned __int8)sub_A09E20(v36, v8) )
      {
        v31 = _mm_loadu_si128(a1 + 8);
        a1[8] = _mm_loadu_si128(a1);
        *a1 = v31;
        sub_A37930(v42, (__int64)a1[9].m128i_i64);
        goto LABEL_7;
      }
      v34 = sub_A09E20((unsigned int *)v7, (unsigned int *)&v4[-8]);
      v33 = _mm_loadu_si128(a1);
      if ( !v34 )
      {
        *a1 = _mm_loadu_si128(v7);
        *v7 = v33;
        sub_A37930(v42, (__int64)v7[1].m128i_i64);
        goto LABEL_7;
      }
LABEL_30:
      *a1 = _mm_loadu_si128(v4 - 8);
      v4[-8] = v33;
      sub_A37930(v42, (__int64)v4[-7].m128i_i64);
      goto LABEL_7;
    }
    if ( !(unsigned __int8)sub_A09E20((unsigned int *)v7, v8) )
    {
      v32 = sub_A09E20(v36, (unsigned int *)&v4[-8]);
      v33 = _mm_loadu_si128(a1);
      if ( !v32 )
      {
        v35 = _mm_loadu_si128(a1 + 8);
        a1[8] = v33;
        *a1 = v35;
        sub_A37930(v42, (__int64)a1[9].m128i_i64);
        goto LABEL_7;
      }
      goto LABEL_30;
    }
    v9 = _mm_loadu_si128(a1);
    *a1 = _mm_loadu_si128(v7);
    *v7 = v9;
    sub_A37930(v42, (__int64)v7[1].m128i_i64);
LABEL_7:
    v10 = v4;
    v40 = v4;
    v11 = a1->m128i_i32[0];
    v41 = v6;
    v12 = a1 + 8;
    v13 = a1->m128i_i32[1] & 0x7FFFFFFF;
    v14 = a1->m128i_i32[2] & 0x7FFFFFFF;
    v15 = a1->m128i_i32[3] & 0x7FFFFFFF;
    while ( 1 )
    {
      v38 = v11;
      v37 = v13;
      v16 = sub_A09E20((unsigned int *)v12, (unsigned int *)a1);
      v13 = v37;
      v11 = v38;
      if ( v16 )
        goto LABEL_8;
      do
      {
        do
          v10 -= 8;
        while ( v10->m128i_i32[0] > v38 );
        v17 = v10->m128i_i32[2] & 0x7FFFFFFF;
        v18 = v10->m128i_i32[1] & 0x7FFFFFFF;
      }
      while ( v10->m128i_i32[0] == v38
           && (v18 > v37
            || v18 == v37 && ((unsigned int)v17 > v14 || (_DWORD)v17 == v14 && (v10->m128i_i32[3] & 0x7FFFFFFFu) > v15)) );
      if ( v12 >= v10 )
        break;
      v19 = _mm_loadu_si128(v12);
      *v12 = _mm_loadu_si128(v10);
      *v10 = v19;
      sub_A0A1C0(&v45, v12 + 1);
      sub_A0AAD0((__int64)v12[1].m128i_i64, (__m128i *)v10[1].m128i_i64);
      v20 = v10[3].m128i_i8[0] & 1 | v12[3].m128i_i8[0] & 0xFE;
      v12[3].m128i_i8[0] = v20;
      v21 = v10[3].m128i_i8[0] & 2 | v20 & 0xFD;
      v12[3].m128i_i8[0] = v21;
      v22 = v10[3].m128i_i8[0] & 4 | v21 & 0xFB;
      v12[3].m128i_i8[0] = v22;
      v12[3].m128i_i8[0] = v10[3].m128i_i8[0] & 8 | v22 & 0xF7;
      sub_A0AAD0((__int64)&v12[3].m128i_i64[1], &v10[3].m128i_i64[1]);
      v23 = v10[5].m128i_i8[8] & 1 | v12[5].m128i_i8[8] & 0xFE;
      v12[5].m128i_i8[8] = v23;
      v12[5].m128i_i8[8] = v10[5].m128i_i8[8] & 6 | v23 & 0xF9;
      sub_A0AAD0((__int64)v12[6].m128i_i64, (__m128i *)v10[6].m128i_i64);
      sub_A0AAD0((__int64)v10[1].m128i_i64, &v45);
      v10[3].m128i_i8[0] = v47 & 0xF | v10[3].m128i_i8[0] & 0xF0;
      sub_A0AAD0((__int64)&v10[3].m128i_i64[1], v48);
      v10[5].m128i_i8[8] = v49 & 7 | v10[5].m128i_i8[8] & 0xF8;
      sub_A0AAD0((__int64)v10[6].m128i_i64, v50);
      sub_A09CE0((__int64)&v45);
      v11 = a1->m128i_i32[0];
      v15 = a1->m128i_i32[3] & 0x7FFFFFFF;
      v14 = a1->m128i_i32[2] & 0x7FFFFFFF;
      v13 = a1->m128i_i32[1] & 0x7FFFFFFF;
LABEL_8:
      v12 += 8;
    }
    v5 = v41;
    v3 = (char *)v12 - (char *)a1;
    sub_A37980(v12, v40, v41, v17);
    if ( (char *)v12 - (char *)a1 <= 2048 )
      return;
    v4 = v12;
  }
  while ( v41 );
  v24 = v12;
LABEL_22:
  v25 = ((v3 >> 7) - 2) >> 1;
  v26 = &a1[8 * v25];
  v43 = _mm_loadu_si128(v26);
  sub_A0A1C0(v44, v26 + 1);
  v45 = _mm_load_si128(&v43);
  sub_A0A1C0(&v46, v44);
  sub_A2ADF0((__int64)a1, v25, v3 >> 7, &v45);
  sub_A09CE0((__int64)&v46);
  v39 = v24;
  v27 = v26 - 7;
  do
  {
    --v25;
    sub_A09CE0((__int64)v44);
    v28 = _mm_loadu_si128(v27 - 1);
    v29 = v27;
    v27 -= 8;
    v43 = v28;
    sub_A0A1C0(v44, v29);
    v45 = _mm_load_si128(&v43);
    sub_A0A1C0(&v46, v44);
    sub_A2ADF0((__int64)a1, v25, v3 >> 7, &v45);
    sub_A09CE0((__int64)&v46);
  }
  while ( v25 );
  v30 = v39;
  sub_A09CE0((__int64)v44);
  do
  {
    v30 -= 8;
    v43 = _mm_loadu_si128(v30);
    sub_A0A1C0(v44, v30 + 1);
    *v30 = _mm_loadu_si128(a1);
    sub_A0B090((__int64)v30[1].m128i_i64, (__int64)v42);
    v45 = _mm_load_si128(&v43);
    sub_A0A1C0(&v46, v44);
    sub_A2ADF0((__int64)a1, 0, ((char *)v30 - (char *)a1) >> 7, &v45);
    sub_A09CE0((__int64)&v46);
    sub_A09CE0((__int64)v44);
  }
  while ( (char *)v30 - (char *)a1 > 128 );
}
