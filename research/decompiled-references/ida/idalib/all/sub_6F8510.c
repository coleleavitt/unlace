__int64 __fastcall sub_6F8510(__int64 a1)
{
  _QWORD *v1; // r12
  char *v3; // rdi
  __int64 v4; // r13
  __int64 i; // rbp
  char *v6; // rbx
  void *v7; // rdi
  void *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // r14
  size_t v13; // rbp
  int v14; // eax
  unsigned __int64 v15; // rbx
  size_t v16; // rbx
  unsigned int v17; // eax
  __int64 v18; // r13
  __m128i v19; // xmm0
  void *v20; // rbp
  size_t v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  bool v24; // r10
  __int64 v25; // rcx
  __m128i v26; // xmm5
  __m128i v27; // xmm6
  __int64 v28; // rax
  const void *v30; // r12
  void *v31; // rax
  __int64 v32; // rax
  char *v33; // r12
  char v34; // r10
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rbx
  __int64 v39; // r15
  __int64 v40; // rbp
  __int64 v41; // rbx
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __int64 v44; // rcx
  __m128i v45; // xmm0
  void *v46; // rdi
  void *v47; // rdi
  const void *v49; // rbx
  void *v50; // rax
  __int64 v51; // [rsp+8h] [rbp-F0h]
  void *v52; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v53; // [rsp+18h] [rbp-E0h]
  __m128i v54; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v55; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+40h] [rbp-B8h]
  __int64 v57; // [rsp+48h] [rbp-B0h]
  char v58; // [rsp+57h] [rbp-A1h]
  __int64 v59; // [rsp+58h] [rbp-A0h]
  void *v60; // [rsp+60h] [rbp-98h]
  __int64 v61; // [rsp+68h] [rbp-90h]
  __int64 v62; // [rsp+70h] [rbp-88h]
  void *dest; // [rsp+78h] [rbp-80h] BYREF
  __int128 v64; // [rsp+80h] [rbp-78h]
  void *src; // [rsp+90h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-60h]
  bool v67; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v68; // [rsp+B8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 8);
  v68 = __readfsqword(0x28u);
  v3 = (char *)v1[1];
  if ( v3 )
  {
    v4 = v1[2];
    if ( v4 )
    {
      for ( i = 0; i != v4; ++i )
      {
        v6 = &v3[64 * i];
        v7 = *((void **)v6 + 4);
        if ( v7 )
        {
          *((_QWORD *)v6 + 5) = 0;
          qfree(v7);
        }
        v8 = *((void **)v6 + 1);
        if ( v8 )
        {
          *((_QWORD *)v6 + 2) = 0;
          qfree(v8);
        }
        v3 = (char *)v1[1];
      }
    }
    v1[2] = 0;
    qfree(v3);
    v1[1] = 0;
    v1[3] = 0;
  }
  v9 = *(_QWORD *)(a1 + 600);
  if ( v9 )
  {
    v10 = *(_QWORD *)(a1 + 592);
    v11 = *(_DWORD *)(a1 + 120) & 0x100;
    if ( v10 + (v9 << 6) == v10 )
      return 0;
    v56 = v10 + (v9 << 6);
    v12 = v10;
    v57 = 0;
    v58 = BYTE1(v11) ^ 1;
    v51 = a1;
    while ( 1 )
    {
      while ( (unsigned int)(*(_DWORD *)(v12 + 56) - 4) > 1 && !v58 )
      {
LABEL_14:
        v12 += 64;
        if ( v56 == v12 )
          return v57;
      }
      dest = nullptr;
      src = nullptr;
      v62 = -1;
      v67 = 0;
      v64 = 0;
      *(_OWORD *)n = 0;
      if ( (void **)v12 != &src )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 > 1 )
        {
          v49 = *(const void **)v12;
          v50 = (void *)qvector_reserve(&src, 0, *(_QWORD *)(v12 + 8), 1);
          n[0] = v13;
          src = v50;
          memmove(v50, v49, v13 - 1);
          *((char *)src + v13 - 1) = 0;
        }
      }
      if ( *(_QWORD *)(v51 + 568) )
      {
        v14 = *(_DWORD *)(v12 + 60);
        if ( v14 == 5373 || (unsigned int)(v14 - 5375) <= 2 )
          sub_6F81E0(v51, (__int64)&src);
      }
      if ( &dest == (void **)(v12 + 24) )
        goto LABEL_44;
      v15 = *(_QWORD *)(v12 + 32);
      if ( v15 > 1 )
        break;
      *(_QWORD *)&v64 = 0;
      v16 = 0;
