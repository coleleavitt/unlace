_BOOL8 __fastcall ClpSimplexOther::restoreFromDual(void **this, const ClpSimplex *a2, char a3)
{
  __int64 (__fastcall ***v5)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // r11
  __int64 v9; // r14
  __int64 v10; // r13
  int v11; // r9d
  __int64 v12; // rdx
  double *v13; // r10
  double v14; // xmm2_8
  __int64 v15; // r12
  double v16; // xmm11_8
  double v17; // xmm1_8
  __int64 v18; // rdi
  double v19; // xmm0_8
  double *v20; // r8
  double v21; // xmm1_8
  char v22; // si
  double v23; // xmm0_8
  double v24; // xmm0_8
  __int64 v25; // rsi
  _BYTE *v26; // rdi
  char v27; // si
  __int64 v28; // rdx
  __int64 v29; // rax
  _BYTE *v30; // rdx
  _QWORD *v31; // rdx
  double v32; // xmm0_8
  double v33; // xmm1_8
  double *v34; // rsi
  int v35; // edi
  __int64 v36; // r8
  char v37; // cl
  double *v38; // r10
  _BYTE *v39; // rdi
  __int64 (__fastcall ***v40)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  const void *v41; // rsi
  size_t v42; // rbp
  _BOOL4 v43; // r12d
  double v45; // xmm0_8
  double v46; // xmm0_8
  _BYTE *v47; // rdx
  double v48; // xmm2_8
  __int64 v49; // rdi
  double v50; // xmm2_8
  double v51; // xmm0_8
  _BYTE *v52; // rdi
  char v53; // r8
  char v54; // si
  char v55; // r8
  _BYTE *v56; // rdi
  double v57; // xmm1_8
  char v58; // si
  unsigned __int64 v59; // r9
  __int64 v60; // rax
  int v61; // edi
  int v62; // r10d
  double *v63; // rsi
  unsigned int v64; // ecx
  unsigned int v65; // r8d
  __int64 v66; // rax
  unsigned int v67; // r8d
  __int128 v68; // xmm0
  unsigned int v69; // eax
  double *v70; // rcx
  int v71; // eax
  _BYTE *v72; // rdx
  const void *v73; // r13
  unsigned __int64 v74; // rbp
  unsigned __int64 v75; // rbp
  void *v76; // r14
  const void *v77; // r13
  unsigned __int64 v78; // rbp
  unsigned __int64 v79; // rbp
  void *v80; // r15
  unsigned __int64 v81; // rbp
  unsigned __int64 v82; // rbp
  void *v83; // r13
  unsigned __int64 v84; // rdx
  void *v85; // rbp
  _BYTE *v86; // rdx
  void *src; // [rsp+0h] [rbp-58h]
  void *srca; // [rsp+0h] [rbp-58h]
  __int64 na; // [rsp+8h] [rbp-50h]
  _BYTE v91[64]; // [rsp+18h] [rbp-40h] BYREF

  ClpSimplex::createStatus((ClpSimplex *)this);
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))*(this + 20);
  v6 = 0;
  if ( v5 )
    v6 = (**v5)(v5, 0, 0, v91, 0, 2);
  v7 = *((_QWORD *)a2 + 16);
  v8 = *((_QWORD *)a2 + 17);
  v9 = *((_QWORD *)a2 + 15);
  v10 = *((_QWORD *)a2 + 14);
  v11 = *((_DWORD *)this + 26);
  if ( *((int *)this + 27) > 0 )
  {
    v12 = 0;
    while ( 1 )
    {
      v18 = *((_QWORD *)a2 + 33);
      v19 = *(double *)this * *(double *)(v6 + 8 * v12);
      v20 = (double *)((char *)*(this + 23) + 8 * v12);
      v21 = *v20;
      v22 = *(_BYTE *)(v18 + (int)v12 + *((_DWORD *)a2 + 27)) & 7;
      if ( *v20 >= 1.0e20 )
      {
        if ( v22 != 1 )
          goto LABEL_15;
LABEL_18:
        v24 = v19 - *(double *)(v10 + 8 * v12);
        v25 = (__int64)*(this + 17);
LABEL_19:
        *(double *)(v25 + 8 * v12) = v24;
        if ( *v20 > 1.0e20 )
        {
          v57 = *((double *)*(this + 22) + v12);
          if ( v57 <= -1.0e20 )
          {
            *((_BYTE *)*(this + 33) + v12) &= 0xF8u;
            *((_QWORD *)*(this + 15) + v12) = 0;
            goto LABEL_12;
          }
          v49 = v12;
          if ( *v20 > v57 )
            goto LABEL_56;
          goto LABEL_65;
        }
        v26 = (char *)*(this + 33) + v12;
        v27 = *v26 & 0xF8 | 2;
        goto LABEL_21;
      }
      v13 = (double *)((char *)*(this + 22) + 8 * v12);
      v14 = *v13;
      if ( *v13 <= -1.0e20 )
      {
        if ( v22 != 1 )
        {
LABEL_15:
          *((_BYTE *)*(this + 33) + v12) = *((_BYTE *)*(this + 33) + v12) & 0xF8 | 1;
          v23 = *((double *)*(this + 22) + v12);
          if ( v23 <= -1.0e20 )
          {
            v45 = *((double *)*(this + 23) + v12);
            if ( v45 >= 1.0e20 )
              v46 = -*(double *)(v7 + 8 * v12);
            else
              v46 = v45 - *(double *)(v7 + 8 * v12);
            *((double *)*(this + 15) + v12) = v46;
          }
          else
          {
            *((double *)*(this + 15) + v12) = v23 - *(double *)(v7 + 8 * v12);
          }
          goto LABEL_11;
        }
        goto LABEL_18;
      }
      v15 = v11;
      v16 = *(double *)(v8 + 8LL * v11);
      if ( fabs(v21) <= fabs(v14) )
      {
        ++v11;
        v17 = v14 + v16;
        if ( v22 == 1 )
          goto LABEL_53;
LABEL_8:
        if ( v17 == 1.797693134862316e308 )
          goto LABEL_15;
        if ( (*(_BYTE *)(v18 + v15) & 7) == 1 )
        {
          *((double *)*(this + 17) + v12) = v19 - *(double *)(v10 + 8 * v12);
          v50 = *v13;
          if ( fabs(v17 - *v13) < 0.00001 )
          {
            v51 = *v20;
            v52 = (char *)*(this + 33) + v12;
            v53 = *v52 & 0xF8;
            v54 = v53 | 5;
            v55 = v53 | 3;
            if ( v51 > v50 )
              v54 = v55;
LABEL_60:
            *v52 = v54;
LABEL_61:
            *((_QWORD *)*(this + 15) + v12) = *((_QWORD *)*(this + 22) + v12);
            goto LABEL_12;
          }
          v26 = (char *)*(this + 33) + v12;
          v58 = *v26 & 0xF8;
          if ( fabs(v17 - *v20) >= 0.00001 )
          {
            *v26 = v58 | 4;
            *((double *)*(this + 15) + v12) = v17;
            goto LABEL_12;
          }
          v27 = v58 | 5;
          if ( *v20 > v50 )
            v27 = *v26 & 0xF8 | 2;
          goto LABEL_21;
        }
        *((_BYTE *)*(this + 33) + v12) = *((_BYTE *)*(this + 33) + v12) & 0xF8 | 1;
        *((double *)*(this + 15) + v12) = v17;
LABEL_11:
        *((_QWORD *)*(this + 17) + v12) = 0;
LABEL_12:
        if ( *((_DWORD *)this + 27) <= (int)++v12 )
          goto LABEL_23;
      }
      else
      {
        ++v11;
        v17 = v21 + v16;
        if ( v22 != 1 )
          goto LABEL_8;
LABEL_53:
        v25 = (__int64)*(this + 17);
        v24 = v19 - *(double *)(v10 + 8 * v12);
        if ( v17 == 1.797693134862316e308 )
          goto LABEL_19;
        *(double *)(v25 + 8 * v12) = v24;
        v48 = *v13;
        if ( fabs(v17 - *v13) < 0.00001 )
        {
          v49 = v12;
          if ( *v20 > v48 )
          {
LABEL_56:
            *((_BYTE *)*(this + 33) + v49) = *((_BYTE *)*(this + 33) + v49) & 0xF8 | 3;
            goto LABEL_61;
          }
LABEL_65:
          v52 = (char *)*(this + 33) + v49;
          v54 = *v52 & 0xF8 | 5;
          goto LABEL_60;
        }
        if ( fabs(v17 - *v20) >= 0.00001 )
        {
          *((_BYTE *)*(this + 33) + v12) = *((_BYTE *)*(this + 33) + v12) & 0xF8 | 4;
          *((double *)*(this + 15) + v12) = v17;
          goto LABEL_12;
        }
        if ( *v20 > v48 )
        {
          *((_BYTE *)*(this + 33) + v12) = *((_BYTE *)*(this + 33) + v12) & 0xF8 | 2;
          goto LABEL_22;
        }
        v26 = (char *)*(this + 33) + v12;
        v27 = *v26 & 0xF8 | 5;
LABEL_21:
        *v26 = v27;
LABEL_22:
        *((_QWORD *)*(this + 15) + v12) = *((_QWORD *)*(this + 23) + v12);
        if ( *((_DWORD *)this + 27) <= (int)++v12 )
        {
LABEL_23:
          v28 = *((int *)this + 26);
          goto LABEL_24;
        }
      }
    }
  }
  v28 = v11;
