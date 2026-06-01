__int64 __fastcall sub_1E7BE50(
        __int64 a1,
        unsigned __int64 a2,
        _QWORD *a3,
        double a4,
        double a5,
        __m128i a6,
        __m128 a7,
        double a8,
        double a9,
        double a10,
        __m128 a11)
{
  _QWORD *v11; // r12
  unsigned int v14; // eax
  __int64 v15; // r15
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rsi
  unsigned __int64 *v19; // rcx
  __int64 result; // rax
  __m128i *v21; // r13
  __int64 v22; // r14
  __int64 v23; // r12
  __m128i *v24; // rax
  double v25; // xmm4_8
  double v26; // xmm5_8
  __m128 *v27; // rdx
  void *v28; // r10
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  __m128i v31; // xmm0
  void *v32; // rax
  __int64 v33; // rax
  __int64 v34; // r10
  __m128 *v35; // r12
  __int64 v36; // rax
  __int64 v37; // r10
  __int64 v38; // r12
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  __int64 v42; // r8
  __m128 *v43; // r12
  __m128 *v44; // r14
  __m128 *v45; // [rsp+8h] [rbp-80h]
  void *v46; // [rsp+10h] [rbp-78h] BYREF
  __int64 v47; // [rsp+18h] [rbp-70h]
  __int64 m128i_i64; // [rsp+20h] [rbp-68h]
  __int64 v49; // [rsp+28h] [rbp-60h]
  __int64 v50; // [rsp+30h] [rbp-58h]
  __int64 v51; // [rsp+38h] [rbp-50h]
  __int64 v52; // [rsp+40h] [rbp-48h]
  __int64 v53; // [rsp+48h] [rbp-40h]

  v11 = a3 + 1;
  v14 = sub_F6C520(*(_QWORD *)(a2 + 40));
  sub_1E7C400(a1, *(_QWORD *)(a2 + 40), v14 * (((unsigned __int64)v11 - (v11 != nullptr)) / v14 + (v11 != nullptr)));
  v15 = *(_QWORD *)(a1 + 16);
  if ( !*(_BYTE *)(v15 + 232) )
  {
    v21 = *(__m128i **)(v15 + 88);
    v47 = 16LL * *(unsigned int *)(v15 + 96);
    v45 = (__m128 *)&v21->m128i_i8[v47];
    v46 = (void *)(v47 >> 4);
    if ( v47 )
    {
      v22 = v47 >> 4;
      do
      {
        v23 = v22;
        v24 = (__m128i *)operator new(16 * v22, (const std::nothrow_t *)&std::nothrow);
        if ( v24 )
        {
          v27 = (__m128 *)&v24[1];
          v28 = (void *)v21->m128i_i64[1];
          v29 = (__m128)_mm_loadu_si128(v21);
          *v24 = (__m128i)v29;
          if ( &v24[v23] != &v24[1] )
          {
            v30 = _mm_loadh_ps((const double *)&v24->m128i_i64[1]);
            do
              *v27++ = v30;
            while ( &v24[v23] != (__m128i *)v27 );
            v28 = (void *)v24[v23 - 1].m128i_i64[1];
          }
          v46 = v28;
          v31 = (__m128i)_mm_loadh_ps((const double *)&v46);
          v46 = v24;
          *v21 = v31;
          sub_1E7BD90((__m128 *)v21, v45, v24, v22, v31, v29, a6, a7, v25, v26, a10, a11);
          v32 = v46;
          goto LABEL_20;
        }
        v22 >>= 1;
      }
      while ( v22 );
      if ( (unsigned __int64)v47 <= 0xE0 )
        goto LABEL_36;
      v33 = 16 * ((__int64)v46 >> 1);
      v46 = &v21[(unsigned __int64)v33 / 0x10];
      v49 = v33 >> 4;
      if ( (unsigned __int64)v33 <= 0xE0 )
      {
        m128i_i64 = v33;
        sub_1E5DC00((__m128 *)v21, (__m128 *)v46);
        v40 = m128i_i64;
      }
      else
      {
        v34 = 16 * (v33 >> 5);
        m128i_i64 = (__int64)v21[(unsigned __int64)v34 / 0x10].m128i_i64;
        v50 = v34 >> 4;
        if ( (unsigned __int64)v34 <= 0xE0 )
        {
          v52 = 16 * (v33 >> 5);
          v51 = v33;
          sub_1E5DC00((__m128 *)v21, (__m128 *)m128i_i64);
          v36 = v51;
          v37 = v52;
        }
        else
        {
          v53 = v33;
          v51 = 16 * (v33 >> 5);
          v35 = (__m128 *)&v21[v34 >> 5];
          v52 = 16 * (v34 >> 5);
          sub_1E623D0((__m128 *)v21, v35);
          sub_1E623D0(v35, (__m128 *)m128i_i64);
          sub_1E621B0(v21->m128i_i8, (unsigned __int64)v35, m128i_i64, v52 >> 4, (v51 - v52) >> 4);
          v36 = v53;
          v37 = v51;
        }
        v38 = (v36 - v37) >> 4;
        if ( v36 - v37 <= 224 )
        {
          v51 = v36;
          sub_1E5DC00((__m128 *)m128i_i64, (__m128 *)v46);
          v39 = v51;
        }
        else
        {
          v53 = v36;
          v52 = 16 * ((v36 - v37) >> 5);
          sub_1E623D0((__m128 *)m128i_i64, (__m128 *)(m128i_i64 + v52));
          sub_1E623D0((__m128 *)(m128i_i64 + v52), (__m128 *)v46);
          sub_1E621B0(
            (char *)m128i_i64,
            m128i_i64 + v52,
            (__int64)v46,
            v52 >> 4,
            (__int64)((char *)v46 - m128i_i64 - v52) >> 4);
          v39 = v53;
        }
        v51 = v39;
        sub_1E621B0(v21->m128i_i8, m128i_i64, (__int64)v46, v50, v38);
        v40 = v51;
      }
      v41 = v47 - v40;
      v47 = (v47 - v40) >> 4;
      if ( v41 <= 224 )
      {
        sub_1E5DC00((__m128 *)v46, v45);
      }
      else
      {
        v42 = 16 * (v41 >> 5);
        v43 = (__m128 *)((char *)v46 + v42);
        m128i_i64 = v42 >> 4;
        if ( (unsigned __int64)v42 <= 0xE0 )
        {
          sub_1E5DC00((__m128 *)v46, (__m128 *)((char *)v46 + v42));
        }
        else
        {
          v51 = v42;
          v44 = (__m128 *)((char *)v46 + 16 * (v42 >> 5));
          v50 = 16 * (v42 >> 5);
          sub_1E623D0((__m128 *)v46, v44);
          sub_1E623D0(v44, v43);
          sub_1E621B0((char *)v46, (unsigned __int64)v44, (__int64)v43, v50 >> 4, (v51 - v50) >> 4);
        }
        if ( (char *)v45 - (char *)v43 <= 224 )
        {
          sub_1E5DC00(v43, v45);
        }
        else
        {
          v51 = 16 * (((char *)v45 - (char *)v43) >> 5);
          v50 = (__int64)v43 + v51;
          sub_1E623D0(v43, (__m128 *)((char *)v43 + v51));
          sub_1E623D0((__m128 *)((char *)v43 + v51), v45);
          sub_1E621B0((char *)v43, v50, (__int64)v45, v51 >> 4, ((__int64)v45 - v50) >> 4);
        }
        sub_1E621B0((char *)v46, (unsigned __int64)v43, (__int64)v45, m128i_i64, v45 - v43);
      }
      sub_1E621B0(v21->m128i_i8, (unsigned __int64)v46, (__int64)v45, v49, v47);
      v32 = nullptr;
    }
    else
    {
LABEL_36:
      sub_1E5DC00((__m128 *)v21, v45);
      v32 = nullptr;
    }
LABEL_20:
    operator delete(v32, (const std::nothrow_t *)&std::nothrow);
    *(_BYTE *)(v15 + 232) = 1;
  }
  v16 = *(_QWORD **)(v15 + 88);
  v17 = (16LL * *(unsigned int *)(v15 + 96)) >> 4;
  if ( 16LL * *(unsigned int *)(v15 + 96) )
  {
    do
    {
      while ( 1 )
      {
        v18 = v17 >> 1;
        v19 = &v16[2 * (v17 >> 1)];
        if ( *v19 >= a2 )
          break;
        v16 = v19 + 2;
        v17 = v17 - v18 - 1;
        if ( v17 <= 0 )
          goto LABEL_7;
      }
      v17 >>= 1;
    }
    while ( v18 );
  }
LABEL_7:
  while ( 1 )
  {
    result = v16[1];
    if ( result )
      break;
    v16 += 2;
  }
  v16[1] = 0;
  *a3 = result;
  return result;
}
