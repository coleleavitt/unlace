__int64 __fastcall ClpSimplex::deleteRim(ClpSimplex *this, int a2)
{
  int v3; // r12d
  int v4; // ebp
  void *v5; // rdi
  int v6; // eax
  double v7; // xmm1_8
  double v8; // xmm0_8
  __int64 v9; // r9
  double v10; // xmm5_8
  double v11; // xmm6_8
  int v12; // ecx
  int v13; // edx
  __int64 v14; // rax
  double v15; // xmm8_8
  double v16; // xmm9_8
  double v17; // xmm0_8
  double v18; // xmm1_8
  double v19; // xmm9_8
  double v20; // xmm8_8
  double v21; // xmm10_8
  double v22; // xmm8_8
  double v23; // xmm0_8
  double v24; // xmm2_8
  double v25; // xmm5_8
  int v26; // edi
  int v27; // ecx
  __int64 v28; // rax
  double v29; // xmm6_8
  double v30; // xmm9_8
  double v31; // xmm0_8
  double v32; // xmm6_8
  double v33; // xmm1_8
  double v34; // xmm9_8
  double v35; // xmm6_8
  double v36; // xmm0_8
  __int64 v37; // rdx
  __int64 v38; // rax
  double *v39; // rdx
  double v40; // xmm0_8
  double v41; // xmm2_8
  double v42; // xmm1_8
  __int64 v43; // rax
  double v44; // xmm2_8
  double *v45; // rdx
  double v46; // xmm0_8
  double v47; // xmm1_8
  double v48; // xmm0_8
  __int64 v49; // rax
  double *v50; // rdx
  __int64 v51; // rax
  double *v52; // rdx
  int v53; // eax
  void *v54; // r13
  bool v55; // zf
  __int64 v57; // r8
  __int64 v58; // rax
  double v59; // xmm1_8
  __int64 v60; // rdi
  double v61; // xmm9_8
  double v62; // xmm1_8
  double v63; // xmm0_8
  double v64; // xmm9_8
  double v65; // xmm2_8
  double v66; // xmm10_8
  double v67; // xmm9_8
  double v68; // xmm2_8
  int v69; // eax
  __int64 v70; // rax
  __int64 v71; // rdx
  double *v72; // rax
  double v73; // xmm0_8
  __int64 v74; // rdi
  __int64 v75; // rax
  double v76; // xmm1_8
  __int64 v77; // rdx
  double v78; // xmm0_8
  __int64 v79; // rdx
  double v80; // xmm6_8
  __int64 v81; // r8
  double v82; // xmm9_8
  double v83; // xmm0_8
  double v84; // xmm6_8
  double v85; // xmm1_8
  double v86; // xmm9_8
  double v87; // xmm6_8
  double v88; // xmm0_8
  __int64 v89; // rax
  __int64 v90; // rdx
  double *v91; // rax
  double v92; // xmm0_8
  _BYTE v93[48]; // [rsp+18h] [rbp-30h] BYREF

  v3 = *((_DWORD *)this + 26);
  v4 = *((_DWORD *)this + 27);
  if ( !v3 || !v4 )
  {
    v3 = 0;
    if ( *(int *)(*((_QWORD *)this + 20) + 16LL) < 2 )
      v4 = 0;
  }
  if ( (unsigned int)(*((_DWORD *)this + 80) - 1) > 1 )
  {
    v5 = *((void **)this + 27);
    if ( v5 )
      operator delete[](v5);
    *((_QWORD *)this + 27) = 0;
  }
  v6 = *((_DWORD *)this + 182);
  *((_QWORD *)this + 107) = 0x3FF0000000000000LL;
  if ( (v6 & 0x400000) != 0 )
  {
    *((_DWORD *)this + 182) = v6 & 0xFFBFFFFF;
    *((_QWORD *)this + 110) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 4) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 109) = 0x3E7AD7F29ABCAF48LL;
    *((_QWORD *)this + 3) = 0x3E7AD7F29ABCAF48LL;
  }
  v7 = *((double *)this + 11);
  v8 = *((double *)this + 12);
  if ( *((_QWORD *)this + 28) && *((_QWORD *)this + 150) )
  {
    v9 = *((_QWORD *)this + 31);
    v10 = 1.0 / v7;
    v11 = 1.0 / v8;
    if ( v4 <= 0 )
    {
      v12 = 0;
      v13 = 0;
    }
    else
    {
      v12 = 0;
      v13 = 0;
      v14 = 0;
      do
      {
        v17 = *(double *)(*((_QWORD *)this + 29) + v14);
        v18 = *(double *)(*((_QWORD *)this + 152) + v14);
        v19 = *(double *)(*((_QWORD *)this + 125) + v14);
        v20 = *(double *)(*((_QWORD *)this + 128) + v14);
        if ( v19 > -1.0e20 || v20 < 1.0e20 )
        {
          v21 = *((double *)this + 110);
          if ( v19 - v21 <= v18 && v18 <= v21 + v20 )
            *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v18 - v19, v20 - v18));
        }
        *(double *)(*((_QWORD *)this + 15) + v14) = v17 * v18 * v11;
        v22 = *((double *)this + 110);
        v23 = *(double *)(*((_QWORD *)this + 15) + v14);
        if ( *(double *)(*((_QWORD *)this + 22) + v14) - v22 > v23 )
          ++v13;
        else
          v13 += v23 > v22 + *(double *)(*((_QWORD *)this + 23) + v14);
        *(double *)(*((_QWORD *)this + 17) + v14) = *(double *)(*((_QWORD *)this + 149) + v14)
                                                  * v10
                                                  * *(double *)(v9 + v14);
        v15 = *((double *)this + 110);
        v16 = *(double *)(*((_QWORD *)this + 17) + v14);
        if ( v23 > *(double *)(*((_QWORD *)this + 22) + v14) + v15 )
          v12 += v16 > *((double *)this + 109);
        if ( *(double *)(*((_QWORD *)this + 23) + v14) - v15 > v23 )
          v12 += -*((double *)this + 109) > v16;
        v14 += 8;
      }
      while ( 8LL * (unsigned int)(v4 - 1) + 8 != v14 );
    }
    v57 = *((_QWORD *)this + 30);
    if ( v3 > 0 )
    {
      v58 = 0;
      do
      {
        v62 = *(double *)(*((_QWORD *)this + 28) + v58);
        v63 = *(double *)(*((_QWORD *)this + 151) + v58);
        v64 = *(double *)(*((_QWORD *)this + 124) + v58);
        v65 = *(double *)(*((_QWORD *)this + 127) + v58);
        if ( v64 > -1.0e20 || v65 < 1.0e20 )
        {
          v66 = *((double *)this + 110);
          if ( v64 - v66 <= v63 && v63 <= v66 + v65 )
            *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v63 - v64, v65 - v63));
        }
        *(double *)(*((_QWORD *)this + 14) + v58) = v63 * v11 * *(double *)(v57 + v58);
        v67 = *((double *)this + 110);
        v68 = *(double *)(*((_QWORD *)this + 14) + v58);
        if ( *(double *)(*((_QWORD *)this + 18) + v58) - v67 > v68 )
          ++v13;
        else
          v13 += v68 > v67 + *(double *)(*((_QWORD *)this + 19) + v58);
        *(double *)(v58 + *((_QWORD *)this + 16)) = *(double *)(v58 + *((_QWORD *)this + 16)) * (v62 * v10);
        v59 = *(double *)(*((_QWORD *)this + 16) + v58);
        v60 = *((_QWORD *)this + 21);
        if ( v60 )
          v59 = v59 + *(double *)(v60 + v58);
        v61 = *((double *)this + 110);
        if ( v68 > *(double *)(*((_QWORD *)this + 18) + v58) + v61 )
          v12 += v59 > *((double *)this + 109);
        if ( *(double *)(*((_QWORD *)this + 19) + v58) - v61 > v68 )
          v12 += -*((double *)this + 109) > v59;
        v58 += 8;
      }
      while ( 8LL * (unsigned int)(v3 - 1) + 8 != v58 );
    }
    if ( !*((_QWORD *)this + 40) )
    {
      if ( v13 )
      {
        *((_DWORD *)this + 81) = v12 == 0 ? 2 : 4;
        v69 = *((_DWORD *)this + 80);
        if ( v69 != 2 )
          goto LABEL_102;
LABEL_139:
        v89 = *((_QWORD *)this + 27);
        if ( v89 && v4 > 0 )
        {
          v90 = 0;
          while ( 1 )
          {
            v91 = (double *)(v90 + v89);
            v92 = *v91 * *(double *)(*((_QWORD *)this + 29) + v90);
            v90 += 8;
            *v91 = v92;
            if ( 8LL * (unsigned int)(v4 - 1) + 8 == v90 )
              break;
            v89 = *((_QWORD *)this + 27);
          }
        }
        goto LABEL_64;
      }
      if ( v12 )
        *((_DWORD *)this + 81) = 3;
    }
    v69 = *((_DWORD *)this + 80);
    if ( v69 != 2 )
    {
LABEL_102:
      if ( v69 == 1 )
      {
        v70 = *((_QWORD *)this + 27);
        if ( v70 )
        {
          if ( v3 > 0 )
          {
            v71 = 0;
            while ( 1 )
            {
              v72 = (double *)(v71 + v70);
              v73 = *v72 * *(double *)(*((_QWORD *)this + 28) + v71);
              v71 += 8;
              *v72 = v73;
              if ( v71 == 8LL * (unsigned int)(v3 - 1) + 8 )
                break;
              v70 = *((_QWORD *)this + 27);
            }
          }
        }
      }
      goto LABEL_64;
    }
    goto LABEL_139;
  }
  if ( v8 == 1.0 && v7 == 1.0 )
  {
    v37 = *((_QWORD *)this + 152);
    if ( v37 )
    {
      if ( v4 > 0 )
      {
        v38 = 0;
        while ( 1 )
        {
          v39 = (double *)(v38 + v37);
          v40 = *v39;
          v41 = *(double *)(*((_QWORD *)this + 125) + v38);
          v42 = *(double *)(*((_QWORD *)this + 128) + v38);
          if ( (v41 > -1.0e20 || v42 < 1.0e20) && v40 > v41 && v42 > v40 )
          {
            *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v40 - v41, v42 - v40));
            v40 = *v39;
          }
          *(double *)(*((_QWORD *)this + 15) + v38) = v40;
          *(_QWORD *)(*((_QWORD *)this + 17) + v38) = *(_QWORD *)(*((_QWORD *)this + 149) + v38);
          v38 += 8;
          if ( 8LL * (unsigned int)(v4 - 1) + 8 == v38 )
            break;
          v37 = *((_QWORD *)this + 152);
        }
      }
      if ( v3 > 0 )
      {
        v43 = 0;
        do
        {
          v44 = *(double *)(*((_QWORD *)this + 124) + v43);
          v45 = (double *)(v43 + *((_QWORD *)this + 151));
          v46 = *v45;
          v47 = *(double *)(*((_QWORD *)this + 127) + v43);
          if ( (v44 > -1.0e20 || v47 < 1.0e20) && v46 > v44 && v47 > v46 )
          {
            *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v46 - v44, v47 - v46));
            v46 = *v45;
          }
          *(double *)(*((_QWORD *)this + 14) + v43) = v46;
          v43 += 8;
        }
        while ( 8LL * (unsigned int)(v3 - 1) + 8 != v43 );
      }
    }
    goto LABEL_64;
  }
  v24 = 1.0 / v7;
  v25 = 1.0 / v8;
  if ( v4 <= 0 )
  {
    if ( v3 <= 0 )
      goto LABEL_64;
    v26 = 0;
    v27 = 0;
  }
  else
  {
    v26 = 0;
    v27 = 0;
    v28 = 0;
    do
    {
      v31 = *(double *)(*((_QWORD *)this + 152) + v28);
      v32 = *(double *)(*((_QWORD *)this + 125) + v28);
      v33 = *(double *)(*((_QWORD *)this + 128) + v28);
      if ( v32 > -1.0e20 || v33 < 1.0e20 )
      {
        v34 = *((double *)this + 110);
        if ( v32 - v34 <= v31 && v31 <= v34 + v33 )
          *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v31 - v32, v33 - v31));
      }
      *(double *)(*((_QWORD *)this + 15) + v28) = v31 * v25;
      v35 = *((double *)this + 110);
      v36 = *(double *)(*((_QWORD *)this + 15) + v28);
      if ( *(double *)(*((_QWORD *)this + 22) + v28) - v35 > v36 )
        ++v27;
      else
        v27 += v36 > v35 + *(double *)(*((_QWORD *)this + 23) + v28);
      *(double *)(*((_QWORD *)this + 17) + v28) = *(double *)(*((_QWORD *)this + 149) + v28) * v24;
      v29 = *((double *)this + 110);
      v30 = *(double *)(*((_QWORD *)this + 17) + v28);
      if ( v36 > *(double *)(*((_QWORD *)this + 22) + v28) + v29 )
        v26 += v30 > *((double *)this + 109);
      if ( *(double *)(*((_QWORD *)this + 23) + v28) - v29 > v36 )
        v26 += -*((double *)this + 109) > v30;
      v28 += 8;
    }
    while ( 8LL * (unsigned int)(v4 - 1) + 8 != v28 );
    if ( v3 <= 0 )
      goto LABEL_135;
  }
  v79 = 0;
  do
  {
    v83 = *(double *)(*((_QWORD *)this + 151) + 8 * v79);
    v84 = *(double *)(*((_QWORD *)this + 124) + 8 * v79);
    v85 = *(double *)(*((_QWORD *)this + 127) + 8 * v79);
    if ( v84 > -1.0e20 || v85 < 1.0e20 )
    {
      v86 = *((double *)this + 110);
      if ( v84 - v86 <= v83 && v83 <= v86 + v85 )
        *((double *)this + 107) = fmax(*((double *)this + 107), fmin(v83 - v84, v85 - v83));
    }
    *(double *)(*((_QWORD *)this + 14) + 8 * v79) = v83 * v25;
    v87 = *((double *)this + 110);
    v88 = *(double *)(*((_QWORD *)this + 14) + 8 * v79);
    if ( *(double *)(*((_QWORD *)this + 18) + 8 * v79) - v87 > v88 )
      ++v27;
    else
      v27 += v88 > v87 + *(double *)(*((_QWORD *)this + 19) + 8 * v79);
    *(double *)(8 * v79 + *((_QWORD *)this + 16)) = *(double *)(8 * v79 + *((_QWORD *)this + 16)) * v24;
    v80 = *(double *)(*((_QWORD *)this + 16) + 8 * v79);
    v81 = *((_QWORD *)this + 21);
    if ( v81 )
      v80 = v80 + *(double *)(v81 + 8 * v79);
    v82 = *((double *)this + 110);
    if ( v88 > *(double *)(*((_QWORD *)this + 18) + 8 * v79) + v82 )
      v26 += v80 > *((double *)this + 109);
    if ( *(double *)(*((_QWORD *)this + 19) + 8 * v79) - v82 > v88 )
      v26 += -*((double *)this + 109) > v80;
    ++v79;
  }
  while ( v3 > (int)v79 );
