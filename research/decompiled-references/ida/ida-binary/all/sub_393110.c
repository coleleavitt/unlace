__int64 __fastcall sub_393110(
        __int64 *a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        const char **a6,
        unsigned __int8 (__fastcall *a7)(const char **, __int64, double, double))
{
  __int64 *v7; // r15
  __int64 v8; // r13
  const char **v9; // r12
  __int64 *v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rcx
  const char **v13; // rdx
  __int128 v14; // xmm1
  __int64 *v15; // rbp
  const char *v16; // rsi
  __m128i v17; // xmm0
  const char *v18; // rdi
  const char *v19; // rsi
  unsigned __int64 v20; // rbp
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rdi
  unsigned __int64 v26; // rcx
  const char **v27; // rdx
  __int128 v28; // xmm1
  __int64 v29; // rbp
  const char *v30; // rsi
  __m128i v31; // xmm0
  const char *v32; // rdi
  const char *v33; // rsi
  unsigned __int64 v34; // rbp
  const char **v35; // rbp
  __int64 v36; // rax
  __int64 v37; // rdi
  const char *v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rbp
  unsigned __int64 v42; // rbx
  __int128 v43; // xmm1
  __int64 v44; // rbp
  __m128i v45; // xmm0
  __int64 v46; // rdi
  char *v47; // rbp
  unsigned __int64 v48; // r12
  __int128 v49; // xmm1
  __int64 v50; // r13
  __m128i v51; // xmm0
  __int64 v52; // rdi
  unsigned __int64 v53; // r13
  __m128i *v54; // rbp
  __m128i v55; // xmm1
  __int64 v56; // r14
  __m128i v57; // xmm0
  __int64 v58; // rdi
  __int64 *v59; // r12
  __m128i v60; // [rsp+0h] [rbp-78h] BYREF
  __m128i v61; // [rsp+10h] [rbp-68h] BYREF
  __m128i v62; // [rsp+20h] [rbp-58h] BYREF
  const char *v63; // [rsp+30h] [rbp-48h]
  unsigned __int64 v64; // [rsp+38h] [rbp-40h]

  v7 = a1;
  v8 = a2;
  v9 = a6;
  v10 = a3;
  if ( a4 > a5 )
  {
    result = (__int64)a3 - a2;
    v64 = 0xAAAAAAAAAAAAAAABLL * (((__int64)a3 - a2) >> 4);
    if ( (__int64)a3 - a2 > 0 )
    {
      v26 = 0xAAAAAAAAAAAAAAABLL * (result >> 4);
      v27 = a6;
      v28 = 0;
      v29 = a2;
      do
      {
        v30 = *(const char **)v29;
        v31 = _mm_loadu_si128((const __m128i *)(v29 + 8));
        *(_OWORD *)(v29 + 8) = v28;
        *(_QWORD *)v29 = 0;
        v32 = *v27;
        if ( *v27 )
        {
          v27[1] = nullptr;
          v62.m128i_i64[0] = (__int64)v30;
          v63 = (const char *)v26;
          v60.m128i_i64[0] = (__int64)v27;
          v61 = v31;
          qfree(v32, v30);
          v30 = (const char *)v62.m128i_i64[0];
          v26 = (unsigned __int64)v63;
          v28 = 0;
          v31 = _mm_load_si128(&v61);
          v27 = (const char **)v60.m128i_i64[0];
        }
        *v27 = v30;
        v29 += 48;
        v27 += 6;
        *(__m128i *)(v27 - 5) = v31;
        *(v27 - 3) = *(const char **)(v29 - 24);
        *(v27 - 2) = *(const char **)(v29 - 16);
        v33 = *(const char **)(v29 - 8);
        *(v27 - 1) = v33;
        --v26;
      }
      while ( v26 );
      v34 = v64 - 1;
      if ( (__int64)(v64 - 1) < 0 )
        v34 = 0;
      v35 = &v9[6 * v34];
      result = (__int64)(v35 + 6);
      if ( (__int64 *)v8 == v7 )
      {
        result -= (__int64)v9;
        v53 = 0xAAAAAAAAAAAAAAABLL * (result >> 4);
        if ( result > 0 )
        {
          v54 = (__m128i *)(v35 + 1);
          v55 = 0;
          do
          {
            v10 -= 6;
            v56 = v54[-1].m128i_i64[1];
            v57 = _mm_loadu_si128(v54);
            *v54 = v55;
            v54[-1].m128i_i64[1] = 0;
            v58 = *v10;
            v59 = &v54[-1].m128i_i64[1];
            if ( *v10 )
            {
              v10[1] = 0;
              v60 = v57;
              qfree(v58, v33);
              v57 = _mm_load_si128(&v60);
              v55 = 0;
            }
            *v10 = v56;
            v54 -= 3;
            *(__m128i *)(v10 + 1) = v57;
            v10[3] = v59[3];
            v10[4] = v59[4];
            result = v59[5];
            v10[5] = result;
            --v53;
          }
          while ( v53 );
        }
      }
      else if ( v9 != (const char **)result )
      {
        do
        {
          v8 -= 48;
          while ( 1 )
          {
            v38 = (const char *)v8;
            v10 -= 6;
            if ( a7(v35, v8, *(double *)v31.m128i_i64, *(double *)&v28) )
              break;
            v39 = (__int64)*v35;
            v31 = _mm_loadu_si128((const __m128i *)(v35 + 1));
            *v35 = nullptr;
            *(_OWORD *)(v35 + 1) = 0;
            v40 = *v10;
            if ( *v10 )
            {
              v10[1] = 0;
              v61.m128i_i64[0] = v39;
              v60 = v31;
              qfree(v40, (const char *)v8);
              v39 = v61.m128i_i64[0];
              v31 = _mm_load_si128(&v60);
            }
            *v10 = v39;
            *(__m128i *)(v10 + 1) = v31;
            v10[3] = (__int64)v35[3];
            v10[4] = (__int64)v35[4];
            result = (__int64)v35[5];
            v10[5] = result;
            if ( v9 == v35 )
              return result;
            v35 -= 6;
          }
          v36 = *(_QWORD *)v8;
          v31 = _mm_loadu_si128((const __m128i *)(v8 + 8));
          *(_QWORD *)v8 = 0;
          *(_OWORD *)(v8 + 8) = 0;
          v37 = *v10;
          if ( *v10 )
          {
            v10[1] = 0;
            v61.m128i_i64[0] = v36;
            v60 = v31;
            qfree(v37, (const char *)v8);
            v36 = v61.m128i_i64[0];
            v31 = _mm_load_si128(&v60);
          }
          *v10 = v36;
          *(__m128i *)(v10 + 1) = v31;
          v10[3] = *(_QWORD *)(v8 + 24);
          v10[4] = *(_QWORD *)(v8 + 32);
          v10[5] = *(_QWORD *)(v8 + 40);
        }
        while ( v7 != (__int64 *)v8 );
        v47 = (char *)(v35 + 6);
        result = v47 - (char *)v9;
        v48 = 0xAAAAAAAAAAAAAAABLL * ((v47 - (char *)v9) >> 4);
        if ( result > 0 )
        {
          v49 = 0;
          do
          {
            v10 -= 6;
            v50 = *((_QWORD *)v47 - 6);
            v51 = _mm_loadu_si128((const __m128i *)(v47 - 40));
            *(_OWORD *)(v47 - 40) = v49;
            *((_QWORD *)v47 - 6) = 0;
            v52 = *v10;
            v47 -= 48;
            if ( *v10 )
            {
              v10[1] = 0;
              v60 = v51;
              qfree(v52, v38);
              v51 = _mm_load_si128(&v60);
              v49 = 0;
            }
            *v10 = v50;
            *(__m128i *)(v10 + 1) = v51;
            v10[3] = *((_QWORD *)v47 + 3);
            v10[4] = *((_QWORD *)v47 + 4);
            result = *((_QWORD *)v47 + 5);
            v10[5] = result;
            --v48;
          }
          while ( v48 );
        }
      }
    }
  }
  else
  {
    result = a2 - (_QWORD)a1;
    v64 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 4);
    if ( a2 - (__int64)a1 > 0 )
    {
      v12 = 0xAAAAAAAAAAAAAAABLL * ((a2 - (__int64)a1) >> 4);
      v13 = a6;
      v14 = 0;
      v15 = a1;
      do
      {
        v16 = (const char *)*v15;
        v17 = _mm_loadu_si128((const __m128i *)(v15 + 1));
        *(_OWORD *)(v15 + 1) = v14;
        *v15 = 0;
        v18 = *v13;
        if ( *v13 )
        {
          v13[1] = nullptr;
          v63 = v16;
          v61.m128i_i64[0] = v12;
          v60.m128i_i64[0] = (__int64)v13;
          v62 = v17;
          qfree(v18, v16);
          v17 = _mm_load_si128(&v62);
          v16 = v63;
          v14 = 0;
          v12 = v61.m128i_i64[0];
          v13 = (const char **)v60.m128i_i64[0];
        }
        *v13 = v16;
        v15 += 6;
        v13 += 6;
        *(__m128i *)(v13 - 5) = v17;
        *(v13 - 3) = (const char *)*(v15 - 3);
        *(v13 - 2) = (const char *)*(v15 - 2);
        v19 = (const char *)*(v15 - 1);
        *(v13 - 1) = v19;
        --v12;
      }
      while ( v12 );
      v20 = v64 - 1;
      if ( (__int64)(v64 - 1) < 0 )
        v20 = 0;
      result = 48 * v20;
      v21 = (__int64)&v9[6 * v20 + 6];
      if ( (__int64 *)v8 == v10 )
      {
LABEL_40:
        if ( v9 != (const char **)v21 )
        {
          result = 0xAAAAAAAAAAAAAAABLL;
          v41 = v21 - (_QWORD)v9;
          v42 = 0xAAAAAAAAAAAAAAABLL * (v41 >> 4);
          if ( v41 > 0 )
          {
            v43 = 0;
            do
            {
              v44 = (__int64)*v9;
              v45 = _mm_loadu_si128((const __m128i *)(v9 + 1));
              *v9 = nullptr;
              *(_OWORD *)(v9 + 1) = v43;
              v46 = *v7;
              if ( *v7 )
              {
                v7[1] = 0;
                v60 = v45;
                qfree(v46, v19);
                v45 = _mm_load_si128(&v60);
                v43 = 0;
              }
              *v7 = v44;
              v9 += 6;
              v7 += 6;
              *(__m128i *)(v7 - 5) = v45;
              *(v7 - 3) = (__int64)*(v9 - 3);
              *(v7 - 2) = (__int64)*(v9 - 2);
              result = (__int64)*(v9 - 1);
              *(v7 - 1) = result;
              --v42;
            }
            while ( v42 );
          }
        }
      }
      else if ( v9 != (const char **)v21 )
      {
        while ( 1 )
        {
          v19 = (const char *)v9;
          if ( a7((const char **)v8, (__int64)v9, *(double *)v17.m128i_i64, *(double *)&v14) )
          {
            v22 = *(_QWORD *)v8;
            v17 = _mm_loadu_si128((const __m128i *)(v8 + 8));
            *(_QWORD *)v8 = 0;
            *(_OWORD *)(v8 + 8) = 0;
            v23 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              v60.m128i_i64[0] = v22;
              v61 = v17;
              qfree(v23, (const char *)v9);
              v17 = _mm_load_si128(&v61);
              v22 = v60.m128i_i64[0];
            }
            *v7 = v22;
            v8 += 48;
            v7 += 6;
            *(__m128i *)(v7 - 5) = v17;
            *(v7 - 3) = *(_QWORD *)(v8 - 24);
            *(v7 - 2) = *(_QWORD *)(v8 - 16);
            result = *(_QWORD *)(v8 - 8);
            *(v7 - 1) = result;
            if ( v9 == (const char **)v21 )
              return result;
          }
          else
          {
            v24 = (__int64)*v9;
            v17 = _mm_loadu_si128((const __m128i *)(v9 + 1));
            *v9 = nullptr;
            *(_OWORD *)(v9 + 1) = 0;
            v25 = *v7;
            if ( *v7 )
            {
              v7[1] = 0;
              v60.m128i_i64[0] = v24;
              v61 = v17;
              qfree(v25, (const char *)v9);
              v17 = _mm_load_si128(&v61);
              v24 = v60.m128i_i64[0];
            }
            *v7 = v24;
            v9 += 6;
            v7 += 6;
            *(__m128i *)(v7 - 5) = v17;
            *(v7 - 3) = (__int64)*(v9 - 3);
            *(v7 - 2) = (__int64)*(v9 - 2);
            result = (__int64)*(v9 - 1);
            *(v7 - 1) = result;
            if ( v9 == (const char **)v21 )
              return result;
          }
          if ( v10 == (__int64 *)v8 )
            goto LABEL_40;
        }
      }
    }
  }
  return result;
}
