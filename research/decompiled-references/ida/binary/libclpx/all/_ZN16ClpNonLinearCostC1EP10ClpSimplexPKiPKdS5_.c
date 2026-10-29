// Alternative name is '_ZN16ClpNonLinearCostC2EP10ClpSimplexPKiPKdS5_'
void __fastcall ClpNonLinearCost::ClpNonLinearCost(
        ClpNonLinearCost *this,
        ClpSimplex *a2,
        const int *a3,
        const double *a4,
        const double *a5)
{
  int v6; // r12d
  int v7; // eax
  int v8; // r12d
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rbp
  void *v11; // rax
  __int64 v12; // rcx
  double v13; // xmm3_8
  double v14; // xmm9_8
  __int64 (__fastcall ***v15)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64); // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rbp
  int v19; // r13d
  __int64 v20; // rax
  double v21; // xmm1_8
  _BOOL4 v22; // edx
  __int64 v23; // rsi
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // r13d
  unsigned __int64 v28; // r14
  int v29; // r13d
  _DWORD *v30; // rax
  _DWORD *v31; // r15
  __int64 v32; // r9
  __int64 v33; // r8
  __int64 v34; // rdx
  int v35; // esi
  int v36; // edi
  __int64 v37; // r11
  double *v38; // r12
  int v39; // eax
  int v40; // r13d
  __int64 v41; // rax
  double v42; // xmm0_8
  double v43; // xmm5_8
  __int64 v44; // rax
  double *v45; // r10
  double v46; // xmm0_8
  __int64 v47; // rax
  _DWORD *v48; // rdi
  __int64 v49; // rax
  int v50; // ecx
  double v51; // xmm0_8
  int v52; // eax
  int v53; // r10d
  int v54; // ecx
  double v55; // xmm15_8
  __int64 v56; // r14
  double v57; // xmm1_8
  int v58; // ecx
  char *v59; // r11
  char *v60; // r14
  int v61; // r12d
  int v62; // ecx
  _DWORD *v63; // [rsp+0h] [rbp-A8h]
  __int64 v64; // [rsp+8h] [rbp-A0h]
  __int64 v65; // [rsp+18h] [rbp-90h]
  __int64 v66; // [rsp+20h] [rbp-88h]
  __int64 v67; // [rsp+28h] [rbp-80h]
  __int64 v70; // [rsp+40h] [rbp-68h]
  __int64 v72; // [rsp+50h] [rbp-58h]
  char v73[64]; // [rsp+68h] [rbp-40h] BYREF

  *((_QWORD *)this + 12) = a2;
  v6 = *((_DWORD *)a2 + 26);
  *((_DWORD *)this + 12) = v6;
  v7 = *((_DWORD *)a2 + 27);
  *((_BYTE *)this + 148) = 1;
  *((_BYTE *)this + 149) = 1;
  v8 = v7 + v6;
  *((_DWORD *)this + 13) = v7;
  v9 = v8 + 1;
  if ( v9 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_41;
  *((_QWORD *)this + 7) = operator new[](4 * v9);
  if ( (unsigned __int64)v8 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_41;
  v10 = 4LL * v8;
  *((_QWORD *)this + 8) = operator new[](v10);
  v11 = (void *)operator new[](v10);
  *((_QWORD *)this + 9) = v11;
  memset(v11, 0, v10);
  v12 = *((_QWORD *)this + 12);
  v72 = 0;
  v13 = *(double *)v12;
  *((_DWORD *)this + 28) = 0;
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  v14 = *(double *)(v12 + 904);
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((double *)this + 2) = v14;
  v15 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, char *, _QWORD, __int64))(v12 + 160);
  if ( v15 )
  {
    v16 = (**v15)(v15, 0, 0, v73, 0, 2);
    v12 = *((_QWORD *)this + 12);
    v72 = v16;
  }
  v17 = *((int *)this + 13);
  v18 = *(_QWORD *)(v12 + 184);
  v19 = a3[v17];
  v70 = *(_QWORD *)(v12 + 176);
  if ( (int)v17 > 0 )
  {
    v20 = 0;
    do
    {
      v21 = *(double *)(*(_QWORD *)(v12 + 176) + v20);
      v22 = *(double *)(v18 + v20) < 1.0e20;
      v20 += 8;
      v19 += v22 + (v21 > -1.0e20);
    }
    while ( 8LL * (unsigned int)(*((_DWORD *)this + 13) - 1) + 8 != v20 );
  }
  v23 = *(_QWORD *)(v12 + 144);
  v65 = *(_QWORD *)(v12 + 152);
  v24 = *((_DWORD *)this + 12);
  v67 = v23;
  if ( v24 > 0 )
  {
    v25 = 8LL * (unsigned int)(v24 - 1) + 8;
    v26 = 0;
    do
    {
      while ( 1 )
      {
        v27 = (*(double *)(v23 + v26) > -1.0e20) + v19;
        if ( *(double *)(v65 + v26) >= 1.0e20 )
          break;
        v26 += 8;
        v19 = v27 + 3;
        if ( v25 == v26 )
          goto LABEL_12;
      }
      v26 += 8;
      v19 = v27 + 2;
    }
    while ( v25 != v26 );
  }
