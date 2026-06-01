__int64 __fastcall sub_1CB0E30(
        __int64 a1,
        _QWORD *a2,
        int a3,
        __m128 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v11; // r15d
  __int64 v13; // rax
  __int64 *v14; // r8
  const __m128i *v15; // r15
  unsigned __int64 v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // rax
  int v19; // r15d
  int v20; // r9d
  __int64 v21; // rax
  int v22; // r9d
  unsigned __int64 v23; // rdx
  __m128 *v24; // rcx
  const __m128i *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdi
  __int64 v28; // rbp
  int v29; // eax
  __int64 v30; // rdx
  int v31; // edi
  __int64 *v32; // rsi
  unsigned int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // [rsp-8h] [rbp-130h]
  __int64 v39; // [rsp+8h] [rbp-120h]
  _BYTE *v40; // [rsp+8h] [rbp-120h]
  int v41; // [rsp+8h] [rbp-120h]
  _BYTE *v42; // [rsp+8h] [rbp-120h]
  int v43; // [rsp+10h] [rbp-118h]
  int v44; // [rsp+10h] [rbp-118h]
  __m128i *v45; // [rsp+10h] [rbp-118h]
  __int64 *v46; // [rsp+18h] [rbp-110h]
  __int64 v47; // [rsp+28h] [rbp-100h] BYREF
  char v48[8]; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int8 v49; // [rsp+38h] [rbp-F0h]
  __int64 v50; // [rsp+40h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+48h] [rbp-E0h]
  __int64 v52; // [rsp+50h] [rbp-D8h]
  __int64 v53; // [rsp+58h] [rbp-D0h]
  void *ptr; // [rsp+70h] [rbp-B8h] BYREF
  __int64 v55; // [rsp+78h] [rbp-B0h]
  _DWORD v56[25]; // [rsp+80h] [rbp-A8h] BYREF
  char v57; // [rsp+E4h] [rbp-44h]

  sub_1DC3A00((unsigned int)v48, a1, a3, a6 & 0xFFFFFFF9 | 2, (_DWORD)a2, a3, a8, a9);
  v11 = v49;
  if ( v49 )
    goto LABEL_2;
  v56[24] = 0;
  v55 = 0x400000000LL;
  ptr = v56;
  v57 = 0;
  if ( a2 )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD *, _DWORD *, __int64))(*a2 + 32LL))(a2, v56, v37);
    v14 = &v50;
    v52 = a9;
    v15 = (const __m128i *)&v50;
    v16 = (unsigned int)v55 + 1LL;
    v50 = v13 | 4;
    v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
    v51 = a8;
    if ( HIDWORD(v55) < v16 )
    {
      if ( ptr > &v50 || v17 <= (__m128i *)&v50 )
      {
        sub_2237220(&ptr, v56, v16, 24);
        v14 = &v50;
        v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
      }
      else
      {
        v42 = ptr;
        sub_2237220(&ptr, v56, v16, 24);
        v14 = &v50;
        v15 = (const __m128i *)((char *)ptr + (char *)&v50 - v42);
        v17 = (__m128i *)((char *)ptr + 24 * (unsigned int)v55);
      }
    }
  }
  else
  {
    v14 = &v50;
    v17 = (__m128i *)v56;
    v52 = a9;
    v50 = 4;
    v15 = (const __m128i *)&v50;
    v51 = a8;
  }
  *v17 = _mm_loadu_si128(v15);
  v18 = v15[1].m128i_i64[0];
  v19 = 0;
  v17[1].m128i_i64[0] = v18;
  v20 = *(_DWORD *)(a6 + 68);
  v21 = (unsigned int)(v55 + 1);
  LODWORD(v55) = v55 + 1;
  v22 = v20 & 0xFFFFF;
  if ( v22 )
  {
    do
    {
      v23 = v21 + 1;
      v50 = 0;
      v51 = 0;
      v24 = (__m128 *)((char *)ptr + 24 * v21);
      v25 = (const __m128i *)v14;
      v52 = 0;
      if ( v23 > HIDWORD(v55) )
      {
        v40 = ptr;
        if ( ptr > v14 || v24 <= (__m128 *)v14 )
        {
          v45 = (__m128i *)v14;
          v41 = v22;
          sub_2237220(&ptr, v56, v23, 24);
          v14 = (__int64 *)v45;
          v22 = v41;
          v24 = (__m128 *)((char *)ptr + 24 * (unsigned int)v55);
          v25 = v45;
        }
        else
        {
          v46 = v14;
          v44 = v22;
          sub_2237220(&ptr, v56, v23, 24);
          v14 = v46;
          v22 = v44;
          v25 = (const __m128i *)((char *)ptr + (char *)v46 - v40);
          v24 = (__m128 *)((char *)ptr + 24 * (unsigned int)v55);
        }
      }
      a4 = (__m128)_mm_loadu_si128(v25);
      ++v19;
      *v24 = a4;
      v24[1].m128_u64[0] = v25[1].m128i_u64[0];
      v21 = (unsigned int)(v55 + 1);
      LODWORD(v55) = v55 + 1;
    }
    while ( v22 != v19 );
  }
  v26 = (_QWORD *)(a2[2] & 0xFFFFFFFFFFFFFFF8LL);
  if ( (a2[2] & 4) != 0 )
    v26 = (_QWORD *)*v26;
  v27 = *(_QWORD *)(a1 + 512);
  v28 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)(a1 + 544) = v26;
  v39 = v27;
  LODWORD(v27) = *(_DWORD *)(a1 + 80);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 40);
  v29 = *(_DWORD *)(a1 + 3688);
  v30 = *(_QWORD *)(a1 + 9944);
  v43 = v27;
  *(_QWORD *)(a1 + 512) = 0;
  v31 = *(_DWORD *)(a1 + 2632);
  *(_QWORD *)(a1 + 9944) = 0;
  *(_DWORD *)(a1 + 2632) = v29;
  v53 = v30;
  sub_18C74E0(a1, 4, 0, 4);
  v47 = 0;
  if ( !(_BYTE)byte_2CCC440 && __cxa_guard_acquire(&byte_2CCC440) )
  {
    qword_2CCC460 &= 0xFFFFFFFE00000000LL;
    qword_2CCC468 = 0;
    qword_2CCC478 = 0;
    __cxa_guard_release(&byte_2CCC440);
  }
  v32 = (__int64 *)(*(_QWORD *)(a6 + 72) & 0xFFFFFFFFFFFFFFF8LL);
  if ( v32 )
  {
    v35 = (*(__int64 *)(a6 + 72) >> 1) & 3;
    if ( v35 == 1 )
    {
      v36 = v32[9];
      v32 = nullptr;
      if ( !v36 )
        goto LABEL_13;
      v32 = (__int64 *)(v36 & 0xFFFFFFFFFFFFFFF8LL);
      if ( ((v36 >> 1) & 3) != 2 || !v32 )
        goto LABEL_13;
    }
    else if ( v35 != 2 )
    {
      goto LABEL_13;
    }
    v32 = (__int64 *)v32[1];
  }
  else
  {
    v32 = &qword_2CCC460;
  }
LABEL_13:
  *(double *)a4.m128_u64 = sub_1DD6BB0(a1, v32, &ptr, a7, 0, &v47);
  v11 = v33;
  sub_190D5E0(a1, a4);
  if ( v28 )
  {
    v34 = v53;
    *(_QWORD *)(a1 + 544) = v28;
    *(_QWORD *)(a1 + 512) = v39;
    *(_QWORD *)(a1 + 9944) = v34;
    *(_DWORD *)(a1 + 80) = v43;
    *(_DWORD *)(a1 + 2632) = v31;
  }
  if ( ptr != v56 )
    free(ptr);
LABEL_2:
  sub_1DBADA0(v48);
  return v11;
}
