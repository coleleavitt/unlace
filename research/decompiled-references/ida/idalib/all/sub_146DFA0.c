void __fastcall sub_146DFA0(const __m128i *a1, __int64 a2)
{
  int *m128i_i32; // r13
  __int64 v5; // rbp
  __int64 v6; // rax
  __m128i v7; // xmm0
  __int16 v8; // ax
  unsigned __int16 v9; // cx
  unsigned int v10; // eax
  unsigned __int16 v11; // si
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // r15
  __int64 v19; // rax
  __m128i *v20; // r14
  __m128i *v21; // r10
  unsigned __int64 v22; // r8
  const __m128i *v23; // r9
  __int64 v24; // rcx
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rax
  unsigned __int16 v28; // cx
  __int64 *v29; // rdi
  const __m128i *v30; // r14
  unsigned __int16 v31; // cx
  unsigned int v32; // eax
  unsigned __int16 v33; // si
  __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // rdx
  int v37; // eax
  __int64 *v38; // rdi
  __int64 v39; // rsi
  char *v40; // r14
  __int64 v41; // rsi
  char *v42; // r14
  __int64 v43; // rax
  unsigned __int64 v44; // [rsp+0h] [rbp-A8h]
  const __m128i *v45; // [rsp+8h] [rbp-A0h]
  int v46; // [rsp+1Ch] [rbp-8Ch] BYREF
  __int64 v47; // [rsp+20h] [rbp-88h] BYREF
  void *v48; // [rsp+28h] [rbp-80h]
  __int64 v49; // [rsp+30h] [rbp-78h]
  _BYTE v50[16]; // [rsp+38h] [rbp-70h] BYREF
  __int64 *v51; // [rsp+48h] [rbp-60h] BYREF
  void *ptr; // [rsp+50h] [rbp-58h]
  __int64 v53; // [rsp+58h] [rbp-50h]
  _BYTE v54[72]; // [rsp+60h] [rbp-48h] BYREF

  m128i_i32 = a1[1].m128i_i32;
  v5 = a1->m128i_i64[1];
  if ( *(_DWORD *)(v5 + 1012) )
  {
    v6 = operator new[](0x18u);
    v7 = _mm_loadu_si128(a1 + 1);
    *(_DWORD *)(v6 + 16) = a1[2].m128i_i32[0];
    *(__m128i *)v6 = v7;
    sub_14368B0(v5, (char *)v6, 1, 1u, 1u, 1u);
  }
  else
  {
    sub_1417F90((_QWORD *)a1->m128i_i64[1]);
    v13 = *(unsigned int *)(v5 + 2912);
    v14 = v5 + 2904;
    v15 = *(_QWORD *)(v5 + 2904);
    v16 = 3 * v13;
    v17 = v13 + 1;
    v18 = 24LL * *(_QWORD *)(v5 + 2944);
    v19 = 8 * v16;
    v20 = (__m128i *)(v15 + v18);
    v21 = (__m128i *)(v15 + v19);
    if ( v15 + v18 == v15 + v19 )
    {
      v30 = (const __m128i *)m128i_i32;
      if ( v17 > *(unsigned int *)(v5 + 2916) )
      {
        v41 = v5 + 2920;
        if ( v15 <= (unsigned __int64)m128i_i32 && v21 > (__m128i *)m128i_i32 )
        {
          v42 = (char *)m128i_i32 - v15;
          sub_2237220(v14, v41, v17, 24);
          v43 = *(_QWORD *)(v5 + 2904);
          v30 = (const __m128i *)&v42[v43];
          v21 = (__m128i *)(v43 + 24LL * *(unsigned int *)(v5 + 2912));
        }
        else
        {
          sub_2237220(v14, v41, v17, 24);
          v21 = (__m128i *)(*(_QWORD *)(v5 + 2904) + 24LL * *(unsigned int *)(v5 + 2912));
        }
      }
      *v21 = _mm_loadu_si128(v30);
      v21[1].m128i_i64[0] = v30[1].m128i_i64[0];
      ++*(_DWORD *)(v5 + 2912);
    }
    else
    {
      v22 = (unsigned __int64)m128i_i32;
      v23 = (const __m128i *)m128i_i32;
      if ( v17 > *(unsigned int *)(v5 + 2916) )
      {
        v39 = v5 + 2920;
        if ( v15 > (unsigned __int64)m128i_i32 || v21 <= (__m128i *)m128i_i32 )
        {
          sub_2237220(v14, v39, v17, 24);
          v23 = (const __m128i *)m128i_i32;
          v22 = (unsigned __int64)m128i_i32;
          v15 = *(_QWORD *)(v5 + 2904);
          v19 = 24LL * *(unsigned int *)(v5 + 2912);
          v20 = (__m128i *)(v15 + v18);
          v21 = (__m128i *)(v15 + v19);
        }
        else
        {
          v40 = (char *)m128i_i32 - v15;
          sub_2237220(v14, v39, v17, 24);
          v15 = *(_QWORD *)(v5 + 2904);
          v23 = (const __m128i *)&v40[v15];
          v19 = 24LL * *(unsigned int *)(v5 + 2912);
          v20 = (__m128i *)(v15 + v18);
          v22 = (unsigned __int64)v23;
          v21 = (__m128i *)(v15 + v19);
        }
      }
      *v21 = _mm_loadu_si128((const __m128i *)(v15 + v19 - 24));
      v21[1].m128i_i64[0] = *(_QWORD *)(v15 + v19 - 8);
      v24 = *(_QWORD *)(v5 + 2904);
      v25 = *(_DWORD *)(v5 + 2912);
      v26 = 24LL * v25;
      if ( (__m128i *)(v24 + v26 - 24) != v20 )
      {
        v45 = v23;
        v44 = v22;
        memmove(&v20[1].m128i_u64[1], v20, v24 + v26 - 24 - (_QWORD)v20);
        v25 = *(_DWORD *)(v5 + 2912);
        v24 = *(_QWORD *)(v5 + 2904);
        v23 = v45;
        v22 = v44;
      }
      v27 = v25 + 1;
      *(_DWORD *)(v5 + 2912) = v27;
      if ( (unsigned __int64)v20 <= v22 && v24 + 24 * v27 > v22 )
        v23 = (const __m128i *)((char *)v23 + 24);
      *v20 = _mm_loadu_si128(v23);
      v20[1].m128i_i32[0] = v23[1].m128i_i32[0];
    }
  }
  sub_14368B0(a1->m128i_i64[1], *(char **)(a2 + 24), *(unsigned int *)(a2 + 32), 1u, 0, 1u);
  v8 = a1[2].m128i_i16[0];
  if ( v8 == 22 )
  {
    ++a1[5].m128i_i16[4];
    goto LABEL_26;
  }
  if ( v8 == 23 )
  {
    v28 = a1[5].m128i_u16[4];
    if ( !v28 )
      goto LABEL_26;
    v35 = a1[174].m128i_u32[2];
    if ( !v35 )
    {
LABEL_56:
      a1[5].m128i_i16[4] = v28 - 1;
      goto LABEL_26;
    }
    v36 = a1[174].m128i_i64[0] + 24LL * v35 - 24;
    while ( 1 )
    {
      if ( v28 == *(_WORD *)(v36 + 14) )
      {
        if ( *(_DWORD *)(v36 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
          goto LABEL_51;
      }
      else if ( v28 > *(_WORD *)(v36 + 14) )
      {
        goto LABEL_51;
      }
      if ( a1[5].m128i_i16[5] <= *(_WORD *)(v36 + 16) && a1[5].m128i_i16[6] <= *(_WORD *)(v36 + 18) )
        goto LABEL_56;
LABEL_51:
      --v35;
      v36 -= 24;
      a1[174].m128i_i32[2] = v35;
      if ( !v35 )
        goto LABEL_56;
    }
  }
  if ( (unsigned __int16)(v8 - 20) <= 1u )
  {
    v9 = a1[5].m128i_u16[5];
    if ( v8 == 20 )
    {
      a1[5].m128i_i16[5] = v9 + 1;
    }
    else if ( v9 )
    {
      v10 = a1[174].m128i_u32[2];
      if ( v10 )
      {
        v11 = a1[5].m128i_u16[4];
        v12 = a1[174].m128i_i64[0] + 24LL * v10 - 24;
        do
        {
          if ( v11 == *(_WORD *)(v12 + 14) )
          {
            if ( *(_DWORD *)(v12 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              goto LABEL_11;
          }
          else if ( v11 > *(_WORD *)(v12 + 14) )
          {
            goto LABEL_11;
          }
          if ( *(_WORD *)(v12 + 16) >= v9 && a1[5].m128i_i16[6] <= *(_WORD *)(v12 + 18) )
            break;
LABEL_11:
          --v10;
          v12 -= 24;
          a1[174].m128i_i32[2] = v10;
        }
        while ( v10 );
      }
      a1[5].m128i_i16[5] = v9 - 1;
    }
    goto LABEL_26;
  }
  if ( (unsigned __int16)(v8 - 24) <= 1u )
  {
    v31 = a1[5].m128i_u16[6];
    if ( v8 == 24 )
    {
      a1[5].m128i_i16[6] = v31 + 1;
    }
    else if ( v31 )
    {
      v32 = a1[174].m128i_u32[2];
      if ( v32 )
      {
        v33 = a1[5].m128i_u16[4];
        v34 = a1[174].m128i_i64[0] + 24LL * v32 - 24;
        do
        {
          if ( v33 == *(_WORD *)(v34 + 14) )
          {
            if ( *(_DWORD *)(v34 + 16) == *(__int32 *)((char *)&a1[5].m128i_i32[2] + 2) )
              goto LABEL_42;
          }
          else if ( v33 > *(_WORD *)(v34 + 14) )
          {
            goto LABEL_42;
          }
          if ( a1[5].m128i_i16[5] <= *(_WORD *)(v34 + 16) && v31 <= *(_WORD *)(v34 + 18) )
            break;
LABEL_42:
          --v32;
          v34 -= 24;
          a1[174].m128i_i32[2] = v32;
        }
        while ( v32 );
      }
      a1[5].m128i_i16[6] = v31 - 1;
    }
LABEL_26:
    v29 = (__int64 *)a1->m128i_i64[1];
    a1[2].m128i_i32[2] = a1[1].m128i_i32[0];
    sub_14634E0(v29, m128i_i32);
    goto LABEL_27;
  }
  if ( (unsigned __int16)(v8 - 14) <= 1u || (unsigned __int16)(v8 - 17) <= 2u || v8 == 3 || !sub_10CCDE0(v8) )
    goto LABEL_26;
  v37 = a1[1].m128i_i32[1];
  v38 = (__int64 *)a1->m128i_i64[1];
  if ( !v37 )
    v37 = a1[1].m128i_i32[0];
  a1[2].m128i_i32[2] = v37;
  sub_14634E0(v38, m128i_i32);
LABEL_27:
  v46 = *(_DWORD *)(a2 + 16);
  v48 = v50;
  v51 = &a1[31].m128i_i64[1];
  v47 = 0;
  v49 = 0x200000000LL;
  ptr = v54;
  v53 = 0x200000000LL;
  sub_151C490(a1, &v46, &v47, 0, 0, 0);
  sub_15DCED0(v51, &v51);
  if ( ptr != v54 )
    free(ptr);
  if ( v48 != v50 )
    free(v48);
}
