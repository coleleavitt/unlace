void __fastcall sub_8E6800(__int64 *a1, __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r10
  __int64 *v9; // r13
  __int64 *v10; // rbp
  __int64 *v11; // r9
  __int64 j; // rax
  __int64 *v13; // r8
  __int64 v14; // r15
  unsigned __int64 v15; // rax
  __int64 v16; // rcx
  __int64 *v17; // rbx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __m128i v22; // xmm0
  unsigned __int64 v23; // rdx
  __int64 *v24; // rdi
  __int64 *v25; // rdx
  __int64 v26; // rsi
  unsigned __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 *v31; // rdi
  __int64 v32; // rsi
  char *v33; // rbx
  __int64 v34; // rdx
  __m128i v35; // xmm0
  unsigned __int64 v36; // rdx
  __int64 *v37; // rcx
  __int64 *v38; // rdx
  __int64 v39; // rsi
  __int64 k; // rdx
  __int64 v41; // rsi
  __int64 v42; // rcx
  __int64 i; // rax
  __int64 *v44; // r8
  __int64 *v45; // rdx
  __int64 v46; // rsi
  __int64 v47; // rdi
  __int64 v48; // rbx
  unsigned __int64 v49; // rdx
  __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __m128i v52; // xmm0
  unsigned __int64 v53; // rax
  __int64 *v54; // rdx
  __int64 *v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  signed __int64 v60; // rdx
  __int64 *v61; // rdx
  __int64 *v62; // rax
  __int64 v63; // rsi
  __int64 v64; // rcx
  __int64 *v65; // [rsp+0h] [rbp-68h]
  __int64 v66; // [rsp+0h] [rbp-68h]
  __int64 v67; // [rsp+0h] [rbp-68h]
  __int64 v68; // [rsp+0h] [rbp-68h]
  __int64 v69; // [rsp+8h] [rbp-60h]
  __int64 v71; // [rsp+18h] [rbp-50h]
  __int64 *v72; // [rsp+18h] [rbp-50h]
  __int64 v73; // [rsp+18h] [rbp-50h]
  __int64 v74; // [rsp+20h] [rbp-48h]
  __int64 *v75; // [rsp+20h] [rbp-48h]
  __int64 v76; // [rsp+28h] [rbp-40h]

  if ( !a5 || !a4 )
    return;
  v7 = a5;
  v8 = a4;
LABEL_4:
  if ( v8 + v7 != 2 )
  {
    if ( v8 <= v7 )
    {
      v10 = a1;
      v9 = &a2[v7 / 2];
      v14 = v7 / 2;
      v11 = (__int64 *)*v9;
      for ( i = a2 - a1; i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v44 = &v10[i >> 1];
          if ( *(_DWORD *)(*v44 + 4LL * (*(_DWORD *)(*v44 + 4) & 0xFFFFFF) + 8) < *((_DWORD *)v11
                                                                                  + (*((_DWORD *)v11 + 1) & 0xFFFFFF)
                                                                                  + 2) )
            break;
          v10 = v44 + 1;
          i = i - (i >> 1) - 1;
          if ( i <= 0 )
            goto LABEL_54;
        }
      }
LABEL_54:
      v69 = v10 - a1;
      if ( a2 == v10 )
      {
LABEL_55:
        a2 = v9;
        goto LABEL_47;
      }
    }
    else
    {
      v9 = a2;
      v10 = &a1[v8 / 2];
      v69 = v8 / 2;
      v11 = (__int64 *)*v10;
      for ( j = (a3 - (__int64)a2) >> 3; j > 0; j >>= 1 )
      {
        while ( 1 )
        {
          v13 = &v9[j >> 1];
          if ( *((_DWORD *)v11 + (*((_DWORD *)v11 + 1) & 0xFFFFFF) + 2) >= *(_DWORD *)(*v13
                                                                                     + 4LL
                                                                                     * (*(_DWORD *)(*v13 + 4) & 0xFFFFFF)
                                                                                     + 8) )
            break;
          v9 = v13 + 1;
          j = j - (j >> 1) - 1;
          if ( j <= 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      v14 = v9 - a2;
      if ( a2 == v10 )
        goto LABEL_55;
    }
    if ( a2 == v9 )
    {
      a2 = v10;
      goto LABEL_47;
    }
    v15 = v9 - v10;
    v16 = a2 - v10;
    if ( v16 == v15 - v16 )
    {
      v49 = (char *)(a2 - 1) - (char *)v10;
      if ( v49 <= 8 || (unsigned __int64)((char *)a2 + 15 - (char *)v10) <= 0x1E )
      {
        v61 = a2;
        v62 = v10;
        do
        {
          v63 = *v61;
          v64 = *v62++;
          ++v61;
          *(v62 - 1) = v63;
          *(v61 - 1) = v64;
        }
        while ( a2 != v62 );
      }
      else
      {
        v50 = 0;
        v51 = (v49 >> 3) + 1;
        do
        {
          v52 = _mm_loadu_si128((const __m128i *)&v10[v50]);
          *(__m128i *)&v10[v50] = _mm_loadu_si128((const __m128i *)&a2[v50]);
          *(__m128i *)&a2[v50] = v52;
          v50 += 2;
        }
        while ( 2 * (v51 >> 1) != v50 );
        if ( (v51 & 1) != 0 )
        {
          v53 = v51 & 0xFFFFFFFFFFFFFFFELL;
          v54 = &a2[v53];
          v55 = &v10[v53];
          v56 = *v55;
          *v55 = *v54;
          *v54 = v56;
        }
      }
      goto LABEL_47;
    }
    v71 = v14;
    v17 = v10;
    a2 = (__int64 *)((char *)v10 + (char *)v9 - (char *)a2);
    while ( 1 )
    {
      v18 = v15 - v16;
      if ( v16 < (__int64)(v15 - v16) )
      {
        while ( v16 != 1 )
        {
          v19 = (unsigned __int64)&v17[v16];
          if ( (__int64)v18 > 0 )
          {
            if ( v18 - 1 <= 1 || 8 * v16 + 16 > 0 && v19 < (unsigned __int64)(v17 + 2) )
            {
              for ( k = 0; k != v18; ++k )
              {
                v41 = v17[k];
                v11 = *(__int64 **)(v19 + 8 * k);
                v17[k] = (__int64)v11;
                *(_QWORD *)(v19 + 8 * k) = v41;
              }
            }
            else
            {
              v20 = 0;
              v21 = nullptr;
              v11 = (__int64 *)(v18 >> 1);
              do
              {
                v22 = _mm_loadu_si128((const __m128i *)&v17[v20]);
                v21 = (__int64 *)((char *)v21 + 1);
                *(__m128i *)&v17[v20] = _mm_loadu_si128((const __m128i *)(v19 + v20 * 8));
                *(__m128i *)(v19 + v20 * 8) = v22;
                v20 += 2;
              }
              while ( v21 != v11 );
              if ( (v18 & 1) != 0 )
              {
                v23 = v18 & 0xFFFFFFFFFFFFFFFELL;
                v24 = (__int64 *)(v23 * 8 + v19);
                v25 = &v17[v23];
                v26 = *v25;
                *v25 = *v24;
                *v24 = v26;
              }
            }
            v17 += v18;
          }
          v27 = v15 % v16;
          if ( !(v15 % v16) )
            goto LABEL_46;
          v15 = v16;
          v16 -= v27;
          v18 = v15 - v16;
          if ( v16 >= (__int64)(v15 - v16) )
            goto LABEL_27;
        }
        v58 = 8 * v15;
        v14 = v71;
        v59 = *v17;
        v60 = 8 * v15 - 8;
        if ( v60 <= 8 )
        {
          if ( 8 * v15 == 16 )
            *v17 = v17[1];
        }
        else
        {
          v76 = v8;
          v75 = a1;
          v73 = 8 * v15;
          v68 = *v17;
          memmove(v17, v17 + 1, v60);
          v59 = v68;
          v58 = v73;
          a1 = v75;
          v8 = v76;
        }
        *(__int64 *)((char *)v17 + v58 - 8) = v59;
LABEL_47:
        v66 = v8;
        v7 -= v14;
        sub_8E6800(a1, v10, a2, v69, v14, v11);
        v8 = v66 - v69;
        if ( v66 == v69 || !v7 )
          return;
        a1 = a2;
        a2 = v9;
        goto LABEL_4;
      }
LABEL_27:
      v28 = 8 * v15;
      v11 = &v17[v15];
      if ( v18 == 1 )
      {
        v14 = v71;
        v57 = v17[(unsigned __int64)v28 / 8 - 1];
        if ( v28 - 8 <= 8 )
        {
          if ( v28 == 16 )
            *(v11 - 1) = *v17;
        }
        else
        {
          v74 = v8;
          v72 = a1;
          v67 = v17[(unsigned __int64)v28 / 8 - 1];
          memmove(v17 + 1, v17, v28 - 8);
          v57 = v67;
          a1 = v72;
          v8 = v74;
        }
        *v17 = v57;
        goto LABEL_47;
      }
      v29 = 8 * v16;
      v65 = &v17[v16];
      if ( v16 > 0 )
        break;
      v17 += v16;
      v16 = v15 % v18;
      if ( !(v15 % v18) )
      {
LABEL_46:
        v14 = v71;
        goto LABEL_47;
      }
LABEL_37:
      v15 = v18;
    }
    if ( (unsigned __int64)(v16 - 1) <= 1 )
    {
      v45 = &v17[v16];
      v46 = 0;
    }
    else
    {
      v30 = v28 - 16;
      if ( v28 <= v29 - 16 || v29 <= v30 )
      {
        v31 = &v17[(unsigned __int64)v29 / 8 - 2];
        v32 = 0;
        v33 = (char *)v17 + v30;
        v34 = 0;
        do
        {
          v35 = _mm_loadu_si128((const __m128i *)&v31[v34]);
          ++v32;
          *(__m128i *)&v31[v34] = _mm_loadu_si128((const __m128i *)&v33[v34 * 8]);
          *(__m128i *)&v33[v34 * 8] = v35;
          v34 -= 2;
        }
        while ( v32 != (unsigned __int64)v16 >> 1 );
        if ( (v16 & 1) != 0 )
        {
          v36 = -8LL * (v16 & 0xFFFFFFFFFFFFFFFELL) - 8;
          v37 = (__int64 *)((char *)v65 + v36);
          v38 = (__int64 *)((char *)v11 + v36);
          v39 = *v37;
          *v37 = *v38;
          *v38 = v39;
        }
LABEL_36:
        v17 = &v65[v29 / 0xFFFFFFFFFFFFFFF8LL];
        v16 = v15 % v18;
        if ( !(v15 % v18) )
          goto LABEL_46;
        goto LABEL_37;
      }
      v45 = &v17[v16];
      v46 = 0;
    }
    do
    {
      v47 = *(v45 - 1);
      v48 = *(v11 - 1);
      ++v46;
      --v45;
      --v11;
      *v45 = v48;
      *v11 = v47;
    }
    while ( v16 != v46 );
    goto LABEL_36;
  }
  v42 = *a1;
  if ( *(_DWORD *)(*a1 + 4LL * (*(_DWORD *)(*a1 + 4) & 0xFFFFFF) + 8) < *(_DWORD *)(*a2
                                                                                  + 4LL
                                                                                  * (*(_DWORD *)(*a2 + 4) & 0xFFFFFF)
                                                                                  + 8) )
  {
    *a1 = *a2;
    *a2 = v42;
  }
}

