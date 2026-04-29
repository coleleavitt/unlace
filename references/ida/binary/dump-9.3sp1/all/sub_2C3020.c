__int64 *__fastcall sub_2C3020(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  __m128i v4; // xmm0
  unsigned __int8 v6; // dl
  __m128i *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 *v14; // r12
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r13
  __int64 v18; // rax
  unsigned __int64 v19; // r14
  __int64 v20; // rbx
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rcx
  int v24; // eax
  __int64 v25; // rax
  __m128 v26; // xmm1
  __int64 v27; // rbx
  unsigned __int64 v28; // rdx
  __m128i v29; // xmm0
  unsigned __int64 v30; // r14
  __int64 v31; // rbx
  __m128i v32; // xmm0
  __m128i *v33; // rax
  __int64 v34; // rax
  __int64 v35; // r13
  __int64 *v36; // rbp
  __int64 v37; // rdi
  __int64 v38; // r12
  __int64 v39; // r14
  __int64 v40; // r15
  __int64 v41; // rbx
  __int64 v43; // r10
  __int64 v44; // rax
  __int64 v45; // rbx
  __m128i v46; // xmm0
  unsigned __int64 v47; // rbp
  __int64 v48; // r13
  __int64 v49; // rbx
  __int64 v50; // rax
  __m128i *v51; // [rsp+0h] [rbp-170h]
  __int64 v52; // [rsp+0h] [rbp-170h]
  __int64 v53; // [rsp+0h] [rbp-170h]
  unsigned __int64 v54; // [rsp+0h] [rbp-170h]
  __int64 *v55; // [rsp+10h] [rbp-160h]
  __int64 v56; // [rsp+18h] [rbp-158h]
  __m128i *v57; // [rsp+30h] [rbp-140h]
  __m128i v58; // [rsp+38h] [rbp-138h] BYREF
  __m128i v59; // [rsp+48h] [rbp-128h] BYREF
  __int64 v60; // [rsp+58h] [rbp-118h]
  _QWORD v61[4]; // [rsp+60h] [rbp-110h] BYREF
  _QWORD v62[2]; // [rsp+80h] [rbp-F0h] BYREF
  _QWORD v63[2]; // [rsp+90h] [rbp-E0h] BYREF
  _QWORD v64[2]; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-C0h]
  __m128i v66; // [rsp+B8h] [rbp-B8h] BYREF
  __m128 v67; // [rsp+C8h] [rbp-A8h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-98h]
  __int64 v69; // [rsp+E0h] [rbp-90h]
  int v70; // [rsp+E8h] [rbp-88h]
  char v71; // [rsp+ECh] [rbp-84h]
  __int32 v72; // [rsp+120h] [rbp-50h]
  unsigned __int64 v73; // [rsp+130h] [rbp-40h]

  v3 = (unsigned __int8 *)*a1;
  v4 = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)a2);
  v73 = __readfsqword(0x28u);
  v58 = v4;
  if ( (unsigned __int64)v3 < a2 )
  {
    v6 = *v3;
    v58.m128i_i64[0] = (__int64)(v3 + 1);
    if ( v6 > 1u )
      return nullptr;
  }
  v7 = &v58;
  v10 = (int)unpack_dd();
  if ( v58.m128i_i64[1] - v58.m128i_i64[0] < v10 )
    return nullptr;
  v11 = qalloc_or_throw(24, a2, v8, v9);
  v12 = v10;
  *(_QWORD *)v11 = 0;
  v13 = v11;
  *(_OWORD *)(v11 + 8) = 0;
  v55 = (__int64 *)v11;
  sub_2C2D40((__int64 *)v11, v12);
  v14 = *(__int64 **)v13;
  v56 = *(_QWORD *)v13 + 24LL * *(_QWORD *)(v13 + 8);
  if ( v56 == *(_QWORD *)v13 )
  {
LABEL_19:
    v16 = v58.m128i_i64[0];
LABEL_20:
    *a1 = v16;
    return v55;
  }
  while ( 1 )
  {
    v15 = unpack_dd();
    v16 = v58.m128i_i64[0];
    v17 = v15;
    if ( v58.m128i_i64[1] - v58.m128i_i64[0] < (unsigned __int64)v15 )
      goto LABEL_20;
    v18 = v14[1];
    if ( v17 != v18 )
    {
      v59 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v60 = 0xFFFFFFFFLL;
      memset(v61, 0, sizeof(v61));
      v62[0] = 0xFFFFFFFF00000000LL;
      v62[1] = 0;
      v63[0] = 0xFFFFFFFF00000000LL;
      v63[1] = 0;
      v64[0] = 0xFFFFFFFF00000000LL;
      v64[1] = 0;
      v65 = 0;
      sub_330970(v61, -1);
      LODWORD(v65) = 0;
      v19 = v14[1];
      if ( v17 < v19 )
      {
        v54 = v17;
        v57 = v7;
        v47 = v17;
        v48 = 112 * v17;
        do
        {
          ++v47;
          v49 = v48 + *v14;
          v48 += 112;
          sub_11CDA0(v49 + 88);
          sub_11CDA0(v49 + 72);
          sub_11CDA0(v49 + 56);
        }
        while ( v47 < v19 );
        v7 = v57;
        v14[1] = v54;
      }
      else if ( v19 < v17 )
      {
        v27 = *v14;
        v28 = v14[2];
        if ( (unsigned __int64)&v59 < *v14 || (unsigned __int64)&v59 >= v27 + 112 * v28 )
        {
          if ( v28 >= v17
            || (v50 = qvector_reserve((__int64)v14, *v14, v17, 112), v19 = v14[1], *v14 = v50, v27 = v50, v19 < v17) )
          {
            v43 = 112 * v19;
            while ( 1 )
            {
              v44 = v60;
              v45 = v43 + v27;
              v46 = _mm_load_si128(&v59);
              v53 = v43;
              *(_QWORD *)(v45 + 56) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v45 + 16) = v44;
              *(_QWORD *)(v45 + 64) = 0;
              *(_QWORD *)(v45 + 72) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v45 + 80) = 0;
              *(_QWORD *)(v45 + 88) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v45 + 96) = 0;
              *(__m128i *)v45 = v46;
              *(_OWORD *)(v45 + 32) = 0;
              sub_1253A0(v45 + 24, (__int64)v61);
              ++v19;
              *(_DWORD *)(v45 + 104) = v65;
              v43 = v53 + 112;
              if ( v19 >= v17 )
                break;
              v27 = *v14;
            }
          }
          v14[1] = v17;
        }
        else
        {
          v29 = _mm_load_si128(&v59);
          v67.m128_u64[0] = v60;
          v66 = v29;
          sub_2B5BF0((__int64)&v67.m128_i64[1], (__int64)v61);
          v72 = v65;
          if ( v14[2] < v17 )
            *v14 = qvector_reserve((__int64)v14, *v14, v17, 112);
          v30 = v14[1];
          v31 = 112 * v30;
          if ( v30 < v17 )
          {
            do
            {
              v32 = _mm_load_si128(&v66);
              v33 = (__m128i *)(v31 + *v14);
              v33[1].m128i_i64[0] = v67.m128_u64[0];
              *v33 = v32;
              v51 = v33;
              sub_2B5BF0((__int64)&v33[1].m128i_i64[1], (__int64)&v67.m128_i64[1]);
              ++v30;
              v31 += 112;
              v51[6].m128i_i32[2] = v72;
            }
            while ( v17 != v30 );
          }
          v14[1] = v17;
          sub_7CCD0((__int64)&v67.m128_i64[1]);
        }
      }
      sub_11CDA0((__int64)v64);
      sub_11CDA0((__int64)v63);
      sub_11CDA0((__int64)v62);
      v18 = v14[1];
    }
    v20 = *v14;
    v21 = *v14 + 112 * v18;
    if ( v21 != *v14 )
      break;
