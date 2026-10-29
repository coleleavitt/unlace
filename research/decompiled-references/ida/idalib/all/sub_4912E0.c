unsigned __int64 __fastcall sub_4912E0(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v6; // r12
  __int64 v7; // r15
  void *v8; // rcx
  void *v9; // rdx
  __int64 v10; // rdi
  __int16 v11; // si
  __m128i v12; // xmm1
  __m128i v13; // xmm0
  __m128i v14; // xmm2
  __int64 v15; // rcx
  __int64 v16; // rdx
  void *v17; // r13
  __m128i v18; // xmm6
  __m128i v19; // xmm7
  void *v20; // r13
  void *v21; // r12
  __m128 v22; // xmm4
  __int16 v23; // ax
  __int64 v24; // r15
  __m128i v25; // xmm0
  __int64 v26; // rdx
  __m128i v27; // xmm0
  void *v28; // rdi
  __int64 v29; // rdx
  __m128i v30; // xmm0
  void *v31; // rdi
  __m128i v32; // xmm7
  __int64 v33; // rdx
  __m128i v34; // xmm1
  __m128i v35; // xmm2
  __int16 v36; // ax
  void *v37; // r12
  __m128i v39; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v40; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v41; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v42; // [rsp+30h] [rbp-C8h]
  __int64 v43; // [rsp+38h] [rbp-C0h]
  __m128i v44; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v45; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v46; // [rsp+60h] [rbp-98h] BYREF
  void *v47; // [rsp+70h] [rbp-88h]
  __m128i v48; // [rsp+78h] [rbp-80h]
  void *ptr; // [rsp+88h] [rbp-70h]
  __m128i v50; // [rsp+90h] [rbp-68h]
  __int64 v51; // [rsp+A0h] [rbp-58h]
  __int16 v52; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-40h]

  v3 = a2;
  v53 = __readfsqword(0x28u);
  v40.m128i_i64[0] = a2 - a1;
  if ( (__int64)(a2 - a1) > 80 )
  {
    v39.m128i_i64[0] = (__int64)&v46;
    v42 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)(a2 - a1) >> 4);
    v6 = (__int64)(v42 - 2) / 2;
    v7 = a1 + 80 * v6;
    while ( 1 )
    {
      v8 = *(void **)(v7 + 16);
      v9 = *(void **)(v7 + 40);
      *(_QWORD *)(v7 + 16) = 0;
      v10 = *(_QWORD *)(v7 + 64);
      v11 = *(_WORD *)(v7 + 72);
      *(_QWORD *)(v7 + 40) = 0;
      v12 = _mm_loadu_si128((const __m128i *)(v7 + 24));
      v13 = _mm_loadu_si128((const __m128i *)(v7 + 48));
      v47 = v8;
      v14 = _mm_loadu_si128((const __m128i *)v7);
      ptr = v9;
      v15 = v39.m128i_i64[0];
      v16 = v42;
      v51 = v10;
      v52 = v11;
      *(_OWORD *)(v7 + 24) = 0;
      *(_OWORD *)(v7 + 48) = 0;
      v46 = v14;
      v48 = v12;
      v50 = v13;
      sub_483B70(a1, v6, v16, v15);
      v17 = v47;
      if ( ptr )
        qfree(ptr);
      if ( v17 )
        qfree(v17);
      v7 -= 80;
      if ( !v6 )
        break;
      --v6;
    }
  }
  if ( v3 < a3 )
  {
    v43 = 0xCCCCCCCCCCCCCCCDLL * (v40.m128i_i64[0] >> 4);
    do
    {
      while ( 1 )
      {
        if ( *(_QWORD *)a1 >= *(_QWORD *)v3
          && (*(_QWORD *)v3 != *(_QWORD *)a1 || *(_QWORD *)(v3 + 8) < *(_QWORD *)(a1 + 8)) )
        {
          v18 = _mm_loadu_si128((const __m128i *)(v3 + 24));
          v19 = _mm_loadu_si128((const __m128i *)(v3 + 48));
          *(_OWORD *)(v3 + 24) = 0;
          v20 = *(void **)(v3 + 16);
          v21 = *(void **)(v3 + 40);
          v22 = _mm_loadh_ps((const double *)(v3 + 8));
          *(_OWORD *)(v3 + 48) = 0;
          v23 = *(_WORD *)(v3 + 72);
          v24 = *(_QWORD *)(v3 + 64);
          *(_QWORD *)(v3 + 16) = 0;
          *(_QWORD *)(v3 + 40) = 0;
          v25 = _mm_loadu_si128((const __m128i *)a1);
          LOWORD(v42) = v23;
          *(__m128i *)v3 = v25;
          v26 = *(_QWORD *)(a1 + 16);
          v27 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          *(_QWORD *)(a1 + 16) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v28 = *(void **)(v3 + 16);
          v39 = (__m128i)v22;
          v40 = v18;
          v41 = v19;
          if ( v28 )
          {
            *(_QWORD *)(v3 + 24) = 0;
            v45.m128i_i64[0] = v26;
            v44 = v27;
            qfree(v28);
            v26 = v45.m128i_i64[0];
            v27 = _mm_load_si128(&v44);
          }
          *(_QWORD *)(v3 + 16) = v26;
          *(__m128i *)(v3 + 24) = v27;
          v29 = *(_QWORD *)(a1 + 40);
          v30 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 48) = 0;
          v31 = *(void **)(v3 + 40);
          if ( v31 )
          {
            *(_QWORD *)(v3 + 48) = 0;
            v44.m128i_i64[0] = v29;
            v45 = v30;
            qfree(v31);
            v30 = _mm_load_si128(&v45);
            v29 = v44.m128i_i64[0];
          }
          *(_QWORD *)(v3 + 40) = v29;
          v32 = _mm_load_si128(&v39);
          *(__m128i *)(v3 + 48) = v30;
          v33 = *(_QWORD *)(a1 + 64);
          v34 = _mm_load_si128(&v40);
          v35 = _mm_load_si128(&v41);
          v36 = v42;
          ptr = v21;
          *(_QWORD *)(v3 + 64) = v33;
          LOBYTE(v33) = *(_BYTE *)(a1 + 72);
          v51 = v24;
          *(_BYTE *)(v3 + 72) = v33;
          LOBYTE(v33) = *(_BYTE *)(a1 + 73);
          v52 = v36;
          *(_BYTE *)(v3 + 73) = v33;
          v47 = v20;
          v46 = v32;
          v48 = v34;
          v50 = v35;
          sub_483B70(a1, 0, v43, (__int64)&v46);
          v37 = v47;
          if ( ptr )
            qfree(ptr);
          if ( v37 )
            break;
        }
        v3 += 80LL;
        if ( v3 >= a3 )
          return v53 - __readfsqword(0x28u);
      }
      v3 += 80LL;
      qfree(v37);
    }
    while ( v3 < a3 );
  }
  return v53 - __readfsqword(0x28u);
}
