__m128i *__fastcall sub_19A34B0(__m128i *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 *a6)
{
  __int64 v7; // rax
  __int64 *v8; // r10
  __int64 *v9; // r14
  __int64 *v12; // r15
  __int32 v13; // eax
  int v14; // edx
  __int64 v15; // rdi
  __int8 v16; // cl
  __m128i v18; // xmm6
  unsigned __int64 v19; // rdx
  __m128i v20; // xmm7
  __int32 v21; // eax
  __m128i v22; // xmm6
  __int64 v23; // rax
  __m128i *v24; // rcx
  __m128i *v25; // rax
  __int32 v26; // r9d
  __m128i v27; // xmm1
  __m128i v28; // xmm2
  __int32 v29; // eax
  __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  __m128i *v32; // rcx
  __m128i *v33; // rax
  __m128i v34; // xmm3
  __m128i v35; // xmm4
  __int32 v36; // eax
  __int32 v37; // esi
  __int32 v38; // r8d
  __int32 v39; // eax
  __m128i v40; // xmm2
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  unsigned __int64 v43; // rdx
  char v44; // di
  unsigned __int64 v45; // rdx
  unsigned __int64 v46; // rdi
  char v47; // r9
  unsigned __int64 v48; // rdi
  _BOOL4 v49; // esi
  int v50; // r9d
  int v51; // esi
  unsigned __int64 v52; // r8
  int v53; // r9d
  unsigned __int64 v54; // rsi
  __int64 v55; // rax
  __int64 *v57; // [rsp+10h] [rbp-98h]
  __int64 v58; // [rsp+18h] [rbp-90h]
  __int64 v59; // [rsp+18h] [rbp-90h]
  unsigned __int64 v60; // [rsp+18h] [rbp-90h]
  unsigned __int8 v62; // [rsp+27h] [rbp-81h]
  __int32 v63; // [rsp+2Ch] [rbp-7Ch]
  __m128i v64; // [rsp+30h] [rbp-78h] BYREF
  __m128i v65; // [rsp+40h] [rbp-68h] BYREF
  __m128i v66; // [rsp+50h] [rbp-58h] BYREF
  __int32 v67; // [rsp+60h] [rbp-48h]

  v7 = *(unsigned int *)(a3 + 16);
  v8 = *(__int64 **)(a3 + 8);
  a1->m128i_i64[0] = 0;
  v9 = &v8[v7];
  a1->m128i_i64[1] = 0;
  a1[1].m128i_i64[1] = 0;
  a1[2].m128i_i64[0] = 0;
  a1[2].m128i_i32[2] = 0;
  v57 = a6 + 2;
  if ( v8 != v9 )
  {
    v12 = v8;
    do
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            sub_19A2390((__int64)&v64, a2, *v12, *(_QWORD *)a4, a5);
            if ( !v64.m128i_i64[1] )
              goto LABEL_11;
            if ( !sub_19A3330(a2, v64.m128i_i64[1]) )
              goto LABEL_11;
            v13 = v67;
            if ( !v67 )
              goto LABEL_11;
            v14 = *(_DWORD *)(a4 + 8);
            if ( v14 != 1 && v66.m128i_i32[0] == 1 )
              goto LABEL_11;
            v15 = a1->m128i_i64[1];
            if ( v15 )
              break;
            v27 = _mm_load_si128(&v65);
            v28 = _mm_load_si128(&v66);
            v29 = v67;
            *a1 = _mm_load_si128(&v64);
            a1[1] = v27;
            a1[2] = v28;
            a1[3].m128i_i32[0] = v29;
            if ( !a6 )
              goto LABEL_11;
            v30 = *((unsigned int *)a6 + 2);
            v31 = v30 + 1;
            v32 = (__m128i *)(*a6 + 56 * v30);
            v33 = &v64;
            if ( v31 > *((unsigned int *)a6 + 3) )
            {
              if ( *a6 > (unsigned __int64)&v64 || v32 <= &v64 )
              {
                sub_2237220(a6, v57, v31, 56);
                v32 = (__m128i *)(*a6 + 56LL * *((unsigned int *)a6 + 2));
                v33 = &v64;
              }
              else
              {
                v59 = *a6;
                sub_2237220(a6, v57, v31, 56);
                v33 = (__m128i *)((char *)&v64 + *a6 - v59);
                v32 = (__m128i *)(*a6 + 56LL * *((unsigned int *)a6 + 2));
              }
            }
            ++v12;
            *v32 = _mm_loadu_si128(v33);
            v32[1] = _mm_loadu_si128(v33 + 1);
            v32[2] = _mm_loadu_si128(v33 + 2);
            v32[3].m128i_i64[0] = v33[3].m128i_i64[0];
            ++*((_DWORD *)a6 + 2);
            if ( v9 == v12 )
              return a1;
          }
          v16 = a1[1].m128i_i8[0];
          if ( v16 == v65.m128i_i8[0] )
            break;
          if ( !v16 )
            goto LABEL_16;
LABEL_11:
          if ( v9 == ++v12 )
            return a1;
        }
        v26 = a1[2].m128i_i32[0];
        if ( v26 == v66.m128i_i32[0] )
          break;
        if ( v14 == v26 )
          goto LABEL_11;
        if ( a6 )
        {
LABEL_17:
          v18 = _mm_load_si128(&v64);
          v19 = 1;
          v20 = _mm_load_si128(&v65);
          *((_DWORD *)a6 + 2) = 0;
          v21 = v67;
          *a1 = v18;
          v22 = _mm_load_si128(&v66);
          a1[3].m128i_i32[0] = v21;
          v23 = 0;
          a1[1] = v20;
          a1[2] = v22;
          goto LABEL_18;
        }
