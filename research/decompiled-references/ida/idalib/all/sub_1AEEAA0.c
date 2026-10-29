__m128i *__fastcall sub_1AEEAA0(__m128i *a1, __int64 a2, char a3)
{
  __m128i *v4; // r12
  _QWORD *v5; // rbp
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  __m128i si128; // xmm1
  __m128i v9; // xmm2
  __m128i v10; // xmm3
  __m128i *v11; // rax
  __m128i *v12; // r13
  unsigned __int64 v13; // rdx
  const __m128i *v14; // rdx
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  const __m128i *v21; // rdx
  __m128i *v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  const __m128i *v28; // rdx
  __m128i *v29; // rax
  __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v34; // r13
  __int64 v35; // r14
  const char *v36; // [rsp+0h] [rbp-58h] BYREF
  __int128 v37; // [rsp+8h] [rbp-50h] BYREF
  const char *v38; // [rsp+18h] [rbp-40h]
  __m128i v39; // [rsp+20h] [rbp-38h] BYREF

  v4 = a1 + 1;
  v5 = *(_QWORD **)(a2 + 248);
  v6 = sub_A64980((__int64)v5, 32, 1);
  v7 = sub_A70010((__int64)v5, v6 | 1);
  a1->m128i_i64[0] = (__int64)a1[1].m128i_i64;
  *(_QWORD *)&v37 = 12;
  *((_QWORD *)&v37 + 1) = v7 | 3;
  v39.m128i_i64[1] = v7 | 3;
  v36 = ".global_tid.";
  si128 = _mm_load_si128((const __m128i *)&v36);
  v38 = ".bound_tid.";
  v9 = _mm_load_si128((const __m128i *)((char *)&v37 + 8));
  v39.m128i_i64[0] = 11;
  v10 = _mm_load_si128(&v39);
  a1[1] = si128;
  a1[2] = v9;
  a1[3] = v10;
  a1->m128i_i64[1] = 0x200000002LL;
  if ( a3 )
  {
    v15 = sub_A63CE0(v5);
    v16 = a1->m128i_u32[3];
    *(_QWORD *)&v37 = 13;
    v17 = v15 | 1;
    v36 = ".previous.lb.";
    v18 = a1->m128i_u32[2];
    *((_QWORD *)&v37 + 1) = v17;
    v19 = v18 + 1;
    if ( v18 + 1 > v16 )
    {
      v35 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] <= (unsigned __int64)&v36 && (unsigned __int64)&v36 < v35 + 24 * v18 )
      {
        sub_2237220(a1, v4, v19, 24);
        v20 = a1->m128i_i64[0];
        v18 = a1->m128i_u32[2];
        v21 = (const __m128i *)((char *)&v36 + a1->m128i_i64[0] - v35);
      }
      else
      {
        sub_2237220(a1, v4, v19, 24);
        v20 = a1->m128i_i64[0];
        v18 = a1->m128i_u32[2];
        v21 = (const __m128i *)&v36;
      }
    }
    else
    {
      v20 = a1->m128i_i64[0];
      v21 = (const __m128i *)&v36;
    }
    v22 = (__m128i *)(v20 + 24 * v18);
    *v22 = _mm_loadu_si128(v21);
    v23 = v21[1].m128i_i64[0];
    *(_QWORD *)&v37 = 13;
    v22[1].m128i_i64[0] = v23;
    LODWORD(v22) = a1->m128i_i32[2];
    v24 = a1->m128i_u32[3];
    *((_QWORD *)&v37 + 1) = v17;
    v36 = ".previous.ub.";
    v25 = (unsigned int)((_DWORD)v22 + 1);
    a1->m128i_i32[2] = v25;
    v26 = v25 + 1;
    if ( v25 + 1 > v24 )
    {
      v34 = a1->m128i_i64[0];
      if ( a1->m128i_i64[0] > (unsigned __int64)&v36 || (unsigned __int64)&v36 >= v34 + 24 * v25 )
      {
        sub_2237220(a1, v4, v26, 24);
        v27 = a1->m128i_i64[0];
        v25 = a1->m128i_u32[2];
        v28 = (const __m128i *)&v36;
      }
      else
      {
        sub_2237220(a1, v4, v26, 24);
        v27 = a1->m128i_i64[0];
        v25 = a1->m128i_u32[2];
        v28 = (const __m128i *)((char *)&v36 + a1->m128i_i64[0] - v34);
      }
    }
    else
    {
      v27 = a1->m128i_i64[0];
      v28 = (const __m128i *)&v36;
    }
    v29 = (__m128i *)(v27 + 24 * v25);
    *v29 = _mm_loadu_si128(v28);
    v30 = v28[1].m128i_i64[0];
    v36 = nullptr;
    v29[1].m128i_i64[0] = v30;
    LODWORD(v29) = a1->m128i_i32[2];
    v12 = (__m128i *)a1->m128i_i64[0];
    v31 = a1->m128i_u32[3];
    v37 = 0;
    v32 = (unsigned int)((_DWORD)v29 + 1);
    a1->m128i_i32[2] = v32;
    v13 = v32 + 1;
    v11 = (__m128i *)((char *)v12 + 24 * v32);
    if ( v31 >= v13 )
    {
      v14 = (const __m128i *)&v36;
      goto LABEL_12;
    }
  }
  else
  {
    v11 = a1 + 4;
    v12 = a1 + 1;
    v13 = 3;
    v36 = nullptr;
    v37 = 0;
  }
  if ( v12 > (__m128i *)&v36 || v11 <= (__m128i *)&v36 )
  {
    sub_2237220(a1, v4, v13, 24);
    v11 = (__m128i *)(a1->m128i_i64[0] + 24LL * a1->m128i_u32[2]);
    v14 = (const __m128i *)&v36;
  }
  else
  {
    sub_2237220(a1, v4, v13, 24);
    v14 = (const __m128i *)(a1->m128i_i64[0] + (char *)&v36 - (char *)v12);
    v11 = (__m128i *)(a1->m128i_i64[0] + 24LL * a1->m128i_u32[2]);
  }
LABEL_12:
  *v11 = _mm_loadu_si128(v14);
  v11[1].m128i_i64[0] = v14[1].m128i_i64[0];
  ++a1->m128i_i32[2];
  return a1;
}
