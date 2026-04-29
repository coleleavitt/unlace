__int64 *__fastcall sub_2BF3A0(unsigned __int64 *a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int8 *v3; // rax
  __m128i v4; // xmm0
  unsigned __int8 v6; // dl
  __m128i *v7; // rbp
  unsigned __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 **v11; // rbx
  __int64 *v12; // r12
  int v13; // eax
  __int64 v14; // rdx
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  __int64 v23; // rax
  __m128 v24; // xmm1
  __int64 v25; // rbx
  unsigned __int64 v26; // rdx
  __m128i v27; // xmm0
  unsigned __int64 v28; // r14
  __int64 v29; // rbx
  __m128i v30; // xmm0
  __m128i *v31; // rax
  __int64 v32; // rax
  __int64 v33; // r13
  __int64 *v34; // rbp
  __int64 v35; // rdi
  __int64 v36; // r12
  __int64 v37; // r14
  __int64 v38; // r15
  __int64 v39; // rbx
  __int64 v41; // r10
  __int64 v42; // rax
  __int64 v43; // rbx
  __m128i v44; // xmm0
  unsigned __int64 v45; // rbp
  __int64 v46; // r13
  __int64 v47; // rbx
  __int64 v48; // rax
  __m128i *v49; // [rsp+0h] [rbp-170h]
  __int64 v50; // [rsp+0h] [rbp-170h]
  __int64 v51; // [rsp+0h] [rbp-170h]
  __int64 v52; // [rsp+0h] [rbp-170h]
  __int64 *v53; // [rsp+10h] [rbp-160h]
  __int64 v54; // [rsp+18h] [rbp-158h]
  __m128i *v55; // [rsp+30h] [rbp-140h]
  __m128i v56; // [rsp+38h] [rbp-138h] BYREF
  __m128i v57; // [rsp+48h] [rbp-128h] BYREF
  __int64 v58; // [rsp+58h] [rbp-118h]
  _QWORD v59[4]; // [rsp+60h] [rbp-110h] BYREF
  _QWORD v60[2]; // [rsp+80h] [rbp-F0h] BYREF
  _QWORD v61[2]; // [rsp+90h] [rbp-E0h] BYREF
  _QWORD v62[2]; // [rsp+A0h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+B0h] [rbp-C0h]
  __m128i v64; // [rsp+B8h] [rbp-B8h] BYREF
  __m128 v65; // [rsp+C8h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+D8h] [rbp-98h]
  __int64 v67; // [rsp+E0h] [rbp-90h]
  int v68; // [rsp+E8h] [rbp-88h]
  char v69; // [rsp+ECh] [rbp-84h]
  __int32 v70; // [rsp+120h] [rbp-50h]
  unsigned __int64 v71; // [rsp+130h] [rbp-40h]

  v3 = (unsigned __int8 *)*a1;
  v4 = _mm_unpacklo_epi64((__m128i)*a1, (__m128i)a2);
  v71 = __readfsqword(0x28u);
  v56 = v4;
  if ( (unsigned __int64)v3 < a2 )
  {
    v6 = *v3;
    v56.m128i_i64[0] = (__int64)(v3 + 1);
    if ( v6 > 1u )
      return nullptr;
  }
  v7 = &v56;
  v8 = (int)unpack_dd(&v56);
  if ( v56.m128i_i64[1] - v56.m128i_i64[0] < v8 )
    return nullptr;
  v9 = qalloc_or_throw(24);
  v10 = v8;
  *(_QWORD *)v9 = 0;
  v11 = (__int64 **)v9;
  *(_OWORD *)(v9 + 8) = 0;
  v53 = (__int64 *)v9;
  sub_2BF0C0((__int64 *)v9, v10);
  v12 = *v11;
  v54 = (__int64)&(*v11)[3 * (_QWORD)v11[1]];
  if ( (__int64 *)v54 == *v11 )
  {
LABEL_19:
    v14 = v56.m128i_i64[0];
LABEL_20:
    *a1 = v14;
    return v53;
  }
  while ( 1 )
  {
    v13 = unpack_dd(v7);
    v14 = v56.m128i_i64[0];
    v15 = v13;
    if ( v56.m128i_i64[1] - v56.m128i_i64[0] < (unsigned __int64)v13 )
      goto LABEL_20;
    v16 = v12[1];
    if ( v15 != v16 )
    {
      v57 = (__m128i)0xFFFFFFFFFFFFFFFFLL;
      v58 = 0xFFFFFFFFLL;
      memset(v59, 0, sizeof(v59));
      v60[0] = 0xFFFFFFFF00000000LL;
      v60[1] = 0;
      v61[0] = 0xFFFFFFFF00000000LL;
      v61[1] = 0;
      v62[0] = 0xFFFFFFFF00000000LL;
      v62[1] = 0;
      v63 = 0;
      sub_32C520(v59, -1);
      LODWORD(v63) = 0;
      v17 = v12[1];
      if ( v15 < v17 )
      {
        v52 = v15;
        v55 = v7;
        v45 = v15;
        v46 = 112 * v15;
        do
        {
          ++v45;
          v47 = v46 + *v12;
          v46 += 112;
          sub_119360(v47 + 88);
          sub_119360(v47 + 72);
          sub_119360(v47 + 56);
        }
        while ( v45 < v17 );
        v7 = v55;
        v12[1] = v52;
      }
      else if ( v17 < v15 )
      {
        v25 = *v12;
        v26 = v12[2];
        if ( (unsigned __int64)&v57 < *v12 || (unsigned __int64)&v57 >= v25 + 112 * v26 )
        {
          if ( v26 >= v15
            || (v48 = qvector_reserve(v12, *v12, v15, 112), v17 = v12[1], *v12 = v48, v25 = v48, v17 < v15) )
          {
            v41 = 112 * v17;
            while ( 1 )
            {
              v42 = v58;
              v43 = v41 + v25;
              v44 = _mm_load_si128(&v57);
              v51 = v41;
              *(_QWORD *)(v43 + 56) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 16) = v42;
              *(_QWORD *)(v43 + 64) = 0;
              *(_QWORD *)(v43 + 72) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 80) = 0;
              *(_QWORD *)(v43 + 88) = 0xFFFFFFFF00000000LL;
              *(_QWORD *)(v43 + 96) = 0;
              *(__m128i *)v43 = v44;
              *(_OWORD *)(v43 + 32) = 0;
              sub_121960(v43 + 24, (__int64)v59);
              ++v17;
              *(_DWORD *)(v43 + 104) = v63;
              v41 = v51 + 112;
              if ( v17 >= v15 )
                break;
              v25 = *v12;
            }
          }
          v12[1] = v15;
        }
        else
        {
          v27 = _mm_load_si128(&v57);
          v65.m128_u64[0] = v58;
          v64 = v27;
          sub_2B1F70((__int64)&v65.m128_i64[1], (__int64)v59);
          v70 = v63;
          if ( v12[2] < v15 )
            *v12 = qvector_reserve(v12, *v12, v15, 112);
          v28 = v12[1];
          v29 = 112 * v28;
          if ( v28 < v15 )
          {
            do
            {
              v30 = _mm_load_si128(&v64);
              v31 = (__m128i *)(v29 + *v12);
              v31[1].m128i_i64[0] = v65.m128_u64[0];
              *v31 = v30;
              v49 = v31;
              sub_2B1F70((__int64)&v31[1].m128i_i64[1], (__int64)&v65.m128_i64[1]);
              ++v28;
              v29 += 112;
              v49[6].m128i_i32[2] = v70;
            }
            while ( v15 != v28 );
          }
          v12[1] = v15;
          sub_79290((__int64)&v65.m128_i64[1]);
        }
      }
      sub_119360((__int64)v62);
      sub_119360((__int64)v61);
      sub_119360((__int64)v60);
      v16 = v12[1];
    }
    v18 = *v12;
    v19 = *v12 + 112 * v16;
    if ( v19 != *v12 )
      break;
