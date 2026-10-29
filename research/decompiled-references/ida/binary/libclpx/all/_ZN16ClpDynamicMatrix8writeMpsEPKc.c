void __fastcall ClpDynamicMatrix::writeMps(ClpDynamicMatrix *this, const char *a2)
{
  ClpDynamicMatrix *v2; // r14
  int v3; // edx
  __int64 (*v4)(void); // rax
  int v5; // eax
  int v6; // ebx
  unsigned __int64 v7; // r15
  unsigned __int64 v8; // rax
  _QWORD *v9; // rax
  __int64 (__fastcall *v10)(ClpPackedMatrix *); // rdx
  __int64 v11; // r15
  __int64 (__fastcall *v12)(ClpPackedMatrix *); // rdx
  __int64 v13; // r12
  __int64 (__fastcall *v14)(ClpPackedMatrix *); // rdx
  __int64 (__fastcall *v15)(ClpPackedMatrix *); // rax
  _QWORD *v16; // rdx
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64); // rdi
  double *v18; // rbx
  __int64 v19; // rax
  double *v20; // r13
  int *v21; // rdi
  int *v22; // rsi
  int v23; // r12d
  double *v24; // r14
  _DWORD *v25; // r15
  __int64 v26; // r8
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // r11
  int *v30; // r10
  __int64 v31; // r9
  double *v32; // r8
  int v33; // edx
  int v34; // ecx
  int v35; // r10d
  int v36; // ebx
  __int64 v37; // rax
  unsigned int v38; // edx
  int v39; // r11d
  __int64 v40; // rcx
  unsigned int v41; // r9d
  unsigned __int64 v42; // r8
  double *v43; // rdi
  double *v44; // rsi
  double *v45; // rcx
  __int64 v46; // rax
  signed int v47; // ebx
  __int64 v48; // rax
  int v49; // ebx
  int v50; // edx
  __int64 v51; // rax
  _DWORD *v52; // r13
  __int64 v53; // rbx
  int v54; // r11d
  bool v55; // cc
  int *v56; // rsi
  __int64 v57; // rdx
  __int64 v58; // rbx
  __int64 v59; // rdi
  __int64 v60; // r15
  __int64 v61; // r9
  __int64 v62; // rbx
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r10
  __int64 v66; // r8
  double *v67; // rdi
  int *v68; // r9
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // rax
  unsigned __int64 v72; // rax
  int v74; // [rsp+1Ch] [rbp-7C4h]
  __int64 v75; // [rsp+20h] [rbp-7C0h]
  __int64 v76; // [rsp+28h] [rbp-7B8h]
  ClpDynamicMatrix *v77; // [rsp+30h] [rbp-7B0h]
  __int64 v78; // [rsp+30h] [rbp-7B0h]
  double *v79; // [rsp+38h] [rbp-7A8h]
  int *v80; // [rsp+40h] [rbp-7A0h]
  double *v81; // [rsp+48h] [rbp-798h]
  double *v82; // [rsp+50h] [rbp-790h]
  double *v83; // [rsp+58h] [rbp-788h]
  double *v84; // [rsp+60h] [rbp-780h]
  double *v85; // [rsp+68h] [rbp-778h]
  __int64 v86; // [rsp+68h] [rbp-778h]
  int *v87; // [rsp+70h] [rbp-770h]
  unsigned __int64 v88; // [rsp+78h] [rbp-768h]
  int v89; // [rsp+78h] [rbp-768h]
  __int64 v90; // [rsp+80h] [rbp-760h]
  char *v91; // [rsp+80h] [rbp-760h]
  __int64 v92; // [rsp+88h] [rbp-758h]
  char *v93; // [rsp+88h] [rbp-758h]
  __int64 v94; // [rsp+90h] [rbp-750h]
  char *v95; // [rsp+90h] [rbp-750h]
  double *v96; // [rsp+98h] [rbp-748h]
  char *v97; // [rsp+98h] [rbp-748h]
  double *v98; // [rsp+A0h] [rbp-740h]
  int v99; // [rsp+A0h] [rbp-740h]
  int v100; // [rsp+A8h] [rbp-738h]
  int v101; // [rsp+ACh] [rbp-734h]
  double *v102; // [rsp+B0h] [rbp-730h]
  double *v103; // [rsp+B8h] [rbp-728h]
  __int64 v104; // [rsp+B8h] [rbp-728h]
  _BYTE v105[1824]; // [rsp+C0h] [rbp-720h] BYREF

  v2 = this;
  v3 = *((_DWORD *)this + 74);
  v74 = *((_DWORD *)this + 66) + *((_DWORD *)this + 50);
  v100 = v3 + *((_DWORD *)this + 64);
  v4 = *(__int64 (**)(void))(*(_QWORD *)this + 16LL);
  if ( (char *)v4 == (char *)ClpPackedMatrix::getNumElements )
  {
    v5 = *(_DWORD *)(*((_QWORD *)this + 11) + 72LL);
  }
  else
  {
    v5 = v4();
    v3 = *((_DWORD *)this + 74);
  }
  v6 = v3 + *(_DWORD *)(*((_QWORD *)this + 41) + 4LL * v3) + v5;
  if ( (unsigned __int64)v100 > 0xFFFFFFFFFFFFFFFLL
    || (v7 = 8LL * v100,
        v79 = (double *)operator new[](v7),
        v82 = (double *)operator new[](v7),
        v81 = (double *)operator new[](v7),
        (unsigned __int64)v74 > 0xFFFFFFFFFFFFFFFLL)
    || (v84 = (double *)operator new[](8LL * v74),
        v83 = (double *)operator new[](8LL * v74),
        v8 = v100 + 1,
        v8 > 0x1FFFFFFFFFFFFFFELL)
    || (v80 = (int *)operator new[](4 * v8), (unsigned __int64)v6 > 0x1FFFFFFFFFFFFFFELL) )
  {
    __cxa_throw_bad_array_new_length();
  }
  v87 = (int *)operator new[](4LL * v6);
  v102 = (double *)operator new[](8LL * v6);
  v9 = *(_QWORD **)this;
  v10 = *(__int64 (__fastcall **)(ClpPackedMatrix *))(*(_QWORD *)this + 56LL);
  if ( v10 == ClpPackedMatrix::getVectorStarts )
  {
    v11 = *(_QWORD *)(*((_QWORD *)this + 11) + 48LL);
  }
  else
  {
    v11 = v10(this);
    v9 = *(_QWORD **)this;
  }
  v12 = (__int64 (__fastcall *)(ClpPackedMatrix *))v9[8];
  if ( v12 == ClpPackedMatrix::getVectorLengths )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 11) + 56LL);
  }
  else
  {
    v13 = v12(this);
    v9 = *(_QWORD **)this;
  }
  v14 = (__int64 (__fastcall *)(ClpPackedMatrix *))v9[6];
  if ( v14 == ClpPackedMatrix::getIndices )
  {
    v92 = *(_QWORD *)(*((_QWORD *)this + 11) + 40LL);
  }
  else
  {
    v92 = v14(this);
    v9 = *(_QWORD **)this;
  }
  v15 = (__int64 (__fastcall *)(ClpPackedMatrix *))v9[5];
  if ( v15 == ClpPackedMatrix::getElements )
    v90 = *(_QWORD *)(*((_QWORD *)this + 11) + 32LL);
  else
    v90 = v15(this);
  v16 = *((_QWORD **)this + 30);
  v17 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD, _BYTE *, _QWORD, __int64))v16[20];
  v18 = (double *)v16[22];
  v103 = (double *)v16[23];
  if ( v17 )
  {
    v19 = (**v17)(v17, 0, 0, v105, 0, 2);
    v16 = *((_QWORD **)v2 + 30);
    v20 = (double *)v19;
  }
  else
  {
    v20 = nullptr;
  }
  v88 = v16[18];
  v85 = (double *)v16[19];
  *v80 = 0;
  v101 = *((_DWORD *)v2 + 64);
  if ( v101 <= 0 )
  {
    v23 = 0;
  }
  else
  {
    v21 = (int *)v11;
    v22 = (int *)v13;
    v77 = v2;
    v23 = 0;
    v98 = v79;
    v24 = v81;
    v96 = v82;
    v25 = v80 + 1;
    v94 = (__int64)&v18[(unsigned int)(v101 - 1) + 1];
    do
    {
      v26 = *v21;
      *v98 = *v18;
      v27 = *v22;
      *v96 = *v103;
      *v24 = *v20;
      if ( (int)v26 < (int)v26 + v27 )
      {
        v28 = (int)v26 + 1;
        v29 = v92 + -4 * v28 + 4 * v26;
        v30 = &v87[v23 - v28];
        v31 = v90 + -8 * v28 + 8 * v26;
        v32 = &v102[v23 - v28];
        do
        {
          v33 = *(_DWORD *)(v29 + 4 * v28);
          v34 = v28;
          ++v23;
          v32[v28] = *(double *)(v31 + 8 * v28);
          v30[v28++] = v33;
        }
        while ( *v21 + *v22 > v34 );
      }
      *v25 = v23;
      ++v18;
      ++v98;
      ++v103;
      ++v20;
      ++v24;
      ++v96;
      ++v21;
      ++v22;
      ++v25;
    }
    while ( v18 != (double *)v94 );
    v2 = v77;
  }
  v35 = *((_DWORD *)v2 + 66);
  if ( v35 > 0 )
  {
    if ( (v88 >= (unsigned __int64)(v83 + 2) || (unsigned __int64)v83 >= v88 + 16)
      && (unsigned int)v35 > 0x1E
      && (v88 >= (unsigned __int64)(v84 + 2) || (unsigned __int64)v84 >= v88 + 16)
      && (v85 >= v84 + 2 || v84 >= v85 + 2)
      && (v85 >= v83 + 2 || v83 >= v85 + 2) )
    {
      v36 = 0;
      v37 = (v88 >> 3) & 1;
      if ( (_DWORD)v37 )
      {
        v36 = 1;
        *v84 = *(double *)v88;
        *v83 = *v85;
      }
      v38 = 0;
      v39 = v35 - v37;
      v40 = (v88 >> 3) & 1;
      v41 = (unsigned int)(v35 - v37) >> 1;
      v42 = v88 + v40 * 8;
      v43 = &v84[v40];
      v44 = &v85[v40];
      v45 = &v83[v40];
      v46 = 0;
      do
      {
        ++v38;
        *(_OWORD *)&v43[v46] = *(_OWORD *)(v42 + v46 * 8);
        *(_OWORD *)&v45[v46] = *(_OWORD *)&v44[v46];
        v46 += 2;
      }
      while ( v41 > v38 );
      v47 = (v39 & 0xFFFFFFFE) + v36;
      if ( (v39 & 0xFFFFFFFE) != v39 )
      {
        v48 = v47;
        v49 = v47 + 1;
        v84[v48] = *(double *)(v88 + 8 * v48);
        v83[v48] = v85[v48];
        if ( v35 > v49 )
        {
          v84[v49] = *(double *)(v88 + 8LL * v49);
          v83[v49] = v85[v49];
        }
      }
    }
    else
    {
      v72 = 0;
      do
      {
        v84[v72 / 8] = *(double *)(v88 + v72);
        v83[v72 / 8] = v85[v72 / 8];
        v72 += 8LL;
      }
      while ( v72 != 8LL * (unsigned int)(v35 - 1) + 8 );
    }
  }
  v50 = *((_DWORD *)v2 + 50);
  if ( v50 > 0 )
  {
    v51 = v35;
    v52 = (_DWORD *)(*((_QWORD *)v2 + 39) + 4LL);
    v86 = v35 + 1LL;
    v75 = v86 + (unsigned int)(v50 - 1);
    v53 = -8LL * v35 + *((_QWORD *)v2 + 27);
    v76 = v53;
    v78 = *((_QWORD *)v2 + 28) - 8LL * v35;
    while ( 1 )
    {
      v54 = *(v52 - 1);
      v55 = v54 < *v52;
      v99 = v51;
      v84[v51] = *(double *)(v53 + 8 * v51);
      v83[v51] = *(double *)(v78 + 8 * v51);
      if ( v55 )
      {
        v56 = (int *)(*((_QWORD *)v2 + 41) + 4LL * v54);
        v89 = v54 - v101;
        v57 = v101 + 1;
        v58 = -8 * v57 + 8LL * v54;
        v59 = -8 * v57 + 8LL * v101;
        v60 = v58 + *((_QWORD *)v2 + 47);
        v95 = (char *)v79 + v59;
        v97 = (char *)v82 + v59;
        v93 = (char *)v80 + 4LL * v101 - 4 * v57;
        v61 = v58 + *((_QWORD *)v2 + 48);
        v62 = *((_QWORD *)v2 + 44) + v58;
        v91 = (char *)v81 + v59;
        v104 = v61;
        do
        {
          v63 = *v56;
          v55 = v56[1] <= (int)v63;
          v101 = v57;
          *(_QWORD *)&v95[8 * v57] = *(_QWORD *)(v60 + 8 * v57);
          *(_QWORD *)&v97[8 * v57] = *(_QWORD *)(v104 + 8 * v57);
          *(_QWORD *)&v91[8 * v57] = *(_QWORD *)(v62 + 8 * v57);
          if ( !v55 )
          {
            v64 = (int)v63 + 1;
            v65 = *((_QWORD *)v2 + 42) + -4 * v64 + 4 * v63;
            v66 = *((_QWORD *)v2 + 43) + -8 * v64 + 8 * v63;
            v67 = &v102[v23 - v64];
            v68 = &v87[v23 - v64];
            do
            {
              v69 = *(_DWORD *)(v65 + 4 * v64);
              ++v23;
              v67[v64] = *(double *)(v66 + 8 * v64);
              v68[v64] = v69;
              v70 = v64++;
            }
            while ( v56[1] > v70 );
          }
          v71 = v23++;
          ++v56;
          v87[v71] = v99;
          v102[v71] = 1.0;
          *(_DWORD *)&v93[4 * v57 + 4] = v23;
          LODWORD(v71) = v57++ + v89;
        }
        while ( *v52 > (int)v71 );
      }
      ++v52;
      v51 = v86;
      if ( v86 == v75 )
        break;
      ++v86;
      v53 = v76;
    }
  }
  ClpSimplex::ClpSimplex((ClpSimplex *)v105, 0);
  ClpSimplex::loadProblem((ClpSimplex *)v105, v100, v74, v80, v87, v102, v79, v82, v81, v84, v83, nullptr);
  ClpModel::writeMps((ClpModel *)v105, a2, 0, 2, 0.0);
  operator delete[](v79);
  operator delete[](v82);
  operator delete[](v81);
  operator delete[](v84);
  operator delete[](v83);
  operator delete[](v80);
  operator delete[](v87);
  operator delete[](v102);
  ClpSimplex::~ClpSimplex((ClpSimplex *)v105);
}