LABEL_135:
  if ( !*((_QWORD *)this + 40) )
  {
    if ( v27 )
    {
      *((_DWORD *)this + 81) = v26 == 0 ? 2 : 4;
    }
    else if ( v26 )
    {
      *((_DWORD *)this + 81) = 3;
    }
  }
LABEL_64:
  if ( *((_DWORD *)this + 346) )
  {
    *((_QWORD *)this + 12) = 0x3FF0000000000000LL;
    *((_QWORD *)this + 11) = 0x3FF0000000000000LL;
  }
  v48 = *(double *)this;
  if ( *(double *)this != 1.0 )
  {
    if ( v4 > 0 )
    {
      v49 = 0;
      while ( 1 )
      {
        v50 = (double *)(v49 + *((_QWORD *)this + 17));
        v49 += 8;
        *v50 = v48 * *v50;
        if ( 8LL * (unsigned int)(v4 - 1) + 8 == v49 )
          break;
        v48 = *(double *)this;
      }
    }
    if ( v3 > 0 )
    {
      v51 = 0;
      do
      {
        v52 = (double *)(v51 + *((_QWORD *)this + 16));
        v51 += 8;
        *v52 = *v52 * *(double *)this;
      }
      while ( 8LL * (unsigned int)(v3 - 1) + 8 != v51 );
    }
  }
  v53 = *((int *)this + 64) >> 31;
  *((_DWORD *)this + 64) ^= v53;
  *((_DWORD *)this + 64) -= v53;
  if ( a2 > 0 )
  {
    ClpSimplex::gutsOfDelete(this, a2 + 1);
    if ( *((_QWORD *)this + 21) )
      return (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, char *))(**((_QWORD **)this + 24) + 320LL))(
               *((_QWORD *)this + 24),
               this,
               13,
               (char *)this + 256);
    goto LABEL_110;
  }
  v54 = *((void **)this + 165);
  if ( v54 )
  {
    ClpNonLinearCost::~ClpNonLinearCost(*((ClpNonLinearCost **)this + 165));
    operator delete(v54);
  }
  v55 = *((_QWORD *)this + 21) == 0;
  *((_QWORD *)this + 165) = 0;
  if ( v55 )
  {
LABEL_110:
    if ( !*((_DWORD *)this + 80) )
    {
      v74 = *((_QWORD *)this + 20);
      if ( *(_DWORD *)(v74 + 16) == 1 && v3 && v4 )
      {
        v75 = (**(__int64 (__fastcall ***)(__int64, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))v74)(v74, 0, 0, v93, 0, 2);
        if ( v4 <= 0 )
        {
          v76 = 0.0;
        }
        else
        {
          v76 = 0.0;
          v77 = 0;
          do
          {
            v78 = *(double *)(v75 + v77) * *(double *)(*((_QWORD *)this + 15) + v77);
            v77 += 8;
            v76 = v76 + v78;
          }
          while ( 8LL * (unsigned int)(v4 - 1) + 8 != v77 );
        }
        *((double *)this + 9) = v76 * *(double *)this;
      }
    }
  }
  return (*(__int64 (__fastcall **)(_QWORD, ClpSimplex *, __int64, char *))(**((_QWORD **)this + 24) + 320LL))(
           *((_QWORD *)this + 24),
           this,
           13,
           (char *)this + 256);
}

