unsigned __int64 __fastcall sub_2FB150(__int64 a1, const __m128i *a2, __int64 a3, const __m128i *a4)
{
  __int64 v5; // rbp
  const __m128i *v6; // r13
  const __m128i *v7; // r12
  const __m128i *v8; // rbx
  const __m128i *v9; // rbp
  __int64 v10; // rax
  __int64 v11; // rax
  __m128i v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __m128i v15; // xmm0
  __int64 v16; // rax
  __int64 *v17; // rsi
  __int64 v18; // rdi
  __m128i v19; // xmm0
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rax
  const __m128i *v25; // rbx
  const __m128i *v26; // rbx
  const __m128i *v27; // r12
  const __m128i *v28; // rsi
  __int64 v29; // r12
  __int64 v31; // rbp
  __m128i v32; // [rsp+10h] [rbp-268h] BYREF
  __int64 *i; // [rsp+20h] [rbp-258h]
  __int64 v34; // [rsp+28h] [rbp-250h]
  const __m128i *v35; // [rsp+30h] [rbp-248h]
  const __m128i *v36; // [rsp+38h] [rbp-240h]
  __int64 v37; // [rsp+40h] [rbp-238h]
  const __m128i *v38; // [rsp+48h] [rbp-230h]
  __m128i v39[12]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v40; // [rsp+110h] [rbp-168h]
  __m128i v41; // [rsp+120h] [rbp-158h] BYREF
  __int64 v42; // [rsp+138h] [rbp-140h]
  __int64 v43; // [rsp+140h] [rbp-138h]
  __int32 v44; // [rsp+148h] [rbp-130h]
  _DWORD v45[4]; // [rsp+150h] [rbp-128h] BYREF
  __int64 v46; // [rsp+160h] [rbp-118h]
  __int64 v47; // [rsp+168h] [rbp-110h]
  __m128i v48; // [rsp+170h] [rbp-108h] BYREF
  __int64 v49; // [rsp+180h] [rbp-F8h] BYREF
  __int64 v50; // [rsp+188h] [rbp-F0h]
  __m128i v51; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v52; // [rsp+1A0h] [rbp-D8h]
  __int32 v53; // [rsp+1A8h] [rbp-D0h]
  _DWORD v54[4]; // [rsp+1B0h] [rbp-C8h] BYREF
  __int64 v55; // [rsp+1C0h] [rbp-B8h]
  __int64 v56; // [rsp+1C8h] [rbp-B0h]
  __int32 v57; // [rsp+1D0h] [rbp-A8h]
  __int32 v58; // [rsp+1D8h] [rbp-A0h]
  __int64 v59; // [rsp+1E0h] [rbp-98h]
  char v60; // [rsp+1F0h] [rbp-88h] BYREF
  __m128i v61; // [rsp+210h] [rbp-68h] BYREF
  __int64 v62; // [rsp+220h] [rbp-58h]
  int (__fastcall *v63)(__m128i *, const __m128i *, __int64); // [rsp+228h] [rbp-50h]
  unsigned __int64 v64; // [rsp+238h] [rbp-40h]

  v35 = a2;
  v37 = a3;
  v5 = (__int64)a2->m128i_i64 - a1;
  v38 = a4;
  v64 = __readfsqword(0x28u);
  v36 = (const __m128i *)&v60;
  if ( (__int64)a2->m128i_i64 - a1 > 3200 )
  {
    while ( v37 )
    {
      v6 = v36;
      sub_2CC720((__int64)v36, v38);
      sub_2CC720((__int64)&v61, v6);
      v7 = v35;
      v8 = (const __m128i *)(a1 + 200);
      sub_2FB070(
        (const __m128i *)a1,
        (const __m128i *)(a1 + 200),
        (const __m128i *)(a1 + 200 * ((__int64)(0x8F5C28F5C28F5C29LL * (v5 >> 3)) >> 1)),
        (const __m128i *)((char *)v35 - 200),
        (__int64)&v61);
      sub_63210((__int64)&v61);
      sub_2CC720((__int64)&v61, v6);
      v9 = v7;
      for ( i = &v41.m128i_i64[1]; ; cleanup_argloc(i) )
      {
        if ( !v62 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v63(&v61, v8, a1) < 0 )
        {
          v8 = (const __m128i *)((char *)v8 + 200);
          if ( !v62 )
            goto LABEL_29;
        }
        v9 = (const __m128i *)((char *)v9 - 200);
        if ( !v62 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v63(&v61, (const __m128i *)a1, (__int64)v9) < 0 )
        {
          v9 = (const __m128i *)((char *)v9 - 200);
          if ( !v62 )
            goto LABEL_28;
        }
        if ( v8 >= v9 )
          break;
        v41.m128i_i32[2] = 0;
        v41.m128i_i64[0] = (__int64)&off_4CE648;
        copy_argloc(i, &v8->m128i_u64[1]);
        v10 = v8[1].m128i_i64[1];
        v45[0] = 0;
        v42 = v10;
        v43 = v8[2].m128i_i64[0];
        v44 = v8[2].m128i_i32[2];
        copy_argloc(v45, &v8[3]);
        v11 = v8[4].m128i_i64[0];
        v12 = _mm_loadu_si128(v8 + 5);
        v49 = 0;
        v46 = v11;
        v13 = v8[4].m128i_i64[1];
        v8[4].m128i_i64[1] = 0;
        v48 = v12;
        v8[5] = 0;
        v47 = v13;
        copy_tinfo_t(&v49, &v8[6]);
        v14 = v8[6].m128i_i64[1];
        v15 = _mm_loadu_si128(v8 + 7);
        v8[6].m128i_i64[1] = 0;
        v54[0] = 0;
        v50 = v14;
        v16 = v8[8].m128i_i64[0];
        v51 = v15;
        v52 = v16;
        LODWORD(v16) = v8[8].m128i_i32[2];
        v8[7] = 0;
        v53 = v16;
        copy_argloc(v54, &v8[9]);
        v55 = v8[10].m128i_i64[0];
        v56 = v8[10].m128i_i64[1];
        v57 = v8[11].m128i_i32[0];
        v58 = v8[11].m128i_i32[2];
        v41.m128i_i64[0] = (__int64)off_4CFE48;
        v59 = v8[12].m128i_i64[0];
        sub_2AF2E0((__int64)v8, v9);
        v17 = i;
        v8[12].m128i_i64[0] = v9[12].m128i_i64[0];
        copy_argloc(&v9->m128i_u64[1], v17);
        v9[1].m128i_i64[1] = v42;
        v9[2].m128i_i64[0] = v43;
        v9[2].m128i_i32[2] = v44;
        copy_argloc(&v9[3], v45);
        v18 = v9[4].m128i_i64[1];
        v19 = _mm_load_si128(&v48);
        v48 = 0;
        v9[4].m128i_i64[0] = v46;
        v20 = v47;
        v47 = 0;
        if ( v18 )
        {
          v9[5].m128i_i64[0] = 0;
          v34 = v20;
          v32 = v19;
          qfree(v18);
          v20 = v34;
          v19 = _mm_load_si128(&v32);
        }
        v9[4].m128i_i64[1] = v20;
        v9[5] = v19;
        copy_tinfo_t(&v9[6], &v49);
        v21 = v9[6].m128i_i64[1];
        v22 = v50;
        v50 = 0;
        v23 = _mm_load_si128(&v51);
        v51 = 0;
        if ( v21 )
        {
          v9[7].m128i_i64[0] = 0;
          v34 = v22;
          v32 = v23;
          qfree(v21);
          v22 = v34;
          v23 = _mm_load_si128(&v32);
        }
        v9[6].m128i_i64[1] = v22;
        v24 = v52;
        v9[7] = v23;
        v9[8].m128i_i64[0] = v24;
        v9[8].m128i_i32[2] = v53;
        copy_argloc(&v9[9], v54);
        v9[10].m128i_i64[0] = v55;
        v9[10].m128i_i64[1] = v56;
        v9[11].m128i_i32[0] = v57;
        v9[11].m128i_i32[2] = v58;
        v9[12].m128i_i64[0] = v59;
        v41.m128i_i64[0] = (__int64)&off_4CE648;
        cleanup_argloc(v54);
        if ( v50 )
        {
          v51.m128i_i64[0] = 0;
          qfree(v50);
        }
        clear_tinfo_t(&v49);
        if ( v47 )
        {
          v48.m128i_i64[0] = 0;
          qfree(v47);
        }
        v8 = (const __m128i *)((char *)v8 + 200);
        cleanup_argloc(v45);
      }
      v31 = --v37;
      sub_63210((__int64)&v61);
      sub_63210((__int64)v36);
      sub_2CC720((__int64)&v61, v38);
      sub_2FB150(v8, v35, v31, &v61);
      sub_63210((__int64)&v61);
      v5 = (__int64)v8->m128i_i64 - a1;
      if ( (__int64)v8->m128i_i64 - a1 <= 3200 )
        return v64 - __readfsqword(0x28u);
      v35 = v8;
    }
    v25 = v36;
    sub_2CC720((__int64)v36, v38);
    sub_2CC720((__int64)&v61, v25);
    v26 = v35;
    sub_2FACB0(a1, (__int64)v35, &v61);
    sub_63210((__int64)&v61);
    if ( (__int64)v26->m128i_i64 - a1 > 200 )
    {
      do
      {
        v35 = (const __m128i *)((char *)v35 - 200);
        v27 = v35;
        sub_2CA690(v39, v35);
        v39[0].m128i_i64[0] = (__int64)off_4CFE48;
        v40 = v27[12].m128i_i64[0];
        sub_2AF2E0((__int64)v27, (const __m128i *)a1);
        v28 = v36;
        v27[12].m128i_i64[0] = *(_QWORD *)(a1 + 192);
        sub_2CC720((__int64)&v61, v28);
        sub_2CA690(&v41, v39);
        v29 = (__int64)v27->m128i_i64 - a1;
        v41.m128i_i64[0] = (__int64)off_4CFE48;
        v59 = v40;
        sub_2FA970(a1, 0, 0x8F5C28F5C28F5C29LL * (v29 >> 3), &v41, (__int64)&v61);
        v41.m128i_i64[0] = (__int64)&off_4CE670;
        sub_2B6AB0((__int64)&v41);
        sub_63210((__int64)&v61);
        v39[0].m128i_i64[0] = (__int64)&off_4CE670;
        sub_2B6AB0((__int64)v39);
      }
      while ( v29 > 200 );
    }
    sub_63210((__int64)v36);
  }
  return v64 - __readfsqword(0x28u);
}