LABEL_29:
        v34 = _mm_load_si128(&v65);
        ++v12;
        v35 = _mm_load_si128(&v66);
        v36 = v67;
        *a1 = _mm_load_si128(&v64);
        a1[1] = v34;
        a1[2] = v35;
        a1[3].m128i_i32[0] = v36;
        if ( v9 == v12 )
          return a1;
      }
      v37 = a1[2].m128i_i32[1];
      if ( v37 != v66.m128i_i32[1] )
      {
        if ( *(_DWORD *)(a4 + 12) == v37 )
          goto LABEL_11;
        if ( a6 )
          goto LABEL_17;
        goto LABEL_29;
      }
      v38 = a1[2].m128i_i32[2];
      if ( v38 != v66.m128i_i32[2] )
      {
        if ( *(_DWORD *)(a4 + 16) == v38 )
          goto LABEL_11;
        goto LABEL_16;
      }
      if ( v26 == 1 )
      {
        v63 = a1[2].m128i_i32[2];
        v62 = a1[1].m128i_u8[0];
        v60 = sub_B77AF0(v15);
        v42 = sub_B77AF0(v64.m128i_i64[1]);
        if ( (v60 == 0) != (v42 == 0) )
        {
          if ( v42 )
            goto LABEL_11;
LABEL_16:
          if ( a6 )
            goto LABEL_17;
          goto LABEL_29;
        }
        if ( v60 && v42 )
        {
          v43 = *(_QWORD *)((a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)((a1->m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
            v43 = *(_QWORD *)v43;
          v44 = *(_BYTE *)(v43 + 8);
          v45 = v43 - 64;
          if ( (v44 & 0x7Fu) - 59 >= 3 )
            v45 = 0;
          v46 = *(_QWORD *)((v64.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)((v64.m128i_i64[0] & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
            v46 = *(_QWORD *)v46;
          v47 = *(_BYTE *)(v46 + 8);
          v48 = v46 - 64;
          if ( (v47 & 0x7Fu) - 59 >= 3 )
            v48 = 0;
          v49 = v37 == 1;
          v50 = v49 + 3;
          v51 = v49 + 2;
          if ( v63 == 1 )
            v51 = v50;
          v52 = 0;
          v53 = v62 + v51;
          if ( v48 )
            v52 = *(_QWORD *)(v48 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v54 = 0;
          if ( v45 )
            v54 = *(_QWORD *)(v45 + 48) & 0xFFFFFFFFFFFFFFF0LL;
          v55 = sub_1D7E040(a2, v60, v42, 0, 0, v53, v54, v52, 0, 0);
          if ( v55 )
          {
            if ( v60 == v55 )
              goto LABEL_11;
            goto LABEL_16;
          }
        }
        v13 = v67;
      }
      if ( a1[3].m128i_i32[0] > v13 )
        goto LABEL_11;
      if ( a1[3].m128i_i32[0] != v13 )
        goto LABEL_16;
      v39 = v67;
      *a1 = _mm_load_si128(&v64);
      v40 = _mm_load_si128(&v65);
      a1[3].m128i_i32[0] = v39;
      a1[1] = v40;
      a1[2] = _mm_load_si128(&v66);
      if ( !a6 )
        goto LABEL_11;
      v41 = *((unsigned int *)a6 + 2);
      v19 = v41 + 1;
      v23 = 56 * v41;
LABEL_18:
      v24 = &v64;
      v25 = (__m128i *)(*a6 + v23);
      if ( v19 > *((unsigned int *)a6 + 3) )
      {
        v58 = *a6;
        if ( *a6 > (unsigned __int64)&v64 || v25 <= &v64 )
        {
          sub_2237220(a6, v57, v19, 56);
          v24 = &v64;
          v25 = (__m128i *)(*a6 + 56LL * *((unsigned int *)a6 + 2));
        }
        else
        {
          sub_2237220(a6, v57, v19, 56);
          v24 = (__m128i *)((char *)&v64 + *a6 - v58);
          v25 = (__m128i *)(*a6 + 56LL * *((unsigned int *)a6 + 2));
        }
      }
      ++v12;
      *v25 = _mm_loadu_si128(v24);
      v25[1] = _mm_loadu_si128(v24 + 1);
      v25[2] = _mm_loadu_si128(v24 + 2);
      v25[3].m128i_i64[0] = v24[3].m128i_i64[0];
      ++*((_DWORD *)a6 + 2);
    }
    while ( v9 != v12 );
  }
  return a1;
}