LABEL_18:
    v12 += 3;
    if ( (__int64 *)v54 == v12 )
      goto LABEL_19;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      sub_7AF10(v18, (__int64)v7, *(_QWORD *)(a3 + 40));
      v20 = v56.m128i_i64[1];
      if ( v56.m128i_i64[0] < (unsigned __int64)v56.m128i_i64[1] )
        break;
      *(_DWORD *)(v18 + 104) = 0;
LABEL_13:
      v18 += 112;
      if ( v19 == v18 )
        goto LABEL_18;
    }
    v21 = v56.m128i_i64[0] + 1;
    v22 = *(unsigned __int8 *)v56.m128i_i64[0]++;
    *(_DWORD *)(v18 + 104) = v22;
    if ( !v22 )
      goto LABEL_13;
    v23 = *(_QWORD *)(a3 + 40);
    v24 = _mm_loadh_ps((const double *)(a3 + 1504));
    v69 = 0;
    v66 = v23;
    v68 = 13;
    v67 = 4;
    v64 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v21, (__m128i)(unsigned __int64)v20);
    v65 = v24;
    if ( !(unsigned __int8)sub_84990(v18 + 24, (__int64)&v64) )
      break;
    v18 += 112;
    v56.m128i_i64[0] = v64.m128i_i64[0];
    if ( v19 == v18 )
      goto LABEL_18;
  }
  if ( v53 )
  {
    v32 = *v53;
    if ( *v53 )
    {
      if ( v53[1] )
      {
        v50 = v53[1];
        v33 = 0;
        do
        {
          v34 = (__int64 *)(v32 + 24 * v33);
          v35 = *v34;
          if ( *v34 )
          {
            v36 = v34[1];
            if ( v36 )
            {
              v37 = 0;
              v38 = 0;
              do
              {
                v39 = v35 + v37;
                ++v38;
                v37 += 112;
                sub_119360(v39 + 88);
                sub_119360(v39 + 72);
                sub_119360(v39 + 56);
                v35 = *v34;
              }
              while ( v36 != v38 );
            }
            v34[1] = 0;
            qfree(v35);
            v32 = *v53;
          }
          ++v33;
        }
        while ( v50 != v33 );
      }
      v53[1] = 0;
      qfree(v32);
    }
    qfree(v53);
  }
  return nullptr;
}
