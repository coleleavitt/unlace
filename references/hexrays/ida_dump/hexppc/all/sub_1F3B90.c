unsigned __int64 __fastcall sub_1F3B90(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __m128i v4; // xmm0
  __m128i v5; // xmm1
  __int64 v6; // rax
  __int64 v7; // rax
  __m128i v8; // xmm0
  __int64 v9; // r12
  __m128i v10; // xmm0
  __int64 v11; // rdi
  __int64 v12; // rax
  __m128i v13; // xmm2
  __int64 v14; // rdi
  __int64 v15; // r13
  __int64 i; // r12
  _QWORD *v17; // r15
  __int64 v18; // rdi
  __m128i v19; // xmm3
  __int64 v20; // rdi
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __m128i v23; // xmm4
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 j; // rbx
  _QWORD *v28; // r12
  __int64 v29; // rdi
  __int64 v30; // rax
  __m128i si128; // xmm0
  __m128i v32; // xmm5
  __int64 v33; // rdi
  __int64 v34; // r12
  __int64 v35; // rbx
  _QWORD *v36; // rbp
  __int64 v37; // rdi
  __int64 v39; // rax
  __m128i v40; // xmm0
  __m128i v41; // xmm6
  __m128i v42; // [rsp+0h] [rbp-C8h] BYREF
  __m128i v43; // [rsp+10h] [rbp-B8h] BYREF
  __int64 v44[2]; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+30h] [rbp-98h]
  __m128i v46; // [rsp+38h] [rbp-90h] BYREF
  __int64 v47; // [rsp+48h] [rbp-80h]
  __m128i v48; // [rsp+50h] [rbp-78h] BYREF
  _BYTE v49[24]; // [rsp+60h] [rbp-68h] BYREF
  char v50; // [rsp+78h] [rbp-50h]
  unsigned __int64 v51; // [rsp+88h] [rbp-40h]

  v51 = __readfsqword(0x28u);
  sub_605C0(v44, a1);
  v3 = *(_QWORD *)(a1 + 16);
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  *(_QWORD *)(a1 + 16) = 0;
  v5 = _mm_loadu_si128((const __m128i *)(a1 + 48));
  v45 = v3;
  v6 = *(_QWORD *)(a1 + 40);
  v46 = v4;
  v47 = v6;
  v7 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)&v49[16] = v7;
  LOBYTE(v7) = *(_BYTE *)(a1 + 88);
  *(_OWORD *)(a1 + 24) = 0;
  *(_OWORD *)(a1 + 48) = 0;
  v8 = _mm_loadu_si128((const __m128i *)(a1 + 64));
  v50 = v7;
  v48 = v5;
  *(__m128i *)v49 = v8;
  sub_60E90((__int64 *)a1, (__int64 *)a2);
  v9 = *(_QWORD *)(a2 + 16);
  v10 = _mm_loadu_si128((const __m128i *)(a2 + 24));
  *(_QWORD *)(a2 + 16) = 0;
  *(_OWORD *)(a2 + 24) = 0;
  v11 = *(_QWORD *)(a1 + 16);
  if ( v11 )
  {
    *(_QWORD *)(a1 + 24) = 0;
    v42 = v10;
    qfree(v11);
    v10 = _mm_load_si128(&v42);
  }
  *(__m128i *)(a1 + 24) = v10;
  *(_QWORD *)(a1 + 16) = v9;
  v12 = *(_QWORD *)(a2 + 40);
  v13 = _mm_loadu_si128((const __m128i *)(a2 + 48));
  *(_QWORD *)(a2 + 40) = 0;
  *(_OWORD *)(a2 + 48) = 0;
  v14 = *(_QWORD *)(a1 + 40);
  v42.m128i_i64[0] = v12;
  v43 = v13;
  if ( v14 )
  {
    v15 = *(_QWORD *)(a1 + 48);
    if ( v15 )
    {
      for ( i = 0; i != v15; ++i )
      {
        v17 = (_QWORD *)(v14 + 40 * i);
        v18 = v17[2];
        if ( v18 )
        {
          v17[3] = 0;
          qfree(v18);
        }
        qfree(*v17);
        v14 = *(_QWORD *)(a1 + 40);
      }
    }
    *(_QWORD *)(a1 + 48) = 0;
    qfree(v14);
  }
  v19 = _mm_load_si128(&v43);
  *(_QWORD *)(a1 + 40) = v42.m128i_i64[0];
  *(__m128i *)(a1 + 48) = v19;
  *(__m128i *)(a1 + 64) = _mm_loadu_si128((const __m128i *)(a2 + 64));
  *(_QWORD *)(a1 + 77) = *(_QWORD *)(a2 + 77);
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a2 + 88);
  sub_60E90((__int64 *)a2, v44);
  v20 = *(_QWORD *)(a2 + 16);
  v21 = v45;
  v45 = 0;
  v22 = _mm_loadu_si128(&v46);
  v46 = 0;
  if ( v20 )
  {
    *(_QWORD *)(a2 + 24) = 0;
    v42 = v22;
    qfree(v20);
    v22 = _mm_load_si128(&v42);
  }
  v23 = _mm_load_si128(&v48);
  v24 = *(_QWORD *)(a2 + 40);
  *(__m128i *)(a2 + 24) = v22;
  v25 = v47;
  *(_QWORD *)(a2 + 16) = v21;
  v47 = 0;
  v42 = v23;
  v48 = 0;
  if ( v24 )
  {
    v26 = *(_QWORD *)(a2 + 48);
    if ( v26 )
    {
      for ( j = 0; j != v26; ++j )
      {
        v28 = (_QWORD *)(v24 + 40 * j);
        v29 = v28[2];
        if ( v29 )
        {
          v28[3] = 0;
          qfree(v29);
        }
        qfree(*v28);
        v24 = *(_QWORD *)(a2 + 40);
      }
    }
    *(_QWORD *)(a2 + 48) = 0;
    qfree(v24);
    v30 = *(_QWORD *)&v49[13];
    si128 = _mm_load_si128((const __m128i *)v49);
    *(_QWORD *)(a2 + 40) = v25;
    v32 = _mm_load_si128(&v42);
    v33 = v47;
    *(__m128i *)(a2 + 64) = si128;
    *(_QWORD *)(a2 + 77) = v30;
    LOBYTE(v30) = v50;
    *(__m128i *)(a2 + 48) = v32;
    *(_BYTE *)(a2 + 88) = v30;
    if ( v33 )
    {
      v34 = v48.m128i_i64[0];
      if ( v48.m128i_i64[0] )
      {
        v35 = 0;
        do
        {
          v36 = (_QWORD *)(v33 + 40 * v35);
          v37 = v36[2];
          if ( v37 )
          {
            v36[3] = 0;
            qfree(v37);
          }
          ++v35;
          qfree(*v36);
          v33 = v47;
        }
        while ( v34 != v35 );
      }
      v48.m128i_i64[0] = 0;
      qfree(v33);
    }
  }
  else
  {
    v39 = *(_QWORD *)&v49[13];
    v40 = _mm_load_si128((const __m128i *)v49);
    *(_QWORD *)(a2 + 40) = v25;
    v41 = _mm_load_si128(&v42);
    *(__m128i *)(a2 + 64) = v40;
    *(_QWORD *)(a2 + 77) = v39;
    LOBYTE(v39) = v50;
    *(__m128i *)(a2 + 48) = v41;
    *(_BYTE *)(a2 + 88) = v39;
  }
  if ( v45 )
  {
    v46.m128i_i64[0] = 0;
    qfree(v45);
  }
  qfree(v44[0]);
  return v51 - __readfsqword(0x28u);
}
