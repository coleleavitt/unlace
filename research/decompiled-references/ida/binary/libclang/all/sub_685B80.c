__int64 __fastcall sub_685B80(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __m128i *v6; // rdi
  const __m128i *v7; // rcx
  __m128i *v8; // rbp
  __int64 *v9; // r15
  __int64 result; // rax
  unsigned int *v11; // r14
  __int64 v12; // r9
  __int64 *v13; // rdi
  __int64 *v15; // rbx
  __int64 v16; // rax
  unsigned int *v17; // r15
  unsigned __int64 v18; // r10
  __int64 *v19; // r14
  __int64 v20; // rdi
  __int64 v21; // rsi
  unsigned int v22; // r12d
  const __m128i *v23; // rbp
  __m128i *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbp
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  const __m128i *v32; // rbp
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 *v35; // rbp
  __int64 *v36; // rbx
  __m128i *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // r14
  __int64 v42; // r12
  __int64 v43; // r13
  __int8 *v44; // rbp
  __int64 v45; // rdi
  char *v46; // rbp
  const __m128i *v47; // [rsp+8h] [rbp-E0h]
  __int64 v48; // [rsp+10h] [rbp-D8h]
  _QWORD *v49; // [rsp+18h] [rbp-D0h]
  __int64 *v50; // [rsp+20h] [rbp-C8h]
  __int64 v51; // [rsp+28h] [rbp-C0h]
  __int64 *v52; // [rsp+30h] [rbp-B8h]
  __int64 *v53; // [rsp+38h] [rbp-B0h]
  __int128 v54; // [rsp+40h] [rbp-A8h] BYREF
  __int128 v55; // [rsp+50h] [rbp-98h]
  __int128 v56; // [rsp+60h] [rbp-88h]
  __int128 v57; // [rsp+70h] [rbp-78h]
  __int64 v58; // [rsp+80h] [rbp-68h]
  int v59; // [rsp+88h] [rbp-60h]
  __int64 v60; // [rsp+A0h] [rbp-48h]

  v6 = a1 + 1;
  v7 = a1 + 18;
  v8 = a1 + 45;
  a1->m128i_i64[0] = (__int64)v6;
  a1[17].m128i_i64[0] = (__int64)a1[18].m128i_i64;
  a1->m128i_i64[1] = 0x400000000LL;
  a1[17].m128i_i64[1] = 0x400000000LL;
  a1[44].m128i_i64[0] = (__int64)a1[45].m128i_i64;
  a1[44].m128i_i64[1] = 0x400000000LL;
  v9 = *(__int64 **)a2;
  result = *(unsigned int *)(a2 + 8);
  v11 = *(unsigned int **)(a2 + 16);
  v12 = *(_QWORD *)a2 + 8 * result;
  if ( v12 == *(_QWORD *)a2 )
    return result;
  v52 = (__int64 *)v6;
  v13 = (__int64 *)a1;
  v47 = (const __m128i *)&v54;
  v15 = v9;
  v16 = 0;
  v17 = v11;
  v49 = (_QWORD *)&v54 + 1;
  v18 = 4;
  v19 = v13;
  v53 = (__int64 *)v8;
  v50 = (__int64 *)v12;
  v51 = a4;
  while ( 1 )
  {
    v20 = *v15;
    v21 = v16 + 1;
    v22 = *v17;
    v59 = 0;
    v23 = v47;
    v48 = v20;
    v60 = 0;
    v58 = 0;
    v55 = 0;
    if ( v18 < v16 + 1 )
    {
      v45 = (__int64)(v19 + 34);
      if ( v47 < v7 || v47 >= (const __m128i *)((char *)v7 + 104 * v16) )
      {
        sub_6846A0(v45, v21);
        v7 = (const __m128i *)v19[34];
        v16 = *((unsigned int *)v19 + 70);
      }
      else
      {
        v46 = (char *)((char *)v47 - (char *)v7);
        sub_6846A0(v45, v21);
        v7 = (const __m128i *)v19[34];
        v16 = *((unsigned int *)v19 + 70);
        v23 = (const __m128i *)&v46[(_QWORD)v7];
      }
    }
    v24 = (__m128i *)((char *)v7 + 104 * v16);
    v25 = v51;
    *v24 = _mm_loadu_si128(v23);
    v24[1] = _mm_loadu_si128(v23 + 1);
    v24[2] = _mm_loadu_si128(v23 + 2);
    v24[3] = _mm_loadu_si128(v23 + 3);
    v24[4] = _mm_loadu_si128(v23 + 4);
    v24[5] = _mm_loadu_si128(v23 + 5);
    v26 = v23[6].m128i_i64[0];
    v23[6].m128i_i64[0] = 0;
    v27 = v48;
    v24[6].m128i_i64[0] = v26;
    v28 = (unsigned int)(*((_DWORD *)v19 + 70) + 1);
    *((_DWORD *)v19 + 70) = v28;
    sub_67F660(a3, v27, (__m128i *)(v19[34] + 104 * v28 - 104), v25);
    v29 = *(_QWORD *)(a3 + 40);
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = 0;
    sub_639C30(v49, v27, v22, v29);
    if ( v22 )
    {
      *((_QWORD *)&v56 + 1) = a3;
      DWORD2(v57) = v22;
    }
    v30 = *((unsigned int *)v19 + 2);
    v31 = *v19;
    v32 = v47;
    v33 = v30 + 1;
    if ( *((unsigned int *)v19 + 3) < (unsigned __int64)(v30 + 1) )
    {
      if ( (unsigned __int64)v47 < v31 || (unsigned __int64)v47 >= v31 + (v30 << 6) )
      {
        sub_25D6060(v19, v52, v33, 64);
        v31 = *v19;
        v30 = *((unsigned int *)v19 + 2);
      }
      else
      {
        v44 = &v47->m128i_i8[-v31];
        sub_25D6060(v19, v52, v33, 64);
        v31 = *v19;
        v30 = *((unsigned int *)v19 + 2);
        v32 = (const __m128i *)&v44[*v19];
      }
    }
    result = (v30 << 6) + v31;
    *(__m128i *)result = _mm_loadu_si128(v32);
    *(__m128i *)(result + 16) = _mm_loadu_si128(v32 + 1);
    *(__m128i *)(result + 32) = _mm_loadu_si128(v32 + 2);
    *(__m128i *)(result + 48) = _mm_loadu_si128(v32 + 3);
    ++*((_DWORD *)v19 + 2);
    if ( (*(_BYTE *)(a3 + 32) & 1) != 0 )
      break;
    ++v15;
    ++v17;
    if ( v50 == v15 )
      goto LABEL_11;
LABEL_4:
    v16 = *((unsigned int *)v19 + 70);
    v18 = *((unsigned int *)v19 + 71);
    v7 = (const __m128i *)v19[34];
  }
  ++v15;
  ++v17;
  result = sub_67E0B0(a3, v48, v22);
  if ( v50 != v15 )
    goto LABEL_4;
LABEL_11:
  v34 = *((unsigned int *)v19 + 2);
  v35 = v53;
  v36 = v19;
  if ( (_DWORD)v34 )
  {
    v37 = (__m128i *)(v34 << 6);
    result = 0;
    v38 = 0;
    do
    {
      v39 = v38 + v19[34];
      v38 += 104;
      *(_QWORD *)(*v19 + result) = v39;
      result += 64;
    }
    while ( v37 != (__m128i *)result );
    v40 = *((unsigned int *)v19 + 2);
    if ( (_DWORD)v40 )
    {
      result = *((unsigned int *)v36 + 178);
      v41 = v40 << 6;
      v42 = 0;
      do
      {
        v43 = v42 + *v36;
        if ( *((unsigned int *)v36 + 179) < (unsigned __int64)(result + 1) )
        {
          sub_25D6060(v36 + 88, v35, result + 1, 8);
          *(_QWORD *)(v36[88] + 8LL * *((unsigned int *)v36 + 178)) = v43;
        }
        else
        {
          *(_QWORD *)(v36[88] + 8 * result) = v43;
        }
        v42 += 64;
        result = (unsigned int)(*((_DWORD *)v36 + 178) + 1);
        *((_DWORD *)v36 + 178) = result;
      }
      while ( v42 != v41 );
    }
  }
  return result;
}