LABEL_12:
  if ( (unsigned __int64)v19 > 0xFFFFFFFFFFFFFFFLL
    || (v28 = 8LL * v19,
        v29 = (v19 + 31) >> 5,
        *((_QWORD *)this + 10) = operator new[](v28),
        *((_QWORD *)this + 11) = operator new[](v28),
        (unsigned __int64)v29 > 0x1FFFFFFFFFFFFFFELL) )
  {
LABEL_41:
    __cxa_throw_bad_array_new_length();
  }
  v30 = (_DWORD *)operator new[](4LL * v29);
  *((_QWORD *)this + 13) = v30;
  v31 = v30;
  memset(v30, 0, 4LL * v29);
  v63 = *((_DWORD **)this + 7);
  *v63 = 0;
  if ( v8 > 0 )
  {
    v32 = *((_QWORD *)this + 10);
    v33 = *((_QWORD *)this + 11);
    v34 = 0;
    v35 = 0;
    v64 = *((_QWORD *)this + 8);
    v66 = (unsigned int)(v8 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v36 = v35 + 1;
        v37 = 8LL * v35;
        *(_QWORD *)(v32 + v37) = 0xFFEFFFFFFFFFFFFFLL;
        v38 = (double *)(v33 + v37);
        *(_DWORD *)(v64 + 4 * v34) = v35 + 1;
        v39 = *((_DWORD *)this + 13);
        if ( v39 > (int)v34 )
        {
          v43 = *(double *)(v18 + 8 * v34);
          v51 = *(double *)(v70 + 8 * v34);
          if ( v51 > -1.0e30 )
          {
            v37 += 8;
            v31[v35 >> 5] |= 1 << v35;
            v52 = v35 + 2;
            ++v35;
            v36 = v52;
            *v38 = *(double *)(v72 + 8 * v34) * v13 - v14;
            v38 = (double *)(v33 + v37);
            *(double *)(v32 + v37) = v51;
          }
          v53 = a3[v34];
          v54 = a3[v34 + 1];
          if ( v53 >= v54 || (v55 = a4[v53], *(double *)(v18 + 8 * v34) - 0.00000001 <= v55) )
          {
            v62 = v36;
            v45 = v38;
            v36 = v35;
            v44 = v37;
            v35 = v62;
            v46 = -1.797693134862316e308;
          }
          else
          {
            v44 = 8LL * v35 + 8;
            v36 = v54 - v53 + v35;
            v56 = 8LL * v53 - 8LL * v35;
            v57 = -1.797693134862316e308;
            v58 = v35 + 1;
            v59 = (char *)a5 + v56;
            v60 = (char *)a4 + v56;
            while ( 1 )
            {
              *(double *)(v32 + v44 - 8) = v55;
              v61 = v58;
              *(double *)(v33 + v44 - 8) = *(double *)&v59[v44 - 8] * v13;
              v46 = *(double *)&v59[v44 - 8] * v13;
              if ( v57 - 1.0e-12 > v46 )
                *((_BYTE *)this + 148) = 0;
              ++v58;
              v45 = (double *)(v33 + v44);
              v35 = v58;
              if ( v61 == v36 )
                break;
              v55 = *(double *)&v60[v44];
              v57 = v46;
              if ( *(double *)(v18 + 8 * v34) - 0.00000001 <= v55 )
              {
                v36 = v61;
                break;
              }
              v44 += 8;
            }
          }
        }
        else
        {
          v40 = v35 + 2;
          v41 = (int)v34 - v39;
          v42 = *(double *)(v67 + 8 * v41);
          v43 = *(double *)(v65 + 8 * v41);
          v44 = v37 + 8;
          v45 = (double *)(v33 + v37 + 8);
          if ( v42 > -1.0e30 )
          {
            v31[v35 >> 5] |= 1 << v35;
            v44 = v37 + 16;
            *v38 = -v14;
            v36 = v35 + 2;
            v38 = (double *)(v33 + v37 + 8);
            *(double *)(v32 + v37 + 8) = v42;
            v40 = v35 + 3;
            v45 = (double *)(v33 + v37 + 16);
          }
          v46 = 0.0;
          v35 = v40;
          *v38 = 0.0;
        }
        *(double *)(v32 + v44) = v43;
        v31[v36 >> 5] |= 1 << v36;
        *v45 = v46 + v14;
        if ( v43 < 1.0e20 )
        {
          v47 = v35;
          v35 = v36 + 2;
          *(_QWORD *)(v32 + 8 * v47) = 0x7FEFFFFFFFFFFFFFLL;
          *(_QWORD *)(v33 + 8 * v47) = 0x4A511B0EC57E649ALL;
        }
        v48 = (_DWORD *)(v64 + 4 * v34);
        v49 = (int)v63[v34];
        v50 = v63[v34];
        if ( *(double *)(v32 + 8 * v49) == -1.797693134862316e308 )
          break;
        v31[v50 >> 5] |= 1 << v50;
        *v48 = v50 + 1;
        v63[++v34] = v35;
        if ( v66 == v34 )
          goto LABEL_24;
      }
      *v48 = v49;
      v63[++v34] = v35;
    }
    while ( v34 != v66 );
  }
LABEL_24:
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 36) = 1;
}