LABEL_24:
  if ( (int)v28 <= 0 )
    goto LABEL_34;
  v29 = 0;
  do
  {
    while ( 1 )
    {
      v35 = v29;
      v36 = 8 * v29;
      v37 = *(_BYTE *)(*((_QWORD *)a2 + 33) + v29) & 7;
      if ( v37 != 1 )
      {
        v30 = (char *)*(this + 33) + (int)v29 + *((_DWORD *)this + 27);
        *v30 = *v30 & 0xF8 | 1;
        v31 = (char *)*(this + 16) + v36;
        *v31 = 0;
        v32 = *((double *)*(this + 18) + v29);
        if ( v32 < -1.0e20 )
        {
          *((double *)*(this + 14) + v29) = *((double *)*(this + 19) + v29) + *(double *)(v8 + 8 * v29);
        }
        else
        {
          v33 = *((double *)*(this + 19) + v29);
          v34 = (double *)((char *)*(this + 14) + v36);
          if ( v33 <= 1.0e20 )
            goto LABEL_45;
          *v34 = v32 + *(double *)(v8 + 8 * v29);
        }
        goto LABEL_29;
      }
      v31 = (char *)*(this + 16) + v36;
      *v31 = *(_QWORD *)(v9 + 8 * v29);
      v32 = *((double *)*(this + 18) + v29);
      v38 = (double *)((char *)*(this + 19) + v36);
      v34 = (double *)((char *)*(this + 14) + v36);
      if ( v32 < -1.0e20 )
        break;
      v33 = *v38;
      if ( *v38 <= 1.0e20 )
      {
LABEL_45:
        if ( v32 == v33 )
        {
          *v34 = v32;
          if ( v37 == 1 )
          {
            v47 = (char *)*(this + 33) + *((_DWORD *)this + 27) + (int)v29;
            *v47 = *v47 & 0xF8 | 5;
          }
        }
        else
        {
          if ( v37 == 1 )
          {
            *v34 = v33;
            v72 = (char *)*(this + 33) + *((_DWORD *)this + 27) + (int)v29;
            *v72 = *v72 & 0xF8 | 2;
          }
          else if ( (*(_BYTE *)(*((_QWORD *)a2 + 33) + v11) & 7) == 1 )
          {
            *v34 = v32;
            v86 = (char *)*(this + 33) + *((_DWORD *)this + 27) + (int)v29;
            *v86 = *v86 & 0xF8 | 3;
            *((_QWORD *)*(this + 16) + v29) = *(_QWORD *)(v9 + 8LL * v11);
          }
          else
          {
            *v34 = v32 - *(double *)(v8 + 8 * v29);
            *v31 = 0;
          }
          ++v11;
        }
        goto LABEL_29;
      }
      *v34 = v32;
      v56 = (char *)*(this + 33) + *((_DWORD *)this + 27) + (int)v29;
      *v56 = *v56 & 0xF8 | 3;
LABEL_29:
      v28 = *((int *)this + 26);
      if ( (int)v28 <= (int)++v29 )
        goto LABEL_33;
    }
    ++v29;
    *v34 = *v38;
    v39 = (char *)*(this + 33) + *((_DWORD *)this + 27) + v35;
    *v39 = *v39 & 0xF8 | 2;
    v28 = *((int *)this + 26);
  }
  while ( (int)v28 > (int)v29 );
