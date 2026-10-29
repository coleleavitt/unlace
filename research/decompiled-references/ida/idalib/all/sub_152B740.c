void __fastcall sub_152B740(__int64 a1, __int64 a2, __int64 a3, const __m128i *a4)
{
  unsigned __int64 v5; // rbx
  __int32 v6; // eax
  _BYTE *v7; // rsi
  __int64 v8; // rax
  bool v9; // zf
  __m128i *v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r14
  _BYTE *v14; // r14
  const __m128i *v15; // rbx
  __m128i *v16; // rax
  __int64 v17; // r13
  char *v18; // rax
  __int64 v19; // rbx
  char *v20; // rdx
  _DWORD *v21; // rax
  __int64 v22; // r8
  __int64 v23; // r9
  void *v24; // r14
  _DWORD *v25; // rdi
  __int64 v26; // rbx
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // rax
  __m128i v30; // xmm2
  __int64 v31; // rdx
  __int64 v32; // rdi
  unsigned __int64 v33; // rcx
  __int64 v34; // r15
  __int64 v35; // rax
  __m128i *v36; // rbx
  __m128i *v37; // r9
  unsigned __int64 v38; // rdx
  __m128i *v39; // r13
  __m128i *v40; // r14
  __int64 v41; // rcx
  unsigned int v42; // eax
  __int64 v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rsi
  __int8 *v46; // r13
  _QWORD v47[2]; // [rsp+10h] [rbp-148h] BYREF
  int v48; // [rsp+20h] [rbp-138h]
  __m128i v49; // [rsp+30h] [rbp-128h] BYREF
  int v50; // [rsp+40h] [rbp-118h]
  void *src; // [rsp+50h] [rbp-108h] BYREF
  __int64 v52; // [rsp+58h] [rbp-100h]
  _BYTE v53[248]; // [rsp+60h] [rbp-F8h] BYREF

  v5 = (unsigned __int64)a4;
  v6 = a4->m128i_i32[0];
  v48 = 1;
  v49.m128i_i32[0] = v6;
  v49.m128i_i32[1] = v6;
  v7 = v53;
  v52 = 0x800000000LL;
  v8 = 0;
  v9 = a4[1].m128i_i16[0] == 2;
  v47[0] = 0;
  v47[1] = 0;
  v49.m128i_i64[1] = 0;
  v50 = 445;
  src = v53;
  if ( v9 )
  {
    v16 = (__m128i *)v53;
    v15 = (const __m128i *)v47;
  }
  else
  {
    while ( 1 )
    {
      v10 = (__m128i *)&v7[24 * v8];
      *v10 = _mm_loadu_si128(a4);
      v11 = a4[1].m128i_i64[0];
      LODWORD(v52) = v52 + 1;
      v10[1].m128i_i64[0] = v11;
      v49.m128i_i32[1] = *(_DWORD *)v5;
      sub_14634E0((__int64 *)a2, (int *)v5);
      v8 = (unsigned int)v52;
      v12 = (unsigned int)v52 + 1LL;
      if ( *(_WORD *)(v5 + 16) == 2 )
        break;
      v7 = src;
      a4 = (const __m128i *)v5;
      if ( v12 > HIDWORD(v52) )
      {
        if ( (unsigned __int64)src > v5 || v5 >= (unsigned __int64)src + 24 * (unsigned int)v52 )
        {
          sub_2237220(&src, v53, v12, 24);
          v7 = src;
          a4 = (const __m128i *)v5;
          v8 = (unsigned int)v52;
        }
        else
        {
          v13 = v5 - (_QWORD)src;
          sub_2237220(&src, v53, v12, 24);
          v7 = src;
          v8 = (unsigned int)v52;
          a4 = (const __m128i *)((char *)src + v13);
        }
      }
    }
    v14 = src;
    v15 = (const __m128i *)v47;
    v16 = (__m128i *)((char *)src + 24 * (unsigned int)v52);
    if ( v12 > HIDWORD(v52) )
    {
      if ( src > v47 || v16 <= (__m128i *)v47 )
      {
        sub_2237220(&src, v53, v12, 24);
        v16 = (__m128i *)((char *)src + 24 * (unsigned int)v52);
      }
      else
      {
        sub_2237220(&src, v53, v12, 24);
        v15 = (const __m128i *)((char *)src + (char *)v47 - v14);
        v16 = (__m128i *)((char *)src + 24 * (unsigned int)v52);
      }
    }
  }
  *v16 = _mm_loadu_si128(v15);
  v16[1].m128i_i64[0] = v15[1].m128i_i64[0];
  v18 = (char *)src;
  LODWORD(v52) = v52 + 1;
  v17 = (unsigned int)v52;
  v19 = 24LL * (unsigned int)v52;
  v20 = (char *)src + v19;
  if ( (char *)src + v19 != src )
  {
    do
    {
      *((_WORD *)v18 + 9) |= 0x800u;
      v18 += 24;
    }
    while ( v20 != v18 );
  }
  v21 = (_DWORD *)operator new[](24 * v17);
  v24 = v21;
  v25 = &v21[(unsigned __int64)v19 / 4];
  if ( v17 )
  {
    do
    {
      *v21 = 0;
      v21 += 6;
      *(v21 - 5) = 0;
      *((_QWORD *)v21 - 2) = 0;
      *((_WORD *)v21 - 4) = 0;
      *((_WORD *)v21 - 3) = 0;
    }
    while ( v21 != v25 );
  }
  v26 = (unsigned int)v52;
  if ( 24LL * (unsigned int)v52 )
    memmove(v24, src, 24LL * (unsigned int)v52);
  v27 = *(_QWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 208) += 16LL;
  v28 = (_QWORD *)((v27 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_QWORD *)(a2 + 136) >= (unsigned __int64)(v28 + 2) && v27 )
    *(_QWORD *)(a2 + 128) = v28 + 2;
  else
    v28 = (_QWORD *)sub_986170(a2 + 128, 16, 16, 4, v22, v23);
  *v28 = v24;
  v28[1] = v26;
  v49.m128i_i64[1] = (__int64)v28;
  if ( *(_DWORD *)(a2 + 1012) )
  {
    v29 = operator new[](0x18u);
    v30 = _mm_load_si128(&v49);
    *(_DWORD *)(v29 + 16) = v50;
    *(__m128i *)v29 = v30;
    sub_14368B0(a2, (char *)v29, 1, 1u, 1u, 0);
  }
  else
  {
    sub_1417F90((_QWORD *)a2);
    v31 = *(unsigned int *)(a2 + 2912);
    v32 = a2 + 2904;
    v33 = *(_QWORD *)(a2 + 2904);
    v34 = 24LL * *(_QWORD *)(a2 + 2944);
    v35 = 24 * v31;
    v36 = (__m128i *)(v33 + v34);
    v37 = (__m128i *)(v33 + 24 * v31);
    if ( (__m128i *)(v33 + v34) == v37 )
    {
      sub_141B840(v32, &v49);
    }
    else
    {
      v38 = v31 + 1;
      v39 = &v49;
      v40 = &v49;
      if ( v38 > *(unsigned int *)(a2 + 2916) )
      {
        v45 = a2 + 2920;
        if ( v33 > (unsigned __int64)&v49 || v37 <= &v49 )
        {
          sub_2237220(v32, v45, v38, 24);
          v33 = *(_QWORD *)(a2 + 2904);
          v40 = &v49;
          v35 = 24LL * *(unsigned int *)(a2 + 2912);
          v36 = (__m128i *)(v33 + v34);
          v37 = (__m128i *)(v33 + v35);
        }
        else
        {
          v46 = &v49.m128i_i8[-v33];
          sub_2237220(v32, v45, v38, 24);
          v33 = *(_QWORD *)(a2 + 2904);
          v40 = (__m128i *)&v46[v33];
          v35 = 24LL * *(unsigned int *)(a2 + 2912);
          v36 = (__m128i *)(v33 + v34);
          v39 = (__m128i *)&v46[v33];
          v37 = (__m128i *)(v33 + v35);
        }
      }
      *v37 = _mm_loadu_si128((const __m128i *)(v33 + v35 - 24));
      v37[1].m128i_i64[0] = *(_QWORD *)(v33 + v35 - 8);
      v41 = *(_QWORD *)(a2 + 2904);
      v42 = *(_DWORD *)(a2 + 2912);
      v43 = 24LL * v42;
      if ( v36 != (__m128i *)(v41 + v43 - 24) )
      {
        memmove(&v36[1].m128i_u64[1], v36, v41 + v43 - 24 - (_QWORD)v36);
        v42 = *(_DWORD *)(a2 + 2912);
        v41 = *(_QWORD *)(a2 + 2904);
      }
      v44 = v42 + 1;
      *(_DWORD *)(a2 + 2912) = v44;
      if ( v36 <= v39 && (unsigned __int64)v39 < v41 + 24 * v44 )
        v40 = (__m128i *)((char *)v40 + 24);
      *v36 = _mm_loadu_si128(v40);
      v36[1].m128i_i32[0] = v40[1].m128i_i32[0];
    }
  }
  if ( src != v53 )
    free(src);
}
