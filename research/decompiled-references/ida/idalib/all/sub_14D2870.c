__int64 __fastcall sub_14D2870(__int64 a1, char a2, double a3, __m128 a4)
{
  __int64 result; // rax
  __int64 v7; // r14
  __m128 v8; // xmm1
  __int64 v9; // rax
  int v10; // esi
  unsigned __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rsi
  __m128i *v16; // r15
  unsigned __int64 v17; // rdx
  __int64 v18; // rsi
  __m128i *v19; // r10
  __m128i *v20; // r9
  __m128i *v21; // rcx
  __int64 v22; // rsi
  unsigned int v23; // eax
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  __m128i si128; // xmm3
  __int64 v29; // rax
  __m128i v30; // xmm2
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rsi
  __m128i *v35; // r15
  unsigned __int64 v36; // rdx
  __int64 v37; // rsi
  __m128i *v38; // rdi
  __m128 *v39; // r9
  const __m128i *v40; // rcx
  __int64 v41; // rsi
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rax
  __m128i *v45; // rcx
  const __m128i *v46; // r15
  __int64 v47; // rsi
  char *v48; // r15
  __int64 v49; // rsi
  __int8 *v50; // r15
  __int64 v51; // rsi
  __int64 v52; // rdx
  __int64 v53; // rsi
  __int64 v54; // rdx
  __m128i *v55; // [rsp+0h] [rbp-C0h]
  __int64 v56; // [rsp+0h] [rbp-C0h]
  __m128 *v57; // [rsp+0h] [rbp-C0h]
  __int64 v58; // [rsp+0h] [rbp-C0h]
  __int64 v59; // [rsp+0h] [rbp-C0h]
  __int64 v60; // [rsp+0h] [rbp-C0h]
  __int64 v61; // [rsp+0h] [rbp-C0h]
  __m128i *v62; // [rsp+8h] [rbp-B8h]
  const __m128i *v63; // [rsp+8h] [rbp-B8h]
  __int64 v64; // [rsp+8h] [rbp-B8h]
  __int64 v65; // [rsp+8h] [rbp-B8h]
  __m128i v66; // [rsp+18h] [rbp-A8h] BYREF
  int v67; // [rsp+28h] [rbp-98h]
  __m128 v68; // [rsp+38h] [rbp-88h] BYREF
  __int64 v69; // [rsp+48h] [rbp-78h]
  __int128 v70; // [rsp+58h] [rbp-68h] BYREF
  void *ptr[2]; // [rsp+68h] [rbp-58h]
  __int128 v72; // [rsp+78h] [rbp-48h]

  v70 = 0;
  *(_OWORD *)ptr = 0;
  v72 = 0;
  sub_14D0170((const __m128i *)a1, (__int64)&v70, 0, 0, 0, nullptr, (__m128i)0LL, 0, nullptr, 0, 0, 0);
  result = sub_14D2560(a1, (__int64)&v70, a2, (__m128i)0LL, a4);
  if ( result )
  {
    if ( !HIDWORD(ptr[1]) )
      return result;
LABEL_16:
    v56 = result;
    free(ptr[0]);
    return v56;
  }
  v7 = *(_QWORD *)(a1 + 8);
  v8 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 16));
  v9 = *(_QWORD *)(a1 + 32);
  v10 = *(_DWORD *)(v7 + 1012);
  v68 = v8;
  v69 = v9;
  if ( v10 )
  {
    v29 = operator new[](0x18u);
    v30 = _mm_load_si128(&v66);
    *(_DWORD *)(v29 + 16) = v67;
    *(__m128i *)v29 = v30;
    sub_14368B0(v7, (char *)v29, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)v7);
    v11 = *(_QWORD *)(v7 + 2904);
    v12 = v7 + 2904;
    v13 = *(unsigned int *)(v7 + 2912);
    v14 = 24LL * *(_QWORD *)(v7 + 2944);
    v15 = 3 * v13;
    v16 = (__m128i *)(v11 + v14);
    v17 = v13 + 1;
    v18 = 8 * v15;
    v19 = (__m128i *)(v11 + v18);
    if ( v11 + v14 == v11 + v18 )
    {
      v45 = &v66;
      if ( v17 > *(unsigned int *)(v7 + 2916) )
      {
        v53 = v7 + 2920;
        if ( v11 > (unsigned __int64)&v66 || v19 <= &v66 )
        {
          sub_2237220(v12, v53, v17, 24);
          v45 = &v66;
          v19 = (__m128i *)(*(_QWORD *)(v7 + 2904) + 24LL * *(unsigned int *)(v7 + 2912));
        }
        else
        {
          v61 = *(_QWORD *)(v7 + 2904);
          sub_2237220(v12, v53, v17, 24);
          v54 = *(_QWORD *)(v7 + 2904);
          v45 = (__m128i *)((char *)&v66 + v54 - v61);
          v19 = (__m128i *)(v54 + 24LL * *(unsigned int *)(v7 + 2912));
        }
      }
      *v19 = _mm_loadu_si128(v45);
      v19[1].m128i_i64[0] = v45[1].m128i_i64[0];
      ++*(_DWORD *)(v7 + 2912);
    }
    else
    {
      v20 = &v66;
      v21 = &v66;
      if ( v17 > *(unsigned int *)(v7 + 2916) )
      {
        v49 = v7 + 2920;
        if ( v11 > (unsigned __int64)&v66 || v19 <= &v66 )
        {
          v65 = 24LL * *(_QWORD *)(v7 + 2944);
          sub_2237220(v12, v49, v17, 24);
          v21 = &v66;
          v11 = *(_QWORD *)(v7 + 2904);
          v20 = &v66;
          v18 = 24LL * *(unsigned int *)(v7 + 2912);
          v16 = (__m128i *)(v11 + v65);
          v19 = (__m128i *)(v11 + v18);
        }
        else
        {
          v59 = 24LL * *(_QWORD *)(v7 + 2944);
          v50 = &v66.m128i_i8[-v11];
          sub_2237220(v12, v49, v17, 24);
          v11 = *(_QWORD *)(v7 + 2904);
          v21 = (__m128i *)&v50[v11];
          v18 = 24LL * *(unsigned int *)(v7 + 2912);
          v16 = (__m128i *)(v11 + v59);
          v19 = (__m128i *)(v11 + v18);
          v20 = v21;
        }
      }
      *v19 = _mm_loadu_si128((const __m128i *)(v11 + v18 - 24));
      v19[1].m128i_i64[0] = *(_QWORD *)(v11 + v18 - 8);
      v22 = *(_QWORD *)(v7 + 2904);
      v23 = *(_DWORD *)(v7 + 2912);
      v24 = 24LL * v23;
      if ( (__m128i *)(v22 + v24 - 24) != v16 )
      {
        v62 = v20;
        v55 = v21;
        memmove(&v16[1].m128i_u64[1], v16, v22 + v24 - 24 - (_QWORD)v16);
        v20 = v62;
        v21 = v55;
        v23 = *(_DWORD *)(v7 + 2912);
        v22 = *(_QWORD *)(v7 + 2904);
      }
      v25 = v23 + 1;
      *(_DWORD *)(v7 + 2912) = v25;
      if ( v16 <= v20 && v22 + 24 * v25 > (unsigned __int64)v20 )
        v21 = (__m128i *)((char *)v21 + 24);
      *v16 = _mm_loadu_si128(v21);
      v16[1].m128i_i32[0] = v21[1].m128i_i32[0];
    }
  }
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v26 = *(_QWORD *)(a1 + 8);
  if ( *(_DWORD *)(v26 + 1012) )
  {
    v27 = operator new[](0x18u);
    si128 = _mm_load_si128((const __m128i *)&v68);
    *(_DWORD *)(v27 + 16) = v69;
    *(__m128i *)v27 = si128;
    sub_14368B0(v26, (char *)v27, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90(*(_QWORD **)(a1 + 8));
    v31 = *(_QWORD *)(v26 + 2904);
    v32 = *(unsigned int *)(v26 + 2912);
    v33 = 24LL * *(_QWORD *)(v26 + 2944);
    v34 = 3 * v32;
    v35 = (__m128i *)(v31 + v33);
    v36 = v32 + 1;
    v37 = 8 * v34;
    v38 = (__m128i *)(v31 + v37);
    if ( v31 + v33 == v31 + v37 )
    {
      v46 = (const __m128i *)&v68;
      if ( v36 > *(unsigned int *)(v26 + 2916) )
      {
        v60 = *(_QWORD *)(v26 + 2904);
        v51 = v26 + 2920;
        if ( v31 > (unsigned __int64)&v68 || v38 <= (__m128i *)&v68 )
        {
          sub_2237220(v26 + 2904, v51, v36, 24);
          v46 = (const __m128i *)&v68;
          v38 = (__m128i *)(*(_QWORD *)(v26 + 2904) + 24LL * *(unsigned int *)(v26 + 2912));
        }
        else
        {
          sub_2237220(v26 + 2904, v51, v36, 24);
          v52 = *(_QWORD *)(v26 + 2904);
          v46 = (const __m128i *)((char *)&v68 + v52 - v60);
          v38 = (__m128i *)(v52 + 24LL * *(unsigned int *)(v26 + 2912));
        }
      }
      *v38 = _mm_loadu_si128(v46);
      v38[1].m128i_i64[0] = v46[1].m128i_i64[0];
      ++*(_DWORD *)(v26 + 2912);
    }
    else
    {
      v39 = &v68;
      v40 = (const __m128i *)&v68;
      if ( v36 > *(unsigned int *)(v26 + 2916) )
      {
        v47 = v26 + 2920;
        if ( v31 > (unsigned __int64)&v68 || v38 <= (__m128i *)&v68 )
        {
          v64 = 24LL * *(_QWORD *)(v26 + 2944);
          sub_2237220(v26 + 2904, v47, v36, 24);
          v31 = *(_QWORD *)(v26 + 2904);
          v40 = (const __m128i *)&v68;
          v39 = &v68;
          v35 = (__m128i *)(v31 + v64);
          v37 = 24LL * *(unsigned int *)(v26 + 2912);
          v38 = (__m128i *)(v31 + v37);
        }
        else
        {
          v58 = 24LL * *(_QWORD *)(v26 + 2944);
          v48 = (char *)&v68 - v31;
          sub_2237220(v26 + 2904, v47, v36, 24);
          v31 = *(_QWORD *)(v26 + 2904);
          v40 = (const __m128i *)&v48[v31];
          v37 = 24LL * *(unsigned int *)(v26 + 2912);
          v35 = (__m128i *)(v31 + v58);
          v38 = (__m128i *)(v31 + v37);
          v39 = (__m128 *)v40;
        }
      }
      *v38 = _mm_loadu_si128((const __m128i *)(v31 + v37 - 24));
      v38[1].m128i_i64[0] = *(_QWORD *)(v31 + v37 - 8);
      v41 = *(_QWORD *)(v26 + 2904);
      v42 = *(_DWORD *)(v26 + 2912);
      v43 = 24LL * v42;
      if ( (__m128i *)(v41 + v43 - 24) != v35 )
      {
        v63 = v40;
        v57 = v39;
        memmove(&v35[1].m128i_u64[1], v35, v41 + v43 - 24 - (_QWORD)v35);
        v40 = v63;
        v39 = v57;
        v42 = *(_DWORD *)(v26 + 2912);
        v41 = *(_QWORD *)(v26 + 2904);
      }
      v44 = v42 + 1;
      *(_DWORD *)(v26 + 2912) = v44;
      if ( v35 <= (__m128i *)v39 && v41 + 24 * v44 > (unsigned __int64)v39 )
        v40 = (const __m128i *)((char *)v40 + 24);
      *v35 = _mm_loadu_si128(v40);
      v35[1].m128i_i32[0] = v40[1].m128i_i32[0];
    }
  }
  result = sub_14D2560(a1, (__int64)&v70, a2, (__m128i)0LL, v8);
  if ( HIDWORD(ptr[1]) )
    goto LABEL_16;
  return result;
}