LABEL_33:
  if ( *(double *)this < 0.0 && (int)v28 > 0 )
  {
    v59 = (unsigned __int64)*(this + 16);
    v60 = (v59 >> 3) & 1;
    if ( 2 - (unsigned int)((_DWORD)v60 == 0) > (int)v28 - 1 )
    {
      v69 = 0;
      goto LABEL_78;
    }
    v61 = 0;
    if ( (_DWORD)v60 )
    {
      v61 = 1;
      *(double *)v59 = -*(double *)v59;
    }
    v62 = v28 - v60;
    v63 = (double *)(v59 + 8 * v60);
    v64 = 0;
    v65 = v28 - v60;
    v66 = 0;
    v67 = v65 >> 1;
    do
    {
      ++v64;
      *(double *)&v68 = -v63[v66];
      *((double *)&v68 + 1) = -v63[v66 + 1];
      *(_OWORD *)&v63[v66] = v68;
      v66 += 2;
    }
    while ( v67 > v64 );
    v69 = (v62 & 0xFFFFFFFE) + v61;
    if ( (v62 & 0xFFFFFFFE) != v62 )
    {
LABEL_78:
      v70 = (double *)(v59 + 8LL * (int)v69);
      v71 = v69 + 1;
      *v70 = -*v70;
      if ( (int)v28 > v71 )
        *(double *)(v59 + 8LL * v71) = -*(double *)(v59 + 8LL * v71);
    }
  }
