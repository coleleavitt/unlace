void __fastcall sub_1467DF0(__int64 a1, __int64 *a2, __int64 a3, int a4, __m128 a5, __m128 a6)
{
  __int64 v7; // rax
  unsigned int v8; // r13d
  const __m128i *v9; // r8
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned int v12; // r8d
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  unsigned int v16; // r9d
  unsigned int v17; // edx
  unsigned int v18; // r8d
  bool v19; // cl
  unsigned int v20; // edx
  __int16 v21; // bx
  unsigned int v22; // ebp
  unsigned __int64 v23; // rax
  __int64 v24; // r15
  __int64 v25; // rcx
  _DWORD *v26; // rax
  __int64 v27; // rdx
  __m128i v28; // xmm3
  __int64 v29; // rax
  _BYTE *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rbp
  unsigned __int32 v34; // edx
  __int64 v35; // r14
  unsigned int v36; // ebp
  __int64 v37; // rax
  const __m128i *v38; // r13
  unsigned __int64 v39; // rdx
  __m128 *v40; // rax
  __int64 v41; // rcx
  const __m128i *v42; // r13
  char *v43; // rax
  signed __int64 v44; // r13
  unsigned __int64 v45; // rdx
  signed __int64 v46; // r14
  int v47; // [rsp+18h] [rbp-670h]
  __m128i v49; // [rsp+20h] [rbp-668h] BYREF
  int v50; // [rsp+30h] [rbp-658h]
  void *ptr; // [rsp+40h] [rbp-648h] BYREF
  __int64 v52; // [rsp+48h] [rbp-640h]
  _BYTE v53[1592]; // [rsp+50h] [rbp-638h] BYREF

  v7 = *(int *)(a3 + 84);
  v47 = v7;
  v8 = *((_DWORD *)a2 + 2) - v7;
  if ( v8 )
  {
    v31 = 3 * v7;
    v32 = *a2;
    v49.m128i_i32[0] = 0;
    ptr = v53;
    v33 = v32 + 8 * v31;
    v34 = 0;
    v35 = v33;
    v36 = v8;
    v52 = 0x4000000000LL;
    v37 = 0;
    do
    {
      v41 = v34;
      if ( *(_WORD *)(v35 + 24LL * v34 + 16) == 68 )
      {
        v42 = (const __m128i *)(v35 + 24LL * (v34 - 1));
        sub_1466A30(a1, (__int64)v42, v35, v36, (unsigned int *)&v49, *(double *)a5.m128_u64, a6);
        a6 = (__m128)_mm_loadu_si128(v42);
        v43 = (char *)ptr + 24 * (unsigned int)v52;
        *(__m128 *)(v43 - 24) = a6;
        *((_DWORD *)v43 - 2) = v42[1].m128i_i32[0];
        v37 = (unsigned int)v52;
        if ( v49.m128i_i32[0] == v36 )
          break;
        v41 = v49.m128i_u32[0];
      }
      v38 = (const __m128i *)(v35 + 24 * v41);
      v39 = v37 + 1;
      v40 = (__m128 *)((char *)ptr + 24 * v37);
      if ( v39 > HIDWORD(v52) )
      {
        if ( ptr > v38 || v40 <= (__m128 *)v38 )
        {
          sub_2237220(&ptr, v53, v39, 24);
          v40 = (__m128 *)((char *)ptr + 24 * (unsigned int)v52);
        }
        else
        {
          v44 = (char *)v38 - (_BYTE *)ptr;
          sub_2237220(&ptr, v53, v39, 24);
          v38 = (const __m128i *)((char *)ptr + v44);
          v40 = (__m128 *)((char *)ptr + 24 * (unsigned int)v52);
        }
      }
      a5 = (__m128)_mm_loadu_si128(v38);
      *v40 = a5;
      v40[1].m128_u64[0] = v38[1].m128i_u64[0];
      v37 = (unsigned int)(v52 + 1);
      v34 = v49.m128i_i32[0] + 1;
      LODWORD(v52) = v52 + 1;
      v49.m128i_i32[0] = v34;
    }
    while ( v34 != v36 );
    v45 = v37 + 1;
    v9 = (const __m128i *)(a3 + 56);
    v10 = (__m128i *)((char *)ptr + 24 * v37);
    if ( v45 > HIDWORD(v52) )
    {
      if ( ptr > v9 || v10 <= v9 )
      {
        sub_2237220(&ptr, v53, v45, 24);
        v9 = (const __m128i *)(a3 + 56);
        v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v52);
      }
      else
      {
        v46 = (char *)v9 - (_BYTE *)ptr;
        sub_2237220(&ptr, v53, v45, 24);
        v9 = (const __m128i *)((char *)ptr + v46);
        v10 = (__m128i *)((char *)ptr + 24 * (unsigned int)v52);
      }
    }
  }
  else
  {
    v9 = (const __m128i *)(a3 + 56);
    v10 = (__m128i *)v53;
    v52 = 0x4000000000LL;
    ptr = v53;
  }
  *v10 = _mm_loadu_si128(v9);
  v11 = v9[1].m128i_i64[0];
  LODWORD(v52) = v52 + 1;
  v10[1].m128i_i64[0] = v11;
  v12 = *(_DWORD *)(a3 + 80) & 0x7FFFFFFF;
  v13 = *(_DWORD *)(a1 + 56) & 0x7FFFFFFF;
  v14 = v13 + *(_DWORD *)(a1 + 60);
  if ( v12 < v13 || v12 >= v14 )
    v15 = 0;
  else
    v15 = v12 - v13;
  v16 = *(_DWORD *)(a1 + 48);
  v17 = a4 & 0x7FFFFFFF;
  v18 = v16 + v15;
  if ( (a4 & 0x7FFFFFFFu) >= v13 )
  {
    v19 = v17 < v14;
    v20 = v16 + v17 - v13;
    if ( v19 )
      v16 = v20;
  }
  sub_13F0100(
    (__int64)&v49,
    (__int64)ptr,
    *(_QWORD *)(a1 + 16),
    (*(_BYTE *)(a3 + 88) & 4) != 0,
    v18,
    v16,
    *(double *)a5.m128_u64,
    *(double *)a6.m128_u64);
  v21 = HIWORD(v50) | 2;
  if ( (*(_BYTE *)(a3 + 88) & 1) == 0 )
    v21 = HIWORD(v50);
  v22 = v47 + 1;
  v23 = *((unsigned int *)a2 + 2);
  HIBYTE(v21) |= 1u;
  if ( v47 + 1 == v23 )
  {
    v25 = *a2;
    v24 = (int)v22;
  }
  else
  {
    v24 = v22;
    if ( (int)v22 < v23 )
    {
      *((_DWORD *)a2 + 2) = v22;
      v25 = *a2;
    }
    else
    {
      if ( (int)v22 > (unsigned __int64)*((unsigned int *)a2 + 3) )
      {
        sub_2237220(a2, a2 + 2, (int)v22, 24);
        v23 = *((unsigned int *)a2 + 2);
      }
      v25 = *a2;
      v26 = (_DWORD *)(*a2 + 24 * v23);
      v27 = *a2 + 24LL * (int)v22;
      if ( v26 != (_DWORD *)v27 )
      {
        do
        {
          *v26 = 0;
          v26 += 6;
          *(v26 - 5) = 0;
          *((_QWORD *)v26 - 2) = 0;
          *((_WORD *)v26 - 4) = 0;
          *((_WORD *)v26 - 3) = 0;
        }
        while ( (_DWORD *)v27 != v26 );
        v25 = *a2;
      }
      *((_DWORD *)a2 + 2) = v22;
    }
  }
  v28 = _mm_load_si128(&v49);
  HIWORD(v50) = v21;
  v29 = v25 + 24 * v24;
  *(__m128i *)(v29 - 24) = v28;
  v30 = ptr;
  *(_DWORD *)(v29 - 8) = v50;
  if ( v30 != v53 )
    free(v30);
}