LABEL_26:
      v17 = *(_DWORD *)(v12 + 48);
      v18 = *(_QWORD *)(v51 + 8);
      LODWORD(v62) = v17;
      v55 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      if ( (*(_BYTE *)(v18 + 7) & 0x40) != 0 && v17 != -1 )
        LODWORD(v62) = --v17;
      v19 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 52));
      HIDWORD(v62) = _mm_cvtsi128_si32(v19);
      v53 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v17), v19).m128i_u64[0];
      v67 = (unsigned int)(*(_DWORD *)(v12 + 56) - 4) > 1;
      v20 = nullptr;
      if ( v16 )
      {
        v20 = (void *)qalloc_or_throw(v16);
        memcpy(v20, dest, v16);
      }
      v21 = n[0];
      v52 = nullptr;
      v54 = _mm_unpacklo_epi64((__m128i)n[0], (__m128i)n[0]);
      if ( n[0] )
      {
        v52 = (void *)qalloc_or_throw(n[0]);
        memcpy(v52, src, v21);
      }
      v22 = *(_QWORD *)(v18 + 16);
      v23 = *(_QWORD *)(v18 + 24);
      v24 = v67;
      if ( v23 < v22 + 1 )
      {
        LOBYTE(v60) = v67;
        v32 = qvector_reserve(v18 + 8, 0, v22 + 1, 64);
        v33 = *(char **)(v18 + 8);
        v34 = (char)v60;
        v35 = v32;
        v36 = *(_QWORD *)(v18 + 24);
        *(_QWORD *)(v18 + 24) = v23;
        v37 = *(_QWORD *)(v18 + 16);
        v59 = v36;
        v38 = v37 - 1;
        if ( v38 >= 0 )
        {
          LOBYTE(v61) = v34;
          v39 = v35;
          v60 = v20;
          v40 = v38;
          v41 = v35;
          do
          {
            *(_QWORD *)v41 = *(_QWORD *)v33;
            v42 = *((_QWORD *)v33 + 1);
            *((_QWORD *)v33 + 1) = 0;
            v43 = _mm_loadu_si128((const __m128i *)v33 + 1);
            *(_QWORD *)(v41 + 8) = v42;
            *(__m128i *)(v41 + 16) = v43;
            v44 = *((_QWORD *)v33 + 4);
            v45 = _mm_loadu_si128((const __m128i *)(v33 + 40));
            *((_OWORD *)v33 + 1) = 0;
            *(_QWORD *)(v41 + 32) = v44;
            *(__m128i *)(v41 + 40) = v45;
            LOBYTE(v44) = v33[56];
            *((_QWORD *)v33 + 4) = 0;
            *((_QWORD *)v33 + 6) = 0;
            *(_BYTE *)(v41 + 56) = v44;
            v46 = *((void **)v33 + 4);
            if ( v46 )
            {
              *((_QWORD *)v33 + 5) = 0;
              qfree(v46);
            }
            v47 = *((void **)v33 + 1);
            if ( v47 )
            {
              *((_QWORD *)v33 + 2) = 0;
              qfree(v47);
            }
            v33 += 64;
            v41 += 64;
          }
          while ( v40-- != 0 );
          v20 = v60;
          v34 = v61;
          v35 = v39;
          v33 = *(char **)(v18 + 8);
        }
        v61 = v35;
        LOBYTE(v60) = v34;
        qfree(v33);
        v25 = v61;
        v24 = (char)v60;
        *(_QWORD *)(v18 + 24) = v59;
        v22 = *(_QWORD *)(v18 + 16);
        *(_QWORD *)(v18 + 8) = v25;
      }
      else
      {
        v25 = *(_QWORD *)(v18 + 8);
      }
      v26 = _mm_load_si128(&v55);
      v27 = _mm_load_si128(&v54);
      v28 = v25 + (v22 << 6);
      *(_QWORD *)v28 = v53;
      *(_QWORD *)(v28 + 8) = v20;
      *(_QWORD *)(v28 + 32) = v52;
      *(__m128i *)(v28 + 16) = v26;
      *(_BYTE *)(v28 + 56) = v24;
      *(__m128i *)(v28 + 40) = v27;
      ++*(_QWORD *)(v18 + 16);
      v57 += (unsigned int)(*(_DWORD *)(v12 + 56) - 4) < 2;
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( !dest )
        goto LABEL_14;
      *(_QWORD *)&v64 = 0;
      v12 += 64;
      qfree(dest);
      if ( v56 == v12 )
        return v57;
    }
    v30 = *(const void **)(v12 + 24);
    v31 = dest;
    if ( *((_QWORD *)&v64 + 1) < v15 )
    {
      v31 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v12 + 32), 1);
      dest = v31;
    }
    *(_QWORD *)&v64 = v15;
    memmove(v31, v30, v15 - 1);
    *((char *)dest + v15 - 1) = 0;
LABEL_44:
    v16 = v64;
    goto LABEL_26;
  }
  return v9;
}
