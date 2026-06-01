__int64 (__fastcall **__fastcall sub_872300(__m128i *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6))()
{
  __m128i v7; // xmm0
  __int64 v8; // rdi
  __int64 v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rbp
  __int64 v17; // rax
  __int64 v18; // r14
  void *v19; // r12
  char *v20; // r15
  __int64 v21; // rax
  char *v22; // rbp
  char *v23; // r14
  void *v24; // r12
  __int64 v25; // rdi
  _QWORD *v26; // rbp
  __int64 v27; // rax
  _QWORD *v28; // r12
  void *v29; // rdi
  __int64 v30; // rdi
  _QWORD *v31; // rbp
  __int64 v32; // rax
  _QWORD *v33; // r12
  void *v34; // rdi
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdi
  __m128i *v38; // rdi
  __m128i *v39; // rcx
  __m128i *i; // rax
  __int64 v41; // rdx
  _BYTE *v42; // rdx
  __int64 v43; // rdi
  __int64 v44; // rdi
  __int64 v45; // rdi
  __int64 v46; // rdi
  __int64 v47; // rdi
  __m128i v48; // xmm6
  __int64 v49; // rdi
  __int64 v50; // rdi
  __m128i v51; // xmm7
  __int64 v52; // rdi
  __int64 (__fastcall **result)(); // rax
  __int64 v54; // rdi
  __m128i v55; // [rsp+0h] [rbp-58h] BYREF
  __m128i v56; // [rsp+10h] [rbp-48h] BYREF

  a1->m128i_i64[0] = (__int64)&off_1C6E2F8;
  v7 = _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)&off_1C55740), (__m128i)(unsigned __int64)off_1C6E5C0);
  a1[3].m128i_i64[0] = (__int64)off_1C6E5E8;
  a1[2] = v7;
  v8 = a1[48].m128i_i64[1];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[48].m128i_i64[0];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = (void *)a1[46].m128i_i64[0];
  if ( v10 )
    sub_186B220(v10);
  v11 = (void *)a1[44].m128i_i64[1];
  if ( v11 )
    sub_186B220(v11);
  v12 = a1[44].m128i_i64[0];
  if ( v12 )
    sub_186B220((void *)(v12 - 8));
  v13 = a1[43].m128i_i64[0];
  if ( v13 )
    sub_186B220((void *)(v13 - 8));
  v14 = a1[42].m128i_i64[1];
  if ( v14 )
    sub_186B220((void *)(v14 - 8));
  v15 = a1[42].m128i_i64[0];
  if ( v15 )
    sub_186B220((void *)(v15 - 8));
  v16 = a1[41].m128i_i64[1];
  if ( v16 )
  {
    v17 = *(unsigned int *)(v16 - 4);
    if ( (_DWORD)v17 )
    {
      v18 = v16 + 32 * v17;
      do
      {
        v19 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v16);
        a2 = (char *)(v16 + 16);
        v16 += 32;
        sub_182CBA0(v19, a2);
      }
      while ( v18 != v16 );
      v16 = a1[41].m128i_i64[1];
    }
    sub_186B220((void *)(v16 - 8));
  }
  v20 = (char *)a1[40].m128i_i64[0];
  if ( v20 )
  {
    v21 = a1[40].m128i_u32[2];
    if ( (_DWORD)v21 )
    {
      v22 = (char *)a1[40].m128i_i64[0];
      v23 = &v20[56 * v21];
      do
      {
        v24 = qword_1C7F2C0;
        sub_182CBA0(qword_1C7F2C0, v22 + 8);
        a2 = v22 + 24;
        v22 += 56;
        sub_182CBA0(v24, a2);
      }
      while ( v22 != v23 );
    }
    sub_186B220(v20);
  }
  v25 = a1[39].m128i_i64[0];
  if ( v25 )
    sub_186B220((void *)(v25 - 8));
  v26 = (_QWORD *)a1[38].m128i_i64[1];
  if ( v26 )
  {
    v27 = *((unsigned int *)v26 - 1);
    if ( (_DWORD)v27 )
    {
      v28 = &v26[v27];
      do
      {
        while ( *v26 )
        {
          v29 = (void *)(*v26++ - 8LL);
          sub_186B220(v29);
          if ( v28 == v26 )
          {
            v26 = (_QWORD *)a1[38].m128i_i64[1];
            goto LABEL_36;
          }
        }
        ++v26;
      }
      while ( v26 != v28 );
      v26 = (_QWORD *)a1[38].m128i_i64[1];
    }
LABEL_36:
    sub_186B220(v26 - 1);
  }
  v30 = a1[38].m128i_i64[0];
  if ( v30 )
    sub_186B220((void *)(v30 - 8));
  v31 = (_QWORD *)a1[37].m128i_i64[1];
  if ( v31 )
  {
    v32 = *((unsigned int *)v31 - 1);
    if ( (_DWORD)v32 )
    {
      v33 = &v31[v32];
      do
      {
        while ( *v31 )
        {
          v34 = (void *)(*v31++ - 8LL);
          sub_186B220(v34);
          if ( v33 == v31 )
          {
            v31 = (_QWORD *)a1[37].m128i_i64[1];
            goto LABEL_45;
          }
        }
        ++v31;
      }
      while ( v31 != v33 );
      v31 = (_QWORD *)a1[37].m128i_i64[1];
    }
LABEL_45:
    sub_186B220(v31 - 1);
  }
  v35 = a1[36].m128i_i64[0];
  if ( v35 )
    sub_186B220((void *)(v35 - 8));
  v36 = a1[35].m128i_i64[1];
  if ( v36 )
    sub_186B220((void *)(v36 - 8));
  v37 = a1[35].m128i_i64[0];
  if ( v37 )
    sub_186B220((void *)(v37 - 8));
  v38 = (__m128i *)a1[25].m128i_i64[0];
  v39 = (__m128i *)((char *)v38 + 8 * a1[25].m128i_u32[2]);
  for ( i = v38; i != v39; *(_BYTE *)(v41 + 6) &= ~1u )
  {
    v41 = i->m128i_i64[0];
    i = (__m128i *)((char *)i + 8);
  }
  a1[25].m128i_i32[2] = 0;
  v42 = algn_1C6C7D0;
  v55 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)qword_1C6C4D8, (__m128i)(unsigned __int64)qword_1C6C528);
  v56 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)algn_1C6C7D0, (__m128i)(unsigned __int64)qword_1C6C820);
  if ( v38 != &a1[26] && v38 )
    sub_186B220(v38);
  v43 = a1[24].m128i_i64[1];
  if ( v43 )
    sub_186B220((void *)(v43 - 8));
  v44 = a1[24].m128i_i64[0];
  if ( v44 )
    sub_186B220((void *)(v44 - 8));
  v45 = a1[23].m128i_i64[1];
  if ( v45 )
    sub_186B220((void *)(v45 - 8));
  v46 = a1[23].m128i_i64[0];
  if ( v46 )
    sub_186B220((void *)(v46 - 8));
  sub_8791C0(
    &a1[12].m128i_u64[1],
    a2,
    v42,
    v39,
    a5,
    a6,
    v55.m128i_i64[0],
    v55.m128i_i64[1],
    v56.m128i_i64[0],
    v56.m128i_i64[1]);
  v47 = a1[7].m128i_i64[0];
  if ( v47 )
    sub_186B220((void *)(v47 - 8));
  v48 = _mm_load_si128(&v56);
  v49 = a1[6].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C5A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6C848;
  a1[2] = v48;
  if ( v49 )
    sub_186B220((void *)(v49 - 8));
  v50 = a1[5].m128i_i64[1];
  if ( v50 )
    sub_186B220((void *)(v50 - 8));
  v51 = _mm_load_si128(&v55);
  v52 = a1[4].m128i_i64[0];
  a1->m128i_i64[0] = (__int64)qword_1C6C2C8;
  result = off_1C6A6A8;
  a1[3].m128i_i64[0] = (__int64)off_1C6A6A8;
  a1[2] = v51;
  if ( v52 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v52 - 8));
  v54 = a1[3].m128i_i64[1];
  if ( v54 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v54 - 8));
  return result;
}

