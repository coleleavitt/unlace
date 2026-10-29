void __fastcall sub_960AE0(char *a1, char *a2, __int64 **a3, double a4, double a5, __m128 a6)
{
  __m128i *v6; // r15
  __m128 v7; // xmm1
  int v8; // esi
  int v9; // edx
  int v10; // eax
  int v11; // edx
  int v12; // edi
  __int64 v13; // r12
  __int64 *v14; // rbp
  unsigned int v15; // ebx
  __int64 v16; // r12
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 *v19; // r8
  __int64 *i; // rax
  __int64 v21; // rdx
  unsigned int v22; // r13d
  __int64 v23; // r10
  __int64 v24; // rbx
  __int64 v25; // r14
  int v26; // esi
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // esi
  __int64 v31; // rax
  __int64 *v32; // r9
  __int64 *j; // rax
  __int64 v34; // rdx
  _QWORD *v35; // rsi
  __m128i *v36; // rax
  unsigned int v37; // eax
  __m128i *v38; // r10
  __int64 *v39; // rax
  unsigned __int64 v40; // rdx
  unsigned int v41; // r14d
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // r15
  int v45; // esi
  int v46; // eax
  int v47; // edx
  int v48; // eax
  int v49; // esi
  __int64 v50; // rax
  __int64 *v51; // r9
  __int64 *k; // rax
  __int64 v53; // rdx
  __m128i v54; // xmm0
  __int64 v55; // rax
  __int64 *v56; // rax
  unsigned __int64 v57; // rdx
  __int64 *v58; // rax
  unsigned __int64 v59; // rdx
  __int64 *v60; // rax
  unsigned __int64 v61; // rdx
  unsigned int v62; // eax
  __m128i *v63; // rax
  __int64 *v64; // rax
  __int64 v65; // rdx
  __m128i v66; // [rsp+0h] [rbp-88h] BYREF
  unsigned int v67; // [rsp+14h] [rbp-74h]
  __int64 v68; // [rsp+18h] [rbp-70h]
  __m128i *v69; // [rsp+20h] [rbp-68h]
  __int64 v70; // [rsp+28h] [rbp-60h]
  void *src; // [rsp+30h] [rbp-58h]
  unsigned __int64 v72; // [rsp+38h] [rbp-50h]
  __int64 **v73; // [rsp+40h] [rbp-48h]
  __m128i *v74; // [rsp+48h] [rbp-40h]

  src = a1;
  v73 = a3;
  if ( a1 == a2 )
    return;
  v6 = (__m128i *)(a1 + 24);
  if ( a2 == a1 + 24 )
    return;
  v72 = (unsigned __int64)&a1[((a2 - 48 - a1) & 0xFFFFFFFFFFFFFFF8LL) + 48];
  do
  {
    v7 = (__m128)_mm_loadu_si128(v6);
    a6 = _mm_movehl_ps(a6, v7);
    v70 = v6[1].m128i_i64[0];
    v8 = *(_DWORD *)(v7.m128_u64[0] + 12);
    v66.m128i_i64[0] = a6.m128_u64[0];
    v9 = (*(_DWORD *)(a6.m128_u64[0] + 12) - v8) ^ (v8 << 8);
    v10 = ((v9 ^ ((v8 - v9) << 16)) + v9 - v8) ^ ((v8 - v9) << 10);
    v11 = (*(_DWORD *)(v70 + 12) - v10) ^ (v10 << 8);
    v12 = ((v11 ^ ((v10 - v11) << 16)) + v11 - v10) ^ ((v10 - v11) << 10);
    v13 = *((unsigned int *)v73 + 2);
    v14 = *v73;
    v15 = v13 - 1;
    v16 = 32 * v13;
    v67 = v15;
    v17 = &v14[(unsigned __int64)v16 / 8];
    v18 = 32LL * (v12 & v15);
    v68 = v18;
    v19 = &v14[(unsigned __int64)v18 / 8];
    if ( v18 != v16 )
    {
      for ( i = &v14[(unsigned __int64)v18 / 8]; v17 != i; i += 4 )
      {
        v21 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *((_DWORD *)i + 7) == v12 && v21 == v7.m128_u64[0] && i[1] == v66.m128i_i64[0] && v70 == i[2] )
          {
            v22 = *((_DWORD *)i + 6);
            goto LABEL_12;
          }
        }
        else if ( !v21 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v14 == v19 )
    {
LABEL_11:
      v22 = 0;
      goto LABEL_12;
    }
    v58 = v14;
    while ( 1 )
    {
      v59 = *v58;
      if ( (unsigned __int64)*v58 > 1 )
        break;
      if ( !v59 )
        goto LABEL_11;
LABEL_61:
      v58 += 4;
      if ( v19 == v58 )
        goto LABEL_11;
    }
    if ( *((_DWORD *)v58 + 7) != v12 || v59 != v7.m128_u64[0] || v58[1] != v66.m128i_i64[0] || v70 != v58[2] )
      goto LABEL_61;
    v22 = *((_DWORD *)v58 + 6);
LABEL_12:
    v23 = *(_QWORD *)src;
    v24 = *((_QWORD *)src + 1);
    v25 = *((_QWORD *)src + 2);
    v26 = *(_DWORD *)(*(_QWORD *)src + 12LL);
    v27 = (*(_DWORD *)(v24 + 12) - v26) ^ (v26 << 8);
    v28 = ((v27 ^ ((v26 - v27) << 16)) + v27 - v26) ^ ((v26 - v27) << 10);
    v29 = (*(_DWORD *)(v25 + 12) - v28) ^ (v28 << 8);
    v30 = ((v29 ^ ((v28 - v29) << 16)) + v29 - v28) ^ ((v28 - v29) << 10);
    v31 = 32LL * (v30 & v67);
    v32 = &v14[(unsigned __int64)v31 / 8];
    if ( v16 != v31 )
    {
      for ( j = &v14[(unsigned __int64)v31 / 8]; v17 != j; j += 4 )
      {
        v34 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *((_DWORD *)j + 7) == v30 && v23 == v34 && v24 == j[1] && v25 == j[2] )
          {
            v37 = *((_DWORD *)j + 6);
            goto LABEL_31;
          }
        }
        else if ( !v34 )
        {
          goto LABEL_19;
        }
      }
    }
    if ( v14 == v32 )
    {
LABEL_19:
      if ( !v22 )
        goto LABEL_32;
      goto LABEL_20;
    }
    v60 = v14;
    while ( 2 )
    {
      v61 = *v60;
      if ( (unsigned __int64)*v60 <= 1 )
      {
        if ( !v61 )
          goto LABEL_19;
        goto LABEL_69;
      }
      if ( *((_DWORD *)v60 + 7) != v30 || v23 != v61 || v24 != v60[1] || v25 != v60[2] )
      {
LABEL_69:
        v60 += 4;
        if ( v32 == v60 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    v37 = *((_DWORD *)v60 + 6);
LABEL_31:
    if ( v37 >= v22 )
    {
LABEL_32:
      v38 = v6;
      v74 = v6;
      v69 = v6;
      if ( v68 == v16 )
        goto LABEL_49;
LABEL_33:
      v39 = v19;
      while ( 2 )
      {
        v40 = *v39;
        if ( (unsigned __int64)*v39 <= 1 )
        {
          if ( !v40 )
          {
LABEL_39:
            v41 = 0;
            goto LABEL_40;
          }
          goto LABEL_36;
        }
        if ( *((_DWORD *)v39 + 7) != v12 || v40 != v7.m128_u64[0] || v39[1] != v66.m128i_i64[0] || v70 != v39[2] )
        {
LABEL_36:
          v39 += 4;
          if ( v17 == v39 )
            goto LABEL_49;
          continue;
        }
        break;
      }
      v41 = *((_DWORD *)v39 + 6);
LABEL_40:
      v42 = v38[-2].m128i_i64[1];
      v43 = v38[-1].m128i_i64[0];
      v44 = v38[-1].m128i_i64[1];
      v45 = *(_DWORD *)(v42 + 12);
      v46 = (*(_DWORD *)(v43 + 12) - v45) ^ (v45 << 8);
      v47 = ((v46 ^ ((v45 - v46) << 16)) + v46 - v45) ^ ((v45 - v46) << 10);
      v48 = (*(_DWORD *)(v44 + 12) - v47) ^ (v47 << 8);
      v49 = ((v48 ^ ((v47 - v48) << 16)) + v48 - v47) ^ ((v47 - v48) << 10);
      v50 = 32LL * (v49 & v67);
      v51 = &v14[(unsigned __int64)v50 / 8];
      if ( v16 != v50 )
      {
        for ( k = &v14[(unsigned __int64)v50 / 8]; v17 != k; k += 4 )
        {
          v53 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *((_DWORD *)k + 7) == v49 && v42 == v53 && v43 == k[1] && v44 == k[2] )
            {
              v62 = *((_DWORD *)k + 6);
              goto LABEL_82;
            }
          }
          else if ( !v53 )
          {
            goto LABEL_47;
          }
        }
      }
      if ( v14 == v51 )
      {
LABEL_47:
        v38 = (__m128i *)((char *)v38 - 24);
        if ( !v41 )
          goto LABEL_83;
        goto LABEL_48;
      }
      v64 = v14;
      while ( 1 )
      {
        v65 = *v64;
        if ( (unsigned __int64)*v64 > 1 )
        {
          if ( *((_DWORD *)v64 + 7) == v49 && v42 == v65 && v43 == v64[1] && v44 == v64[2] )
          {
            v62 = *((_DWORD *)v64 + 6);
LABEL_82:
            v38 = (__m128i *)((char *)v38 - 24);
            if ( v62 >= v41 )
            {
LABEL_83:
              v63 = v69;
              v6 = v74;
              v69[1].m128i_i64[0] = v70;
              *v63 = (__m128i)v7;
              goto LABEL_23;
            }
LABEL_48:
            v54 = _mm_loadu_si128(v38);
            v55 = v38[1].m128i_i64[0];
            v69 = v38;
            v38[2].m128i_i64[1] = v55;
            *(__m128i *)((char *)v38 + 24) = v54;
            if ( v68 != v16 )
              goto LABEL_33;
LABEL_49:
            if ( v14 == v19 )
              goto LABEL_39;
            v56 = v14;
            while ( 2 )
            {
              v57 = *v56;
              if ( (unsigned __int64)*v56 <= 1 )
              {
                if ( !v57 )
                  goto LABEL_39;
                goto LABEL_53;
              }
              if ( *((_DWORD *)v56 + 7) != v12 || v57 != v7.m128_u64[0] || v56[1] != v66.m128i_i64[0] || v70 != v56[2] )
              {
LABEL_53:
                v56 += 4;
                if ( v19 == v56 )
                  goto LABEL_39;
                continue;
              }
              break;
            }
            v41 = *((_DWORD *)v56 + 6);
            goto LABEL_40;
          }
        }
        else if ( !v65 )
        {
          goto LABEL_47;
        }
        v64 += 4;
        if ( v51 == v64 )
          goto LABEL_47;
      }
    }
LABEL_20:
    v35 = src;
    if ( (char *)v6 - (_BYTE *)src <= 24 )
    {
      if ( (char *)v6 - (_BYTE *)src == 24 )
      {
        *v6 = _mm_loadu_si128((const __m128i *)src);
        v6[1].m128i_i64[0] = v35[2];
      }
    }
    else
    {
      v66 = (__m128i)v7;
      memmove((char *)src + 24, src, (char *)v6 - (_BYTE *)src);
      v7 = (__m128)_mm_load_si128(&v66);
    }
    v36 = (__m128i *)src;
    *((_QWORD *)src + 2) = v70;
    *v36 = (__m128i)v7;
LABEL_23:
    v6 = (__m128i *)((char *)v6 + 24);
  }
  while ( v6 != (__m128i *)v72 );
}