LABEL_34:
  memset(*(this + 14), 0, 8 * v28);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(*(_QWORD *)*(this + 24) + 360LL))(
    *(this + 24),
    *(this + 15),
    *(this + 14),
    1.0);
  v40 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))*(this + 20);
  v41 = nullptr;
  v42 = 8LL * *((int *)this + 27);
  if ( v40 )
    v41 = (const void *)(**v40)(v40, 0, 0, v91, 0, 2);
  v43 = 1;
  memcpy(*(this + 17), v41, v42);
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, double))(*(_QWORD *)*(this + 24) + 376LL))(
    *(this + 24),
    *(this + 16),
    *(this + 17),
    -1.0);
  ClpSimplex::checkSolutionInternal((ClpSimplex *)this);
  if ( *((double *)this + 111) <= 0.00001 )
    v43 = *((double *)this + 112) > 0.00001;
  if ( a3 )
  {
    v73 = *(this + 15);
    v74 = *((int *)this + 27);
    if ( v73 )
    {
      if ( v74 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_115;
      v75 = 8 * v74;
      v76 = (void *)operator new[](v75);
      memcpy(v76, v73, v75);
    }
    else
    {
      v76 = nullptr;
    }
    v77 = *(this + 14);
    v78 = *((int *)this + 26);
    if ( v77 )
    {
      if ( v78 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_115;
      v79 = 8 * v78;
      v80 = (void *)operator new[](v79);
      memcpy(v80, v77, v79);
    }
    else
    {
      v80 = nullptr;
    }
    v81 = *((int *)this + 27);
    src = *(this + 17);
    if ( src )
    {
      if ( v81 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_115;
      v82 = 8 * v81;
      v83 = (void *)operator new[](v82);
      memcpy(v83, src, v82);
    }
    else
    {
      v83 = nullptr;
    }
    v84 = *((int *)this + 26);
    srca = *(this + 16);
    if ( !srca )
    {
      v85 = nullptr;
      goto LABEL_96;
    }
    if ( v84 <= 0xFFFFFFFFFFFFFFFLL )
    {
      na = 8 * v84;
      v85 = (void *)operator new[](8 * v84);
      memcpy(v85, srca, na);
LABEL_96:
      ClpSimplex::dual((ClpSimplex *)this, 0, 0);
      if ( v76 )
        operator delete[](v76);
      if ( v80 )
        operator delete[](v80);
      if ( v83 )
        operator delete[](v83);
      if ( v85 )
        operator delete[](v85);
      return v43;
    }
LABEL_115:
    __cxa_throw_bad_array_new_length();
  }
  return v43;
}

