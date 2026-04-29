unsigned __int64 __fastcall sub_2D73B0(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbp
  const __m128i *v3; // r15
  char v4; // r14
  bool (__fastcall *v5)(__int64); // rax
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rax
  const __m128i *v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // r13
  __int64 *v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // r15
  __int64 v18; // rbx
  __int64 v19; // rax
  __m128i v20; // xmm0
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // [rsp+0h] [rbp-A8h]
  __m128i v25; // [rsp+10h] [rbp-98h] BYREF
  const __m128i *v26[2]; // [rsp+20h] [rbp-88h] BYREF
  char v27; // [rsp+30h] [rbp-78h]
  __int64 *v28; // [rsp+38h] [rbp-70h]
  __int64 v29; // [rsp+40h] [rbp-68h]
  __int64 v30; // [rsp+48h] [rbp-60h] BYREF
  __int128 v31; // [rsp+50h] [rbp-58h]
  __m128i *v32; // [rsp+60h] [rbp-48h]
  unsigned __int64 v33; // [rsp+68h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  switch_dbctx(*(int *)(a1 + 8));
  v25 = 0u;
  v1 = *(_QWORD *)(a1 + 40);
  v2 = v1 + 264LL * *(_QWORD *)(a1 + 48);
  if ( v2 != v1 )
  {
    while ( 1 )
    {
      v5 = **(bool (__fastcall ***)(__int64))v1;
      if ( v5 != sub_2AF400 )
        break;
      if ( *(_DWORD *)(v1 + 120) == *(_DWORD *)(v1 + 248) )
      {
        v3 = (const __m128i *)(v1 + 8);
        if ( (unsigned int)sub_1371E0(v1 + 8, v1 + 136) )
          goto LABEL_4;
        v1 += 264;
        if ( v2 == v1 )
          goto LABEL_10;
      }
      else
      {
LABEL_3:
        v3 = (const __m128i *)(v1 + 8);
LABEL_4:
        v4 = *(_BYTE *)(v1 + 128);
        v26[0] = v3;
        *(_BYTE *)(sub_2D6EA0(&v25, (__int64)v3, v26) + 144) = v4;
LABEL_5:
        v1 += 264;
        if ( v2 == v1 )
          goto LABEL_10;
      }
    }
    if ( !v5(v1) )
      goto LABEL_5;
    goto LABEL_3;
  }
LABEL_10:
  v6 = *(_QWORD *)(a1 + 80);
  v7 = j__qalloc_or_throw(1512);
  v8 = sub_260810(0);
  sub_337060(v7, v8);
  v9 = *(const __m128i **)(v7 + 40);
  v27 = 73;
  v29 = v7;
  v26[1] = v9;
  v28 = &v30;
  v26[0] = (const __m128i *)&off_4DB850;
  v30 = 0;
  v32 = &v25;
  v31 = 0;
  *(_QWORD *)(v7 + 40) = v6;
  sub_2B65C0(*(_QWORD *)(a1 + 64), (__int64)v26, 0);
  v10 = v29;
  v26[0] = (const __m128i *)&off_4DB850;
  if ( v29 )
  {
    sub_83CD0(v29);
    j__qfree(v10);
  }
  v32 = nullptr;
  v11 = v30;
  if ( v30 )
  {
    v24 = v31;
    if ( (_QWORD)v31 )
    {
      v12 = 0;
      do
      {
        v13 = (__int64 *)(v11 + 24 * v12);
        v14 = *v13;
        if ( *v13 )
        {
          v15 = v13[1];
          if ( v15 )
          {
            v16 = 0;
            v17 = 0;
            do
            {
              v18 = v14 + v16;
              ++v17;
              v16 += 112;
              sub_11C7E0(v18 + 88);
              sub_11C7E0(v18 + 72);
              sub_11C7E0(v18 + 56);
              v14 = *v13;
            }
            while ( v15 != v17 );
          }
          v13[1] = 0;
          qfree(v14);
          v11 = v30;
        }
        ++v12;
      }
      while ( v24 != v12 );
    }
    *(_QWORD *)&v31 = 0;
    qfree(v11);
  }
  if ( v25.m128i_i64[0] )
  {
    if ( v25.m128i_i64[1] )
    {
      sub_2B62F0((_QWORD *)(*(_QWORD *)v25.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL));
      *(_QWORD *)v25.m128i_i64[0] = v25.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL | *(_QWORD *)v25.m128i_i64[0] & 3LL;
      v22 = v25.m128i_i64[0];
      v23 = (__m128i)v25.m128i_u64[0];
      *(_QWORD *)v25.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v22 + 8) = _mm_unpacklo_epi64(v23, v23);
      *(_QWORD *)v25.m128i_i64[0] |= 2uLL;
      v25.m128i_i64[1] = 0;
    }
    else
    {
      *(_QWORD *)v25.m128i_i64[0] = *(_QWORD *)v25.m128i_i64[0] & 3LL | v25.m128i_i64[0] & 0xFFFFFFFFFFFFFFFCLL;
      v19 = v25.m128i_i64[0];
      v20 = (__m128i)v25.m128i_u64[0];
      *(_QWORD *)v25.m128i_i64[0] &= ~1uLL;
      *(__m128i *)(v19 + 8) = _mm_unpacklo_epi64(v20, v20);
      *(_QWORD *)v25.m128i_i64[0] |= 2uLL;
    }
    if ( v25.m128i_i64[0] )
      qfree(v25.m128i_i64[0]);
  }
  return v33 - __readfsqword(0x28u);
}
