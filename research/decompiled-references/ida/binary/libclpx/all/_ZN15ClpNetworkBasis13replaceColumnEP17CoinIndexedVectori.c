__int64 __fastcall ClpNetworkBasis::replaceColumn(ClpSimplex **this, CoinIndexedVector *a2, int a3)
{
  __int64 v4; // rbx
  int *v5; // r14
  int v6; // r15d
  int v7; // r13d
  int v8; // ebx
  int v9; // r14d
  __int64 v10; // rbp
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __m128d v14; // xmm1
  __m128d v15; // xmm3
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // rax
  __int64 v19; // rdi
  int *v20; // r14
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // rsi
  double *v24; // r9
  int v25; // r10d
  int v26; // eax
  __int64 v27; // rsi
  double *v28; // rdx
  __int64 v29; // r9
  __int64 v30; // rdx
  __int64 v31; // r13
  __int64 v32; // r15
  int *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r14
  int *v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r10
  int *v39; // r12
  int v40; // r11d
  __int64 v41; // rdi
  int v42; // edx
  int *v43; // rbp
  __int64 v44; // rsi
  int *v45; // rdi
  int *v46; // rax
  int v47; // ebx
  __int64 v48; // rsi
  _DWORD *v49; // r9
  int v50; // esi
  ClpSimplex *v51; // rdi
  __int64 v52; // rax
  int v53; // edx
  int v54; // r8d
  int v55; // eax
  int *v56; // rdx
  __int64 v57; // rcx
  int v59; // edx
  __int64 v60; // rax
  __m128d v61; // [rsp+0h] [rbp-78h]
  __int64 v62; // [rsp+0h] [rbp-78h]
  __int64 v63; // [rsp+0h] [rbp-78h]
  __int64 v64; // [rsp+10h] [rbp-68h]
  __int64 v65; // [rsp+10h] [rbp-68h]
  double v66; // [rsp+18h] [rbp-60h]
  int *v67; // [rsp+18h] [rbp-60h]
  char v68; // [rsp+27h] [rbp-51h]
  int *v69; // [rsp+28h] [rbp-50h]
  __int64 v70; // [rsp+28h] [rbp-50h]
  ClpSimplex **v71; // [rsp+30h] [rbp-48h]

  v4 = a3;
  ClpSimplex::unpack(*(this + 1), a2, *((_DWORD *)*(this + 1) + 288));
  v5 = *(int **)a2;
  v6 = **(_DWORD **)a2;
  if ( *((_DWORD *)a2 + 4) == 2 )
    v7 = v5[1];
  else
    v7 = *(_DWORD *)this;
  v61 = (__m128d)_mm_loadl_epi64((const __m128i *)&xmmword_289BF0);
  v66 = *(double *)(*((_QWORD *)a2 + 1) + 8LL * v6);
  CoinIndexedVector::clear(a2);
  ClpSimplex::unpack(*(this + 1), a2, *(_DWORD *)(*((_QWORD *)*(this + 1) + 157) + 4 * v4));
  v8 = *v5;
  if ( *((_DWORD *)a2 + 4) == 2 )
    v9 = v5[1];
  else
    v9 = *(_DWORD *)this;
  v10 = v8;
  CoinIndexedVector::clear(a2);
  v11 = v8;
  v12 = 4LL * v8;
  v13 = (__int64)*(this + 2);
  v14 = (__m128d)(unsigned __int64)(*(_QWORD *)&v66 ^ *(_QWORD *)&v61.m128d_f64[0]);
  v15 = v61;
  if ( *(_DWORD *)(v13 + v12) != v9 )
  {
    v11 = v9;
    v8 = v9;
    v12 = 4LL * v9;
    v10 = v9;
  }
  v16 = (__int64)*(this + 1);
  v68 = 0;
  if ( *(int *)(v16 + 308) >= -2 && *(int *)(*(_QWORD *)(v16 + 344) + 104LL) > 10 )
  {
    v70 = *(_QWORD *)&v66 ^ *(_QWORD *)&v61.m128d_f64[0];
    v63 = v12;
    v65 = v11;
    ClpNetworkBasis::print((ClpNetworkBasis *)this);
    v13 = (__int64)*(this + 2);
    v68 = 1;
    v12 = v63;
    v11 = v65;
    v14 = (__m128d)(unsigned __int64)v70;
  }
  v17 = *(_DWORD *)this;
  if ( v7 == *(_DWORD *)this )
    goto LABEL_15;
  if ( v8 != v7 )
  {
    v18 = v7;
    while ( 1 )
    {
      LODWORD(v18) = *(_DWORD *)(v13 + 4 * v18);
      if ( (_DWORD)v18 == v17 )
        break;
      if ( v8 == (_DWORD)v18 )
        goto LABEL_21;
    }
LABEL_15:
    v19 = (__int64)*(this + 7);
    v20 = (int *)*(this + 8);
    v21 = -1;
    if ( v6 == v17 )
      goto LABEL_22;
    goto LABEL_16;
  }
LABEL_21:
  v19 = (__int64)*(this + 7);
  v20 = (int *)*(this + 8);
  v21 = v7;
  if ( v7 >= 0 )
    goto LABEL_22;
  if ( v6 == v17 )
    goto LABEL_23;
LABEL_16:
  if ( v8 == v6 )
  {
    *v20 = v7;
    v14.m128d_f64[0] = v66;
    v26 = 2;
    v27 = 1;
    goto LABEL_28;
  }
  v22 = v6;
  while ( 1 )
  {
    LODWORD(v22) = *(_DWORD *)(v13 + 4 * v22);
    if ( (_DWORD)v22 == v17 )
      break;
    if ( v8 == (_DWORD)v22 )
    {
      *v20 = v7;
      v21 = v6;
      v14 = (__m128d)*(unsigned __int64 *)&v66;
      goto LABEL_24;
    }
  }
LABEL_22:
  if ( (_DWORD)v21 == v6 )
  {
    v14 = (__m128d)*(unsigned __int64 *)&v66;
    *v20 = v7;
    if ( v8 != (_DWORD)v21 )
    {
LABEL_24:
      v23 = 2;
      do
      {
        while ( 1 )
        {
          v24 = (double *)(v19 + 8 * v21);
          v25 = v23;
          v20[v23 - 1] = v21;
          if ( *v24 * v14.m128d_f64[0] < 0.0 )
            break;
          v21 = *(int *)(v13 + 4 * v21);
          ++v23;
          v14 = _mm_xor_pd(v14, v15);
          if ( v8 == (_DWORD)v21 )
            goto LABEL_27;
        }
        v21 = *(int *)(v13 + 4 * v21);
        ++v23;
        *(_QWORD *)v24 ^= *(_QWORD *)&v15.m128d_f64[0];
      }
      while ( (_DWORD)v21 != v8 );
LABEL_27:
      v26 = v25 + 1;
      v27 = v25;
      goto LABEL_28;
    }
    goto LABEL_57;
  }
LABEL_23:
  *v20 = v6;
  if ( v8 != (_DWORD)v21 )
    goto LABEL_24;
LABEL_57:
  v26 = 2;
  v27 = 1;
LABEL_28:
  v28 = (double *)(v19 + 8 * v11);
  v20[v27] = v8;
  if ( v14.m128d_f64[0] * *v28 < 0.0 )
    *(_QWORD *)v28 ^= *(_QWORD *)&v15.m128d_f64[0];
  v29 = *(int *)(v13 + v12);
  v30 = v26;
  v69 = v20;
  v31 = (__int64)*(this + 10);
  v64 = (__int64)*(this + 5);
  v32 = (__int64)*(this + 6);
  v71 = this;
  v62 = (__int64)*(this + 3);
  v33 = &v20[v30 - 2];
  v34 = (__int64)&v20[v30 - 3];
  v35 = (__int64)*(this + 9);
  v67 = (int *)(v34 - 4LL * (unsigned int)(v26 - 2));
  while ( 1 )
  {
    v38 = v33[1];
    v39 = (int *)(v31 + 4 * v10);
    v40 = *v33;
    v41 = *v39;
    v42 = v33[1];
    v43 = (int *)(v31 + 4 * v38);
    v44 = *v43;
    *v39 = v44;
    *v43 = v41;
    *(_DWORD *)(v35 + 4 * v41) = v38;
    v45 = (int *)(v32 + 4 * v38);
    *(_DWORD *)(v35 + 4 * v44) = v8;
    v46 = (int *)(v64 + 4 * v38);
    v47 = *v45;
    v48 = *v46;
    if ( *v45 >= 0 )
    {
      *(_DWORD *)(v64 + 4LL * v47) = v48;
      if ( (int)v48 >= 0 )
        *(_DWORD *)(v32 + 4 * v48) = v47;
    }
    else
    {
      v49 = (_DWORD *)(v62 + 4 * v29);
      if ( (int)v48 < 0 )
      {
        *v49 = -1;
      }
      else
      {
        *(_DWORD *)(v32 + 4LL * (int)v48) = v47;
        *v49 = v48;
      }
    }
    *v45 = -1;
    *v46 = -1;
    v36 = (int *)(v62 + 4LL * v40);
    v37 = *v36;
    if ( (int)v37 < 0 )
      break;
    --v33;
    *v46 = v37;
    *(_DWORD *)(v32 + 4 * v37) = v42;
    *v36 = v42;
    *v45 = -1;
    *(_DWORD *)(v13 + 4 * v38) = v40;
    if ( v33 == v67 )
      goto LABEL_42;
LABEL_35:
    v10 = v42;
    v29 = v42;
    v8 = v42;
  }
  --v33;
  *v36 = v42;
  *v45 = -1;
  *(_DWORD *)(v13 + 4 * v38) = v40;
  if ( v67 != v33 )
    goto LABEL_35;
LABEL_42:
  v50 = 1;
  v51 = v71[12];
  v52 = v69[1];
  v53 = *((_DWORD *)v51 + *(int *)(v13 + 4 * v52));
  *v69 = v52;
  v54 = v53 + 1;
LABEL_43:
  v55 = v50 - 1;
LABEL_44:
  v56 = &v69[v50 - 1];
  while ( 1 )
  {
    v57 = *v56;
    if ( (int)v57 >= 0 )
    {
      *((_DWORD *)v51 + v57) = v54 + v55;
      *v56 = *(_DWORD *)(v64 + 4 * v57);
      v59 = *(_DWORD *)(v62 + 4 * v57);
      if ( v59 < 0 )
        goto LABEL_44;
      v60 = v50++;
      v69[v60] = v59;
      goto LABEL_43;
    }
    --v56;
    v50 = v55;
    if ( !v55 )
      break;
    --v55;
  }
  if ( v68 )
    ClpNetworkBasis::print((ClpNetworkBasis *)v71);
  return 0;
}

