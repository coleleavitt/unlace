void __fastcall sub_10432B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rbx
  _BYTE *v6; // r12
  __m128i *v7; // rax
  __m128i *v8; // rsi
  __int64 v9; // rax
  _BYTE *v10; // r15
  unsigned __int64 v11; // r14
  __m128i *v12; // rax
  _QWORD v14[2]; // [rsp+30h] [rbp-118h] BYREF
  void *v15; // [rsp+40h] [rbp-108h] BYREF
  __int64 v16; // [rsp+48h] [rbp-100h]
  _BYTE v17[16]; // [rsp+50h] [rbp-F8h] BYREF
  __m128i v18; // [rsp+60h] [rbp-E8h] BYREF
  __m128i v19; // [rsp+70h] [rbp-D8h] BYREF
  _BYTE *v20; // [rsp+80h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+88h] [rbp-C0h]
  _BYTE v22[184]; // [rsp+90h] [rbp-B8h] BYREF

  v14[1] = a2;
  v14[0] = a1;
  v20 = v22;
  v21 = 0x800000000LL;
  sub_2223490(v14, &v20, "+", 1, 0xFFFFFFFFLL, 0);
  v5 = v20;
  v6 = &v20[16 * (unsigned int)v21];
  if ( v20 == v6 )
    goto LABEL_28;
  do
  {
    v10 = (_BYTE *)*v5;
    v11 = v5[1];
    if ( (unsigned __int8)sub_2275730(a4, *v5, v11, 0) )
      goto LABEL_13;
    if ( v11 <= 1 )
    {
      if ( v10 )
      {
LABEL_4:
        v15 = v17;
        sub_103ABE0(&v15, v10, (__int64)&v10[v11]);
      }
      else
      {
        v17[0] = 0;
        v16 = 0;
        v15 = v17;
      }
      v7 = (__m128i *)sub_978080(&v15, 0, 0, "+", 1u);
      v18.m128i_i64[0] = (__int64)&v19;
      if ( (__m128i *)v7->m128i_i64[0] == &v7[1] )
      {
        v19 = _mm_loadu_si128(v7 + 1);
      }
      else
      {
        v18.m128i_i64[0] = v7->m128i_i64[0];
        v19.m128i_i64[0] = v7[1].m128i_i64[0];
      }
      v18.m128i_i64[1] = v7->m128i_i64[1];
      v7[1].m128i_i8[0] = 0;
      v8 = *(__m128i **)(a3 + 8);
      v7->m128i_i64[0] = (__int64)v7[1].m128i_i64;
      v7->m128i_i64[1] = 0;
      if ( v8 == *(__m128i **)(a3 + 16) )
        goto LABEL_18;
      v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
      v9 = v18.m128i_i64[0];
      if ( (__m128i *)v18.m128i_i64[0] == &v19 )
        goto LABEL_26;
      goto LABEL_9;
    }
    if ( *(_WORD *)v10 != 28526 )
      goto LABEL_4;
    v15 = v17;
    if ( v10 == (_BYTE *)-2LL )
    {
      v16 = 0;
      v17[0] = 0;
    }
    else
    {
      sub_103ABE0(&v15, v10 + 2, (__int64)&v10[v11]);
    }
    v12 = (__m128i *)sub_978080(&v15, 0, 0, "-", 1u);
    v18.m128i_i64[0] = (__int64)&v19;
    if ( (__m128i *)v12->m128i_i64[0] == &v12[1] )
    {
      v19 = _mm_loadu_si128(v12 + 1);
    }
    else
    {
      v18.m128i_i64[0] = v12->m128i_i64[0];
      v19.m128i_i64[0] = v12[1].m128i_i64[0];
    }
    v18.m128i_i64[1] = v12->m128i_i64[1];
    v12[1].m128i_i8[0] = 0;
    v8 = *(__m128i **)(a3 + 8);
    v12->m128i_i64[0] = (__int64)v12[1].m128i_i64;
    v12->m128i_i64[1] = 0;
    if ( v8 == *(__m128i **)(a3 + 16) )
    {
LABEL_18:
      sub_A5EC30((void ***)a3, v8, &v18);
      if ( (__m128i *)v18.m128i_i64[0] != &v19 )
        operator delete((void *)v18.m128i_i64[0]);
      goto LABEL_11;
    }
    v8->m128i_i64[0] = (__int64)v8[1].m128i_i64;
    v9 = v18.m128i_i64[0];
    if ( (__m128i *)v18.m128i_i64[0] == &v19 )
    {
LABEL_26:
      v8[1] = _mm_load_si128(&v19);
      goto LABEL_10;
    }
LABEL_9:
    v8->m128i_i64[0] = v9;
    v8[1].m128i_i64[0] = v19.m128i_i64[0];
LABEL_10:
    v8->m128i_i64[1] = v18.m128i_i64[1];
    *(_QWORD *)(a3 + 8) += 32LL;
LABEL_11:
    if ( v15 != v17 )
      operator delete(v15);
LABEL_13:
    v5 += 2;
  }
  while ( v6 != (_BYTE *)v5 );
  v6 = v20;
LABEL_28:
  if ( v6 != v22 )
    free(v6);
}

