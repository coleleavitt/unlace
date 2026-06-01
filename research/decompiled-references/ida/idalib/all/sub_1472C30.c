__m128i *__fastcall sub_1472C30(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rax
  __int16 v9; // ax
  int v10; // eax
  unsigned __int64 v11; // rcx
  const __m128i *v12; // rbp
  unsigned __int64 v13; // r15
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  __m128i *result; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  int *v19; // r8
  const __m128i *v20; // r15
  unsigned __int64 v21; // rdx
  __m128i *v22; // rax
  unsigned __int16 v23; // cx
  __int64 *v24; // rdi
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  int *v27; // r8
  const __m128i *v28; // r15
  unsigned __int64 v29; // rdx
  __m128i *v30; // rax
  int v31; // eax
  __int64 *v32; // rdi
  unsigned int v33; // eax
  unsigned __int16 v34; // si
  __int64 v35; // rdx
  __int64 v36; // rdi
  __int64 v37; // rax
  __int8 *v38; // r15
  __int64 v39; // rax
  __int8 *v40; // r15
  __int64 v41; // rax
  _DWORD v42[2]; // [rsp+10h] [rbp-58h] BYREF
  __int64 v43; // [rsp+18h] [rbp-50h]
  int v44; // [rsp+20h] [rbp-48h]

  v4 = operator new(0x88u);
  v5 = v4 + 40;
  *(_QWORD *)(v4 + 8) = a1;
  *(_QWORD *)(v4 + 16) = a2;
  *(_QWORD *)v4 = &off_2BB3310;
  *(_QWORD *)(v4 + 32) = 0x400000000LL;
  v6 = *(_QWORD *)(a1 + 1920);
  *(_QWORD *)(v4 + 24) = v4 + 40;
  if ( v6 == *(_QWORD *)(a1 + 1928) )
    v6 = *(_QWORD *)(*(_QWORD *)(a1 + 1944) - 8LL) + 512LL;
  v7 = *(_QWORD *)(v6 - 8);
  v8 = *(unsigned int *)(v7 + 24);
  if ( v8 + 1 > (unsigned __int64)*(unsigned int *)(v7 + 28) )
  {
    sub_2237220(v7 + 16, v7 + 32, v8 + 1, 8);
    v8 = *(unsigned int *)(v7 + 24);
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 16) + 8 * v8) = v4;
  v9 = *(_WORD *)(a1 + 32);
  ++*(_DWORD *)(v7 + 24);
  if ( v9 == 64 )
  {
    v25 = *(unsigned int *)(v4 + 32);
    v26 = *(_QWORD *)(v4 + 24);
    v27 = (int *)(a1 + 16);
    v28 = (const __m128i *)(a1 + 16);
    v29 = v25 + 1;
    v30 = (__m128i *)(v26 + 24 * v25);
    if ( v29 > *(unsigned int *)(v4 + 36) )
    {
      if ( v26 > (unsigned __int64)v27 || v30 <= (__m128i *)v27 )
      {
        sub_2237220(v4 + 24, v5, v29, 24);
        v27 = (int *)(a1 + 16);
        v28 = (const __m128i *)(a1 + 16);
        v30 = (__m128i *)(*(_QWORD *)(v4 + 24) + 24LL * *(unsigned int *)(v4 + 32));
      }
      else
      {
        v38 = &v28->m128i_i8[-v26];
        sub_2237220(v4 + 24, v5, v29, 24);
        v39 = *(_QWORD *)(v4 + 24);
        v27 = (int *)(a1 + 16);
        v28 = (const __m128i *)&v38[v39];
        v30 = (__m128i *)(v39 + 24LL * *(unsigned int *)(v4 + 32));
      }
    }
    *v30 = _mm_loadu_si128(v28);
    v30[1].m128i_i64[0] = v28[1].m128i_i64[0];
    v31 = *(_DWORD *)(a1 + 16);
    v32 = *(__int64 **)(a1 + 8);
    ++*(_DWORD *)(v4 + 32);
    *(_DWORD *)(a1 + 40) = v31;
    sub_14634E0(v32, v27);
    goto LABEL_7;
  }
  if ( v9 != 24 )
  {
LABEL_7:
    sub_14719E0((const __m128i *)a1, v4 + 24, 1);
    goto LABEL_8;
  }
  v17 = *(unsigned int *)(v4 + 32);
  v18 = *(_QWORD *)(v4 + 24);
  v19 = (int *)(a1 + 16);
  v20 = (const __m128i *)(a1 + 16);
  v21 = v17 + 1;
  v22 = (__m128i *)(v18 + 24 * v17);
  if ( v21 > *(unsigned int *)(v4 + 36) )
  {
    if ( v18 > (unsigned __int64)v19 || v22 <= (__m128i *)v19 )
    {
      sub_2237220(v4 + 24, v5, v21, 24);
      v19 = (int *)(a1 + 16);
      v20 = (const __m128i *)(a1 + 16);
      v22 = (__m128i *)(*(_QWORD *)(v4 + 24) + 24LL * *(unsigned int *)(v4 + 32));
    }
    else
    {
      v40 = &v20->m128i_i8[-v18];
      sub_2237220(v4 + 24, v5, v21, 24);
      v41 = *(_QWORD *)(v4 + 24);
      v19 = (int *)(a1 + 16);
      v20 = (const __m128i *)&v40[v41];
      v22 = (__m128i *)(v41 + 24LL * *(unsigned int *)(v4 + 32));
    }
  }
  *v22 = _mm_loadu_si128(v20);
  v22[1].m128i_i64[0] = v20[1].m128i_i64[0];
  ++*(_DWORD *)(v4 + 32);
  if ( *(_WORD *)(a1 + 32) == 24 )
  {
    ++*(_WORD *)(a1 + 92);
    goto LABEL_13;
  }
  v23 = *(_WORD *)(a1 + 92);
  if ( v23 )
  {
    v33 = *(_DWORD *)(a1 + 2792);
    if ( !v33 )
    {
LABEL_24:
      *(_WORD *)(a1 + 92) = v23 - 1;
      goto LABEL_13;
    }
    v34 = *(_WORD *)(a1 + 88);
    v35 = *(_QWORD *)(a1 + 2784) + 24LL * v33 - 24;
    while ( 1 )
    {
      if ( v34 == *(_WORD *)(v35 + 14) )
      {
        if ( *(_DWORD *)(v35 + 16) == *(_DWORD *)(a1 + 90) )
          goto LABEL_19;
      }
      else if ( v34 > *(_WORD *)(v35 + 14) )
      {
        goto LABEL_19;
      }
      if ( *(_WORD *)(a1 + 90) <= *(_WORD *)(v35 + 16) && v23 <= *(_WORD *)(v35 + 18) )
        goto LABEL_24;
LABEL_19:
      --v33;
      v35 -= 24;
      *(_DWORD *)(a1 + 2792) = v33;
      if ( !v33 )
        goto LABEL_24;
    }
  }
