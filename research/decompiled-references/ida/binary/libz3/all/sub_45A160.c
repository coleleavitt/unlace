void __fastcall sub_45A160(_QWORD *a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int64 v8; // r10
  _DWORD **v9; // r12
  _DWORD **v10; // rbp
  __int64 j; // rax
  _DWORD **v12; // rcx
  __int64 v13; // r15
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  __int64 *v16; // rbx
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __m128i v21; // xmm0
  unsigned __int64 v22; // rdx
  __int64 *v23; // rdi
  __int64 *v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 *v28; // r9
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
  _DWORD *v42; // rax
  __int64 i; // rax
  _DWORD **v44; // rcx
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
  __int64 *v61; // rax
  __int64 *v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rsi
  __int64 *v65; // [rsp+0h] [rbp-68h]
  __int64 v66; // [rsp+0h] [rbp-68h]
  __int64 v67; // [rsp+0h] [rbp-68h]
  __int64 v68; // [rsp+0h] [rbp-68h]
  __int64 v69; // [rsp+8h] [rbp-60h]
  _QWORD *v71; // [rsp+18h] [rbp-50h]
  __int64 v72; // [rsp+18h] [rbp-50h]
  __int64 v73; // [rsp+20h] [rbp-48h]
  __int64 v74; // [rsp+20h] [rbp-48h]
  _QWORD *v75; // [rsp+20h] [rbp-48h]
  __int64 v76; // [rsp+28h] [rbp-40h]

  if ( !a5 || !a4 )
    return;
  v7 = a5;
  v8 = a4;
LABEL_4:
  if ( v7 + v8 != 2 )
  {
    if ( v7 >= v8 )
    {
      v10 = (_DWORD **)a1;
      v13 = v7 / 2;
      v9 = (_DWORD **)&a2[v7 / 2];
      for ( i = a2 - a1; i > 0; i >>= 1 )
      {
        while ( 1 )
        {
          v44 = &v10[i >> 1];
          if ( **v9 < **v44 )
            break;
          v10 = v44 + 1;
          i = i - (i >> 1) - 1;
          if ( i <= 0 )
            goto LABEL_54;
        }
      }
LABEL_54:
      v69 = v10 - (_DWORD **)a1;
      if ( a2 == v10 )
      {
LABEL_55:
        a2 = v9;
        goto LABEL_47;
      }
    }
    else
    {
      v9 = (_DWORD **)a2;
      v69 = v8 / 2;
      v10 = (_DWORD **)&a1[v8 / 2];
      for ( j = (a3 - (__int64)a2) >> 3; j > 0; j >>= 1 )
      {
        while ( 1 )
        {
          v12 = &v9[j >> 1];
          if ( **v12 >= **v10 )
            break;
          v9 = v12 + 1;
          j = j - (j >> 1) - 1;
          if ( j <= 0 )
            goto LABEL_10;
        }
      }
LABEL_10:
      v13 = v9 - (_DWORD **)a2;
      if ( a2 == v10 )
        goto LABEL_55;
    }
    if ( a2 == v9 )
    {
      a2 = v10;
      goto LABEL_47;
    }
    v14 = v9 - v10;
    v15 = (_DWORD **)a2 - v10;
    if ( v15 == v14 - v15 )
    {
      v49 = (char *)(a2 - 1) - (char *)v10;
      if ( v49 <= 8 || (unsigned __int64)((char *)a2 + 15 - (char *)v10) <= 0x1E )
      {
        v61 = a2;
        v62 = (__int64 *)v10;
        do
        {
          v63 = *v62;
          v64 = *v61++;
          *v62++ = v64;
          *(v61 - 1) = v63;
        }
        while ( v61 != (_QWORD *)((char *)a2 + (char *)a2 - (char *)v10) );
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
        while ( v50 != 2 * (v51 >> 1) );
        if ( (v51 & 1) != 0 )
        {
          v53 = v51 & 0xFFFFFFFFFFFFFFFELL;
          v54 = &a2[v53];
          v55 = (__int64 *)&v10[v53];
          v56 = *v55;
          *v55 = *v54;
          *v54 = v56;
        }
      }
      goto LABEL_47;
    }
    v16 = (__int64 *)v10;
    v73 = v13;
    a2 = (_DWORD **)((char *)v10 + (char *)v9 - (char *)a2);
    while ( 1 )
    {
      v17 = v14 - v15;
      if ( v15 < (__int64)(v14 - v15) )
      {
        while ( v15 != 1 )
        {
          v18 = (unsigned __int64)&v16[v15];
          if ( (__int64)v17 > 0 )
          {
            if ( v17 - 1 <= 1 || 8 * v15 + 16 > 0 && v18 < (unsigned __int64)(v16 + 2) )
            {
              for ( k = 0; k != v17; ++k )
              {
                v41 = v16[k];
                v16[k] = *(_QWORD *)(v18 + 8 * k);
                *(_QWORD *)(v18 + 8 * k) = v41;
              }
            }
            else
            {
              v19 = 0;
              v20 = 0;
              do
              {
                v21 = _mm_loadu_si128((const __m128i *)&v16[v19]);
                ++v20;
                *(__m128i *)&v16[v19] = _mm_loadu_si128((const __m128i *)(v18 + v19 * 8));
                *(__m128i *)(v18 + v19 * 8) = v21;
                v19 += 2;
              }
              while ( v20 != v17 >> 1 );
              if ( (v17 & 1) != 0 )
              {
                v22 = v17 & 0xFFFFFFFFFFFFFFFELL;
                v23 = (__int64 *)(v22 * 8 + v18);
                v24 = &v16[v22];
                v25 = *v24;
                *v24 = *v23;
                *v23 = v25;
              }
            }
            v16 += v17;
          }
          v26 = v14 % v15;
          if ( !(v14 % v15) )
            goto LABEL_46;
          v14 = v15;
          v15 -= v26;
          v17 = v14 - v15;
          if ( v15 >= (__int64)(v14 - v15) )
            goto LABEL_27;
        }
        v58 = 8 * v14;
        v59 = *v16;
        v60 = 8 * v14 - 8;
        v13 = v73;
        if ( v60 <= 8 )
        {
          if ( 8 * v14 == 16 )
            *v16 = v16[1];
        }
        else
        {
          v76 = v8;
          v75 = a1;
          v72 = 8 * v14;
          v68 = *v16;
          memmove(v16, v16 + 1, v60);
          v59 = v68;
          v58 = v72;
          a1 = v75;
          v8 = v76;
        }
        *(__int64 *)((char *)v16 + v58 - 8) = v59;
LABEL_47:
        v66 = v8;
        v7 -= v13;
        sub_45A160(a1, v10, a2, v69, v13);
        v8 = v66 - v69;
        if ( v66 == v69 || !v7 )
          return;
        a1 = a2;
        a2 = v9;
        goto LABEL_4;
      }
LABEL_27:
      v27 = 8 * v14;
      v28 = &v16[v14];
      if ( v17 == 1 )
      {
        v13 = v73;
        v57 = v16[(unsigned __int64)v27 / 8 - 1];
        if ( v27 - 8 <= 8 )
        {
          if ( v27 == 16 )
            *(v28 - 1) = *v16;
        }
        else
        {
          v74 = v8;
          v71 = a1;
          v67 = v16[(unsigned __int64)v27 / 8 - 1];
          memmove(v16 + 1, v16, v27 - 8);
          v57 = v67;
          a1 = v71;
          v8 = v74;
        }
        *v16 = v57;
        goto LABEL_47;
      }
      v29 = 8 * v15;
      v65 = &v16[v15];
      if ( v15 > 0 )
        break;
      v16 += v15;
      v15 = v14 % v17;
      if ( !(v14 % v17) )
      {
LABEL_46:
        v13 = v73;
        goto LABEL_47;
      }
LABEL_37:
      v14 = v17;
    }
    if ( (unsigned __int64)(v15 - 1) <= 1 )
    {
      v45 = &v16[v15];
      v46 = 0;
    }
    else
    {
      v30 = v27 - 16;
      if ( v27 <= v29 - 16 || v29 <= v30 )
      {
        v31 = &v16[(unsigned __int64)v29 / 8 - 2];
        v32 = 0;
        v33 = (char *)v16 + v30;
        v34 = 0;
        do
        {
          v35 = _mm_loadu_si128((const __m128i *)&v31[v34]);
          ++v32;
          *(__m128i *)&v31[v34] = _mm_loadu_si128((const __m128i *)&v33[v34 * 8]);
          *(__m128i *)&v33[v34 * 8] = v35;
          v34 -= 2;
        }
        while ( v32 != (unsigned __int64)v15 >> 1 );
        if ( (v15 & 1) != 0 )
        {
          v36 = -8LL * (v15 & 0xFFFFFFFFFFFFFFFELL) - 8;
          v37 = (__int64 *)((char *)v65 + v36);
          v38 = (__int64 *)((char *)v28 + v36);
          v39 = *v37;
          *v37 = *v38;
          *v38 = v39;
        }
LABEL_36:
        v16 = &v65[v29 / 0xFFFFFFFFFFFFFFF8LL];
        v15 = v14 % v17;
        if ( !(v14 % v17) )
          goto LABEL_46;
        goto LABEL_37;
      }
      v45 = &v16[v15];
      v46 = 0;
    }
    do
    {
      v47 = *(v45 - 1);
      v48 = *(v28 - 1);
      ++v46;
      --v45;
      --v28;
      *v45 = v48;
      *v28 = v47;
    }
    while ( v15 != v46 );
    goto LABEL_36;
  }
  v42 = (_DWORD *)*a1;
  if ( *(_DWORD *)*a2 < *(_DWORD *)*a1 )
  {
    *a1 = *a2;
    *a2 = v42;
  }
}