LABEL_18:
    v14 += 3;
    if ( (__int64 *)v56 == v14 )
      goto LABEL_19;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      sub_7E950(v20, (__int64)v7, *(_QWORD *)(a3 + 40));
      v22 = v58.m128i_i64[1];
      if ( v58.m128i_i64[0] < (unsigned __int64)v58.m128i_i64[1] )
        break;
      *(_DWORD *)(v20 + 104) = 0;
LABEL_13:
      v20 += 112;
      if ( v21 == v20 )
        goto LABEL_18;
    }
    v23 = v58.m128i_i64[0] + 1;
    v24 = *(unsigned __int8 *)v58.m128i_i64[0]++;
    *(_DWORD *)(v20 + 104) = v24;
    if ( !v24 )
      goto LABEL_13;
    v25 = *(_QWORD *)(a3 + 40);
    v26 = _mm_loadh_ps((const double *)(a3 + 1504));
    v71 = 0;
    v68 = v25;
    v70 = 13;
    v69 = 4;
    v66 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v23, (__m128i)(unsigned __int64)v22);
    v67 = v26;
    if ( !(unsigned __int8)sub_883D0(v20 + 24, (__int64)&v66) )
      break;
    v20 += 112;
    v58.m128i_i64[0] = v66.m128i_i64[0];
    if ( v21 == v20 )
      goto LABEL_18;
  }
  if ( v55 )
  {
    v34 = *v55;
    if ( *v55 )
    {
      if ( v55[1] )
      {
        v52 = v55[1];
        v35 = 0;
        do
        {
          v36 = (__int64 *)(v34 + 24 * v35);
          v37 = *v36;
          if ( *v36 )
          {
            v38 = v36[1];
            if ( v38 )
            {
              v39 = 0;
              v40 = 0;
              do
              {
                v41 = v37 + v39;
                ++v40;
                v39 += 112;
                sub_11CDA0(v41 + 88);
                sub_11CDA0(v41 + 72);
                sub_11CDA0(v41 + 56);
                v37 = *v36;
              }
              while ( v38 != v40 );
            }
            v36[1] = 0;
            qfree(v37);
            v34 = *v55;
          }
          ++v35;
        }
        while ( v52 != v35 );
      }
      v55[1] = 0;
      qfree(v34);
    }
    qfree((__int64)v55);
  }
  return nullptr;
}
