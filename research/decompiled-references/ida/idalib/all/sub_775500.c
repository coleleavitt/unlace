__int64 __fastcall sub_775500(__int64 a1, std::__detail::_Prime_rehash_policy *a2, int a3)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int64 v14; // r13
  __int64 v15; // r12
  char v16; // al
  unsigned int v18; // r15d
  char v19; // r13
  int v20; // eax
  bool v21; // cf
  unsigned int v22; // eax
  unsigned int v23; // r12d
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // r14
  unsigned __int64 v28; // r15
  unsigned __int64 v29; // rdx
  int v30; // eax
  unsigned __int64 *v31; // r13
  unsigned __int64 *v32; // r12
  unsigned __int64 *bkt; // rsi
  std::__detail::_Prime_rehash_policy *v34; // rdi
  unsigned int v35; // eax
  int v36; // r12d
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r13
  unsigned __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // r12
  unsigned __int64 v42; // r14
  char v43; // al
  __int64 v44; // rax
  double v45; // xmm6_8
  __m128d v46; // xmm1
  __m128d v47; // xmm0
  __int64 v48; // r12
  __int64 v49; // rax
  __m128d v50; // xmm0
  double v51; // xmm0_8
  __m128d v52; // xmm3
  unsigned __int64 v53; // rax
  unsigned __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rax
  unsigned __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned int v61; // [rsp+Ch] [rbp-6Ch]
  __int64 v63; // [rsp+18h] [rbp-60h]
  unsigned __int64 v64; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int8 v65; // [rsp+30h] [rbp-48h]
  unsigned __int64 v66; // [rsp+38h] [rbp-40h]

  v5 = (unsigned __int64)a2;
  v6 = *((_QWORD *)a2 + 1);
  v66 = __readfsqword(0x28u);
  v61 = unpack_dd(v5);
  v8 = v61;
  if ( *((_QWORD *)a2 + 1) - *(_QWORD *)a2 < (unsigned __int64)v61 )
    return 0;
  v9 = *(_QWORD *)(a1 + 24);
  v63 = a1 + 24;
  v10 = *(_QWORD *)(a1 + 32);
  if ( v61 != v10 )
  {
    v64 = -1;
    v65 = 0;
    if ( v61 >= v10 )
    {
      v7 = *(_QWORD *)(a1 + 40);
      if ( (unsigned __int64)&v64 < v9 || (v5 = v9 + 9 * v7, (unsigned __int64)&v64 >= v5) )
      {
        if ( v7 < v61 )
        {
          v5 = a1 + 24;
          v6 = v9;
          v57 = qvector_reserve(v63, v9, v61, 9);
          *(_QWORD *)(a1 + 24) = v57;
          v9 = v57;
          v10 = *(_QWORD *)(a1 + 32);
        }
        if ( v10 < v61 )
        {
          v11 = v64;
          v12 = 8LL * v61;
          v7 = v65;
          v13 = 9 * v10;
          v5 = 9LL * v61;
          do
          {
            *(_QWORD *)(v9 + v13) = v11;
            *(_BYTE *)(v9 + v13 + 8) = v7;
            v13 += 9;
            v9 = *(_QWORD *)(a1 + 24);
          }
          while ( v5 != v13 );
LABEL_10:
          *(_QWORD *)(a1 + 32) = v61;
          v14 = v9 + v61 + v12;
LABEL_13:
          v15 = 0;
          while ( 1 )
          {
            *(_BYTE *)(v9 + 8) = 1;
            v16 = is_cvt64(v5, v6, v7);
            v6 = *((_QWORD *)a2 + 1);
            v5 = (unsigned __int64)a2;
            if ( v16 )
            {
              v15 = (unsigned int)unpack_dd(a2) + (unsigned int)v15;
              if ( (unsigned int)v15 == 0xFFFFFFFFLL )
                v15 = -1;
              *(_QWORD *)v9 = v15;
              if ( *(_QWORD *)a2 >= *((_QWORD *)a2 + 1) )
                return 0;
            }
            else
            {
              v15 += unpack_dq(a2);
              *(_QWORD *)v9 = v15;
              if ( *(_QWORD *)a2 >= *((_QWORD *)a2 + 1) )
                return 0;
            }
            v9 += 9LL;
            if ( v14 == v9 )
              goto LABEL_21;
          }
        }
      }
      else
      {
        if ( v7 < v61 )
        {
          v5 = a1 + 24;
          v6 = v9;
          v60 = qvector_reserve(v63, v9, v61, 9);
          *(_QWORD *)(a1 + 24) = v60;
          v9 = v60;
          v10 = *(_QWORD *)(a1 + 32);
        }
        if ( v10 < v61 )
        {
          v12 = 8LL * v61;
          v44 = 9 * v10;
          do
          {
            v7 = v9 + v44;
            v44 += 9;
            *(_QWORD *)v7 = -1;
            *(_BYTE *)(v7 + 8) = 0;
            v9 = *(_QWORD *)(a1 + 24);
          }
          while ( 9LL * v61 != v44 );
          goto LABEL_10;
        }
      }
    }
    *(_QWORD *)(a1 + 32) = v61;
    v10 = v61;
  }
  v14 = v9 + 9 * v10;
  if ( v14 != v9 )
    goto LABEL_13;
