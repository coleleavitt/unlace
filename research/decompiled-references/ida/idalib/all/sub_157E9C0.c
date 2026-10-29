unsigned __int64 __fastcall sub_157E9C0(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v8; // r12
  __int64 v9; // rsi
  __int64 v12; // rdx
  unsigned __int64 v13; // rbx
  __int64 v14; // r14
  int v15; // r13d
  unsigned int v16; // eax
  __int64 v17; // rsi
  unsigned __int64 v18; // rbx
  int v19; // r13d
  unsigned int v20; // eax
  __int64 v21; // rsi
  unsigned __int64 v22; // rax
  __m128i v23; // xmm4
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  unsigned __int64 *v27; // r13
  unsigned __int64 v28; // r14
  unsigned __int64 *v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm2
  unsigned __int64 v40; // rbx
  int v41; // r13d
  unsigned int v42; // eax
  __m128i v43; // xmm5
  __int64 v44; // rdx
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  int v47; // r14d
  unsigned int v48; // eax
  bool v49; // zf
  unsigned __int64 v50; // rax
  __m128i v51; // xmm7
  unsigned __int64 v52; // rdx
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rbx
  int v55; // r13d
  unsigned int v56; // eax
  unsigned __int64 v57; // rax
  __m128i v58; // xmm6
  unsigned __int64 v59; // rdx
  unsigned __int64 v60; // rax
  __m128i v61; // xmm7
  __int64 v62; // rdx
  __int64 v63; // rax
  __m128i v64; // xmm7
  __int64 v65; // rdx
  __int64 v66; // rax
  __int64 v67; // [rsp+0h] [rbp-78h]
  unsigned __int64 v68; // [rsp+8h] [rbp-70h]
  unsigned __int64 v69; // [rsp+8h] [rbp-70h]
  int v70; // [rsp+14h] [rbp-64h]
  int v71; // [rsp+14h] [rbp-64h]
  unsigned __int64 *v72; // [rsp+18h] [rbp-60h]
  __int128 v73; // [rsp+20h] [rbp-58h]
  __int64 v74; // [rsp+30h] [rbp-48h]

  result = (unsigned __int64)a2 - a1;
  v8 = a2;
  v67 = a3;
  if ( (__int64)a2 - a1 > 384 )
  {
    v9 = a3;
    v12 = result;
    if ( !v9 )
    {
      v29 = v8;
      goto LABEL_15;
    }
    v72 = (unsigned __int64 *)(a1 + 24);
    while ( 1 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      --v67;
      v14 = a1 + 24 * ((__int64)(0xAAAAAAAAAAAAAAABLL * (v12 >> 3)) >> 1);
      v15 = sub_EEB7E0(*(_QWORD *)v14, v9, *(double *)a7.m128_u64);
      v16 = sub_EEB7E0(v13, v9, *(double *)a7.m128_u64);
      v17 = v16;
      if ( sub_10246C0(a4, v16, v15) )
      {
        v18 = *(_QWORD *)v14;
        v19 = sub_EEB7E0(*(v8 - 3), v17, *(double *)a7.m128_u64);
        v20 = sub_EEB7E0(v18, v17, *(double *)a7.m128_u64);
        v21 = v20;
        if ( sub_10246C0(a4, v20, v19) )
        {
          v22 = *(_QWORD *)a1;
          v23 = _mm_loadu_si128((const __m128i *)(v14 + 8));
          *(_QWORD *)a1 = *(_QWORD *)v14;
          v24 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)v14 = v22;
          v25 = *(_QWORD *)(a1 + 16);
          *(__m128i *)(a1 + 8) = v23;
          v26 = *(_QWORD *)a1;
          *(_QWORD *)(v14 + 8) = v24;
          *(_QWORD *)(v14 + 16) = v25;
        }
        else
        {
          v46 = *(_QWORD *)(a1 + 24);
          v47 = sub_EEB7E0(*(v8 - 3), v21, *(double *)a7.m128_u64);
          v48 = sub_EEB7E0(v46, v21, *(double *)a7.m128_u64);
          v21 = v48;
          v49 = sub_10246C0(a4, v48, v47) == 0;
          v50 = *(_QWORD *)a1;
          if ( v49 )
          {
            v64 = _mm_loadu_si128((const __m128i *)(a1 + 32));
            v26 = *(_QWORD *)(a1 + 24);
            *(_QWORD *)(a1 + 24) = v50;
            v65 = *(_QWORD *)(a1 + 8);
            v66 = *(_QWORD *)(a1 + 16);
            *(_QWORD *)a1 = v26;
            *(__m128i *)(a1 + 8) = v64;
            *(_QWORD *)(a1 + 32) = v65;
            *(_QWORD *)(a1 + 40) = v66;
          }
          else
          {
            v51 = _mm_loadu_si128((const __m128i *)v8 - 1);
            *(_QWORD *)a1 = *(v8 - 3);
            v52 = *(_QWORD *)(a1 + 8);
            *(v8 - 3) = v50;
            v53 = *(_QWORD *)(a1 + 16);
            v26 = *(_QWORD *)a1;
            *(__m128i *)(a1 + 8) = v51;
            *(v8 - 2) = v52;
            *(v8 - 1) = v53;
          }
        }
      }
      else
      {
        v40 = *(_QWORD *)(a1 + 24);
        v41 = sub_EEB7E0(*(v8 - 3), v17, *(double *)a7.m128_u64);
        v42 = sub_EEB7E0(v40, v17, *(double *)a7.m128_u64);
        v21 = v42;
        if ( sub_10246C0(a4, v42, v41) )
        {
          v43 = _mm_loadu_si128((const __m128i *)(a1 + 32));
          v26 = *(_QWORD *)(a1 + 24);
          v44 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)(a1 + 24) = *(_QWORD *)a1;
          v45 = *(_QWORD *)(a1 + 16);
          *(_QWORD *)a1 = v26;
          *(__m128i *)(a1 + 8) = v43;
          *(_QWORD *)(a1 + 32) = v44;
          *(_QWORD *)(a1 + 40) = v45;
        }
        else
        {
          v54 = *(_QWORD *)v14;
          v55 = sub_EEB7E0(*(v8 - 3), v21, *(double *)a7.m128_u64);
          v56 = sub_EEB7E0(v54, v21, *(double *)a7.m128_u64);
          v21 = v56;
          v49 = sub_10246C0(a4, v56, v55) == 0;
          v57 = *(_QWORD *)a1;
          if ( v49 )
          {
            v61 = _mm_loadu_si128((const __m128i *)(v14 + 8));
            *(_QWORD *)a1 = *(_QWORD *)v14;
            v62 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)v14 = v57;
            v63 = *(_QWORD *)(a1 + 16);
            v26 = *(_QWORD *)a1;
            *(__m128i *)(a1 + 8) = v61;
            *(_QWORD *)(v14 + 8) = v62;
            *(_QWORD *)(v14 + 16) = v63;
          }
          else
          {
            v58 = _mm_loadu_si128((const __m128i *)v8 - 1);
            *(_QWORD *)a1 = *(v8 - 3);
            v59 = *(_QWORD *)(a1 + 8);
            *(v8 - 3) = v57;
            v60 = *(_QWORD *)(a1 + 16);
            v26 = *(_QWORD *)a1;
            *(__m128i *)(a1 + 8) = v58;
            *(v8 - 2) = v59;
            *(v8 - 1) = v60;
          }
        }
      }
      v27 = v72;
      v28 = (unsigned __int64)v8;
      while ( 1 )
      {
        v29 = v27;
        v68 = *v27;
        v70 = sub_EEB7E0(v26, v21, *(double *)a7.m128_u64);
        v30 = sub_EEB7E0(v68, v21, *(double *)a7.m128_u64);
        v21 = v30;
        if ( sub_10246C0(a4, v30, v70) )
          goto LABEL_8;
        do
        {
          v28 -= 24LL;
          v69 = *(_QWORD *)a1;
          v71 = sub_EEB7E0(*(_QWORD *)v28, v21, *(double *)a7.m128_u64);
          v31 = sub_EEB7E0(v69, v21, *(double *)a7.m128_u64);
          v21 = v31;
        }
        while ( sub_10246C0(a4, v31, v71) );
        if ( (unsigned __int64)v27 >= v28 )
          break;
        v32 = *v27;
        a7 = (__m128)_mm_loadu_si128((const __m128i *)(v28 + 8));
        *v27 = *(_QWORD *)v28;
        v33 = v27[1];
        *(_QWORD *)v28 = v32;
        v34 = v27[2];
        *(__m128 *)(v27 + 1) = a7;
        *(_QWORD *)(v28 + 8) = v33;
        *(_QWORD *)(v28 + 16) = v34;
LABEL_8:
        v26 = *(_QWORD *)a1;
        v27 += 3;
      }
      v9 = (__int64)v8;
      result = sub_157E9C0(v27, v8, v67, a4);
      v12 = (__int64)v27 - a1;
      if ( (__int64)v27 - a1 <= 384 )
        return result;
      v8 = v27;
      if ( !v67 )
      {
LABEL_15:
        v35 = 0xAAAAAAAAAAAAAAABLL * (v12 >> 3);
        v36 = (v35 - 2) >> 1;
        sub_157DFF0(
          a1,
          v36,
          v35,
          a4,
          a7,
          a5,
          a6,
          (__int128)_mm_loadu_si128((const __m128i *)(a1 + 24 * v36)),
          *(_QWORD *)(a1 + 24 * v36 + 16));
        do
        {
          --v36;
          sub_157DFF0(
            a1,
            v36,
            v35,
            a4,
            a7,
            v37,
            v38,
            (__int128)_mm_loadu_si128((const __m128i *)(a1 + 24 * v36)),
            *(_QWORD *)(a1 + 24 * v36 + 16));
        }
        while ( v36 );
        do
        {
          v29 -= 3;
          v39 = _mm_loadu_si128((const __m128i *)(a1 + 8));
          v74 = v29[2];
          v73 = (__int128)_mm_loadu_si128((const __m128i *)v29);
          *v29 = *(_QWORD *)a1;
          *(__m128i *)(v29 + 1) = v39;
          result = sub_157DFF0(a1, 0, 0xAAAAAAAAAAAAAAABLL * (((__int64)v29 - a1) >> 3), a4, a7, v37, v38, v73, v74);
        }
        while ( (__int64)v29 - a1 > 24 );
        return result;
      }
    }
  }
  return result;
}
