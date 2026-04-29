unsigned __int64 __fastcall sub_2E5C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r12
  __int64 i; // r15
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // r12
  __m128i v20; // xmm0
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // r13
  __m128i v25; // xmm0
  __int64 v26; // rdi
  __int64 v27; // rbx
  __int64 v28; // r15
  __int64 v29; // xmm1_8
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rdi
  __int64 v33; // xmm0_8
  __int64 v34; // xmm1_8
  __int64 v35; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rbx
  __int64 v41; // r12
  __int64 v42; // r13
  __m128i v43; // xmm0
  __int64 v44; // rdi
  __m128i v45; // [rsp+0h] [rbp-E8h] BYREF
  __int64 v46; // [rsp+18h] [rbp-D0h]
  __m128i v47; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+30h] [rbp-B8h]
  __int64 v49; // [rsp+38h] [rbp-B0h]
  __int64 (__fastcall **v50)(); // [rsp+40h] [rbp-A8h] BYREF
  int v51; // [rsp+48h] [rbp-A0h]
  __int64 v52; // [rsp+50h] [rbp-98h]
  __m128i v53; // [rsp+58h] [rbp-90h]
  __int64 v54; // [rsp+68h] [rbp-80h]
  __int64 v55; // [rsp+70h] [rbp-78h]
  _BYTE v56[16]; // [rsp+80h] [rbp-68h] BYREF
  __int64 v57; // [rsp+90h] [rbp-58h]
  int (__fastcall *v58)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+98h] [rbp-50h]
  unsigned __int64 v59; // [rsp+A8h] [rbp-40h]

  v6 = (a3 - 1) / 2;
  v46 = a2;
  v48 = a3;
  v49 = a4;
  v59 = __readfsqword(0x28u);
  if ( a2 >= v6 )
  {
    v9 = v46;
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 112 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 56) < 0 )
      {
        --v9;
        v11 = a1 + 56 * v9;
      }
      v12 = a1 + 56 * i;
      *(_DWORD *)(v12 + 8) = *(_DWORD *)(v11 + 8);
      v13 = *(_QWORD *)(v11 + 16);
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(_QWORD *)(v11 + 16) = 0;
      *(_OWORD *)(v11 + 24) = 0;
      v15 = *(_QWORD *)(v12 + 16);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 24) = 0;
        v47.m128i_i64[0] = v13;
        v45 = v14;
        qfree(v15);
        v13 = v47.m128i_i64[0];
        v14 = _mm_load_si128(&v45);
      }
      *(_QWORD *)(v12 + 16) = v13;
      *(__m128i *)(v12 + 24) = v14;
      *(_DWORD *)(v12 + 40) = *(_DWORD *)(v11 + 40);
      *(_DWORD *)(v12 + 44) = *(_DWORD *)(v11 + 44);
      *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + 48);
      if ( v9 >= v6 )
        break;
    }
  }
  if ( (v48 & 1) == 0 && (v48 - 2) / 2 == v9 )
  {
    v39 = 2 * (v9 + 1);
    v40 = a1 + 112 * (v9 + 1) - 56;
    v41 = a1 + 56 * v9;
    *(_DWORD *)(v41 + 8) = *(_DWORD *)(v40 + 8);
    v42 = *(_QWORD *)(v40 + 16);
    v43 = _mm_loadu_si128((const __m128i *)(v40 + 24));
    *(_QWORD *)(v40 + 16) = 0;
    *(_OWORD *)(v40 + 24) = 0;
    v44 = *(_QWORD *)(v41 + 16);
    if ( v44 )
    {
      *(_QWORD *)(v41 + 24) = 0;
      v45 = v43;
      qfree(v44);
      v43 = _mm_load_si128(&v45);
    }
    *(_QWORD *)(v41 + 16) = v42;
    v9 = v39 - 1;
    *(__m128i *)(v41 + 24) = v43;
    *(_DWORD *)(v41 + 40) = *(_DWORD *)(v40 + 40);
    *(_DWORD *)(v41 + 44) = *(_DWORD *)(v40 + 44);
    *(_QWORD *)(v41 + 48) = *(_QWORD *)(v40 + 48);
  }
  v45.m128i_i64[0] = (__int64)v56;
  sub_2C9440((__int64)v56, (const __m128i *)a5);
  v16 = v49;
  v50 = off_4B5678;
  v17 = v46;
  v18 = *(_QWORD *)(v49 + 40);
  v19 = *(_QWORD *)(v49 + 16);
  *(_QWORD *)(v49 + 16) = 0;
  v20 = _mm_loadu_si128((const __m128i *)(v16 + 24));
  v21 = *(_DWORD *)(v16 + 8);
  *(_OWORD *)(v16 + 24) = 0;
  v54 = v18;
  v22 = *(_QWORD *)(v16 + 48);
  v51 = v21;
  v55 = v22;
  v52 = v19;
  v53 = v20;
  v23 = (v9 - 1) / 2;
  if ( v9 <= v17 )
  {
    v29 = _mm_srli_si128(v20, 8).m128i_u64[0];
    v28 = a1 + 56 * v9;
  }
  else
  {
    while ( 1 )
    {
      v27 = a1 + 56 * v23;
      if ( !v57 )
        std::__throw_bad_function_call();
      v28 = a1 + 56 * v9;
      if ( v58(v45.m128i_i64[0], a1 + 56 * v23, &v50) >= 0 )
      {
        v21 = v51;
        v19 = v52;
        v29 = v53.m128i_i64[1];
        v20.m128i_i64[0] = v53.m128i_i64[0];
        goto LABEL_21;
      }
      *(_DWORD *)(v28 + 8) = *(_DWORD *)(v27 + 8);
      v24 = *(_QWORD *)(v27 + 16);
      v25 = _mm_loadu_si128((const __m128i *)(v27 + 24));
      *(_QWORD *)(v27 + 16) = 0;
      *(_OWORD *)(v27 + 24) = 0;
      v26 = *(_QWORD *)(v28 + 16);
      if ( v26 )
      {
        *(_QWORD *)(v28 + 24) = 0;
        v47 = v25;
        qfree(v26);
        v25 = _mm_load_si128(&v47);
      }
      *(_QWORD *)(v28 + 16) = v24;
      v9 = v23;
      *(__m128i *)(v28 + 24) = v25;
      *(_DWORD *)(v28 + 40) = *(_DWORD *)(v27 + 40);
      *(_DWORD *)(v28 + 44) = *(_DWORD *)(v27 + 44);
      *(_QWORD *)(v28 + 48) = *(_QWORD *)(v27 + 48);
      if ( v46 >= v23 )
        break;
      v23 = (v23 - 1) / 2;
    }
    v21 = v51;
    v19 = v52;
    v28 = a1 + 56 * v23;
    v29 = v53.m128i_i64[1];
    v20.m128i_i64[0] = v53.m128i_i64[0];
  }