LABEL_21:
  if ( !a3 )
  {
    v31 = *(unsigned __int64 **)(a1 + 24);
    if ( v61 )
    {
      v32 = (unsigned __int64 *)((char *)v31 + 9 * v61);
      do
      {
        while ( 1 )
        {
          v64 = *v31;
          if ( (*(_BYTE *)(a1 + 168) & 4) == 0 )
            break;
          v31 = (unsigned __int64 *)((char *)v31 + 9);
          if ( v31 == v32 )
            goto LABEL_40;
        }
        v31 = (unsigned __int64 *)((char *)v31 + 9);
        sub_7740F0((__int64 *)(a1 + 104), &v64);
      }
      while ( v31 != v32 );
LABEL_40:
      bkt = *((unsigned __int64 **)a2 + 1);
      v34 = a2;
      v35 = unpack_dd(a2);
      if ( __CFADD__(v35, v61) )
        return 0;
    }
    else
    {
      bkt = *((unsigned __int64 **)a2 + 1);
      v34 = a2;
      v35 = unpack_dd(a2);
    }
    v36 = v35;
    v37 = *((_QWORD *)a2 + 1) - *(_QWORD *)a2;
    if ( v37 >= v35 )
    {
      v38 = v61 + v35;
      v39 = *(_QWORD *)(a1 + 32);
      if ( v38 != v39 )
      {
        v64 = -1;
        v65 = 0;
        if ( v38 >= v39 )
        {
          bkt = *(unsigned __int64 **)(a1 + 24);
          v34 = (std::__detail::_Prime_rehash_policy *)&v64;
          v37 = *(_QWORD *)(a1 + 40);
          if ( &v64 < bkt || &v64 >= (unsigned __int64 *)((char *)bkt + 9 * v37) )
          {
            if ( v37 < v38 )
            {
              v34 = (std::__detail::_Prime_rehash_policy *)(a1 + 24);
              *(_QWORD *)(a1 + 24) = qvector_reserve(v63, bkt, v38, 9);
              v39 = *(_QWORD *)(a1 + 32);
            }
            if ( v39 < v38 )
            {
              v58 = v64;
              v37 = v65;
              v59 = 9 * v39;
              v34 = (std::__detail::_Prime_rehash_policy *)(9 * v38);
              do
              {
                bkt = *(unsigned __int64 **)(a1 + 24);
                *(unsigned __int64 *)((char *)bkt + v59) = v58;
                *((_BYTE *)bkt + v59 + 8) = v37;
                v59 += 9;
              }
              while ( v34 != (std::__detail::_Prime_rehash_policy *)v59 );
            }
          }
          else
          {
            if ( v37 < v38 )
            {
              v34 = (std::__detail::_Prime_rehash_policy *)(a1 + 24);
              *(_QWORD *)(a1 + 24) = qvector_reserve(v63, bkt, v38, 9);
              v39 = *(_QWORD *)(a1 + 32);
            }
            if ( v39 < v38 )
            {
              v40 = 9 * v39;
              do
              {
                v37 = v40 + *(_QWORD *)(a1 + 24);
                v40 += 9;
                *(_QWORD *)v37 = -1;
                *(_BYTE *)(v37 + 8) = 0;
              }
              while ( 9 * v38 != v40 );
            }
          }
        }
        *(_QWORD *)(a1 + 32) = v38;
      }
      if ( (*(_BYTE *)(a1 + 168) & 4) == 0 )
      {
        v46 = 0;
        v45 = *(float *)(a1 + 80);
        v46.m128d_f64[0] = (double)v36 / v45;
        if ( fabs(v46.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v47.m128d_f64[0] = (double)(int)v46.m128d_f64[0];
          *(_QWORD *)&v46.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v47.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v46, v47).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v46.m128d_f64[0] & 0x8000000000000000LL;
        }
        v48 = *(_QWORD *)(a1 + 88);
        v49 = *(_QWORD *)(a1 + 72) + 1LL;
        v50 = 0;
        if ( v49 < 0 )
          v51 = (double)(int)(v49 & 1 | ((unsigned __int64)v49 >> 1))
              + (double)(int)(v49 & 1 | ((unsigned __int64)v49 >> 1));
        else
          v51 = (double)(int)v49;
        v50.m128d_f64[0] = v51 / v45;
        if ( fabs(v50.m128d_f64[0]) < 4.503599627370496e15 )
        {
          v52.m128d_f64[0] = (double)(int)v50.m128d_f64[0];
          *(_QWORD *)&v50.m128d_f64[0] = COERCE_UNSIGNED_INT64(
                                           v52.m128d_f64[0]
                                         + COERCE_DOUBLE(*(_QWORD *)&_mm_cmpgt_sd(v50, v52).m128d_f64[0] & 0x3FF0000000000000LL))
                                       | *(_QWORD *)&v50.m128d_f64[0] & 0x8000000000000000LL;
        }
        if ( v46.m128d_f64[0] >= 9.223372036854776e18 )
          v53 = (unsigned int)(int)(v46.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v53 = (unsigned int)(int)v46.m128d_f64[0];
        if ( v50.m128d_f64[0] >= 9.223372036854776e18 )
          v54 = (unsigned int)(int)(v50.m128d_f64[0] - 9.223372036854776e18) ^ 0x8000000000000000LL;
        else
          v54 = (unsigned int)(int)v50.m128d_f64[0];
        v34 = (std::__detail::_Prime_rehash_policy *)(a1 + 80);
        if ( v53 >= v54 )
          v54 = v53;
        bkt = (unsigned __int64 *)std::__detail::_Prime_rehash_policy::_M_next_bkt(v34, v54);
        if ( bkt == *(unsigned __int64 **)(a1 + 56) )
        {
          *(_QWORD *)(a1 + 88) = v48;
        }
        else
        {
          v34 = (std::__detail::_Prime_rehash_policy *)(a1 + 48);
          sub_773FC0(a1 + 48, (unsigned __int64)bkt, v37, v55, v56);
        }
      }
      v41 = *(_QWORD *)(a1 + 24) + 9LL * v61;
      if ( v61 < v38 )
      {
        v42 = 0;
        while ( *(_QWORD *)a2 < *((_QWORD *)a2 + 1) )
        {
          v43 = is_cvt64(v34, bkt, v37);
          bkt = *((unsigned __int64 **)a2 + 1);
          v34 = a2;
          if ( v43 )
          {
            v42 = (unsigned int)unpack_dd(a2) + (unsigned int)v42;
            if ( (unsigned int)v42 == 0xFFFFFFFFLL )
              v42 = -1;
          }
          else
          {
            v42 += unpack_dq(a2);
          }
          *(_QWORD *)v41 = v42;
          *(_BYTE *)(v41 + 8) = 0;
          v64 = v42;
          if ( (*(_BYTE *)(a1 + 168) & 4) == 0 )
          {
            bkt = &v64;
            v34 = (std::__detail::_Prime_rehash_policy *)(a1 + 48);
            sub_7740F0((__int64 *)(a1 + 48), &v64);
          }
          ++v8;
          v41 += 9;
          if ( v8 >= v38 )
            return 1;
        }
        return 0;
      }
      return 1;
    }
    return 0;
  }
  v18 = 0;
  v19 = 1;
  if ( v61 )
  {
    while ( *(_QWORD *)a2 < *((_QWORD *)a2 + 1) )
    {
      v20 = unpack_dd(a2);
      v21 = __CFADD__(v18, v20);
      v22 = v18 + v20;
      v23 = v22;
      if ( v21 || v61 < v22 )
        break;
      v24 = *(_QWORD *)(a1 + 24);
      v25 = 9LL * v18;
      v26 = 9LL * v22;
      v27 = v24 + v25;
      v28 = v24 + v26;
      if ( v24 + v25 < (unsigned __int64)(v24 + v26) )
      {
        *(_BYTE *)(v27 + 8) = v19;
        v29 = *(_QWORD *)v27;
        v30 = *(_DWORD *)(a1 + 168);
        if ( v19 )
        {
          while ( 1 )
          {
            v64 = v29;
            if ( (v30 & 4) != 0 )
            {
              v27 += 9LL;
              if ( v27 >= v28 )
                goto LABEL_33;
            }
            else
            {
              v27 += 9LL;
              sub_7740F0((__int64 *)(a1 + 104), &v64);
              if ( v27 >= v28 )
                goto LABEL_33;
            }
            *(_BYTE *)(v27 + 8) = 1;
            v29 = *(_QWORD *)v27;
            v30 = *(_DWORD *)(a1 + 168);
          }
        }
        while ( 1 )
        {
          v64 = v29;
          if ( (v30 & 4) == 0 )
            sub_7740F0((__int64 *)(a1 + 48), &v64);
          v27 += 9LL;
          if ( v27 >= v28 )
            break;
          *(_BYTE *)(v27 + 8) = 0;
          v29 = *(_QWORD *)v27;
          v30 = *(_DWORD *)(a1 + 168);
        }
      }
LABEL_33:
      v19 ^= 1u;
      if ( v23 >= v61 )
        return 1;
      v18 = v23;
    }
    return 0;
  }
  return 1;
}
