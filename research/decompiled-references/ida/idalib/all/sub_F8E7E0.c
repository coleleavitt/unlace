void __fastcall sub_F8E7E0(__int64 a1, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 *v5; // r14
  __int64 v6; // rsi
  __int64 v8; // r12
  __int64 v9; // r13
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdi
  __int64 v12; // r8
  unsigned __int64 *v13; // rsi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // r15
  unsigned __int64 *v18; // rdx
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rbp
  __m128i v21; // xmm3
  __m128i v22; // xmm2
  unsigned __int64 v23; // rsi
  __m128i v24; // xmm1
  __m128i v25; // xmm0
  __int64 v26; // r14
  __int64 v27; // r13
  __int128 *v28; // rcx
  __int64 v29; // r8
  __int128 v30; // rax
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // r9
  __int64 v34; // r10
  __int64 v35; // r11
  __int64 v36; // r12
  __m128i *v37; // rsi
  __int128 v38; // [rsp-30h] [rbp-B8h]
  __int128 v39; // [rsp-20h] [rbp-A8h]
  __int128 v40; // [rsp-20h] [rbp-A8h]
  __int128 v41; // [rsp-10h] [rbp-98h]
  __int128 v42; // [rsp-10h] [rbp-98h]
  __m128i *v43; // [rsp+0h] [rbp-88h]
  __m128i *v44; // [rsp+8h] [rbp-80h]

  v5 = a2;
  v6 = (__int64)a2 - a1;
  if ( v6 > 1024 )
  {
    v8 = a3;
    if ( !a3 )
    {
      v20 = (unsigned __int64)v5;
      goto LABEL_17;
    }
    v9 = a1 + 64;
    v43 = (__m128i *)(a1 + 8);
    v44 = (__m128i *)(a1 + 72);
    while ( 1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      --v8;
      v11 = *(v5 - 8);
      v12 = *(_QWORD *)a1;
      v13 = (unsigned __int64 *)(a1 + (v6 >> 7 << 6));
      v14 = *v13;
      if ( v10 >= *v13 )
      {
        if ( v10 < v11 )
        {
LABEL_24:
          *(_QWORD *)a1 = v10;
          *(_QWORD *)(a1 + 64) = v12;
          sub_F8C320(v43, v44);
          goto LABEL_8;
        }
        if ( v14 >= v11 )
        {
LABEL_23:
          *(_QWORD *)a1 = v14;
          v37 = (__m128i *)(v13 + 1);
          v37[-1].m128i_i64[1] = v12;
          sub_F8C320(v43, v37);
          goto LABEL_8;
        }
      }
      else
      {
        if ( v14 < v11 )
          goto LABEL_23;
        if ( v10 >= v11 )
          goto LABEL_24;
      }
      *(_QWORD *)a1 = v11;
      *(v5 - 8) = v12;
      sub_F8C320(v43, (__m128i *)(v5 - 7));
LABEL_8:
      v15 = *(_QWORD *)a1;
      v16 = *(v5 - 8);
      v17 = v9;
      v18 = v5;
      while ( 1 )
      {
        v19 = *(_QWORD *)v17;
        v20 = v17;
        if ( *(_QWORD *)v17 < v15 )
          goto LABEL_14;
        v18 -= 8;
        if ( v15 < v16 )
        {
          do
          {
            v18 -= 8;
            v16 = *v18;
          }
          while ( *v18 > v15 );
        }
        if ( v17 >= (unsigned __int64)v18 )
          break;
        *(_QWORD *)v17 = v16;
        v21 = _mm_loadu_si128((const __m128i *)(v18 + 1));
        *v18 = v19;
        v22 = _mm_loadu_si128((const __m128i *)(v17 + 8));
        *(__m128i *)(v17 + 8) = v21;
        v23 = *(_QWORD *)(v17 + 56);
        v24 = _mm_loadu_si128((const __m128i *)(v17 + 24));
        v25 = _mm_loadu_si128((const __m128i *)(v17 + 40));
        *(__m128i *)(v17 + 24) = _mm_loadu_si128((const __m128i *)(v18 + 3));
        *(__m128i *)(v17 + 40) = _mm_loadu_si128((const __m128i *)(v18 + 5));
        *(_QWORD *)(v17 + 56) = v18[7];
        v18[7] = v23;
        v16 = *(v18 - 8);
        *(__m128i *)(v18 + 1) = v22;
        *(__m128i *)(v18 + 3) = v24;
        *(__m128i *)(v18 + 5) = v25;
        v15 = *(_QWORD *)a1;
LABEL_14:
        v17 += 64LL;
      }
      sub_F8E7E0(v17, v5, v8);
      v6 = v17 - a1;
      if ( (__int64)(v17 - a1) <= 1024 )
        return;
      v5 = (unsigned __int64 *)v17;
      if ( !v8 )
      {
LABEL_17:
        v26 = v6 >> 6;
        v27 = ((v6 >> 6) - 2) >> 1;
        v28 = (__int128 *)(a1 + (v27 << 6));
        v41 = v28[3];
        sub_F79D40(a1, (v26 - 2) >> 1, v26, (__int64)v28, a5, v41, *v28, v28[1], v28[2], v41);
        do
        {
          v39 = *(_OWORD *)(a1 + (--v27 << 6) + 32);
          sub_F79D40(
            a1,
            v27,
            v26,
            v27 << 6,
            v29,
            v39,
            *(_OWORD *)(a1 + (v27 << 6)),
            *(_OWORD *)(a1 + (v27 << 6) + 16),
            v39,
            *(_OWORD *)(a1 + (v27 << 6) + 48));
        }
        while ( v27 );
        do
        {
          v20 -= 64LL;
          v30 = *(_OWORD *)v20;
          v31 = *(_QWORD *)(v20 + 16);
          v32 = *(_QWORD *)(v20 + 24);
          v33 = *(_QWORD *)(v20 + 32);
          *(_QWORD *)v20 = *(_QWORD *)a1;
          v34 = *(_QWORD *)(v20 + 40);
          v35 = *(_QWORD *)(v20 + 48);
          v36 = *(_QWORD *)(v20 + 56);
          *(__m128i *)(v20 + 8) = _mm_loadu_si128((const __m128i *)(a1 + 8));
          *(__m128i *)(v20 + 24) = _mm_loadu_si128((const __m128i *)(a1 + 24));
          *(__m128i *)(v20 + 40) = _mm_loadu_si128((const __m128i *)(a1 + 40));
          *(_QWORD *)(v20 + 56) = *(_QWORD *)(a1 + 56);
          *((_QWORD *)&v42 + 1) = v36;
          *(_QWORD *)&v42 = v35;
          *((_QWORD *)&v40 + 1) = v34;
          *(_QWORD *)&v40 = v33;
          *((_QWORD *)&v38 + 1) = v32;
          *(_QWORD *)&v38 = v31;
          sub_F79D40(a1, 0, (__int64)(v20 - a1) >> 6, (__int64)(v20 - a1) >> 6, v29, v33, v30, v38, v40, v42);
        }
        while ( (__int64)(v20 - a1) > 64 );
        return;
      }
    }
  }
}
