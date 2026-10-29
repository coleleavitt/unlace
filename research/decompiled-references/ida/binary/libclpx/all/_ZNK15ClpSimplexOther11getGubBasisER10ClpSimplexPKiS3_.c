void __fastcall ClpSimplexOther::getGubBasis(
        ClpSimplexOther *this,
        ClpSimplex *a2,
        const int *a3,
        const int *a4,
        double a5)
{
  const void *v5; // rax
  ClpSimplexOther *v6; // r12
  ClpSimplex *v7; // rbp
  _DWORD *v8; // r8
  int v9; // ecx
  int v10; // edi
  int v11; // r10d
  int v12; // ebx
  __int64 v13; // r13
  __int64 v14; // r15
  __int64 v15; // r14
  const int *v16; // r9
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  const int *v19; // rcx
  const int *v20; // rsi
  __int64 v21; // rdx
  int v22; // eax
  int v23; // eax
  ClpSimplex *v24; // rdx
  ClpDynamicMatrix *v25; // r12
  __int64 v26; // r8
  __int64 v27; // rcx
  const int *v28; // rax
  __int64 v29; // r9
  int v30; // ebp
  const int *v31; // r14
  __int64 v32; // r13
  double *v33; // r15
  _BYTE *v34; // rbx
  __int64 v35; // rbx
  char v36; // al
  int v37; // edi
  _BYTE *v38; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // xmm0_8
  int v42; // ecx
  char v43; // dl
  int v44; // edx
  __int64 v45; // rax
  unsigned __int64 v46; // r11
  __int64 v47; // xmm0_8
  __int64 v48; // rcx
  char v49; // dl
  int v50; // ecx
  char v51; // di
  _BYTE *v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rsi
  __int64 v55; // rcx
  char v56; // al
  void *v57; // rax
  _DWORD *v58; // r11
  int v59; // r10d
  __int64 v60; // rsi
  const int *v61; // r14
  int *v62; // rdi
  __int64 v63; // r15
  __int64 v64; // rdx
  int v65; // ecx
  int v66; // r12d
  __int64 v67; // r8
  __int64 v68; // rax
  char *v69; // rsi
  __int64 v70; // rdx
  int v71; // edx
  const int *v72; // r13
  __int64 v73; // rax
  _BYTE *v74; // rax
  _BYTE *v75; // rax
  _BYTE *v76; // rax
  int v77; // eax
  int v79; // [rsp+8h] [rbp-B8h]
  __int64 v80; // [rsp+8h] [rbp-B8h]
  int v81; // [rsp+10h] [rbp-B0h]
  __int64 v82; // [rsp+10h] [rbp-B0h]
  int v83; // [rsp+10h] [rbp-B0h]
  __int64 v84; // [rsp+10h] [rbp-B0h]
  int v85; // [rsp+18h] [rbp-A8h]
  const int *v86; // [rsp+18h] [rbp-A8h]
  __int64 v88; // [rsp+20h] [rbp-A0h]
  const int *v89; // [rsp+20h] [rbp-A0h]
  __int64 v90; // [rsp+28h] [rbp-98h]
  __int64 v91; // [rsp+30h] [rbp-90h]
  __int64 v92; // [rsp+38h] [rbp-88h]
  __int64 v93; // [rsp+40h] [rbp-80h]
  int v94; // [rsp+48h] [rbp-78h]
  int v95; // [rsp+4Ch] [rbp-74h]
  ClpSimplexOther *v96; // [rsp+50h] [rbp-70h]
  const int *v97; // [rsp+58h] [rbp-68h]
  __int64 v98; // [rsp+60h] [rbp-60h]
  __int64 v99; // [rsp+68h] [rbp-58h]
  __int64 v100; // [rsp+70h] [rbp-50h]
  __int64 v101; // [rsp+78h] [rbp-48h]
  ClpSimplex *v102; // [rsp+80h] [rbp-40h]

  v5 = *((const void **)this + 24);
  if ( !v5 )
    BUG();
  v6 = this;
  v7 = a2;
  v8 = __dynamic_cast(
         v5,
         (const struct __class_type_info *)&`typeinfo for'ClpMatrixBase,
         (const struct __class_type_info *)&`typeinfo for'ClpDynamicMatrix,
         0);
  v9 = v8[66];
  v10 = v8[74];
  v11 = v8[64];
  v12 = *((_DWORD *)a2 + 27);
  v13 = *((_QWORD *)a2 + 33);
  v79 = v9;
  v14 = *((_QWORD *)v6 + 15);
  v15 = *((_QWORD *)a2 + 15);
  v81 = v8[62];
  v85 = v8[50];
  v16 = a4;
  v94 = *((_DWORD *)a2 + 26);
  v91 = *((_QWORD *)v8 + 39);
  v17 = v13 + v12;
  if ( v85 > 0 )
  {
    v18 = v9 + (unsigned __int64)(unsigned int)(v85 - 1);
    v19 = &a3[v9];
    v20 = &a3[v18 + 1];
    v21 = v13;
    v22 = v12;
    while ( 1 )
    {
      v23 = *v19++ + v22;
      *(_BYTE *)(v23 + v21) = *(_BYTE *)(v23 + v21) & 0xF8 | 3;
      if ( v20 == v19 )
        break;
      v22 = *((_DWORD *)v7 + 27);
      v21 = *((_QWORD *)v7 + 33);
    }
  }
  v90 = *((_QWORD *)v8 + 45);
  v98 = *((_QWORD *)v8 + 47);
  v88 = *((_QWORD *)v8 + 48);
  if ( v10 > 0 )
  {
    v96 = v6;
    v24 = v7;
    v25 = (ClpDynamicMatrix *)v8;
    v97 = v16;
    v26 = v15;
    v27 = 0;
    v28 = &v16[v11];
    v92 = v13 + v12;
    v29 = v13;
    v93 = v14;
    v95 = v11;
    v30 = v12;
    v31 = v28;
    v32 = (unsigned int)(v10 - 1) + 1LL;
    while ( 1 )
    {
      v35 = v31[v27];
      v36 = *(_BYTE *)(*((_QWORD *)v25 + 46) + v27) & 7;
      if ( (int)v35 < v30 )
        break;
      v37 = a3[v79 + (int)v35 - v30];
      if ( v36 == 2 )
      {
        v75 = (_BYTE *)(*((_QWORD *)v24 + 33) + v37 + *((_DWORD *)v24 + 27));
        *v75 = *v75 & 0xF8 | 3;
        goto LABEL_12;
      }
      if ( v36 == 3 )
      {
        v76 = (_BYTE *)(*((_QWORD *)v24 + 33) + v37 + *((_DWORD *)v24 + 27));
        *v76 = *v76 & 0xF8 | 2;
        goto LABEL_12;
      }
      if ( v36 )
      {
LABEL_12:
        if ( v32 == ++v27 )
          goto LABEL_18;
      }
      else
      {
        ++v27;
        v38 = (_BYTE *)(*((_QWORD *)v24 + 33) + v37 + *((_DWORD *)v24 + 27));
        *v38 = *v38 & 0xF8 | 1;
        if ( v32 == v27 )
        {
LABEL_18:
          v13 = v29;
          v17 = v92;
          v14 = v93;
          v11 = v95;
          v6 = v96;
          v12 = v30;
          v16 = v97;
          v15 = v26;
          v7 = v24;
          goto LABEL_19;
        }
      }
    }
    v33 = (double *)(v26 + 8 * v35);
    v34 = (_BYTE *)(v29 + v35);
    switch ( v36 )
    {
      case 2:
        a5 = *(double *)(v88 + 8 * v27);
        *v33 = a5;
        *v34 = 2;
        break;
      case 3:
        if ( v98 )
        {
          a5 = *(double *)(v98 + 8 * v27);
          *v33 = a5;
          *v34 = 3;
          goto LABEL_12;
        }
        break;
      case 0:
        v102 = v24;
        v101 = v29;
        v100 = v26;
        v99 = v27;
        v77 = ClpDynamicMatrix::whichSet(v25, v27);
        ClpDynamicMatrix::keyValue(v25, v77);
        v27 = v99;
        *v33 = a5;
        v26 = v100;
        *v34 = 1;
        v29 = v101;
        v24 = v102;
        goto LABEL_12;
      default:
        *v33 = 0.0;
        *v34 = 4;
        break;
    }
    goto LABEL_12;
  }
LABEL_19:
  if ( v11 > 0 )
  {
    v39 = 0;
    do
    {
      v42 = v16[v39];
      v43 = *(_BYTE *)(*((_QWORD *)v6 + 33) + v39) & 7;
      switch ( v43 )
      {
        case 1:
          v40 = v42;
          *(_BYTE *)(v13 + v42) = 1;
          break;
        case 3:
          v40 = v42;
          *(_BYTE *)(v13 + v42) = 3;
          break;
        case 2:
          v40 = v42;
          *(_BYTE *)(v13 + v42) = 2;
          break;
        case 5:
          v40 = v42;
          *(_BYTE *)(v13 + v42) = 5;
          break;
        default:
LABEL_82:
          abort();
      }
      v41 = *(_QWORD *)(v14 + 8 * v39++);
      *(_QWORD *)(v15 + 8 * v40) = v41;
    }
    while ( (unsigned int)(v11 - 1) + 1LL != v39 );
  }
  if ( v81 > v11 )
  {
    v44 = v81;
    v45 = v11;
    v82 = v17;
    v46 = v11 + (unsigned __int64)(unsigned int)(v44 - 1 - v11) + 1;
    do
    {
      while ( 1 )
      {
        v48 = v16[v11 + *(_DWORD *)(v90 - 4LL * v11 + 4 * v45)];
        v49 = *(_BYTE *)(*((_QWORD *)v6 + 33) + v45) & 7;
        if ( (int)v48 < v12 )
          break;
        v50 = a3[v79 + (int)v48 - v12];
        v51 = 2;
        if ( v49 != 3 )
        {
          v51 = 3;
          if ( v49 != 2 )
            v51 = *(_BYTE *)(*((_QWORD *)v6 + 33) + v45) & 7;
        }
        ++v45;
        v52 = (_BYTE *)(*((_QWORD *)v7 + 33) + *((_DWORD *)v7 + 27) + v50);
        *v52 = *v52 & 0xF8 | v51;
        if ( v46 == v45 )
          goto LABEL_44;
      }
      switch ( v49 )
      {
        case 1:
          *(_BYTE *)(v13 + v48) = 1;
          break;
        case 3:
          *(_BYTE *)(v13 + v48) = 3;
          break;
        case 2:
          *(_BYTE *)(v13 + v48) = 2;
          break;
        case 5:
          *(_BYTE *)(v13 + v48) = 5;
          break;
        default:
          goto LABEL_82;
      }
      v47 = *(_QWORD *)(v14 + 8 * v45++);
      *(_QWORD *)(v15 + 8 * v48) = v47;
    }
    while ( v46 != v45 );
LABEL_44:
    v17 = v82;
  }
  if ( v79 > 0 )
  {
    v53 = 0;
    v54 = (unsigned int)(v79 - 1) + 1LL;
    do
    {
      while ( 1 )
      {
        v55 = a3[v53];
        v56 = *(_BYTE *)(*((_QWORD *)v6 + 33) + (int)v53 + *((_DWORD *)v6 + 27)) & 7;
        if ( v56 != 1 )
          break;
        ++v53;
        *(_BYTE *)(v17 + v55) = 1;
        if ( v54 == v53 )
          goto LABEL_54;
      }
      switch ( v56 )
      {
        case 3:
          *(_BYTE *)(v17 + v55) = 3;
          break;
        case 2:
          *(_BYTE *)(v17 + v55) = 2;
          break;
        case 5:
          *(_BYTE *)(v17 + v55) = 5;
          break;
        default:
          goto LABEL_82;
      }
      ++v53;
    }
    while ( v54 != v53 );
  }
LABEL_54:
  v89 = v16;
  v83 = v11;
  if ( (unsigned __int64)v94 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v57 = (void *)operator new[](4LL * v94);
  v58 = memset(v57, 0, 4LL * v94);
  v59 = v83;
  if ( v85 > 0 )
  {
    v84 = v79;
    v60 = (unsigned int)(v85 - 1);
    v61 = &a3[v79];
    v86 = v61;
    v80 = v60;
    v62 = (int *)(v91 + 4);
    v63 = v91 + 4 * v60 + 8;
    do
    {
      v64 = *(v62 - 1);
      v65 = *v62;
      v66 = *v61;
      if ( (int)v64 < *v62 )
      {
        v67 = *((_QWORD *)v7 + 33);
        v68 = (int)v64 + 1;
        v69 = (char *)v89 + 4LL * v59 + 4 * v64 - 4LL * (int)v68;
        do
        {
          v70 = *(int *)&v69[4 * v68];
          if ( (int)v70 >= v12 )
            v70 = v66 + *((_DWORD *)v7 + 27);
          if ( (*(_BYTE *)(v67 + v70) & 7) == 1 )
          {
            ++v58[v66];
            v65 = *v62;
          }
          v71 = v68++;
        }
        while ( v71 < v65 );
      }
      ++v62;
      ++v61;
    }
    while ( (int *)v63 != v62 );
    v72 = v86;
    do
    {
      v73 = *v72;
      if ( !v58[v73] )
      {
        v74 = (_BYTE *)(*((_QWORD *)v7 + 33) + *((_DWORD *)v7 + 27) + (int)v73);
        *v74 = *v74 & 0xF8 | 1;
      }
      ++v72;
    }
    while ( &a3[v84 + 1 + v80] != v72 );
  }
  operator delete[](v58);
}

