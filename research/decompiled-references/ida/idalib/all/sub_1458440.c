void __fastcall sub_1458440(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  size_t v11; // rdx
  __int64 **v12; // rdi
  unsigned int v13; // esi
  __int64 v14; // r10
  unsigned int v15; // r15d
  _QWORD *v16; // rbx
  char *v17; // r8
  _QWORD *v18; // rax
  __m128i *v19; // rsi
  __m128i *v20; // rdi
  __int64 v21; // rsi
  void *v22; // rdi
  __m128i v23; // xmm1
  __int64 v24; // rcx
  __int64 v25; // r8
  char *v26; // rcx
  int v27; // edi
  int v28; // edx
  int v29; // edi
  __int64 v30; // r8
  unsigned int v31; // esi
  int v32; // edx
  int v33; // esi
  __int64 v34; // rdi
  unsigned int v35; // r15d
  _QWORD *v36; // r8
  int v37; // r10d
  int v38; // r9d
  unsigned int v39; // r10d
  _QWORD *v40; // r9
  int v41; // r11d
  int v42; // r10d
  unsigned int v43; // r11d
  __int64 v44; // [rsp+0h] [rbp-B8h] BYREF
  int v45; // [rsp+8h] [rbp-B0h]
  unsigned int v46; // [rsp+Ch] [rbp-ACh]
  void *src; // [rsp+10h] [rbp-A8h] BYREF
  size_t n; // [rsp+18h] [rbp-A0h]
  __m128i v49; // [rsp+20h] [rbp-98h] BYREF
  void *v50; // [rsp+30h] [rbp-88h]
  __int64 v51; // [rsp+38h] [rbp-80h]
  __m128i v52; // [rsp+40h] [rbp-78h] BYREF
  int v53; // [rsp+50h] [rbp-68h]
  void *v54; // [rsp+58h] [rbp-60h]
  size_t v55; // [rsp+60h] [rbp-58h]
  __m128i v56[5]; // [rsp+68h] [rbp-50h] BYREF

  v49.m128i_i8[0] = 0;
  n = 0;
  src = &v49;
  v6 = sub_1450260(a2, (__int64)a4, (__int64)"#pragma clang restrict_expansion", (__int64)&src);
  if ( !v6 )
    goto LABEL_16;
  if ( (v6[5] & 1) == 0 )
    *(_QWORD *)v6 |= 0x10080000000uLL;
  v7 = (__int64)src;
  v8 = *a4;
  v9 = (__int64)&v52;
  if ( src == &v49 )
  {
    v23 = _mm_load_si128(&v49);
    v11 = n;
    v49.m128i_i8[0] = 0;
    v53 = v8;
    n = 0;
    v54 = v56;
    v52 = v23;
  }
  else
  {
    v10 = v49.m128i_i64[0];
    src = &v49;
    v11 = n;
    v49.m128i_i8[0] = 0;
    v52.m128i_i64[0] = v10;
    n = 0;
    v53 = v8;
    v54 = v56;
    if ( (__m128i *)v7 != &v52 )
    {
      v54 = (void *)v7;
      v56[0].m128i_i64[0] = v10;
      goto LABEL_7;
    }
  }
  v7 = (__int64)v56;
  v56[0] = _mm_load_si128(&v52);
LABEL_7:
  v55 = v11;
  v12 = (__int64 **)(a2 + 2240);
  v50 = &v52;
  v13 = *(_DWORD *)(a2 + 2256);
  v51 = 0;
  v52.m128i_i8[0] = 0;
  if ( !v13 )
    goto LABEL_41;
  v14 = *(_QWORD *)(a2 + 2240);
  v15 = ((unsigned int)v6 >> 9) ^ ((unsigned int)v6 >> 4);
  v9 = (v13 - 1) & v15;
  v16 = (_QWORD *)(v14 + 112 * v9);
  v17 = (char *)*v16;
  if ( v6 != (char *)*v16 )
  {
    if ( v17 != (char *)-4096LL )
    {
      v45 = 1;
      v44 = 0;
      v46 = v13;
      while ( 1 )
      {
        if ( v17 == (char *)-8192LL )
        {
          if ( v44 )
            v16 = (_QWORD *)v44;
          v44 = (__int64)v16;
        }
        v9 = (v13 - 1) & (v45 + (_DWORD)v9);
        v16 = (_QWORD *)(v14 + 112LL * (unsigned int)v9);
        v17 = (char *)*v16;
        if ( v6 == (char *)*v16 )
          goto LABEL_9;
        if ( v17 == (char *)-4096LL )
          break;
        ++v45;
      }
      v13 = v46;
      if ( v44 )
        v16 = (_QWORD *)v44;
    }
    v7 = 3 * v13;
    v11 = (unsigned int)(*(_DWORD *)(a2 + 2248) + 1);
    v8 = (unsigned int)(4 * v11);
    if ( (unsigned int)v8 < (unsigned int)v7 )
    {
      v24 = v13 - *(_DWORD *)(a2 + 2252) - (unsigned int)v11;
      v25 = v13 >> 3;
      if ( (unsigned int)v24 > (unsigned int)v25 )
      {
LABEL_24:
        v26 = (char *)*v16;
        goto LABEL_25;
      }
      v44 = (__int64)v6;
      sub_1457E90(v12, v13, v11, v24, v25, v9);
      v32 = *(_DWORD *)(a2 + 2256);
      if ( v32 )
      {
        v33 = v32 - 1;
        v34 = *(_QWORD *)(a2 + 2240);
        v35 = (v32 - 1) & v15;
        LODWORD(v11) = *(_DWORD *)(a2 + 2248) + 1;
        v6 = (char *)v44;
        v16 = (_QWORD *)(v34 + 112LL * v35);
        v26 = (char *)*v16;
        if ( v44 != *v16 )
        {
          if ( v26 != (char *)-4096LL )
          {
            v36 = (_QWORD *)(v34 + 112LL * v35);
            v37 = 1;
            v16 = nullptr;
            while ( 1 )
            {
              if ( !v16 && v26 == (char *)-8192LL )
                v16 = v36;
              v38 = v37 + 1;
              v39 = v33 & (v35 + v37);
              v35 = v39;
              v36 = (_QWORD *)(v34 + 112LL * v39);
              v26 = (char *)*v36;
              if ( v44 == *v36 )
              {
                v16 = (_QWORD *)(v34 + 112LL * v39);
                goto LABEL_25;
              }
              if ( v26 == (char *)-4096LL )
                break;
              v37 = v38;
            }
            if ( v16 )
              goto LABEL_24;
            v16 = (_QWORD *)(v34 + 112LL * v39);
          }
LABEL_44:
          *(_DWORD *)(a2 + 2248) = v11;
LABEL_27:
          *v16 = v6;
          memset(v16 + 1, 0, 0x68u);
          v19 = (__m128i *)(v16 + 10);
          v18 = v16 + 1;
          v11 = v55;
          v7 = (__int64)v54;
          goto LABEL_28;
        }
        goto LABEL_25;
      }
      goto LABEL_80;
    }
LABEL_41:
    v44 = (__int64)v6;
    sub_1457E90(v12, 2 * v13, v11, v7, v8, v9);
    v28 = *(_DWORD *)(a2 + 2256);
    if ( v28 )
    {
      v6 = (char *)v44;
      v29 = v28 - 1;
      v30 = *(_QWORD *)(a2 + 2240);
      v31 = (v28 - 1) & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4));
      v16 = (_QWORD *)(v30 + 112LL * v31);
      LODWORD(v11) = *(_DWORD *)(a2 + 2248) + 1;
      v26 = (char *)*v16;
      if ( v44 != *v16 )
      {
        if ( v26 != (char *)-4096LL )
        {
          v40 = (_QWORD *)(v30 + 112LL * (v29 & (((unsigned int)v44 >> 9) ^ ((unsigned int)v44 >> 4))));
          v41 = 1;
          v16 = nullptr;
          while ( 1 )
          {
            if ( !v16 && v26 == (char *)-8192LL )
              v16 = v40;
            v42 = v41 + 1;
            v43 = v31 + v41;
            v31 = v29 & v43;
            v40 = (_QWORD *)(v30 + 112LL * (v29 & v43));
            v26 = (char *)*v40;
            if ( v44 == *v40 )
            {
              v16 = (_QWORD *)(v30 + 112LL * (v29 & v43));
              goto LABEL_25;
            }
            if ( v26 == (char *)-4096LL )
              break;
            v41 = v42;
          }
          if ( v16 )
            goto LABEL_24;
          v16 = (_QWORD *)(v30 + 112LL * (v29 & v43));
        }
        goto LABEL_44;
      }
LABEL_25:
      *(_DWORD *)(a2 + 2248) = v11;
      if ( v26 != (char *)-4096LL )
        --*(_DWORD *)(a2 + 2252);
      goto LABEL_27;
    }
