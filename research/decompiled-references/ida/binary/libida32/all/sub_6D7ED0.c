__int64 __fastcall sub_6D7ED0(__int64 a1)
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
  const char *v17; // rsi
  unsigned int v18; // eax
  __int64 v19; // r13
  __m128i v20; // xmm0
  void *v21; // rbp
  size_t v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // rbx
  bool v25; // r10
  __int64 v26; // rcx
  __m128i v27; // xmm5
  __m128i v28; // xmm6
  __int64 v29; // rax
  const void *v31; // r12
  void *v32; // rax
  void *v33; // rax
  __int64 v34; // rax
  char *v35; // r12
  char v36; // r10
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbx
  __int64 v40; // rbx
  __int64 v41; // r15
  __int64 v42; // rbp
  __int64 v43; // rbx
  __int64 v44; // rcx
  __m128i v45; // xmm0
  __int64 v46; // rcx
  __m128i v47; // xmm0
  void *v48; // rdi
  void *v49; // rdi
  const void *v51; // rbx
  void *v52; // rax
  __int64 v53; // [rsp+8h] [rbp-F0h]
  void *v54; // [rsp+10h] [rbp-E8h]
  unsigned __int64 v55; // [rsp+18h] [rbp-E0h]
  __m128i v56; // [rsp+20h] [rbp-D8h] BYREF
  __m128i v57; // [rsp+30h] [rbp-C8h] BYREF
  __int64 v58; // [rsp+40h] [rbp-B8h]
  __int64 v59; // [rsp+48h] [rbp-B0h]
  char v60; // [rsp+57h] [rbp-A1h]
  __int64 v61; // [rsp+58h] [rbp-A0h]
  void *v62; // [rsp+60h] [rbp-98h]
  __int64 v63; // [rsp+68h] [rbp-90h]
  __int64 v64; // [rsp+70h] [rbp-88h]
  void *dest; // [rsp+78h] [rbp-80h] BYREF
  __int128 v66; // [rsp+80h] [rbp-78h]
  void *src; // [rsp+90h] [rbp-68h] BYREF
  size_t n[2]; // [rsp+98h] [rbp-60h]
  bool v69; // [rsp+A8h] [rbp-50h]
  unsigned __int64 v70; // [rsp+B8h] [rbp-40h]

  v1 = *(_QWORD **)(a1 + 8);
  v70 = __readfsqword(0x28u);
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
    v58 = v10 + (v9 << 6);
    v12 = v10;
    v59 = 0;
    v60 = BYTE1(v11) ^ 1;
    v53 = a1;
    while ( 1 )
    {
      while ( (unsigned int)(*(_DWORD *)(v12 + 56) - 4) > 1 && !v60 )
      {
LABEL_14:
        v12 += 64;
        if ( v58 == v12 )
          return v59;
      }
      dest = nullptr;
      src = nullptr;
      v64 = -1;
      v69 = 0;
      v66 = 0;
      *(_OWORD *)n = 0;
      if ( (void **)v12 != &src )
      {
        v13 = *(_QWORD *)(v12 + 8);
        if ( v13 > 1 )
        {
          v51 = *(const void **)v12;
          v52 = (void *)qvector_reserve(&src, 0, *(_QWORD *)(v12 + 8), 1);
          n[0] = v13;
          src = v52;
          memmove(v52, v51, v13 - 1);
          *((char *)src + v13 - 1) = 0;
        }
      }
      if ( *(_QWORD *)(v53 + 568) )
      {
        v14 = *(_DWORD *)(v12 + 60);
        if ( v14 == 5373 || (unsigned int)(v14 - 5375) <= 2 )
          sub_6D7BA0(v53, (__int64)&src);
      }
      if ( &dest == (void **)(v12 + 24) )
        goto LABEL_44;
      v15 = *(_QWORD *)(v12 + 32);
      if ( v15 > 1 )
        break;
      *(_QWORD *)&v66 = 0;
      v16 = 0;
LABEL_26:
      v17 = (const char *)v53;
      v18 = *(_DWORD *)(v12 + 48);
      v19 = *(_QWORD *)(v53 + 8);
      LODWORD(v64) = v18;
      v57 = _mm_unpacklo_epi64((__m128i)v16, (__m128i)v16);
      if ( (*(_BYTE *)(v19 + 7) & 0x40) != 0 && v18 != -1 )
        LODWORD(v64) = --v18;
      v20 = _mm_cvtsi32_si128(*(_DWORD *)(v12 + 52));
      HIDWORD(v64) = _mm_cvtsi128_si32(v20);
      v55 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v18), v20).m128i_u64[0];
      v69 = (unsigned int)(*(_DWORD *)(v12 + 56) - 4) > 1;
      v21 = nullptr;
      if ( v16 )
      {
        v33 = (void *)qalloc_or_throw(v16, (const char *)v53);
        v17 = (const char *)dest;
        v21 = v33;
        memcpy(v33, dest, v16);
      }
      v22 = n[0];
      v54 = nullptr;
      v56 = _mm_unpacklo_epi64((__m128i)n[0], (__m128i)n[0]);
      if ( n[0] )
      {
        v54 = (void *)qalloc_or_throw(n[0], v17);
        memcpy(v54, src, v22);
      }
      v23 = *(_QWORD *)(v19 + 16);
      v24 = *(_QWORD *)(v19 + 24);
      v25 = v69;
      if ( v24 < v23 + 1 )
      {
        LOBYTE(v62) = v69;
        v34 = qvector_reserve(v19 + 8, 0, v23 + 1, 64);
        v35 = *(char **)(v19 + 8);
        v36 = (char)v62;
        v37 = v34;
        v38 = *(_QWORD *)(v19 + 24);
        *(_QWORD *)(v19 + 24) = v24;
        v39 = *(_QWORD *)(v19 + 16);
        v61 = v38;
        v40 = v39 - 1;
        if ( v40 >= 0 )
        {
          LOBYTE(v63) = v36;
          v41 = v37;
          v62 = v21;
          v42 = v40;
          v43 = v37;
          do
          {
            *(_QWORD *)v43 = *(_QWORD *)v35;
            v44 = *((_QWORD *)v35 + 1);
            *((_QWORD *)v35 + 1) = 0;
            v45 = _mm_loadu_si128((const __m128i *)v35 + 1);
            *(_QWORD *)(v43 + 8) = v44;
            *(__m128i *)(v43 + 16) = v45;
            v46 = *((_QWORD *)v35 + 4);
            v47 = _mm_loadu_si128((const __m128i *)(v35 + 40));
            *((_OWORD *)v35 + 1) = 0;
            *(_QWORD *)(v43 + 32) = v46;
            *(__m128i *)(v43 + 40) = v47;
            LOBYTE(v46) = v35[56];
            *((_QWORD *)v35 + 4) = 0;
            *((_QWORD *)v35 + 6) = 0;
            *(_BYTE *)(v43 + 56) = v46;
            v48 = *((void **)v35 + 4);
            if ( v48 )
            {
              *((_QWORD *)v35 + 5) = 0;
              qfree(v48);
            }
            v49 = *((void **)v35 + 1);
            if ( v49 )
            {
              *((_QWORD *)v35 + 2) = 0;
              qfree(v49);
            }
            v35 += 64;
            v43 += 64;
          }
          while ( v42-- != 0 );
          v21 = v62;
          v36 = v63;
          v37 = v41;
          v35 = *(char **)(v19 + 8);
        }
        v63 = v37;
        LOBYTE(v62) = v36;
        qfree(v35);
        v26 = v63;
        v25 = (char)v62;
        *(_QWORD *)(v19 + 24) = v61;
        v23 = *(_QWORD *)(v19 + 16);
        *(_QWORD *)(v19 + 8) = v26;
      }
      else
      {
        v26 = *(_QWORD *)(v19 + 8);
      }
      v27 = _mm_load_si128(&v57);
      v28 = _mm_load_si128(&v56);
      v29 = v26 + (v23 << 6);
      *(_QWORD *)v29 = v55;
      *(_QWORD *)(v29 + 8) = v21;
      *(_QWORD *)(v29 + 32) = v54;
      *(__m128i *)(v29 + 16) = v27;
      *(_BYTE *)(v29 + 56) = v25;
      *(__m128i *)(v29 + 40) = v28;
      ++*(_QWORD *)(v19 + 16);
      v59 += (unsigned int)(*(_DWORD *)(v12 + 56) - 4) < 2;
      if ( src )
      {
        n[0] = 0;
        qfree(src);
      }
      if ( !dest )
        goto LABEL_14;
      *(_QWORD *)&v66 = 0;
      v12 += 64;
      qfree(dest);
      if ( v58 == v12 )
        return v59;
    }
    v31 = *(const void **)(v12 + 24);
    v32 = dest;
    if ( *((_QWORD *)&v66 + 1) < v15 )
    {
      v32 = (void *)qvector_reserve(&dest, dest, *(_QWORD *)(v12 + 32), 1);
      dest = v32;
    }
    *(_QWORD *)&v66 = v15;
    memmove(v32, v31, v15 - 1);
    *((char *)dest + v15 - 1) = 0;
LABEL_44:
    v16 = v66;
    goto LABEL_26;
  }
  return v9;
}

