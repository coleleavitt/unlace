void __fastcall sub_1458A20(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char *v6; // rax
  __m128i *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rsi
  size_t v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // rdx
  __int64 **v15; // rdi
  __int64 v16; // r8
  unsigned int v17; // r15d
  unsigned int v18; // ecx
  char **v19; // rbx
  char *v20; // rdx
  _QWORD *v21; // rax
  __m128i *v22; // rdx
  __m128i *v23; // rdi
  __int64 v24; // rax
  void *v25; // rdi
  __m128i v26; // xmm0
  int v27; // r10d
  char **v28; // r11
  __int64 v29; // rcx
  __int64 v30; // r8
  char *v31; // rcx
  int v32; // ecx
  size_t v33; // rdx
  size_t v34; // rdx
  int v35; // edx
  int v36; // edi
  __int64 v37; // r8
  unsigned int v38; // esi
  int v39; // edx
  int v40; // esi
  __int64 v41; // rdi
  unsigned int v42; // r15d
  char **v43; // r8
  int v44; // r10d
  char **v45; // r9
  int v46; // r11d
  char *v47; // [rsp+8h] [rbp-B0h]
  char *v48; // [rsp+8h] [rbp-B0h]
  void *v49; // [rsp+10h] [rbp-A8h] BYREF
  size_t v50; // [rsp+18h] [rbp-A0h]
  __m128i v51; // [rsp+20h] [rbp-98h] BYREF
  void *v52; // [rsp+30h] [rbp-88h]
  __int64 v53; // [rsp+38h] [rbp-80h]
  __m128i v54; // [rsp+40h] [rbp-78h] BYREF
  int v55; // [rsp+50h] [rbp-68h]
  void *src; // [rsp+58h] [rbp-60h]
  size_t n; // [rsp+60h] [rbp-58h]
  __m128i v58[5]; // [rsp+68h] [rbp-50h] BYREF

  v51.m128i_i8[0] = 0;
  v50 = 0;
  v49 = &v51;
  v6 = sub_1450260(a2, (__int64)a4, (__int64)"#pragma clang deprecated", (__int64)&v49);
  if ( !v6 )
    goto LABEL_16;
  if ( v6[4] >= 0 )
    *(_QWORD *)v6 |= 0x8080000000uLL;
  v7 = (__m128i *)v49;
  v8 = (__int64)&v51;
  v9 = *a4;
  v10 = (__int64)&v54;
  if ( v49 == &v51 )
  {
    v26 = _mm_load_si128(&v51);
    v12 = v50;
    v51.m128i_i8[0] = 0;
    v55 = v9;
    v50 = 0;
    src = v58;
    v54 = v26;
  }
  else
  {
    v11 = v51.m128i_i64[0];
    v49 = &v51;
    v8 = (__int64)v58;
    v12 = v50;
    v51.m128i_i8[0] = 0;
    v54.m128i_i64[0] = v11;
    v50 = 0;
    v55 = v9;
    src = v58;
    if ( v7 != &v54 )
    {
      src = v7;
      v58[0].m128i_i64[0] = v11;
      goto LABEL_7;
    }
  }
  v58[0] = _mm_load_si128(&v54);
LABEL_7:
  v13 = *(_DWORD *)(a2 + 2256);
  v14 = (__int64)&v54;
  n = v12;
  v15 = (__int64 **)(a2 + 2240);
  v52 = &v54;
  v53 = 0;
  v54.m128i_i8[0] = 0;
  if ( !v13 )
    goto LABEL_41;
  v10 = v13 - 1;
  v16 = *(_QWORD *)(a2 + 2240);
  v17 = ((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4);
  v18 = v10 & v17;
  v19 = (char **)(v16 + 112LL * ((unsigned int)v10 & v17));
  v20 = *v19;
  if ( v6 != *v19 )
  {
    v27 = 1;
    v28 = nullptr;
    if ( v20 != (char *)-4096LL )
    {
      while ( 1 )
      {
        if ( v20 == (char *)-8192LL && !v28 )
          v28 = v19;
        v18 = v10 & (v27 + v18);
        v19 = (char **)(v16 + 112LL * v18);
        v20 = *v19;
        if ( v6 == *v19 )
          goto LABEL_9;
        if ( v20 == (char *)-4096LL )
          break;
        ++v27;
      }
      if ( v28 )
        v19 = v28;
    }
    v14 = (unsigned int)(*(_DWORD *)(a2 + 2248) + 1);
    v8 = 3 * v13;
    v9 = (unsigned int)(4 * v14);
    if ( (unsigned int)v9 < (unsigned int)v8 )
    {
      v29 = v13 - *(_DWORD *)(a2 + 2252) - (unsigned int)v14;
      v30 = v13 >> 3;
      if ( (unsigned int)v29 > (unsigned int)v30 )
      {
LABEL_24:
        v31 = *v19;
        goto LABEL_25;
      }
      v48 = v6;
      sub_1457E90(v15, v13, v14, v29, v30, v10);
      v39 = *(_DWORD *)(a2 + 2256);
      if ( v39 )
      {
        v40 = v39 - 1;
        v41 = *(_QWORD *)(a2 + 2240);
        v42 = (v39 - 1) & v17;
        LODWORD(v14) = *(_DWORD *)(a2 + 2248) + 1;
        v6 = v48;
        v19 = (char **)(v41 + 112LL * v42);
        v31 = *v19;
        if ( v48 != *v19 )
        {
          if ( v31 != (char *)-4096LL )
          {
            v43 = (char **)(v41 + 112LL * v42);
            v44 = 1;
            v19 = nullptr;
            while ( 1 )
            {
              if ( !v19 && v31 == (char *)-8192LL )
                v19 = v43;
              v42 = v40 & (v44 + v42);
              v43 = (char **)(v41 + 112LL * v42);
              v31 = *v43;
              if ( v48 == *v43 )
              {
                v19 = (char **)(v41 + 112LL * v42);
                goto LABEL_25;
              }
              if ( v31 == (char *)-4096LL )
                break;
              ++v44;
            }
            if ( v19 )
              goto LABEL_24;
            v19 = (char **)(v41 + 112LL * v42);
          }
LABEL_44:
          *(_DWORD *)(a2 + 2248) = v14;
LABEL_27:
          *v19 = v6;
          memset(v19 + 1, 0, 0x68u);
          v22 = (__m128i *)(v19 + 4);
          v21 = v19 + 1;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      goto LABEL_78;
    }
LABEL_41:
    v47 = v6;
    sub_1457E90(v15, 2 * v13, v14, v8, v9, v10);
    v35 = *(_DWORD *)(a2 + 2256);
    if ( v35 )
    {
      v6 = v47;
      v36 = v35 - 1;
      v37 = *(_QWORD *)(a2 + 2240);
      v38 = (v35 - 1) & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4));
      v19 = (char **)(v37 + 112LL * v38);
      LODWORD(v14) = *(_DWORD *)(a2 + 2248) + 1;
      v31 = *v19;
      if ( v47 != *v19 )
      {
        if ( v31 != (char *)-4096LL )
        {
          v45 = (char **)(v37 + 112LL * (v36 & (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4))));
          v46 = 1;
          v19 = nullptr;
          while ( 1 )
          {
            if ( !v19 && v31 == (char *)-8192LL )
              v19 = v45;
            v38 = v36 & (v46 + v38);
            v45 = (char **)(v37 + 112LL * v38);
            v31 = *v45;
            if ( v47 == *v45 )
            {
              v19 = (char **)(v37 + 112LL * v38);
              goto LABEL_25;
            }
            if ( v31 == (char *)-4096LL )
              break;
            ++v46;
          }
          if ( v19 )
            goto LABEL_24;
          v19 = (char **)(v37 + 112LL * v38);
        }
        goto LABEL_44;
      }
LABEL_25:
      *(_DWORD *)(a2 + 2248) = v14;
      if ( v31 != (char *)-4096LL )
        --*(_DWORD *)(a2 + 2252);
      goto LABEL_27;
    }
LABEL_78:
    ++*(_DWORD *)(a2 + 2248);
    BUG();
  }
LABEL_9:
  v21 = v19 + 1;
  v22 = (__m128i *)(v19 + 4);
  if ( !*((_BYTE *)v19 + 48) )
  {
LABEL_28:
    v32 = v55;
    v21[1] = v22;
    *(_DWORD *)v21 = v32;
    if ( src == v58 )
    {
      *(__m128i *)(v21 + 3) = _mm_loadu_si128(v58);
    }
    else
    {
      v21[1] = src;
      v21[3] = v58[0].m128i_i64[0];
    }
    v33 = n;
    *((_BYTE *)v21 + 40) = 1;
    v21[2] = v33;
LABEL_31:
    v25 = v52;
    if ( v52 == &v54 )
      goto LABEL_16;
    goto LABEL_32;
  }
  v23 = (__m128i *)v19[2];
  *((_DWORD *)v19 + 2) = v55;
  if ( src == v58 )
  {
    v34 = n;
    if ( n )
    {
      if ( n == 1 )
        v23->m128i_i8[0] = v58[0].m128i_i8[0];
      else
        memcpy(v23, src, n);
      v34 = n;
      v23 = (__m128i *)v19[2];
    }
    v19[3] = (char *)v34;
    v23->m128i_i8[v34] = 0;
    v23 = (__m128i *)src;
  }
  else
  {
    if ( v22 == v23 )
    {
      v19[2] = (char *)src;
      v19[3] = (char *)n;
      v19[4] = (char *)v58[0].m128i_i64[0];
    }
    else
    {
      v19[2] = (char *)src;
      v24 = (__int64)v19[4];
      v19[3] = (char *)n;
      v19[4] = (char *)v58[0].m128i_i64[0];
      if ( v23 )
      {
        src = v23;
        v58[0].m128i_i64[0] = v24;
        goto LABEL_14;
      }
    }
    v23 = v58;
    src = v58;
  }
LABEL_14:
  n = 0;
  v23->m128i_i8[0] = 0;
  if ( src == v58 )
    goto LABEL_31;
  operator delete(src);
  v25 = v52;
  if ( v52 == &v54 )
    goto LABEL_16;
LABEL_32:
  operator delete(v25);
LABEL_16:
  if ( v49 != &v51 )
    operator delete(v49);
}
