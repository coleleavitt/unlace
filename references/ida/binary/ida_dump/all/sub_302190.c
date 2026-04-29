unsigned __int64 __fastcall sub_302190(__int64 a1, const __m128i *a2, __int64 a3, const __m128i *a4)
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
  __int64 v17; // rdi
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  __m128i v22; // xmm0
  __int64 v23; // rax
  const __m128i *v24; // rbx
  const __m128i *v25; // rbx
  const __m128i *v26; // r12
  const __m128i *v27; // rsi
  __int64 v28; // r12
  __int64 v30; // rbp
  __m128i v31; // [rsp+10h] [rbp-268h] BYREF
  __int64 *v32; // [rsp+20h] [rbp-258h]
  __int64 v33; // [rsp+28h] [rbp-250h]
  const __m128i *v34; // [rsp+30h] [rbp-248h]
  const __m128i *v35; // [rsp+38h] [rbp-240h]
  __int64 v36; // [rsp+40h] [rbp-238h]
  const __m128i *v37; // [rsp+48h] [rbp-230h]
  __m128i v38[12]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v39; // [rsp+110h] [rbp-168h]
  __m128i v40; // [rsp+120h] [rbp-158h] BYREF
  __int64 v41; // [rsp+138h] [rbp-140h]
  __int64 v42; // [rsp+140h] [rbp-138h]
  __int32 v43; // [rsp+148h] [rbp-130h]
  int v44; // [rsp+150h] [rbp-128h]
  __int64 v45; // [rsp+160h] [rbp-118h]
  __int64 v46; // [rsp+168h] [rbp-110h]
  __m128i v47; // [rsp+170h] [rbp-108h] BYREF
  __int64 v48; // [rsp+180h] [rbp-F8h]
  __int64 v49; // [rsp+188h] [rbp-F0h]
  __m128i v50; // [rsp+190h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+1A0h] [rbp-D8h]
  __int32 v52; // [rsp+1A8h] [rbp-D0h]
  int v53; // [rsp+1B0h] [rbp-C8h]
  __int64 v54; // [rsp+1C0h] [rbp-B8h]
  __int64 v55; // [rsp+1C8h] [rbp-B0h]
  __int32 v56; // [rsp+1D0h] [rbp-A8h]
  __int32 v57; // [rsp+1D8h] [rbp-A0h]
  __int64 v58; // [rsp+1E0h] [rbp-98h]
  char v59; // [rsp+1F0h] [rbp-88h] BYREF
  __m128i v60; // [rsp+210h] [rbp-68h] BYREF
  __int64 v61; // [rsp+220h] [rbp-58h]
  int (__fastcall *v62)(__m128i *, const __m128i *, __int64); // [rsp+228h] [rbp-50h]
  unsigned __int64 v63; // [rsp+238h] [rbp-40h]

  v34 = a2;
  v36 = a3;
  v5 = (__int64)a2->m128i_i64 - a1;
  v37 = a4;
  v63 = __readfsqword(0x28u);
  v35 = (const __m128i *)&v59;
  if ( (__int64)a2->m128i_i64 - a1 > 3200 )
  {
    while ( v36 )
    {
      v6 = v35;
      sub_2D0430((__int64)v35, v37);
      sub_2D0430((__int64)&v60, v6);
      v7 = v34;
      v8 = (const __m128i *)(a1 + 200);
      sub_3020B0(
        (const __m128i *)a1,
        (const __m128i *)(a1 + 200),
        (const __m128i *)(a1 + 200 * ((__int64)(0x8F5C28F5C28F5C29LL * (v5 >> 3)) >> 1)),
        (const __m128i *)((char *)v34 - 200),
        (__int64)&v60);
      sub_66C50((__int64)&v60);
      sub_2D0430((__int64)&v60, v6);
      v9 = v7;
      v32 = &v40.m128i_i64[1];
      while ( 1 )
      {
        if ( !v61 )
LABEL_29:
          std::__throw_bad_function_call();
        while ( v62(&v60, v8, a1) < 0 )
        {
          v8 = (const __m128i *)((char *)v8 + 200);
          if ( !v61 )
            goto LABEL_29;
        }
        v9 = (const __m128i *)((char *)v9 - 200);
        if ( !v61 )
LABEL_28:
          std::__throw_bad_function_call();
        while ( v62(&v60, (const __m128i *)a1, (__int64)v9) < 0 )
        {
          v9 = (const __m128i *)((char *)v9 - 200);
          if ( !v61 )
            goto LABEL_28;
        }
        if ( v8 >= v9 )
          break;
        v40.m128i_i32[2] = 0;
        v40.m128i_i64[0] = (__int64)&off_4E1528;
        copy_argloc();
        v10 = v8[1].m128i_i64[1];
        v44 = 0;
        v41 = v10;
        v42 = v8[2].m128i_i64[0];
        v43 = v8[2].m128i_i32[2];
        copy_argloc();
        v11 = v8[4].m128i_i64[0];
        v12 = _mm_loadu_si128(v8 + 5);
        v48 = 0;
        v45 = v11;
        v13 = v8[4].m128i_i64[1];
        v8[4].m128i_i64[1] = 0;
        v47 = v12;
        v8[5] = 0;
        v46 = v13;
        copy_tinfo_t();
        v14 = v8[6].m128i_i64[1];
        v15 = _mm_loadu_si128(v8 + 7);
        v8[6].m128i_i64[1] = 0;
        v53 = 0;
        v49 = v14;
        v16 = v8[8].m128i_i64[0];
        v50 = v15;
        v51 = v16;
        LODWORD(v16) = v8[8].m128i_i32[2];
        v8[7] = 0;
        v52 = v16;
        copy_argloc();
        v54 = v8[10].m128i_i64[0];
        v55 = v8[10].m128i_i64[1];
        v56 = v8[11].m128i_i32[0];
        v57 = v8[11].m128i_i32[2];
        v40.m128i_i64[0] = (__int64)off_4E2D50;
        v58 = v8[12].m128i_i64[0];
        sub_2B2F60((__int64)v8, v9);
        v8[12].m128i_i64[0] = v9[12].m128i_i64[0];
        copy_argloc();
        v9[1].m128i_i64[1] = v41;
        v9[2].m128i_i64[0] = v42;
        v9[2].m128i_i32[2] = v43;
        copy_argloc();
        v17 = v9[4].m128i_i64[1];
        v18 = _mm_load_si128(&v47);
        v47 = 0;
        v9[4].m128i_i64[0] = v45;
        v19 = v46;
        v46 = 0;
        if ( v17 )
        {
          v9[5].m128i_i64[0] = 0;
          v33 = v19;
          v31 = v18;
          qfree();
          v19 = v33;
          v18 = _mm_load_si128(&v31);
        }
        v9[4].m128i_i64[1] = v19;
        v9[5] = v18;
        copy_tinfo_t();
        v20 = v9[6].m128i_i64[1];
        v21 = v49;
        v49 = 0;
        v22 = _mm_load_si128(&v50);
        v50 = 0;
        if ( v20 )
        {
          v9[7].m128i_i64[0] = 0;
          v33 = v21;
          v31 = v22;
          qfree();
          v21 = v33;
          v22 = _mm_load_si128(&v31);
        }
        v9[6].m128i_i64[1] = v21;
        v23 = v51;
        v9[7] = v22;
        v9[8].m128i_i64[0] = v23;
        v9[8].m128i_i32[2] = v52;
        copy_argloc();
        v9[10].m128i_i64[0] = v54;
        v9[10].m128i_i64[1] = v55;
        v9[11].m128i_i32[0] = v56;
        v9[11].m128i_i32[2] = v57;
        v9[12].m128i_i64[0] = v58;
        v40.m128i_i64[0] = (__int64)&off_4E1528;
        cleanup_argloc();
        if ( v49 )
        {
          v50.m128i_i64[0] = 0;
          qfree();
        }
        clear_tinfo_t();
        if ( v46 )
        {
          v47.m128i_i64[0] = 0;
          qfree();
        }
        v8 = (const __m128i *)((char *)v8 + 200);
        cleanup_argloc();
        cleanup_argloc();
      }
      v30 = --v36;
      sub_66C50((__int64)&v60);
      sub_66C50((__int64)v35);
      sub_2D0430((__int64)&v60, v37);
      sub_302190(v8, v34, v30, &v60);
      sub_66C50((__int64)&v60);
      v5 = (__int64)v8->m128i_i64 - a1;
      if ( (__int64)v8->m128i_i64 - a1 <= 3200 )
        return v63 - __readfsqword(0x28u);
      v34 = v8;
    }
    v24 = v35;
    sub_2D0430((__int64)v35, v37);
    sub_2D0430((__int64)&v60, v24);
    v25 = v34;
    sub_301CF0(a1, (__int64)v34, &v60);
    sub_66C50((__int64)&v60);
    if ( (__int64)v25->m128i_i64 - a1 > 200 )
    {
      do
      {
        v34 = (const __m128i *)((char *)v34 - 200);
        v26 = v34;
        sub_2CE310(v38, v34);
        v38[0].m128i_i64[0] = (__int64)off_4E2D50;
        v39 = v26[12].m128i_i64[0];
        sub_2B2F60((__int64)v26, (const __m128i *)a1);
        v27 = v35;
        v26[12].m128i_i64[0] = *(_QWORD *)(a1 + 192);
        sub_2D0430((__int64)&v60, v27);
        sub_2CE310(&v40, v38);
        v28 = (__int64)v26->m128i_i64 - a1;
        v40.m128i_i64[0] = (__int64)off_4E2D50;
        v58 = v39;
        sub_3019B0(a1, 0, 0x8F5C28F5C28F5C29LL * (v28 >> 3), &v40, (__int64)&v60);
        v40.m128i_i64[0] = (__int64)&off_4E1550;
        sub_2BA730(&v40);
        sub_66C50((__int64)&v60);
        v38[0].m128i_i64[0] = (__int64)&off_4E1550;
        sub_2BA730(v38);
      }
      while ( v28 > 200 );
    }
    sub_66C50((__int64)v35);
  }
  return v63 - __readfsqword(0x28u);
}
