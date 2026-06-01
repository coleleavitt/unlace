unsigned __int64 __fastcall sub_5E6830(__int64 a1)
{
  unsigned __int64 v1; // rbx
  int v2; // r13d
  __int16 v4; // ax
  __int64 v5; // rax
  __m128i v6; // xmm0
  unsigned __int64 v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rbp
  __m128i v10; // xmm0
  __int64 v11; // rax
  char v12; // dl
  __int16 v13; // cx
  void *v14; // rdi
  __m128i v15; // xmm0
  __int64 v16; // rcx
  __int64 v18; // r15
  __int64 v19; // rax
  char *v20; // r12
  __int64 v21; // r15
  __int64 v22; // rbx
  __int64 v23; // rsi
  __m128i v24; // xmm0
  __m128i v25; // xmm0
  __int64 v26; // rsi
  void *v27; // rdi
  __int64 v29; // rax
  const void *v30; // rbp
  __int16 v31; // ax
  __m128i v32; // xmm0
  __int64 v33; // rax
  __m128i n; // [rsp+0h] [rbp-100h] BYREF
  __int16 v35; // [rsp+16h] [rbp-EAh]
  __int64 v36; // [rsp+18h] [rbp-E8h]
  __int64 v37; // [rsp+20h] [rbp-E0h]
  void *src; // [rsp+28h] [rbp-D8h] BYREF
  __int128 v39; // [rsp+30h] [rbp-D0h]
  __int16 v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  char v42; // [rsp+50h] [rbp-B0h]
  __m128i v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-98h]
  char v45; // [rsp+A0h] [rbp-60h]
  __m128i v46; // [rsp+A8h] [rbp-58h] BYREF
  unsigned __int64 v47; // [rsp+C0h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 48);
  v2 = *(_DWORD *)(a1 + 488);
  v47 = __readfsqword(0x28u);
  v39 = 0;
  src = nullptr;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  if ( v1 <= 1 )
  {
    v4 = *(_WORD *)(a1 + 64);
    v44 = v2;
    n.m128i_i64[0] = 0;
    v35 = v4;
    v40 = v4;
    v5 = *(_QWORD *)(a1 + 72);
    v43 = _mm_loadu_si128((const __m128i *)(a1 + 88));
    v36 = v5;
    v41 = v5;
    v42 = *(_BYTE *)(a1 + 80);
LABEL_3:
    n.m128i_i64[1] = 0;
    goto LABEL_4;
  }
  v30 = *(const void **)(a1 + 40);
  src = (void *)qvector_reserve(&src, 0, v1, 1);
  *(_QWORD *)&v39 = v1;
  memmove(src, v30, v1 - 1);
  *((char *)src + v1 - 1) = 0;
  v31 = *(_WORD *)(a1 + 64);
  v32 = _mm_loadu_si128((const __m128i *)(a1 + 88));
  v44 = v2;
  v35 = v31;
  v40 = v31;
  v33 = *(_QWORD *)(a1 + 72);
  n.m128i_i64[0] = v39;
  v36 = v33;
  v41 = v33;
  LOBYTE(v33) = *(_BYTE *)(a1 + 80);
  v43 = v32;
  v42 = v33;
  if ( !(_QWORD)v39 )
    goto LABEL_3;
  n.m128i_i64[1] = qalloc_or_throw(n.m128i_i64[0]);
  memcpy((void *)n.m128i_i64[1], src, n.m128i_u64[0]);
  v2 = v44;
  v35 = v40;
  v36 = v41;
LABEL_4:
  v6 = _mm_load_si128(&v43);
  v7 = *(_QWORD *)(a1 + 480);
  v45 = v42;
  v8 = *(_QWORD *)(a1 + 472);
  v46 = v6;
  if ( v7 < v8 + 1 )
  {
    v9 = qvector_reserve(a1 + 464, 0, v8 + 1, 72);
    v18 = *(_QWORD *)(a1 + 472);
    v19 = *(_QWORD *)(a1 + 480);
    *(_QWORD *)(a1 + 480) = v7;
    v20 = *(char **)(a1 + 464);
    v37 = v19;
    v21 = v18 - 1;
    if ( v21 >= 0 )
    {
      v22 = v9;
      do
      {
        v23 = *(_QWORD *)v20;
        v24 = _mm_loadu_si128((const __m128i *)(v20 + 8));
        *(_QWORD *)v20 = 0;
        *((_QWORD *)v20 + 2) = 0;
        *(_QWORD *)v22 = v23;
        *(__m128i *)(v22 + 8) = v24;
        v25 = _mm_loadu_si128((const __m128i *)v20 + 3);
        *(_WORD *)(v22 + 24) = *((_WORD *)v20 + 12);
        v26 = *((_QWORD *)v20 + 4);
        *(__m128i *)(v22 + 48) = v25;
        *(_QWORD *)(v22 + 32) = v26;
        *(_BYTE *)(v22 + 40) = v20[40];
        *(_DWORD *)(v22 + 64) = *((_DWORD *)v20 + 16);
        v27 = *(void **)v20;
        if ( *(_QWORD *)v20 )
        {
          *((_QWORD *)v20 + 1) = 0;
          qfree(v27);
        }
        v20 += 72;
        v22 += 72;
      }
      while ( v21-- != 0 );
      v20 = *(char **)(a1 + 464);
    }
    qfree(v20);
    v29 = v37;
    *(_QWORD *)(a1 + 464) = v9;
    *(_QWORD *)(a1 + 480) = v29;
    v8 = *(_QWORD *)(a1 + 472);
  }
  else
  {
    v9 = *(_QWORD *)(a1 + 464);
  }
  v10 = _mm_loadl_epi64(&n);
  v11 = v9 + 72 * v8;
  v12 = v45;
  *(_QWORD *)v11 = n.m128i_i64[1];
  v13 = v35;
  *(__m128i *)(v11 + 8) = _mm_unpacklo_epi64(v10, v10);
  v14 = src;
  v15 = _mm_load_si128(&v46);
  *(_WORD *)(v11 + 24) = v13;
  v16 = v36;
  *(_BYTE *)(v11 + 40) = v12;
  *(_QWORD *)(v11 + 32) = v16;
  *(_DWORD *)(v11 + 64) = v2;
  *(__m128i *)(v11 + 48) = v15;
  ++*(_QWORD *)(a1 + 472);
  if ( v14 )
  {
    *(_QWORD *)&v39 = 0;
    qfree(v14);
  }
  return v47 - __readfsqword(0x28u);
}
