__int64 __fastcall sub_F90190(
        __m128i *a1,
        __int64 a2,
        __m128i *a3,
        __int64 a4,
        __int64 a5,
        const __m128i *a6,
        __int64 a7)
{
  __int64 v7; // rax
  __m128i *v8; // r12
  const __m128i *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r12
  __m128i *v12; // rbx
  __m128i *v13; // rbp
  __int64 v14; // r15
  __int64 v15; // rbx
  __int64 v16; // r14
  __int64 v17; // r15
  __m128i *v18; // r14
  __int64 v19; // rax
  __int64 result; // rax
  __int64 v21; // rdx
  __m128i *v22; // r15
  __m128i v23; // xmm6
  const __m128i *v24; // rcx
  const __m128i *v25; // rbx
  __m128i v26; // xmm4
  __m128i *v27; // r14
  __int64 v28; // rbx
  __int64 v29; // rbp
  __int64 v30; // r15
  __int64 v31; // rdx
  __int64 v32; // rdx
  const __m128i *v33; // r15
  __m128i v34; // xmm7
  __m128 v35; // xmm0
  __m128i v36; // xmm5
  __m128i v37; // xmm1
  __int64 v38; // rdx
  __int64 v39; // rdx
  __m128i *v40; // [rsp+8h] [rbp-D0h]
  __m128 v41; // [rsp+10h] [rbp-C8h] BYREF
  __m128 v42; // [rsp+20h] [rbp-B8h] BYREF
  __int64 *v43; // [rsp+30h] [rbp-A8h]
  __int64 v44; // [rsp+38h] [rbp-A0h] BYREF
  __m128 v45; // [rsp+40h] [rbp-98h] BYREF
  __m128 v46; // [rsp+50h] [rbp-88h] BYREF
  const __m128i *v47; // [rsp+60h] [rbp-78h]
  __int64 v48; // [rsp+68h] [rbp-70h]
  __m128i *v49; // [rsp+70h] [rbp-68h]
  __m128i *v50; // [rsp+78h] [rbp-60h]
  __m128 si128; // [rsp+80h] [rbp-58h] BYREF
  _OWORD v52[4]; // [rsp+90h] [rbp-48h] BYREF

  v7 = a5;
  v8 = a3;
  v9 = a6;
  v40 = a1;
  if ( a7 <= a5 )
    v7 = a7;
  v41.m128_u64[0] = a2;
  if ( a4 <= v7 )
  {
    v12 = (__m128i *)a2;
    v18 = a1;
LABEL_46:
    result = (char *)v12 - (char *)v18;
    v32 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v12 - (char *)v18) >> 3);
    if ( (char *)v12 - (char *)v18 > 0 )
    {
      v33 = v9;
      result = (__int64)v18;
      do
      {
        v34 = _mm_loadu_si128((const __m128i *)result);
        v33 = (const __m128i *)((char *)v33 + 56);
        result += 56;
        *(__m128i *)((char *)v33 - 56) = v34;
        *(const __m128i *)((char *)&v33[-3] + 8) = _mm_loadu_si128((const __m128i *)(result - 40));
        *(const __m128i *)((char *)&v33[-2] + 8) = _mm_loadu_si128((const __m128i *)(result - 24));
        v33[-1].m128i_i64[1] = *(_QWORD *)(result - 8);
        --v32;
      }
      while ( v32 );
      if ( v8 != v12 && v9 != v33 )
      {
        v42.m128_u64[0] = (unsigned __int64)&v9[1].m128i_u64[1];
        v43 = &v12[1].m128i_i64[1];
        while ( 1 )
        {
          while ( 1 )
          {
            v41.m128_u64[0] = (unsigned __int64)v9;
            v35 = _mm_loadh_ps((const double *)v41.m128_u64);
            v41.m128_u64[0] = (unsigned __int64)v12;
            si128 = v35;
            v52[0] = _mm_loadh_ps((const double *)v41.m128_u64);
            if ( !(unsigned __int8)sub_F7C540(v52, (__int64 **)&si128) )
              break;
            v36 = _mm_loadu_si128(v12);
            v12 = (__m128i *)((char *)v12 + 56);
            v18 = (__m128i *)((char *)v18 + 56);
            *(__m128i *)((char *)v18 - 56) = v36;
            *(__m128i *)((char *)v18 - 40) = _mm_loadu_si128((__m128i *)((char *)v12 - 40));
            *(__m128i *)((char *)v18 - 24) = _mm_loadu_si128((__m128i *)((char *)v12 - 24));
            result = v12[-1].m128i_i64[1];
            v18[-1].m128i_i64[1] = result;
            if ( v8 == v12 || v33 == v9 )
              goto LABEL_40;
            v43 = &v12[1].m128i_i64[1];
          }
          v37 = _mm_loadu_si128(v9);
          v9 = (const __m128i *)((char *)v9 + 56);
          v18 = (__m128i *)((char *)v18 + 56);
          *(__m128i *)((char *)v18 - 56) = v37;
          *(__m128i *)((char *)v18 - 40) = _mm_loadu_si128((const __m128i *)((char *)v9 - 40));
          *(__m128i *)((char *)v18 - 24) = _mm_loadu_si128((const __m128i *)((char *)v9 - 24));
          result = v9[-1].m128i_i64[1];
          v18[-1].m128i_i64[1] = result;
          if ( v33 == v9 || v8 == v12 )
            break;
          v42.m128_u64[0] = (unsigned __int64)&v9[1].m128i_u64[1];
        }
      }
LABEL_40:
      if ( v33 != v9 )
      {
        result = 0x6DB6DB6DB6DB6DB7LL;
        v30 = (char *)v33 - (char *)v9;
        v31 = 0x6DB6DB6DB6DB6DB7LL * (v30 >> 3);
        if ( v30 > 0 )
        {
          result = 0;
          do
          {
            *(__m128i *)((char *)v18 + result) = _mm_loadu_si128((const __m128i *)((char *)v9 + result));
            *(__m128i *)((char *)v18 + result + 16) = _mm_loadu_si128((const __m128i *)((char *)v9 + result + 16));
            *(__m128i *)((char *)v18 + result + 32) = _mm_loadu_si128((const __m128i *)((char *)v9 + result + 32));
            *(__int64 *)((char *)v18[3].m128i_i64 + result) = *(__int64 *)((char *)v9[3].m128i_i64 + result);
            result += 56;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    return result;
  }
  if ( a7 < a5 )
  {
    v47 = a6;
    v10 = a4;
    v42.m128_u64[0] = (unsigned __int64)&si128;
    v43 = (__int64 *)v52;
    v49 = a3;
    v11 = a5;
    while ( 1 )
    {
      if ( v11 >= v10 )
      {
        v13 = v40;
        v46.m128_u64[0] = v11 / 2;
        v17 = v11 / 2;
        v12 = (__m128i *)(v41.m128_u64[0] + 56 * (v11 / 2));
        if ( (__int64)(v41.m128_u64[0] - (_QWORD)v40) > 0 )
        {
          v48 = v41.m128_u64[0] + 56 * (v11 / 2);
          v27 = v40;
          v44 = v48;
          v28 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(v41.m128_u64[0] - (_QWORD)v40) >> 3);
          v50 = (__m128i *)v11;
          v45 = _mm_loadh_ps((const double *)&v44);
          while ( 1 )
          {
            v29 = v28 >> 1;
            v52[0] = _mm_load_si128((const __m128i *)&v45);
            v44 = (__int64)&v27->m128i_i64[7 * (v28 >> 1)];
            si128 = _mm_loadh_ps((const double *)&v44);
            if ( (unsigned __int8)sub_F7C540(v43, (__int64 **)v42.m128_u64[0]) )
            {
              if ( !v29 )
              {
LABEL_36:
                v12 = (__m128i *)v48;
                v13 = v27;
                v11 = (__int64)v50;
                v45.m128_u64[0] = 0x6DB6DB6DB6DB6DB7LL * (((char *)v27 - (char *)v40) >> 3);
                v10 -= v45.m128_u64[0];
                goto LABEL_37;
              }
            }
            else
            {
              v27 = (__m128i *)((char *)v27 + 56 * (v28 >> 1) + 56);
              v29 = v28 - v29 - 1;
              if ( v29 <= 0 )
                goto LABEL_36;
            }
            v28 = v29;
          }
        }
        v45.m128_u64[0] = 0;
LABEL_37:
        v11 -= v46.m128_u64[0];
      }
      else
      {
        v12 = (__m128i *)v41.m128_u64[0];
        v48 = v10 / 2;
        v45.m128_u64[0] = v10 / 2;
        v13 = (__m128i *)((char *)v40 + 56 * (v10 / 2));
        if ( (__int64)((__int64)v49->m128i_i64 - v41.m128_u64[0]) > 0 )
        {
          v14 = v41.m128_u64[0];
          v50 = (__m128i *)((char *)v40 + 56 * (v10 / 2));
          v15 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)((__int64)v49->m128i_i64 - v41.m128_u64[0]) >> 3);
          v44 = (__int64)v50;
          v46 = _mm_loadh_ps((const double *)&v44);
          while ( 1 )
          {
            v16 = v15 >> 1;
            si128 = (__m128)_mm_load_si128((const __m128i *)&v46);
            v44 = v14 + 56 * (v15 >> 1);
            v52[0] = _mm_loadh_ps((const double *)&v44);
            if ( (unsigned __int8)sub_F7C540(v43, (__int64 **)v42.m128_u64[0]) )
            {
              v14 += 56 * (v15 >> 1) + 56;
              v16 = v15 - v16 - 1;
              if ( v16 <= 0 )
                goto LABEL_13;
            }
            else if ( !v16 )
            {
LABEL_13:
              v12 = (__m128i *)v14;
              v13 = v50;
              v17 = 0x6DB6DB6DB6DB6DB7LL * ((signed __int64)(v14 - v41.m128_u64[0]) >> 3);
              v11 -= v17;
              goto LABEL_14;
            }
            v15 = v16;
          }
        }
        v17 = 0;
LABEL_14:
        v10 -= v48;
      }
      v18 = sub_F8FEC0(v13, (__m128i *)v41.m128_u64[0], v12, v10, v17, v47, a7);
      sub_F90190((_DWORD)v40, (_DWORD)v13, (_DWORD)v18, v45.m128_i32[0], v17, (_DWORD)v47, a7);
      v19 = v11;
      if ( a7 <= v11 )
        v19 = a7;
      if ( v19 >= v10 )
        break;
      v40 = v18;
      v41.m128_u64[0] = (unsigned __int64)v12;
      if ( a7 >= v11 )
      {
        v8 = v49;
        v9 = v47;
        goto LABEL_20;
      }
    }
    v8 = v49;
    v9 = v47;
    goto LABEL_46;
  }
  v12 = (__m128i *)a2;
  v18 = a1;
