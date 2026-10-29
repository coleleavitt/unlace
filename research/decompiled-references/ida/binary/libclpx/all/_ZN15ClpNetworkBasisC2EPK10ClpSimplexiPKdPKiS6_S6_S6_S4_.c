// Alternative name is '_ZN15ClpNetworkBasisC1EPK10ClpSimplexiPKdPKiS6_S6_S6_S4_'
void __fastcall ClpNetworkBasis::ClpNetworkBasis(
        ClpNetworkBasis *this,
        const ClpSimplex *a2,
        int a3,
        const double *a4,
        const int *a5,
        const int *a6,
        const int *a7,
        const int *a8)
{
  int v9; // edx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // rdi
  unsigned __int64 v19; // rdi
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // r10
  __int64 v30; // r9
  __int64 v31; // r11
  int v32; // edx
  __m128d v33; // xmm1
  double v34; // xmm5_8
  int v35; // esi
  int *v36; // rdi
  _DWORD *v37; // r8
  __int64 v38; // rcx
  _DWORD *v39; // rdi
  int v40; // esi
  __int64 v41; // r8
  int v42; // eax
  int *v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r9
  int v46; // edx
  __int64 v47; // rax

  *(_DWORD *)this = a3;
  *((_DWORD *)this + 1) = a3;
  v9 = a3 + 1;
  if ( (unsigned __int64)v9 > 0x1FFFFFFFFFFFFFFELL
    || (*((_QWORD *)this + 2) = operator new[](4LL * v9), v12 = *(_DWORD *)this + 1, v12 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 3) = operator new[](4 * v12), v13 = *(_DWORD *)this + 1, v13 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 4) = operator new[](4 * v13), v14 = *(_DWORD *)this + 1, v14 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 5) = operator new[](4 * v14), v15 = *(_DWORD *)this + 1, v15 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 6) = operator new[](4 * v15), v16 = *(_DWORD *)this + 1, v16 > 0xFFFFFFFFFFFFFFFLL)
    || (*((_QWORD *)this + 7) = operator new[](8 * v16), v17 = *(_DWORD *)this + 1, v17 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 8) = operator new[](4 * v17), v18 = *(_DWORD *)this + 1, v18 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 11) = operator new[](4 * v18), v19 = *(_DWORD *)this + 1, v19 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 12) = operator new[](4 * v19),
        *((_QWORD *)this + 13) = operator new[](*(_DWORD *)this + 1),
        v20 = *(_DWORD *)this + 1,
        v20 > 0x1FFFFFFFFFFFFFFELL)
    || (*((_QWORD *)this + 9) = operator new[](4 * v20), v21 = *(_DWORD *)this + 1, v21 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v22 = operator new[](4 * v21);
  v23 = *(int *)this;
  *((_QWORD *)this + 10) = v22;
  if ( (int)v23 >= 0 )
  {
    v24 = 0;
    while ( 1 )
    {
      *(_DWORD *)(*((_QWORD *)this + 2) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 3) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 4) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 6) + 4 * v24) = -1;
      *(_QWORD *)(*((_QWORD *)this + 7) + 8 * v24) = 0xBFF0000000000000LL;
      *(_DWORD *)(*((_QWORD *)this + 8) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 9) + 4 * v24) = v24;
      *(_DWORD *)(v22 + 4 * v24) = v24;
      *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v24) = -1;
      *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v24) = -1;
      *(_BYTE *)(*((_QWORD *)this + 13) + v24) = 0;
      v23 = *(int *)this;
      if ( (int)v23 < (int)++v24 )
        break;
      v22 = *((_QWORD *)this + 10);
    }
  }
  *(_BYTE *)(*((_QWORD *)this + 13) + v23) = 1;
  v25 = *(int *)this;
  if ( (int)v25 <= 0 )
  {
    v29 = *((_QWORD *)this + 3);
  }
  else
  {
    v26 = *((_QWORD *)this + 7);
    v27 = *((_QWORD *)this + 2);
    v28 = 1;
    v29 = *((_QWORD *)this + 3);
    v30 = *((_QWORD *)this + 6);
    v31 = *((_QWORD *)this + 5);
    do
    {
      v33.m128d_f64[0] = a4[v28 - 1];
      v34 = _mm_cmplt_sd((__m128d)0LL, v33).m128d_f64[0];
      v35 = a5[v28 - 1];
      if ( a7[v28 - 1] > 0 )
        v25 = a5[a8[a6[v28 - 1]]];
      v36 = (int *)(v29 + 4 * v25);
      *(_QWORD *)(v26 + 8LL * v35) = *(_QWORD *)&v34 & 0x3FF0000000000000LL | ~*(_QWORD *)&v34 & 0xBFF0000000000000LL;
      *(_DWORD *)(v27 + 4LL * v35) = v25;
      v37 = (_DWORD *)(v31 + 4LL * v35);
      v38 = *v36;
      if ( (int)v38 >= 0 )
      {
        *v37 = v38;
        *(_DWORD *)(v30 + 4 * v38) = v35;
      }
      else
      {
        *v37 = -1;
      }
      *v36 = v35;
      *(_DWORD *)(v30 + 4LL * v35) = -1;
      v32 = v28;
      v25 = *(int *)this;
      ++v28;
    }
    while ( (int)v25 > v32 );
  }
  v39 = *((_DWORD **)this + 8);
  v40 = 1;
  v41 = *((_QWORD *)this + 12);
  *v39 = *(_DWORD *)(v29 + 4 * v25);
  *(_DWORD *)(v41 + 4LL * *(int *)this) = -1;
LABEL_26:
  v42 = v40 - 1;
LABEL_27:
  v43 = &v39[v40 - 1];
  while ( 1 )
  {
    v44 = *v43;
    if ( (int)v44 >= 0 )
    {
      v45 = *((_QWORD *)this + 5);
      *(_DWORD *)(v41 + 4 * v44) = v42;
      *v43 = *(_DWORD *)(v45 + 4 * v44);
      v46 = *(_DWORD *)(v29 + 4 * v44);
      if ( v46 < 0 )
        goto LABEL_27;
      v47 = v40++;
      v39[v47] = v46;
      goto LABEL_26;
    }
    --v43;
    v40 = v42;
    if ( !v42 )
      break;
    --v42;
  }
  *((_QWORD *)this + 1) = a2;
  ClpNetworkBasis::check(this);
}