LABEL_13:
  v24 = *(__int64 **)(a1 + 8);
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(v24, v19);
  sub_146E570(a1, 25, 25, v4 + 24, 1, 1);
LABEL_8:
  v10 = *(_DWORD *)(a1 + 16);
  v11 = *(unsigned int *)(v4 + 36);
  v42[1] = 0;
  v12 = (const __m128i *)v42;
  v13 = *(_QWORD *)(v4 + 24);
  v44 = 1;
  v42[0] = v10;
  v14 = *(unsigned int *)(v4 + 32);
  v43 = a2;
  v15 = v14 + 1;
  result = (__m128i *)(v13 + 24 * v14);
  if ( v15 > v11 )
  {
    v36 = v4 + 24;
    if ( v13 > (unsigned __int64)v42 || result <= (__m128i *)v42 )
    {
      sub_2237220(v36, v5, v15, 24);
      result = (__m128i *)(*(_QWORD *)(v4 + 24) + 24LL * *(unsigned int *)(v4 + 32));
    }
    else
    {
      sub_2237220(v36, v5, v15, 24);
      v37 = *(_QWORD *)(v4 + 24);
      v12 = (const __m128i *)((char *)v42 + v37 - v13);
      result = (__m128i *)(v37 + 24LL * *(unsigned int *)(v4 + 32));
    }
  }
  *result = _mm_loadu_si128(v12);
  result[1].m128i_i64[0] = v12[1].m128i_i64[0];
  ++*(_DWORD *)(v4 + 32);
  return result;
}
