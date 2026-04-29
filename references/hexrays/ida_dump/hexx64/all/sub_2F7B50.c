unsigned __int64 __fastcall sub_2F7B50(__int64 a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5)
{
  __int64 i; // r13
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 (__fastcall ***v13)(); // rdx
  __m128i v14; // xmm0
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // rbp
  __int64 v21; // r13
  __m128i v22; // xmm0
  __int64 v23; // rdi
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rdi
  __int64 v27; // rbx
  __m128i v28; // xmm0
  __int64 *v29; // rsi
  __int64 v31; // r12
  __int64 v32; // r13
  __int64 v33; // r15
  __int64 (__fastcall ***v34)(); // rdx
  __m128i v35; // xmm0
  __int64 v36; // rdi
  __m128i v37; // [rsp+0h] [rbp-F8h] BYREF
  __m128i v38; // [rsp+10h] [rbp-E8h] BYREF
  __m128i v39; // [rsp+20h] [rbp-D8h] BYREF
  __int64 (__fastcall ***v40)(); // [rsp+30h] [rbp-C8h]
  __int64 *v41; // [rsp+38h] [rbp-C0h]
  __int64 (__fastcall **v42)(); // [rsp+40h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+48h] [rbp-B0h]
  __int64 v44; // [rsp+50h] [rbp-A8h] BYREF
  __m128i v45; // [rsp+58h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-90h] BYREF
  __int64 v47; // [rsp+70h] [rbp-88h]
  int v48; // [rsp+78h] [rbp-80h]
  __int64 v49; // [rsp+80h] [rbp-78h]
  _BYTE v50[16]; // [rsp+90h] [rbp-68h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-58h]
  int (__fastcall *v52)(__int64, __int64, __int64 (__fastcall ***)()); // [rsp+A8h] [rbp-50h]
  unsigned __int64 v53; // [rsp+B8h] [rbp-40h]

  v38.m128i_i64[0] = a2;
  v41 = a3;
  v53 = __readfsqword(0x28u);
  v37.m128i_i64[0] = ((__int64)a3 - 1) / 2;
  if ( a2 >= v37.m128i_i64[0] )
  {
    v9 = v38.m128i_i64[0];
  }
  else
  {
    for ( i = a2; ; i = v9 )
    {
      v9 = 2 * (i + 1);
      v10 = 144 * (i + 1);
      v11 = a1 + v10;
      if ( !*(_QWORD *)(a5 + 16) )
        std::__throw_bad_function_call();
      if ( (*(int (__fastcall **)(__int64, __int64, __int64))(a5 + 24))(a5, a1 + v10, a1 + v10 - 72) < 0 )
      {
        --v9;
        v11 = a1 + 72 * v9;
      }
      v12 = a1 + 72 * i;
      *(_QWORD *)(v12 + 8) = *(_QWORD *)(v11 + 8);
      v13 = *(__int64 (__fastcall ****)())(v11 + 16);
      *(_QWORD *)(v11 + 16) = 0;
      v14 = _mm_loadu_si128((const __m128i *)(v11 + 24));
      *(_OWORD *)(v11 + 24) = 0;
      v15 = *(_QWORD *)(v12 + 16);
      if ( v15 )
      {
        *(_QWORD *)(v12 + 24) = 0;
        v40 = v13;
        v39 = v14;
        qfree(v15);
        v14 = _mm_load_si128(&v39);
        v13 = v40;
      }
      *(_QWORD *)(v12 + 16) = v13;
      *(__m128i *)(v12 + 24) = v14;
      copy_tinfo_t(v12 + 40, v11 + 40);
      v16 = v37.m128i_i64[0];
      *(_QWORD *)(v12 + 48) = *(_QWORD *)(v11 + 48);
      *(_DWORD *)(v12 + 56) = *(_DWORD *)(v11 + 56);
      *(_QWORD *)(v12 + 64) = *(_QWORD *)(v11 + 64);
      if ( v9 >= v16 )
        break;
    }
  }
  if ( ((unsigned __int8)v41 & 1) == 0 && ((__int64)v41 - 2) / 2 == v9 )
  {
    v31 = 2 * (v9 + 1);
    v32 = a1 + 144 * (v9 + 1) - 72;
    v33 = a1 + 72 * v9;
    *(_QWORD *)(v33 + 8) = *(_QWORD *)(v32 + 8);
    v34 = *(__int64 (__fastcall ****)())(v32 + 16);
    v35 = _mm_loadu_si128((const __m128i *)(v32 + 24));
    *(_QWORD *)(v32 + 16) = 0;
    *(_OWORD *)(v32 + 24) = 0;
    v36 = *(_QWORD *)(v33 + 16);
    if ( v36 )
    {
      *(_QWORD *)(v33 + 24) = 0;
      v40 = v34;
      v37 = v35;
      qfree(v36);
      v34 = v40;
      v35 = _mm_load_si128(&v37);
    }
    *(_QWORD *)(v33 + 16) = v34;
    *(__m128i *)(v33 + 24) = v35;
    copy_tinfo_t(v33 + 40, v32 + 40);
    *(_QWORD *)(v33 + 48) = *(_QWORD *)(v32 + 48);
    *(_DWORD *)(v33 + 56) = *(_DWORD *)(v32 + 56);
    *(_QWORD *)(v33 + 64) = *(_QWORD *)(v32 + 64);
    v9 = v31 - 1;
  }
  v37.m128i_i64[0] = (__int64)v50;
  sub_2CE280((__int64)v50, (const __m128i *)a5);
  v17 = *(_QWORD *)(a4 + 8);
  v18 = _mm_loadu_si128((const __m128i *)(a4 + 24));
  v42 = off_4E14B0;
  v43 = v17;
  v19 = *(_QWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0;
  v44 = v19;
  v45 = v18;
  *(_OWORD *)(a4 + 24) = 0;
  v46 = 0;
  v41 = &v46;
  copy_tinfo_t(&v46, a4 + 40);
  v47 = *(_QWORD *)(a4 + 48);
  v48 = *(_DWORD *)(a4 + 56);
  v42 = off_4E2CD8;
  v49 = *(_QWORD *)(a4 + 64);
  v20 = (v9 - 1) / 2;
  if ( v9 <= v38.m128i_i64[0] )
  {
    v25 = a1 + 72 * v9;
  }
  else
  {
    v40 = &v42;
    while ( 1 )
    {
      v24 = a1 + 72 * v20;
      if ( !v51 )
        std::__throw_bad_function_call();
      v25 = a1 + 72 * v9;
      if ( v52(v37.m128i_i64[0], a1 + 72 * v20, v40) >= 0 )
        break;
      *(_QWORD *)(v25 + 8) = *(_QWORD *)(v24 + 8);
      v21 = *(_QWORD *)(v24 + 16);
      v22 = _mm_loadu_si128((const __m128i *)(v24 + 24));
      *(_QWORD *)(v24 + 16) = 0;
      *(_OWORD *)(v24 + 24) = 0;
      v23 = *(_QWORD *)(v25 + 16);
      if ( v23 )
      {
        *(_QWORD *)(v25 + 24) = 0;
        v39 = v22;
        qfree(v23);
        v22 = _mm_load_si128(&v39);
      }
      *(_QWORD *)(v25 + 16) = v21;
      *(__m128i *)(v25 + 24) = v22;
      copy_tinfo_t(v25 + 40, v24 + 40);
      *(_QWORD *)(v25 + 48) = *(_QWORD *)(v24 + 48);
      *(_DWORD *)(v25 + 56) = *(_DWORD *)(v24 + 56);
      *(_QWORD *)(v25 + 64) = *(_QWORD *)(v24 + 64);
      v9 = v20;
      if ( v38.m128i_i64[0] >= v20 )
      {
        v25 = a1 + 72 * v20;
        break;
      }
      v20 = (v20 - 1) / 2;
    }
  }
  v26 = *(_QWORD *)(v25 + 16);
  v27 = v44;
  v28 = _mm_loadu_si128(&v45);
  v45 = 0;
  *(_QWORD *)(v25 + 8) = v43;
  v44 = 0;
  if ( v26 )
  {
    *(_QWORD *)(v25 + 24) = 0;
    v38 = v28;
    qfree(v26);
    v28 = _mm_load_si128(&v38);
  }
  *(_QWORD *)(v25 + 16) = v27;
  v29 = v41;
  *(__m128i *)(v25 + 24) = v28;
  copy_tinfo_t(v25 + 40, v29);
  v42 = off_4E14B0;
  *(_QWORD *)(v25 + 48) = v47;
  *(_DWORD *)(v25 + 56) = v48;
  *(_QWORD *)(v25 + 64) = v49;
  sub_2B5160(&v44);
  sub_66C50(v37.m128i_i64[0]);
  return v53 - __readfsqword(0x28u);
}
