unsigned __int64 __fastcall sub_5A69B0(__m128i *a1, __m128i *a2, __int64 a3, const __m128i *a4, __int64 a5, __int64 a6)
{
  __int64 v7; // r13
  __m128i *v9; // r14
  void (__fastcall *v10)(__int128 *, const __m128i *, __int64); // rax
  __m128i v11; // xmm0
  void (__fastcall *v12)(__int128 *, __int128 *, __int64); // rax
  __m128i *v13; // rbx
  __int64 v14; // rsi
  __int8 v15; // dl
  __int64 v16; // rcx
  __int64 v17; // rax
  __m128i v18; // xmm0
  __int64 v19; // rax
  int v20; // edx
  int v21; // edx
  __int64 v22; // rdi
  __int8 v23; // cl
  __int64 v24; // rsi
  __int64 v25; // rdx
  void (__fastcall *v26)(__int128 *, const __m128i *, __int64); // rax
  __m128i v27; // xmm0
  void (__fastcall *v28)(__int128 *, __int128 *, __int64); // rax
  __int64 v29; // r8
  __int64 v30; // r9
  __m128i v31; // xmm0
  void (__fastcall *v32)(__int128 *, __int128 *, __int64); // rax
  __m128i v33; // xmm0
  __int64 v35; // rsi
  __int8 v36; // dl
  __int64 v37; // rcx
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // r8
  __int32 v41; // edi
  __int32 v42; // esi
  __int8 v43; // cl
  __int64 v44; // rdx
  int v45; // r8d
  __int64 v46; // rdi
  __int32 v47; // esi
  __int32 v48; // ecx
  __int8 v49; // dl
  __int64 v50; // rax
  __m128i v51; // xmm0
  __m128i v52; // xmm0
  __int64 v53; // [rsp+28h] [rbp-B8h]
  __m128i *v54; // [rsp+38h] [rbp-A8h]
  __m128i *v55; // [rsp+38h] [rbp-A8h]
  __m128i v56; // [rsp+40h] [rbp-A0h] BYREF
  __m128i v57; // [rsp+50h] [rbp-90h] BYREF
  __int128 v58; // [rsp+60h] [rbp-80h] BYREF
  __m128i v59; // [rsp+70h] [rbp-70h] BYREF
  __int128 v60; // [rsp+80h] [rbp-60h] BYREF
  __m128i v61; // [rsp+90h] [rbp-50h]
  unsigned __int64 v62; // [rsp+A8h] [rbp-38h]

  v53 = a3;
  v62 = __readfsqword(0x28u);
  if ( (char *)a2 - (char *)a1 > 512 )
  {
    v7 = (char *)a2 - (char *)a1;
    v9 = a2;
    v10 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
    if ( a3 )
    {
      while ( 1 )
      {
        v59 = 0u;
        v58 = 0;
        if ( !v10 )
        {
          v61 = 0u;
          v60 = 0;
LABEL_49:
          std::__throw_bad_function_call();
        }
        v10(&v58, a4, 2);
        v11 = _mm_loadu_si128(a4 + 1);
        v12 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
        v61 = 0u;
        v59 = v11;
        v54 = &a1[2 * (v7 >> 6)];
        v60 = 0;
        if ( !v12 )
          goto LABEL_49;
        v12(&v60, &v58, 2);
        v13 = a1 + 2;
        v61 = _mm_load_si128(&v59);
        if ( !v59.m128i_i64[0] )
          goto LABEL_49;
        if ( ((int (__fastcall *)(__int128 *, __int64 *, __m128i *))v61.m128i_i64[1])(&v60, a1[2].m128i_i64, v54) < 0 )
        {
          if ( !v61.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((int (__fastcall *)(__int128 *, __m128i *))v61.m128i_i64[1])(&v60, v54) >= 0 )
          {
            if ( !v61.m128i_i64[0] )
              std::__throw_bad_function_call();
            v45 = ((__int64 (__fastcall *)(__int128 *, __int64 *, __int64 *))v61.m128i_i64[1])(
                    &v60,
                    a1[2].m128i_i64,
                    v9[-2].m128i_i64);
            v46 = a1->m128i_i64[0];
            v47 = a1->m128i_i32[2];
            v48 = a1->m128i_i32[3];
            v49 = a1[1].m128i_i8[0];
            v50 = a1[1].m128i_i64[1];
            if ( v45 < 0 )
            {
              *a1 = _mm_loadu_si128(v9 - 2);
              a1[1] = _mm_loadu_si128(v9 - 1);
              v9[-2].m128i_i64[0] = v46;
              v9[-2].m128i_i32[2] = v47;
              v9[-2].m128i_i32[3] = v48;
              v9[-1].m128i_i8[0] = v49;
              v9[-1].m128i_i64[1] = v50;
            }
            else
            {
              v51 = _mm_loadu_si128(a1 + 2);
              a1[2].m128i_i64[0] = v46;
              a1[2].m128i_i32[2] = v47;
              *a1 = v51;
              v52 = _mm_loadu_si128(a1 + 3);
              a1[2].m128i_i32[3] = v48;
              a1[3].m128i_i8[0] = v49;
              a1[3].m128i_i64[1] = v50;
              a1[1] = v52;
            }
          }
          else
          {
            v35 = a1->m128i_i64[0];
            v36 = a1[1].m128i_i8[0];
            v37 = a1->m128i_i64[1];
            v38 = a1[1].m128i_i64[1];
            *a1 = _mm_loadu_si128(v54);
            a1[1] = _mm_loadu_si128(v54 + 1);
            v54->m128i_i64[0] = v35;
            v54->m128i_i64[1] = v37;
            v54[1].m128i_i8[0] = v36;
            v54[1].m128i_i64[1] = v38;
          }
        }
        else
        {
          if ( !v61.m128i_i64[0] )
            std::__throw_bad_function_call();
          if ( ((int (__fastcall *)(__int128 *, __int64 *))v61.m128i_i64[1])(&v60, a1[2].m128i_i64) >= 0 )
          {
            if ( !v61.m128i_i64[0] )
              std::__throw_bad_function_call();
            v39 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __int64 *))v61.m128i_i64[1])(
                    &v60,
                    v54,
                    v9[-2].m128i_i64);
            v40 = a1->m128i_i64[0];
            v41 = a1->m128i_i32[2];
            v42 = a1->m128i_i32[3];
            v43 = a1[1].m128i_i8[0];
            v44 = a1[1].m128i_i64[1];
            if ( v39 < 0 )
            {
              *a1 = _mm_loadu_si128(v9 - 2);
              a1[1] = _mm_loadu_si128(v9 - 1);
              v9[-2].m128i_i64[0] = v40;
              v9[-2].m128i_i32[2] = v41;
              v9[-2].m128i_i32[3] = v42;
              v9[-1].m128i_i8[0] = v43;
              v9[-1].m128i_i64[1] = v44;
            }
            else
            {
              *a1 = _mm_loadu_si128(v54);
              a1[1] = _mm_loadu_si128(v54 + 1);
              v54->m128i_i64[0] = v40;
              v54->m128i_i32[2] = v41;
              v54->m128i_i32[3] = v42;
              v54[1].m128i_i8[0] = v43;
              v54[1].m128i_i64[1] = v44;
            }
          }
          else
          {
            v14 = a1->m128i_i64[0];
            v15 = a1[1].m128i_i8[0];
            v16 = a1->m128i_i64[1];
            v17 = a1[1].m128i_i64[1];
            *a1 = _mm_loadu_si128(a1 + 2);
            v18 = _mm_loadu_si128(a1 + 3);
            a1[2].m128i_i64[0] = v14;
            a1[2].m128i_i64[1] = v16;
            a1[3].m128i_i8[0] = v15;
            a1[3].m128i_i64[1] = v17;
            a1[1] = v18;
          }
        }
        if ( v61.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
        v61 = 0u;
        v60 = 0;
        if ( !v59.m128i_i64[0] )
LABEL_63:
          std::__throw_bad_function_call();
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v59.m128i_i64[0])(&v60, &v58, 2);
        v19 = v59.m128i_i64[0];
        v55 = v9;
        v61 = _mm_load_si128(&v59);
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v19 )
              goto LABEL_63;
            v20 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __m128i *))v61.m128i_i64[1])(&v60, v13, a1);
            v19 = v61.m128i_i64[0];
            if ( v20 >= 0 )
              break;
            v13 += 2;
          }
          do
          {
            v55 -= 2;
            if ( !v19 )
              std::__throw_bad_function_call();
            v21 = ((__int64 (__fastcall *)(__int128 *, __m128i *, __m128i *))v61.m128i_i64[1])(&v60, a1, v55);
            v19 = v61.m128i_i64[0];
          }
          while ( v21 < 0 );
          if ( v13 >= v55 )
            break;
          v22 = v13->m128i_i64[0];
          v13 += 2;
          v23 = v13[-1].m128i_i8[0];
          v24 = v13[-2].m128i_i64[1];
          v25 = v13[-1].m128i_i64[1];
          v13[-2] = _mm_loadu_si128(v55);
          v13[-1] = _mm_loadu_si128(v55 + 1);
          v55->m128i_i64[0] = v22;
          v55->m128i_i64[1] = v24;
          v55[1].m128i_i8[0] = v23;
          v55[1].m128i_i64[1] = v25;
        }
        if ( v61.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
        if ( v59.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v59.m128i_i64[0])(&v58, &v58, 3);
        v26 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
        v61 = 0u;
        v60 = 0;
        if ( v26 )
        {
          v26(&v60, a4, 2);
          v61 = _mm_loadu_si128(a4 + 1);
        }
        sub_5A69B0(v13, v9, --v53, &v60);
        if ( v61.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
        v7 = (char *)v13 - (char *)a1;
        if ( (char *)v13 - (char *)a1 <= 512 )
          break;
        v10 = (void (__fastcall *)(__int128 *, const __m128i *, __int64))a4[1].m128i_i64[0];
        v9 = v13;
        if ( !v53 )
          goto LABEL_31;
      }
    }
    else
    {
LABEL_31:
      v59 = 0u;
      v58 = 0;
      if ( v10 )
      {
        v10(&v58, a4, 2);
        v27 = _mm_loadu_si128(a4 + 1);
        v28 = (void (__fastcall *)(__int128 *, __int128 *, __int64))a4[1].m128i_i64[0];
        v61 = 0u;
        v59 = v27;
        v60 = 0;
        if ( v28 )
        {
          v28(&v60, &v58, 2);
          v61 = _mm_load_si128(&v59);
        }
      }
      else
      {
        v61 = 0u;
        v60 = 0;
      }
      sub_5A6720(a1, v9, (unsigned __int64)v9, (__int64)&v60, a5, a6);
      if ( v61.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
      while ( (char *)v9 - (char *)a1 > 32 )
      {
        v31 = _mm_loadu_si128(v9 - 2);
        v32 = (void (__fastcall *)(__int128 *, __int128 *, __int64))v59.m128i_i64[0];
        v9 -= 2;
        v61 = 0u;
        v56 = v31;
        v57 = _mm_loadu_si128(v9 + 1);
        v33 = _mm_loadu_si128(a1);
        v60 = 0;
        *v9 = v33;
        v9[1] = _mm_loadu_si128(a1 + 1);
        if ( v32 )
        {
          v32(&v60, &v58, 2);
          v61 = _mm_load_si128(&v59);
        }
        sub_5A6420(
          (__int64)a1,
          0,
          ((char *)v9 - (char *)a1) >> 5,
          (__int64)&v60,
          v29,
          v30,
          (__int128)_mm_load_si128(&v56),
          (__int128)_mm_load_si128(&v57));
        if ( v61.m128i_i64[0] )
          ((void (__fastcall *)(__int128 *, __int128 *, __int64))v61.m128i_i64[0])(&v60, &v60, 3);
      }
      if ( v59.m128i_i64[0] )
        ((void (__fastcall *)(__int128 *, __int128 *, __int64))v59.m128i_i64[0])(&v58, &v58, 3);
    }
  }
  return v62 - __readfsqword(0x28u);
}

