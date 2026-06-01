unsigned __int64 __fastcall sub_262100(
        __int64 a1,
        const char *a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char *v6; // r14
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int16 v14; // si
  __m128i v15; // xmm1
  __m128i v16; // xmm0
  __m128i v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r13
  __int64 v21; // rcx
  __m128i v22; // xmm6
  __m128i v23; // xmm7
  __int64 v24; // r13
  __int64 v25; // r12
  __m128 v26; // xmm4
  __int16 v27; // ax
  __int64 v28; // r15
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __m128i v31; // xmm0
  __int64 v32; // rdi
  __int64 v33; // rdx
  __m128i v34; // xmm0
  __int64 v35; // rdi
  __m128i v36; // xmm7
  __int64 v37; // rdx
  __m128i v38; // xmm1
  __m128i v39; // xmm2
  __int16 v40; // ax
  __int64 v41; // r12
  __m128i v43; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v44; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v45; // [rsp+20h] [rbp-D8h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-C8h]
  __int64 v47; // [rsp+38h] [rbp-C0h]
  __m128i v48; // [rsp+40h] [rbp-B8h] BYREF
  __m128i v49; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v50; // [rsp+60h] [rbp-98h] BYREF
  __int64 v51; // [rsp+70h] [rbp-88h]
  __m128i v52; // [rsp+78h] [rbp-80h]
  __int64 v53; // [rsp+88h] [rbp-70h]
  __m128i v54; // [rsp+90h] [rbp-68h]
  __int64 v55; // [rsp+A0h] [rbp-58h]
  __int16 v56; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+B8h] [rbp-40h]

  v6 = (char *)a2;
  v57 = __readfsqword(0x28u);
  v44.m128i_i64[0] = (__int64)&a2[-a1];
  if ( (__int64)&a2[-a1] > 80 )
  {
    v43.m128i_i64[0] = (__int64)&v50;
    v46 = 0xCCCCCCCCCCCCCCCDLL * ((__int64)&a2[-a1] >> 4);
    v9 = (__int64)(v46 - 2) / 2;
    v10 = a1 + 80 * v9;
    while ( 1 )
    {
      v11 = *(_QWORD *)(v10 + 16);
      v12 = *(_QWORD *)(v10 + 40);
      *(_QWORD *)(v10 + 16) = 0;
      v13 = *(_QWORD *)(v10 + 64);
      v14 = *(_WORD *)(v10 + 72);
      *(_QWORD *)(v10 + 40) = 0;
      v15 = _mm_loadu_si128((const __m128i *)(v10 + 24));
      v16 = _mm_loadu_si128((const __m128i *)(v10 + 48));
      v51 = v11;
      v17 = _mm_loadu_si128((const __m128i *)v10);
      v53 = v12;
      v18 = v43.m128i_i64[0];
      v19 = v46;
      v55 = v13;
      v56 = v14;
      a2 = (const char *)v9;
      *(_OWORD *)(v10 + 24) = 0;
      *(_OWORD *)(v10 + 48) = 0;
      v50 = v17;
      v52 = v15;
      v54 = v16;
      sub_22A780(a1, v9, v19, v18);
      v20 = v51;
      if ( v53 )
        *(double *)v16.m128i_i64 = qfree(v53, (const char *)v9);
      if ( v20 )
        qfree(v20, (const char *)v9, *(double *)v16.m128i_i64);
      v10 -= 80;
      if ( !v9 )
        break;
      --v9;
    }
  }
  if ( (unsigned __int64)v6 < a3 )
  {
    v47 = 0xCCCCCCCCCCCCCCCDLL * (v44.m128i_i64[0] >> 4);
    do
    {
      while ( 1 )
      {
        v21 = *(_QWORD *)a1;
        if ( *(_QWORD *)a1 >= *(_QWORD *)v6 && (*(_QWORD *)v6 != v21 || *((_QWORD *)v6 + 1) < *(_QWORD *)(a1 + 8)) )
        {
          v22 = _mm_loadu_si128((const __m128i *)(v6 + 24));
          v23 = _mm_loadu_si128((const __m128i *)v6 + 3);
          *(_OWORD *)(v6 + 24) = 0;
          v24 = *((_QWORD *)v6 + 2);
          v25 = *((_QWORD *)v6 + 5);
          v26 = _mm_loadh_ps((const double *)v6 + 1);
          *((_OWORD *)v6 + 3) = 0;
          v27 = *((_WORD *)v6 + 36);
          v28 = *((_QWORD *)v6 + 8);
          *((_QWORD *)v6 + 2) = 0;
          *((_QWORD *)v6 + 5) = 0;
          v29 = _mm_loadu_si128((const __m128i *)a1);
          LOWORD(v46) = v27;
          *(__m128i *)v6 = v29;
          v30 = *(_QWORD *)(a1 + 16);
          v31 = _mm_loadu_si128((const __m128i *)(a1 + 24));
          *(_QWORD *)(a1 + 16) = 0;
          *(_OWORD *)(a1 + 24) = 0;
          v32 = *((_QWORD *)v6 + 2);
          v43 = (__m128i)v26;
          v44 = v22;
          v45 = v23;
          if ( v32 )
          {
            *((_QWORD *)v6 + 3) = 0;
            v49.m128i_i64[0] = v30;
            v48 = v31;
            qfree(v32, a2, v30, v21, a5, a6, *(_OWORD *)&v43, *(_OWORD *)&v44, *(_OWORD *)&v45);
            v30 = v49.m128i_i64[0];
            v31 = _mm_load_si128(&v48);
          }
          *((_QWORD *)v6 + 2) = v30;
          *(__m128i *)(v6 + 24) = v31;
          v33 = *(_QWORD *)(a1 + 40);
          v34 = _mm_loadu_si128((const __m128i *)(a1 + 48));
          *(_QWORD *)(a1 + 40) = 0;
          *(_OWORD *)(a1 + 48) = 0;
          v35 = *((_QWORD *)v6 + 5);
          if ( v35 )
          {
            *((_QWORD *)v6 + 6) = 0;
            v48.m128i_i64[0] = v33;
            v49 = v34;
            qfree(v35, a2);
            v34 = _mm_load_si128(&v49);
            v33 = v48.m128i_i64[0];
          }
          *((_QWORD *)v6 + 5) = v33;
          v36 = _mm_load_si128(&v43);
          a2 = nullptr;
          *((__m128i *)v6 + 3) = v34;
          v37 = *(_QWORD *)(a1 + 64);
          v38 = _mm_load_si128(&v44);
          v39 = _mm_load_si128(&v45);
          v40 = v46;
          v53 = v25;
          *((_QWORD *)v6 + 8) = v37;
          LOBYTE(v37) = *(_BYTE *)(a1 + 72);
          v55 = v28;
          v6[72] = v37;
          LOBYTE(v37) = *(_BYTE *)(a1 + 73);
          v56 = v40;
          v6[73] = v37;
          v51 = v24;
          v50 = v36;
          v52 = v38;
          v54 = v39;
          sub_22A780(a1, 0, v47, (__int64)&v50);
          v41 = v51;
          if ( v53 )
            *(double *)v34.m128i_i64 = qfree(v53, nullptr);
          if ( v41 )
            break;
        }
        v6 += 80;
        if ( (unsigned __int64)v6 >= a3 )
          return v57 - __readfsqword(0x28u);
      }
      v6 += 80;
      qfree(v41, nullptr, *(double *)v34.m128i_i64);
    }
    while ( (unsigned __int64)v6 < a3 );
  }
  return v57 - __readfsqword(0x28u);
}