LABEL_80:
    ++*(_DWORD *)(a2 + 2248);
    BUG();
  }
LABEL_9:
  v18 = v16 + 1;
  v19 = (__m128i *)(v16 + 10);
  if ( !*((_BYTE *)v16 + 96) )
  {
LABEL_28:
    v27 = v53;
    v18[7] = v19;
    *((_DWORD *)v18 + 12) = v27;
    if ( (__m128i *)v7 == v56 )
    {
      *(__m128i *)(v18 + 9) = _mm_loadu_si128(v56);
    }
    else
    {
      v18[7] = v7;
      v18[9] = v56[0].m128i_i64[0];
    }
    v18[8] = v11;
    *((_BYTE *)v18 + 88) = 1;
LABEL_31:
    v22 = v50;
    if ( v50 == &v52 )
      goto LABEL_16;
    goto LABEL_32;
  }
  v20 = (__m128i *)v16[8];
  *((_DWORD *)v16 + 14) = v53;
  if ( (__m128i *)v7 == v56 )
  {
    if ( v11 )
    {
      if ( v11 == 1 )
        v20->m128i_i8[0] = v56[0].m128i_i8[0];
      else
        memcpy(v20, (const void *)v7, v11);
      v11 = v55;
      v20 = (__m128i *)v16[8];
    }
    v16[9] = v11;
    v20->m128i_i8[v11] = 0;
    v20 = (__m128i *)v54;
  }
  else
  {
    if ( v19 == v20 )
    {
      v44 = v56[0].m128i_i64[0];
      v16[8] = v7;
      *(__m128 *)(v16 + 9) = _mm_loadh_ps((const double *)&v44);
    }
    else
    {
      v44 = v56[0].m128i_i64[0];
      v21 = v16[10];
      v16[8] = v7;
      *(__m128 *)(v16 + 9) = _mm_loadh_ps((const double *)&v44);
      if ( v20 )
      {
        v54 = v20;
        v56[0].m128i_i64[0] = v21;
        goto LABEL_14;
      }
    }
    v20 = v56;
    v54 = v56;
  }
LABEL_14:
  v55 = 0;
  v20->m128i_i8[0] = 0;
  if ( v54 == v56 )
    goto LABEL_31;
  operator delete(v54);
  v22 = v50;
  if ( v50 == &v52 )
    goto LABEL_16;
LABEL_32:
  operator delete(v22);
LABEL_16:
  if ( src != &v49 )
    operator delete(src);
}