LABEL_20:
  result = (char *)v8 - (char *)v12;
  v21 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v8 - (char *)v12) >> 3);
  if ( (char *)v8 - (char *)v12 > 0 )
  {
    v22 = (__m128i *)v9;
    result = (__int64)v12;
    while ( 1 )
    {
      v23 = _mm_loadu_si128((const __m128i *)result);
      result += 56;
      *v22 = v23;
      v22[1] = _mm_loadu_si128((const __m128i *)(result - 40));
      v22[2] = _mm_loadu_si128((const __m128i *)(result - 24));
      v22[3].m128i_i64[0] = *(_QWORD *)(result - 8);
      v24 = (__m128i *)((char *)v22 + 56);
      if ( !--v21 )
        break;
      v22 = (__m128i *)((char *)v22 + 56);
    }
    if ( v18 == v12 )
    {
      result = (char *)v24 - (char *)v9;
      v39 = 0x6DB6DB6DB6DB6DB7LL * (((char *)v24 - (char *)v9) >> 3);
      if ( (char *)v24 - (char *)v9 > 0 )
      {
        result = -56;
        do
        {
          *(__m128i *)((char *)v8 + result) = _mm_loadu_si128((const __m128i *)((char *)v24 + result));
          *(__m128i *)((char *)v8 + result + 16) = _mm_loadu_si128((const __m128i *)((char *)v24 + result + 16));
          *(__m128i *)((char *)v8 + result + 32) = _mm_loadu_si128((const __m128i *)((char *)v24 + result + 32));
          *(__int64 *)((char *)v8[3].m128i_i64 + result) = *(__int64 *)((char *)v24[3].m128i_i64 + result);
          result -= 56;
          --v39;
        }
        while ( v39 );
      }
    }
    else if ( v9 != v24 )
    {
      v25 = (__m128i *)((char *)v12 - 56);
      v41.m128_u64[0] = (unsigned __int64)v25;
      v42.m128_u64[0] = (unsigned __int64)&v22[1].m128i_u64[1];
      v41 = _mm_loadh_ps((const double *)v41.m128_u64);
      v42.m128_u64[0] = (unsigned __int64)v22;
      v42 = _mm_loadh_ps((const double *)v42.m128_u64);
      while ( 1 )
      {
        while ( 1 )
        {
          v26 = _mm_load_si128((const __m128i *)&v42);
          v8 = (__m128i *)((char *)v8 - 56);
          si128 = (__m128)_mm_load_si128((const __m128i *)&v41);
          v52[0] = v26;
          if ( (unsigned __int8)sub_F7C540(v52, (__int64 **)&si128) )
            break;
          *v8 = _mm_loadu_si128(v22);
          v8[1] = _mm_loadu_si128(v22 + 1);
          v8[2] = _mm_loadu_si128(v22 + 2);
          result = v22[3].m128i_i64[0];
          v8[3].m128i_i64[0] = result;
          if ( v9 == v22 )
            return result;
          v22 = (__m128i *)((char *)v22 - 56);
          v42.m128_u64[0] = (unsigned __int64)v22;
          v42 = _mm_loadh_ps((const double *)v42.m128_u64);
        }
        *v8 = _mm_loadu_si128(v25);
        v8[1] = _mm_loadu_si128(v25 + 1);
        v8[2] = _mm_loadu_si128(v25 + 2);
        v8[3].m128i_i64[0] = v25[3].m128i_i64[0];
        if ( v18 == v25 )
          break;
        v25 = (const __m128i *)((char *)v25 - 56);
        v41.m128_u64[0] = (unsigned __int64)v25;
        v41 = _mm_loadh_ps((const double *)v41.m128_u64);
      }
      result = (char *)&v22[3].m128i_u64[1] - (char *)v9;
      v38 = 0x6DB6DB6DB6DB6DB7LL * (result >> 3);
      if ( result > 0 )
      {
        result = 0;
        do
        {
          *(__m128i *)((char *)v8 + result - 56) = _mm_loadu_si128((__m128i *)((char *)v22 + result));
          *(__m128i *)((char *)v8 + result - 40) = _mm_loadu_si128((__m128i *)((char *)v22 + result + 16));
          *(__m128i *)((char *)v8 + result - 24) = _mm_loadu_si128((__m128i *)((char *)v22 + result + 32));
          *(__int64 *)((char *)&v8->m128i_i64[-1] + result) = *(__int64 *)((char *)v22[3].m128i_i64 + result);
          result -= 56;
          --v38;
        }
        while ( v38 );
      }
    }
  }
  return result;
}
