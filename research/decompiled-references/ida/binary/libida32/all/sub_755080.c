__int64 __fastcall sub_755080(__int64 a1, _QWORD *a2, int a3)
{
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // ecx
  char v10; // dl
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // r14d
  __int64 v15; // rbx
  char v16; // r14
  int v17; // eax
  bool v18; // cf
  unsigned int v19; // eax
  unsigned int v20; // r12d
  __int64 v21; // rcx
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r13
  unsigned int v24; // edx
  int v25; // eax
  unsigned int *v26; // r14
  unsigned int *v27; // rbx
  unsigned int v28; // eax
  int v29; // ebx
  unsigned __int64 v30; // r13
  unsigned __int64 v31; // rax
  unsigned __int64 v32; // rsi
  unsigned __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rbx
  int v37; // ecx
  int v38; // eax
  __int64 v39; // rax
  unsigned __int64 v40; // rdx
  double v41; // xmm6_8
  __m128d v42; // xmm1
  __m128d v43; // xmm0
  __int64 v44; // rbx
  __int64 v45; // rax
  __m128d v46; // xmm0
  double v47; // xmm0_8
  __m128d v48; // xmm3
  unsigned __int64 v49; // rax
  unsigned __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int64 bkt; // rsi
  __int64 v54; // r8
  __int64 v55; // rax
  unsigned int v56; // ecx
  char v57; // dl
  __int64 v58; // rax
  __int64 v59; // rsi
  __int64 v60; // rax
  unsigned int v61; // [rsp+Ch] [rbp-5Ch]
  int v62; // [rsp+Ch] [rbp-5Ch]
  int v63; // [rsp+Ch] [rbp-5Ch]
  __int64 v65; // [rsp+18h] [rbp-50h]
  unsigned int v66; // [rsp+20h] [rbp-48h] BYREF
  char v67; // [rsp+24h] [rbp-44h]
  unsigned __int64 v68; // [rsp+28h] [rbp-40h]

  v68 = __readfsqword(0x28u);
  v61 = unpack_dd(a2);
  v4 = v61;
  if ( a2[1] - *a2 < (unsigned __int64)v61 )
    return 0;
  v5 = *(_QWORD *)(a1 + 24);
  v65 = a1 + 24;
  v6 = *(_QWORD *)(a1 + 32);
  if ( v61 != v6 )
  {
    v66 = -1;
    v67 = 0;
    if ( v61 >= v6 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int64)&v66 < v5 || (unsigned __int64)&v66 >= v5 + 5 * v7 )
      {
        if ( v7 < v61 )
        {
          v55 = qvector_reserve(v65, v5, v61, 5);
          *(_QWORD *)(a1 + 24) = v55;
          v5 = v55;
          v6 = *(_QWORD *)(a1 + 32);
        }
        if ( v6 < v61 )
        {
          v8 = 4LL * v61;
          v9 = v66;
          v10 = v67;
          v11 = 5 * v6;
          do
          {
            *(_DWORD *)(v5 + v11) = v9;
            *(_BYTE *)(v5 + v11 + 4) = v10;
            v11 += 5;
            v5 = *(_QWORD *)(a1 + 24);
          }
          while ( 5LL * v61 != v11 );
LABEL_10:
          *(_QWORD *)(a1 + 32) = v61;
          v12 = v5 + v61 + v8;
          goto LABEL_13;
        }
      }
      else
      {
        if ( v7 < v61 )
        {
          v60 = qvector_reserve(v65, v5, v61, 5);
          *(_QWORD *)(a1 + 24) = v60;
          v5 = v60;
          v6 = *(_QWORD *)(a1 + 32);
        }
        if ( v6 < v61 )
        {
          v8 = 4LL * v61;
          v39 = 5 * v6;
          do
          {
            v40 = v5 + v39;
            v39 += 5;
            *(_DWORD *)v40 = -1;
            *(_BYTE *)(v40 + 4) = 0;
            v5 = *(_QWORD *)(a1 + 24);
          }
          while ( 5LL * v61 != v39 );
          goto LABEL_10;
        }
      }
    }
    *(_QWORD *)(a1 + 32) = v61;
    v6 = v61;
  }
  v12 = v5 + 5 * v6;
  if ( v12 != v5 )
  {
LABEL_13:
    v13 = 0;
    do
    {
      *(_BYTE *)(v5 + 4) = 1;
      v13 += unpack_dd(a2);
      *(_DWORD *)v5 = v13;
      if ( *a2 >= a2[1] )
        return 0;
      v5 += 5LL;
    }
    while ( v12 != v5 );
  }
  if ( !a3 )
  {
    v26 = *(unsigned int **)(a1 + 24);
    if ( v61 )
    {
      v27 = (unsigned int *)((char *)v26 + 5 * v61);
      do
      {
        while ( 1 )
        {
          v66 = *v26;
          if ( (*(_BYTE *)(a1 + 164) & 4) == 0 )
            break;
          v26 = (unsigned int *)((char *)v26 + 5);
          if ( v26 == v27 )
            goto LABEL_36;
        }
        v26 = (unsigned int *)((char *)v26 + 5);
        sub_753C70((__int64 *)(a1 + 104), &v66);
      }
      while ( v26 != v27 );
LABEL_36:
      v28 = unpack_dd(a2);
      if ( __CFADD__(v28, v61) )
        return 0;
    }
    else
    {
      v28 = unpack_dd(a2);
    }
    v29 = v28;
    if ( a2[1] - *a2 >= (unsigned __int64)v28 )
    {
      v30 = v61 + v28;
      v31 = *(_QWORD *)(a1 + 32);
      if ( v30 != v31 )
      {
        v66 = -1;
        v67 = 0;
        if ( v30 >= v31 )
        {
          v32 = *(_QWORD *)(a1 + 24);
          v33 = *(_QWORD *)(a1 + 40);
          if ( (unsigned __int64)&v66 < v32 || (unsigned __int64)&v66 >= v32 + 5 * v33 )
          {
            if ( v33 < v30 )
            {
              *(_QWORD *)(a1 + 24) = qvector_reserve(v65, v32, v30, 5);
              v31 = *(_QWORD *)(a1 + 32);
            }
            if ( v31 < v30 )
            {
              v56 = v66;
              v57 = v67;
              v58 = 5 * v31;
              do
              {
                v59 = *(_QWORD *)(a1 + 24);
                *(_DWORD *)(v59 + v58) = v56;
                *(_BYTE *)(v59 + v58 + 4) = v57;
                v58 += 5;
              }
              while ( 5 * v30 != v58 );
            }
          }
          else
          {
            if ( v33 < v30 )
            {
              *(_QWORD *)(a1 + 24) = qvector_reserve(v65, v32, v30, 5);
              v31 = *(_QWORD *)(a1 + 32);
            }
            if ( v31 < v30 )
            {
              v34 = 5 * v31;
              do
              {
                v35 = v34 + *(_QWORD *)(a1 + 24);
                v34 += 5;
                *(_DWORD *)v35 = -1;
                *(_BYTE *)(v35 + 4) = 0;
              }
              while ( 5 * v30 != v34 );
            }
          }
        }
        *(_QWORD *)(a1 + 32) = v30;
      }
      if ( (*(_BYTE *)(a1 + 164) & 4) == 0 )
      {
        v42 = 0;
        v41 = *(float *)(a1 + 80);
        v42.m128d_f64[0] = (double)v29 / v41;
        if ( fabs(v42.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v43.m128d_f64[0] = (double)(int)v42.m128d_f64[0];
          *(_QWORD *)&v42.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v43.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v42, v43).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v42.m128d_f64[0] & 0x8000000000000000LL;
        }
        v44 = *(_QWORD *)(a1 + 88);
        v45 = *(_QWORD *)(a1 + 72) + 1LL;
        v46 = 0;
        if ( v45 < 0 )
          v47 = (double)(int)(v45 & 1 | ((unsigned __int64)v45 >> 1))
              + (double)(int)(v45 & 1 | ((unsigned __int64)v45 >> 1));
        else
          v47 = (double)(int)v45;
        v46.m128d_f64[0] = v47 / v41;
        if ( fabs(v46.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v48.m128d_f64[0] = (double)(int)v46.m128d_f64[0];
          *(_QWORD *)&v46.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v48.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v46, v48).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v46.m128d_f64[0] & 0x8000000000000000LL;
        }
        if ( v42.m128d_f64[0] >= 9.223372036854776e18 )
          v49 = (unsigned int)(int)(v42.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v49 = (unsigned int)(int)v42.m128d_f64[0];
        if ( v46.m128d_f64[0] >= 9.223372036854776e18 )
          v50 = (unsigned int)(int)(v46.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v50 = (unsigned int)(int)v46.m128d_f64[0];
        if ( v49 >= v50 )
          v50 = v49;
        bkt = std::__detail::_Prime_rehash_policy::_M_next_bkt((std::__detail::_Prime_rehash_policy *)(a1 + 80), v50);
        if ( bkt == *(_QWORD *)(a1 + 56) )
          *(_QWORD *)(a1 + 88) = v44;
        else
          sub_753B40(a1 + 48, bkt, v51, v52, v54);
      }
      v36 = *(_QWORD *)(a1 + 24) + 5LL * v61;
      if ( v61 < v30 )
      {
        v37 = 0;
        while ( 1 )
        {
          v62 = v37;
          if ( *a2 >= a2[1] )
            break;
          v38 = unpack_dd(a2);
          *(_BYTE *)(v36 + 4) = 0;
          v37 = v38 + v62;
          *(_DWORD *)v36 = v38 + v62;
          v66 = v38 + v62;
          if ( (*(_BYTE *)(a1 + 164) & 4) == 0 )
          {
            v63 = v38 + v62;
            sub_753C70((__int64 *)(a1 + 48), &v66);
            v37 = v63;
          }
          ++v4;
          v36 += 5;
          if ( v4 >= v30 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    return 0;
  }
  v15 = 0;
  v16 = 1;
  if ( v61 )
  {
    while ( *a2 < a2[1] )
    {
      v17 = unpack_dd(a2);
      v18 = __CFADD__((_DWORD)v15, v17);
      v19 = v15 + v17;
      v20 = v19;
      if ( v18 || v61 < v19 )
        break;
      v21 = *(_QWORD *)(a1 + 24);
      v22 = v21 + 5 * v15;
      v23 = v21 + 5LL * v19;
      if ( v22 < v23 )
      {
        *(_BYTE *)(v22 + 4) = v16;
        v24 = *(_DWORD *)v22;
        v25 = *(_DWORD *)(a1 + 164);
        if ( v16 )
        {
          while ( 1 )
          {
            v66 = v24;
            if ( (v25 & 4) != 0 )
            {
              v22 += 5LL;
              if ( v22 >= v23 )
                goto LABEL_29;
            }
            else
            {
              v22 += 5LL;
              sub_753C70((__int64 *)(a1 + 104), &v66);
              if ( v22 >= v23 )
                goto LABEL_29;
            }
            *(_BYTE *)(v22 + 4) = 1;
            v24 = *(_DWORD *)v22;
            v25 = *(_DWORD *)(a1 + 164);
          }
        }
        while ( 1 )
        {
          v66 = v24;
          if ( (v25 & 4) == 0 )
            sub_753C70((__int64 *)(a1 + 48), &v66);
          v22 += 5LL;
          if ( v22 >= v23 )
            break;
          *(_BYTE *)(v22 + 4) = 0;
          v24 = *(_DWORD *)v22;
          v25 = *(_DWORD *)(a1 + 164);
        }
      }
LABEL_29:
      v16 ^= 1u;
      if ( v20 >= v61 )
        return 1;
      v15 = v20;
    }
    return 0;
  }
  return 1;
}

