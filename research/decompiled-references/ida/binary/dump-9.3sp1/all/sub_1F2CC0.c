unsigned __int64 __fastcall sub_1F2CC0(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  __m128i v3; // xmm0
  __m128i v4; // xmm1
  __int64 v5; // rax
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int64 v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  bool v12; // al
  __int64 v13; // rdi
  __int64 v14; // rbp
  __m128i v15; // xmm0
  __int64 v16; // rdi
  __int64 v17; // r14
  __m128i v18; // xmm3
  __int64 v19; // r13
  __int64 i; // rbp
  __int64 *v21; // r15
  __int64 v22; // rdi
  __int64 v23; // rax
  __m128i v24; // xmm0
  __m128i v25; // xmm5
  __int64 v26; // rdi
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __m128i v29; // xmm6
  __int64 v30; // rdi
  __int64 v31; // r14
  __int64 v32; // r13
  __int64 j; // rbx
  __int64 *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // rax
  __m128i si128; // xmm0
  __m128i v38; // xmm7
  __int64 v39; // rdi
  __int64 v40; // r12
  __int64 v41; // rbx
  __int64 *v42; // rbp
  __int64 v43; // rdi
  __int64 v45; // rax
  __m128i v46; // xmm0
  __m128i v47; // xmm7
  __m128i v48; // [rsp+0h] [rbp-C8h] BYREF
  __int64 *v49; // [rsp+18h] [rbp-B0h]
  __int64 v50[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v51; // [rsp+30h] [rbp-98h]
  __m128i v52; // [rsp+38h] [rbp-90h] BYREF
  __int64 v53; // [rsp+48h] [rbp-80h]
  __m128i v54; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v55[24]; // [rsp+60h] [rbp-68h] BYREF
  char v56; // [rsp+78h] [rbp-50h]
  unsigned __int64 v57; // [rsp+88h] [rbp-40h]

  v57 = __readfsqword(0x28u);
  v1 = a1;
  v49 = v50;
  sub_64000(v50, a1);
  v2 = *(_QWORD *)(a1 + 16);
  v3 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v51 = v2;
  v5 = *(_QWORD *)(a1 + 40);
  v52 = v3;
  v53 = v5;
  v6 = *(_QWORD *)(a1 + 80);
  *(_OWORD *)(a1 + 24) = 0;
  *(_QWORD *)&v55[16] = v6;
  LOBYTE(v6) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 48) = 0;
  v7 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  *(_QWORD *)(a1 + 40) = 0;
  v56 = v6;
  v54 = v4;
  *(__m128i *)v55 = v7;
  while ( 1 )
  {
    v8 = *(_QWORD *)(v1 - 32);
    v9 = v1;
    if ( *(_QWORD *)v55 != v8 )
    {
      v10 = *(_QWORD *)(v1 - 24);
      if ( !*(_QWORD *)&v55[8] )
      {
        v12 = v10 == 0;
LABEL_7:
        if ( !v12 )
          goto LABEL_20;
        goto LABEL_8;
      }
      if ( !v10 )
        goto LABEL_8;
      v11 = *(_QWORD *)(v8 + 24);
      if ( *(_QWORD *)(*(_QWORD *)v55 + 24LL) != v11 )
      {
        v12 = *(_QWORD *)(*(_QWORD *)v55 + 24LL) < v11;
        goto LABEL_7;
      }
    }
    if ( v55[20] == *(_BYTE *)(v1 - 12) )
      break;
    if ( v55[20] )
      goto LABEL_20;
LABEL_8:
    v1 -= 96;
    sub_648D0((__int64 *)v9, (__int64 *)v1);
    v13 = *(_QWORD *)(v9 + 16);
    v14 = *(_QWORD *)(v9 - 80);
    *(_QWORD *)(v9 - 80) = 0;
    v15 = _mm_loadu_si128((const __m128i *)(v9 - 72));
    *(_OWORD *)(v9 - 72) = 0;
    if ( v13 )
    {
      *(_QWORD *)(v9 + 24) = 0;
      v48 = v15;
      qfree(v13);
      v15 = _mm_load_si128(&v48);
    }
    v16 = *(_QWORD *)(v9 + 40);
    v17 = *(_QWORD *)(v9 - 56);
    *(_QWORD *)(v9 + 16) = v14;
    v18 = _mm_loadu_si128((const __m128i *)(v9 - 48));
    *(_QWORD *)(v9 - 56) = 0;
    *(__m128i *)(v9 + 24) = v15;
    v48 = v18;
    *(_OWORD *)(v9 - 48) = 0;
    if ( v16 )
    {
      v19 = *(_QWORD *)(v9 + 48);
      if ( v19 )
      {
        for ( i = 0; i != v19; ++i )
        {
          v21 = (__int64 *)(v16 + 40 * i);
          v22 = v21[2];
          if ( v22 )
          {
            v21[3] = 0;
            qfree(v22);
          }
          qfree(*v21);
          v16 = *(_QWORD *)(v9 + 40);
        }
      }
      *(_QWORD *)(v9 + 48) = 0;
      qfree(v16);
    }
    v23 = *(_QWORD *)(v9 - 19);
    v24 = _mm_loadu_si128((const __m128i *)(v9 - 32));
    *(_QWORD *)(v9 + 40) = v17;
    v25 = _mm_load_si128(&v48);
    *(__m128i *)(v9 + 64) = v24;
    *(_QWORD *)(v9 + 77) = v23;
    LOBYTE(v23) = *(_BYTE *)(v9 - 8);
    *(__m128i *)(v9 + 48) = v25;
    *(_BYTE *)(v9 + 88) = v23;
  }
  if ( *(int *)&v55[16] < *(_DWORD *)(v1 - 16) )
    goto LABEL_8;
LABEL_20:
  sub_648D0((__int64 *)v1, v49);
  v26 = *(_QWORD *)(v1 + 16);
  v27 = v51;
  v51 = 0;
  v28 = _mm_loadu_si128(&v52);
  v52 = 0;
  if ( v26 )
  {
    *(_QWORD *)(v1 + 24) = 0;
    v48 = v28;
    qfree(v26);
    v28 = _mm_load_si128(&v48);
  }
  v29 = _mm_load_si128(&v54);
  v30 = *(_QWORD *)(v1 + 40);
  *(__m128i *)(v1 + 24) = v28;
  v31 = v53;
  *(_QWORD *)(v1 + 16) = v27;
  v53 = 0;
  v48 = v29;
  v54 = 0;
  if ( v30 )
  {
    v32 = *(_QWORD *)(v1 + 48);
    if ( v32 )
    {
      for ( j = 0; j != v32; ++j )
      {
        v34 = (__int64 *)(v30 + 40 * j);
        v35 = v34[2];
        if ( v35 )
        {
          v34[3] = 0;
          qfree(v35);
        }
        qfree(*v34);
        v30 = *(_QWORD *)(v1 + 40);
      }
    }
    *(_QWORD *)(v1 + 48) = 0;
    qfree(v30);
    v36 = *(_QWORD *)&v55[13];
    si128 = _mm_load_si128((const __m128i *)v55);
    *(_QWORD *)(v1 + 40) = v31;
    v38 = _mm_load_si128(&v48);
    v39 = v53;
    *(__m128i *)(v1 + 64) = si128;
    *(_QWORD *)(v1 + 77) = v36;
    LOBYTE(v36) = v56;
    *(__m128i *)(v1 + 48) = v38;
    *(_BYTE *)(v1 + 88) = v36;
    if ( v39 )
    {
      v40 = v54.m128i_i64[0];
      if ( v54.m128i_i64[0] )
      {
        v41 = 0;
        do
        {
          v42 = (__int64 *)(v39 + 40 * v41);
          v43 = v42[2];
          if ( v43 )
          {
            v42[3] = 0;
            qfree(v43);
          }
          ++v41;
          qfree(*v42);
          v39 = v53;
        }
        while ( v40 != v41 );
      }
      v54.m128i_i64[0] = 0;
      qfree(v39);
    }
  }
  else
  {
    v45 = *(_QWORD *)&v55[13];
    v46 = _mm_load_si128((const __m128i *)v55);
    *(_QWORD *)(v1 + 40) = v31;
    v47 = _mm_load_si128(&v48);
    *(__m128i *)(v1 + 64) = v46;
    *(_QWORD *)(v1 + 77) = v45;
    LOBYTE(v45) = v56;
    *(__m128i *)(v1 + 48) = v47;
    *(_BYTE *)(v1 + 88) = v45;
  }
  if ( v51 )
  {
    v52.m128i_i64[0] = 0;
    qfree(v51);
  }
  qfree(v50[0]);
  return v57 - __readfsqword(0x28u);
}
