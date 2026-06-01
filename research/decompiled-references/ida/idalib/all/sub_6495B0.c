unsigned __int64 __fastcall sub_6495B0(__m128i *a1, __m128i *a2, __int64 a3)
{
  __int64 v3; // rbp
  __m128i *i; // r13
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // r12
  signed int v9; // eax
  __int32 v10; // ecx
  __m128i *v11; // rbx
  __m128i *v12; // rbp
  __m128i v13; // xmm0
  __int32 v14; // edx
  __int64 v15; // rsi
  __m128i v16; // xmm1
  signed int v17; // r12d
  __int64 v18; // rbp
  __m128i v19; // xmm3
  void *v20; // rdi
  signed int v21; // edx
  void *v22; // rdi
  __m128i *v23; // rbp
  __m128i v24; // xmm6
  __m128i v25; // xmm1
  __int64 v26; // r12
  __m128i v27; // xmm5
  __int32 v28; // eax
  unsigned __int64 v29; // xmm1_8
  __int64 v30; // r14
  __m128i v31; // xmm0
  void *v32; // rdi
  void *v33; // rdi
  __m128i v34; // xmm7
  __int64 v35; // rbp
  __m128i v36; // xmm3
  void *v37; // rdi
  __int64 v38; // rdx
  __m128i v39; // xmm2
  __int64 v40; // rdx
  __int64 v41; // r14
  __m128i *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rax
  __m128i v45; // xmm0
  __int64 v46; // r12
  __int64 v47; // rbx
  __m128i v48; // xmm0
  __int64 v49; // r14
  __m128i v50; // xmm1
  void *v51; // rdi
  __int64 v53; // r12
  __m128i v54; // xmm3
  void *v55; // rdi
  void *v56; // rdi
  __int64 v57; // r12
  __m128i v58; // xmm3
  void *v59; // rdi
  __m128i v60; // [rsp+0h] [rbp-B8h] BYREF
  __m128i v61; // [rsp+10h] [rbp-A8h] BYREF
  __m128i v62; // [rsp+20h] [rbp-98h] BYREF
  __int64 v63; // [rsp+38h] [rbp-80h]
  __m128i v64; // [rsp+40h] [rbp-78h] BYREF
  __m128i v65; // [rsp+50h] [rbp-68h] BYREF
  __m128i v66; // [rsp+60h] [rbp-58h]
  unsigned __int64 v67; // [rsp+78h] [rbp-40h]

  v63 = a3;
  v67 = __readfsqword(0x28u);
  v3 = (char *)a2 - (char *)a1;
  if ( (char *)a2 - (char *)a1 <= 512 )
    return v67 - __readfsqword(0x28u);
  for ( i = a2; ; i = v11 )
  {
    v6 = v3;
    v7 = v3 >> 6;
    v8 = v6 >> 5;
    if ( !v63 )
      break;
    v9 = a1[2].m128i_i32[0];
    v10 = i[-2].m128i_i32[0];
    v11 = a1 + 2;
    v12 = &a1[2 * v7];
    v13 = _mm_loadl_epi64(a1);
    --v63;
    v14 = v12->m128i_i32[0];
    v15 = a1->m128i_i64[1];
    v16 = _mm_loadu_si128(a1 + 1);
    v17 = _mm_cvtsi128_si32(v13);
    if ( v9 >= v12->m128i_i32[0] )
    {
      if ( v9 < v10 )
        goto LABEL_31;
      a1->m128i_i64[1] = 0;
      a1[1] = 0;
      if ( v14 >= v10 )
      {
        a1->m128i_i32[0] = v12->m128i_i32[0];
        a1->m128i_i32[1] = v12->m128i_i32[1];
        v53 = v12->m128i_i64[1];
        v54 = _mm_loadu_si128(v12 + 1);
        v12->m128i_i64[1] = 0;
        v12[1] = 0;
        v55 = (void *)a1->m128i_i64[1];
        if ( v55 )
        {
          a1[1].m128i_i64[0] = 0;
          v62.m128i_i64[0] = v15;
          v64 = v16;
          v61.m128i_i64[0] = v13.m128i_i64[0];
          v60 = v54;
          qfree(v55);
          v16 = _mm_load_si128(&v64);
          v15 = v62.m128i_i64[0];
          v13.m128i_i64[0] = v61.m128i_i64[0];
          v54 = _mm_load_si128(&v60);
        }
        a1->m128i_i64[1] = v53;
        a1[1] = v54;
        v56 = (void *)v12->m128i_i64[1];
        v12->m128i_i64[0] = v13.m128i_i64[0];
        if ( v56 )
        {
LABEL_47:
          v12[1].m128i_i64[0] = 0;
          v60.m128i_i64[0] = v15;
          v61 = v16;
          qfree(v56);
          v16 = _mm_load_si128(&v61);
          v15 = v60.m128i_i64[0];
        }
LABEL_48:
        v12->m128i_i64[1] = v15;
        v12[1] = v16;
        v17 = a1[2].m128i_i32[0];
        v9 = a1->m128i_i32[0];
        v21 = i[-2].m128i_i32[0];
        goto LABEL_12;
      }
      a1->m128i_i32[0] = i[-2].m128i_i32[0];
      a1->m128i_i32[1] = i[-2].m128i_i32[1];
      v35 = i[-2].m128i_i64[1];
      v36 = _mm_loadu_si128(i - 1);
      i[-2].m128i_i64[1] = 0;
      i[-1] = 0;
      v37 = (void *)a1->m128i_i64[1];
      if ( v37 )
      {
        a1[1].m128i_i64[0] = 0;
        v61.m128i_i64[0] = v15;
        v64 = v16;
        v62 = v36;
        v60.m128i_i64[0] = v13.m128i_i64[0];
        qfree(v37);
        v16 = _mm_load_si128(&v64);
        v15 = v61.m128i_i64[0];
        v36 = _mm_load_si128(&v62);
        v13.m128i_i64[0] = v60.m128i_i64[0];
      }
      a1->m128i_i64[1] = v35;
      v21 = v17;
      a1[1] = v36;
      v22 = (void *)i[-2].m128i_i64[1];
      i[-2].m128i_i64[0] = v13.m128i_i64[0];
      if ( v22 )
        goto LABEL_10;
    }
    else
    {
      if ( v14 < v10 )
      {
        a1->m128i_i64[1] = 0;
        a1[1] = 0;
        a1->m128i_i32[0] = v12->m128i_i32[0];
        a1->m128i_i32[1] = v12->m128i_i32[1];
        v57 = v12->m128i_i64[1];
        v58 = _mm_loadu_si128(v12 + 1);
        v12->m128i_i64[1] = 0;
        v12[1] = 0;
        v59 = (void *)a1->m128i_i64[1];
        if ( v59 )
        {
          a1[1].m128i_i64[0] = 0;
          v62.m128i_i64[0] = v15;
          v64 = v16;
          v61.m128i_i64[0] = v13.m128i_i64[0];
          v60 = v58;
          qfree(v59);
          v16 = _mm_load_si128(&v64);
          v15 = v62.m128i_i64[0];
          v13.m128i_i64[0] = v61.m128i_i64[0];
          v58 = _mm_load_si128(&v60);
        }
        a1->m128i_i64[1] = v57;
        a1[1] = v58;
        v56 = (void *)v12->m128i_i64[1];
        v12->m128i_i64[0] = v13.m128i_i64[0];
        if ( v56 )
          goto LABEL_47;
        goto LABEL_48;
      }
      if ( v9 >= v10 )
      {
LABEL_31:
        v38 = a1[2].m128i_i64[0];
        v39 = _mm_loadu_si128(a1 + 3);
        a1[2].m128i_i64[0] = v13.m128i_i64[0];
        a1[3] = v16;
        a1->m128i_i64[0] = v38;
        v40 = a1[2].m128i_i64[1];
        a1[1] = v39;
        a1->m128i_i64[1] = v40;
        a1[2].m128i_i64[1] = v15;
        v21 = i[-2].m128i_i32[0];
        goto LABEL_12;
      }
      a1->m128i_i64[1] = 0;
      a1[1] = 0;
      a1->m128i_i32[0] = i[-2].m128i_i32[0];
      a1->m128i_i32[1] = i[-2].m128i_i32[1];
      v18 = i[-2].m128i_i64[1];
      v19 = _mm_loadu_si128(i - 1);
      i[-2].m128i_i64[1] = 0;
      i[-1] = 0;
      v20 = (void *)a1->m128i_i64[1];
      if ( v20 )
      {
        a1[1].m128i_i64[0] = 0;
        v62.m128i_i64[0] = v15;
        v64 = v16;
        v61.m128i_i64[0] = v13.m128i_i64[0];
        v60 = v19;
        qfree(v20);
        v16 = _mm_load_si128(&v64);
        v15 = v62.m128i_i64[0];
        v13.m128i_i64[0] = v61.m128i_i64[0];
        v19 = _mm_load_si128(&v60);
      }
      a1->m128i_i64[1] = v18;
      v21 = v17;
      a1[1] = v19;
      v22 = (void *)i[-2].m128i_i64[1];
      i[-2].m128i_i64[0] = v13.m128i_i64[0];
      if ( v22 )
      {
LABEL_10:
        i[-1].m128i_i64[0] = 0;
        v60.m128i_i64[0] = v15;
        v61 = v16;
        qfree(v22);
        v21 = i[-2].m128i_i32[0];
        v16 = _mm_load_si128(&v61);
        v15 = v60.m128i_i64[0];
      }
    }
    i[-2].m128i_i64[1] = v15;
    i[-1] = v16;
    v17 = a1[2].m128i_i32[0];
    v9 = a1->m128i_i32[0];
LABEL_12:
    v23 = i;
    while ( 1 )
    {
      for ( ; v17 < v9; v11 += 2 )
        v17 = v11[2].m128i_i32[0];
      v23 -= 2;
      if ( v9 < v21 )
      {
        do
          v23 -= 2;
        while ( v23->m128i_i32[0] > v9 );
      }
      if ( v11 >= v23 )
        break;
      v24 = _mm_loadu_si128(v11 + 1);
      v25 = _mm_cvtsi32_si128(v17);
      v26 = v11->m128i_i64[1];
      v11[1] = 0;
      v27 = _mm_cvtsi32_si128(v11->m128i_u32[1]);
      v11->m128i_i64[1] = 0;
      v28 = v23->m128i_i32[0];
      v29 = _mm_unpacklo_epi32(v25, v27).m128i_u64[0];
      v60 = v24;
      v11->m128i_i32[0] = v28;
      v11->m128i_i32[1] = v23->m128i_i32[1];
      v30 = v23->m128i_i64[1];
      v31 = _mm_loadu_si128(v23 + 1);
      v23->m128i_i64[1] = 0;
      v23[1] = 0;
      v32 = (void *)v11->m128i_i64[1];
      if ( v32 )
      {
        v11[1].m128i_i64[0] = 0;
        v62.m128i_i64[0] = v29;
        v61 = v31;
        qfree(v32);
        v29 = v62.m128i_i64[0];
        v31 = _mm_load_si128(&v61);
      }
      v11->m128i_i64[1] = v30;
      v11[1] = v31;
      v33 = (void *)v23->m128i_i64[1];
      v23->m128i_i64[0] = v29;
      if ( v33 )
      {
        v23[1].m128i_i64[0] = 0;
        qfree(v33);
      }
      v34 = _mm_load_si128(&v60);
      v21 = v23[-2].m128i_i32[0];
      v23->m128i_i64[1] = v26;
      v11 += 2;
      v23[1] = v34;
      v17 = v11->m128i_i32[0];
      v9 = a1->m128i_i32[0];
    }
    v3 = (char *)v11 - (char *)a1;
    sub_6495B0(v11, i, v63);
    if ( (char *)v11 - (char *)a1 <= 512 )
      return v67 - __readfsqword(0x28u);
  }
  v41 = v7 - 1;
  v42 = &a1[2 * v7];
  while ( 1 )
  {
    v43 = v42[-2].m128i_i64[0];
    v44 = v42[-2].m128i_i64[1];
    v42[-2].m128i_i64[1] = 0;
    v45 = _mm_loadu_si128(v42 - 1);
    v65.m128i_i64[0] = v43;
    v42[-1] = 0;
    v65.m128i_i64[1] = v44;
    v66 = v45;
    sub_6480E0((__int64)a1, v41, v8, &v65);
    if ( v65.m128i_i64[1] )
      qfree((void *)v65.m128i_i64[1]);
    v42 -= 2;
    if ( !v41 )
      break;
    --v41;
  }
  while ( (char *)i - (char *)a1 > 32 )
  {
    v46 = i[-2].m128i_i64[1];
    v47 = i[-2].m128i_i64[0];
    i -= 2;
    i->m128i_i64[1] = 0;
    v48 = _mm_loadu_si128(i + 1);
    i[1] = 0;
    i->m128i_i32[0] = a1->m128i_i32[0];
    i->m128i_i32[1] = a1->m128i_i32[1];
    v49 = a1->m128i_i64[1];
    v50 = _mm_loadu_si128(a1 + 1);
    a1->m128i_i64[1] = 0;
    a1[1] = 0;
    v51 = (void *)i->m128i_i64[1];
    if ( v51 )
    {
      i[1].m128i_i64[0] = 0;
      v61 = v48;
      v60 = v50;
      qfree(v51);
      v48 = _mm_load_si128(&v61);
      v50 = _mm_load_si128(&v60);
    }
    v65.m128i_i64[0] = v47;
    i->m128i_i64[1] = v49;
    i[1] = v50;
    v65.m128i_i64[1] = v46;
    v66 = v48;
    sub_6480E0((__int64)a1, 0, ((char *)i - (char *)a1) >> 5, &v65);
    if ( v65.m128i_i64[1] )
      qfree((void *)v65.m128i_i64[1]);
  }
  return v67 - __readfsqword(0x28u);
}
