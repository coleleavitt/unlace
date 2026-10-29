void __fastcall sub_95E9A0(__m128i *a1, const __m128i *a2, __int64 **a3, double a4, double a5, __m128 a6, __m128 a7)
{
  __int64 v7; // rax
  __int64 *v8; // rbp
  const __m128i *v9; // r12
  __int64 v10; // r14
  __int64 v11; // rcx
  __m128 v12; // xmm1
  __int64 v13; // r10
  __int64 v14; // rbx
  int v15; // esi
  int v16; // eax
  int v17; // edi
  __int64 *v18; // r8
  __int64 *i; // rax
  __int64 v20; // rdx
  unsigned int v21; // r13d
  int v22; // edx
  int v23; // eax
  int v24; // esi
  __int64 v25; // rax
  __int64 *v26; // r9
  __int64 *j; // rax
  __int64 v28; // rdx
  __m128i *v29; // rbx
  __m128 v30; // xmm0
  __int64 *k; // rax
  __int64 v32; // rdx
  unsigned int v33; // r13d
  int v34; // edx
  int v35; // eax
  int v36; // esi
  __int64 v37; // rax
  __int64 *v38; // r9
  __int64 *m; // rax
  __int64 v40; // rdx
  unsigned int v41; // eax
  __int64 *v42; // rax
  unsigned __int64 v43; // rdx
  __int64 *v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // eax
  const __m128i *v47; // rax
  __m128i v48; // xmm0
  __int64 *v49; // rax
  unsigned __int64 v50; // rdx
  __int64 *v51; // rax
  unsigned __int64 v52; // rdx
  unsigned int v53; // [rsp+0h] [rbp-5Ch]
  __int64 v54; // [rsp+4h] [rbp-58h]

  if ( a1 == a2 || a2 == &a1[1] )
    return;
  v7 = *((unsigned int *)a3 + 2);
  v8 = *a3;
  v9 = a1 + 1;
  v53 = v7 - 1;
  v10 = 24 * v7;
  v11 = (__int64)&(*a3)[3 * v7];
  do
  {
    v12 = (__m128)_mm_loadu_si128(v9);
    a7 = _mm_movehl_ps(a7, v12);
    v13 = a1->m128i_i64[0];
    v14 = a1->m128i_i64[1];
    v15 = *(_DWORD *)(v12.m128_u64[0] + 12);
    v16 = (*(_DWORD *)(a7.m128_u64[0] + 12) - v15) ^ (v15 << 8);
    v17 = (v16 - v15 + (v16 ^ ((v15 - v16) << 16))) ^ ((v15 - v16) << 10);
    v54 = 24LL * (v17 & v53);
    v18 = &v8[(unsigned __int64)v54 / 8];
    if ( v54 != v10 )
    {
      for ( i = &v8[(unsigned __int64)v54 / 8]; (__int64 *)v11 != i; i += 3 )
      {
        v20 = *i;
        if ( (unsigned __int64)*i > 1 )
        {
          if ( *((_DWORD *)i + 5) == v17 && v20 == v12.m128_u64[0] && i[1] == a7.m128_u64[0] )
          {
            v21 = *((_DWORD *)i + 4);
            goto LABEL_12;
          }
        }
        else if ( !v20 )
        {
          goto LABEL_11;
        }
      }
    }
    if ( v8 == v18 )
    {
LABEL_11:
      v21 = 0;
      goto LABEL_12;
    }
    v49 = v8;
    while ( 1 )
    {
      v50 = *v49;
      if ( (unsigned __int64)*v49 > 1 )
        break;
      if ( !v50 )
        goto LABEL_11;
LABEL_77:
      v49 += 3;
      if ( v18 == v49 )
        goto LABEL_11;
    }
    if ( *((_DWORD *)v49 + 5) != v17 || v50 != v12.m128_u64[0] || v49[1] != a7.m128_u64[0] )
      goto LABEL_77;
    v21 = *((_DWORD *)v49 + 4);
LABEL_12:
    v22 = *(_DWORD *)(v13 + 12);
    v23 = (*(_DWORD *)(v14 + 12) - v22) ^ (v22 << 8);
    v24 = ((v23 ^ ((v22 - v23) << 16)) + v23 - v22) ^ ((v22 - v23) << 10);
    v25 = 24LL * (v24 & v53);
    v26 = &v8[(unsigned __int64)v25 / 8];
    if ( v10 != v25 )
    {
      for ( j = &v8[(unsigned __int64)v25 / 8]; (__int64 *)v11 != j; j += 3 )
      {
        v28 = *j;
        if ( (unsigned __int64)*j > 1 )
        {
          if ( *((_DWORD *)j + 5) == v24 && v13 == v28 && v14 == j[1] )
          {
            v46 = *((_DWORD *)j + 4);
            goto LABEL_69;
          }
        }
        else if ( !v28 )
        {
          goto LABEL_19;
        }
      }
    }
    if ( v8 == v26 )
    {
LABEL_19:
      v29 = (__m128i *)v9;
      if ( !v21 )
        goto LABEL_20;
      goto LABEL_70;
    }
    v51 = v8;
    while ( 2 )
    {
      v52 = *v51;
      if ( (unsigned __int64)*v51 <= 1 )
      {
        if ( !v52 )
          goto LABEL_19;
        goto LABEL_85;
      }
      if ( *((_DWORD *)v51 + 5) != v24 || v13 != v52 || v14 != v51[1] )
      {
LABEL_85:
        v51 += 3;
        if ( v26 == v51 )
          goto LABEL_19;
        continue;
      }
      break;
    }
    v46 = *((_DWORD *)v51 + 4);
LABEL_69:
    v29 = (__m128i *)v9;
    if ( v46 >= v21 )
    {
LABEL_20:
      v30 = (__m128)_mm_loadu_si128(v29 - 1);
      a6 = _mm_movehl_ps(a6, v30);
      if ( v54 != v10 )
      {
        for ( k = &v8[(unsigned __int64)v54 / 8]; (__int64 *)v11 != k; k += 3 )
        {
          v32 = *k;
          if ( (unsigned __int64)*k > 1 )
          {
            if ( *((_DWORD *)k + 5) == v17 && v32 == v12.m128_u64[0] && k[1] == a7.m128_u64[0] )
            {
              v33 = *((_DWORD *)k + 4);
              goto LABEL_28;
            }
          }
          else if ( !v32 )
          {
            goto LABEL_27;
          }
        }
      }
      if ( v8 == v18 )
      {
LABEL_27:
        v33 = 0;
        goto LABEL_28;
      }
      v44 = v8;
      while ( 1 )
      {
        v45 = *v44;
        if ( (unsigned __int64)*v44 > 1 )
        {
          if ( *((_DWORD *)v44 + 5) == v17 && v45 == v12.m128_u64[0] && v44[1] == a7.m128_u64[0] )
          {
            v33 = *((_DWORD *)v44 + 4);
LABEL_28:
            v34 = *(_DWORD *)(v30.m128_u64[0] + 12);
            v35 = (*(_DWORD *)(a6.m128_u64[0] + 12) - v34) ^ (v34 << 8);
            v36 = ((v35 ^ ((v34 - v35) << 16)) + v35 - v34) ^ ((v34 - v35) << 10);
            v37 = 24LL * (v36 & v53);
            v38 = &v8[(unsigned __int64)v37 / 8];
            if ( v10 != v37 )
            {
              for ( m = &v8[(unsigned __int64)v37 / 8]; (__int64 *)v11 != m; m += 3 )
              {
                v40 = *m;
                if ( (unsigned __int64)*m > 1 )
                {
                  if ( *((_DWORD *)m + 5) == v36 && v40 == v30.m128_u64[0] && m[1] == a6.m128_u64[0] )
                  {
                    v41 = *((_DWORD *)m + 4);
                    goto LABEL_39;
                  }
                }
                else if ( !v40 )
                {
                  goto LABEL_35;
                }
              }
            }
            if ( v8 == v38 )
            {
LABEL_35:
              if ( !v33 )
                goto LABEL_40;
              goto LABEL_36;
            }
            v42 = v8;
            while ( 2 )
            {
              v43 = *v42;
              if ( (unsigned __int64)*v42 <= 1 )
              {
                if ( !v43 )
                  goto LABEL_35;
                goto LABEL_49;
              }
              if ( *((_DWORD *)v42 + 5) != v36 || v43 != v30.m128_u64[0] || v42[1] != a6.m128_u64[0] )
              {
LABEL_49:
                v42 += 3;
                if ( v38 == v42 )
                  goto LABEL_35;
                continue;
              }
              break;
            }
            v41 = *((_DWORD *)v42 + 4);
LABEL_39:
            if ( v41 >= v33 )
            {
LABEL_40:
              *v29 = (__m128i)v12;
              goto LABEL_41;
            }
LABEL_36:
            *v29-- = (__m128i)v30;
            goto LABEL_20;
          }
        }
        else if ( !v45 )
        {
          goto LABEL_27;
        }
        v44 += 3;
        if ( v18 == v44 )
          goto LABEL_27;
      }
    }
LABEL_70:
    v47 = v9;
    if ( (char *)v9 - (char *)a1 > 0 )
    {
      do
      {
        v48 = _mm_loadu_si128(--v47);
        v47[1] = v48;
      }
      while ( v47 != (const __m128i *)((char *)v9 - (((char *)v9 - (char *)a1) & 0xFFFFFFFFFFFFFFF0LL)) );
    }
    *a1 = (__m128i)v12;
LABEL_41:
    ++v9;
  }
  while ( v9 != a2 );
}