LABEL_21:
  v30 = *(_QWORD *)(v28 + 16);
  *(_DWORD *)(v28 + 8) = v21;
  v52 = 0;
  v53 = 0;
  if ( v30 )
  {
    *(_QWORD *)(v28 + 24) = 0;
    v47.m128i_i64[0] = v29;
    v46 = v20.m128i_i64[0];
    qfree(v30);
    v31 = v54;
    v32 = v52;
    *(_QWORD *)(v28 + 16) = v19;
    v33 = v46;
    v34 = v47.m128i_i64[0];
    *(_QWORD *)(v28 + 40) = v31;
    v35 = v55;
    *(_QWORD *)(v28 + 24) = v33;
    *(_QWORD *)(v28 + 48) = v35;
    v50 = off_4B3DB0;
    *(_QWORD *)(v28 + 32) = v34;
    if ( v32 )
    {
      v53.m128i_i64[0] = 0;
      qfree(v32);
    }
  }
  else
  {
    v37 = v54;
    *(_QWORD *)(v28 + 16) = v19;
    *(_QWORD *)(v28 + 24) = v20.m128i_i64[0];
    *(_QWORD *)(v28 + 40) = v37;
    v38 = v55;
    *(_QWORD *)(v28 + 32) = v29;
    *(_QWORD *)(v28 + 48) = v38;
  }
  sub_628D0(v45.m128i_i64[0]);
  return v59 - __readfsqword(0x28u);
}
