// Alternative name is '_ZN21ClpQuadraticObjectiveC1ERKS_i'
void __fastcall ClpQuadraticObjective::ClpQuadraticObjective(
        ClpQuadraticObjective *this,
        const ClpQuadraticObjective *a2,
        int a3)
{
  unsigned __int64 v5; // rsi
  bool v6; // zf
  int v7; // eax
  _QWORD *v8; // rax
  _QWORD *v9; // r9
  __int64 *v10; // rcx
  _QWORD *v11; // rdx
  __int64 v12; // xmm0_8
  __int64 v13; // rdx
  _QWORD *v14; // rax
  _QWORD *v15; // r9
  __int64 *v16; // rcx
  _QWORD *v17; // rdx
  __int64 v18; // xmm0_8
  __int64 v19; // rdx
  _QWORD *v20; // rax
  int *v21; // r14
  int v22; // esi
  _DWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int64 v26; // rdi
  _DWORD *v27; // rbx
  _DWORD *v28; // r15
  __int64 v29; // rax
  int v30; // r13d
  int v31; // edx
  _DWORD *v32; // r10
  int *v33; // r11
  _DWORD *v34; // r8
  int v35; // r12d
  int v36; // esi
  int v37; // edx
  int v38; // r9d
  __int64 v39; // rcx
  int v40; // edi
  __int64 v41; // rax
  int v42; // ecx
  __int64 v43; // rcx
  int v44; // ecx
  CoinPackedMatrix *v45; // r14
  CoinPackedMatrix *v46; // rbx
  _OWORD *v47; // rax
  __int64 v48; // rcx
  _DWORD *v49; // rcx
  unsigned __int64 v50; // rdi
  int *v51; // r12
  __int64 v52; // rdi
  int v53; // edx
  __int64 v54; // rax
  int v55; // esi
  _DWORD *v56; // r13
  __int64 v57; // rax
  int *v58; // rdi
  __int64 v59; // r11
  double *v60; // r10
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // r9
  double v64; // xmm0_8
  char *v65; // r10
  int v66; // r15d
  int v67; // esi
  double v68; // xmm0_8
  int v69; // ecx
  int v70; // ecx
  int v71; // edx
  double v72; // xmm0_8
  __int64 v73; // rdx
  CoinPackedMatrix *v74; // r13
  int v75; // [rsp+Ch] [rbp-74h]
  __int64 v76; // [rsp+10h] [rbp-70h]
  __int64 v77; // [rsp+18h] [rbp-68h]
  __int64 v78; // [rsp+20h] [rbp-60h]
  char *v81; // [rsp+38h] [rbp-48h]
  _DWORD *v82; // [rsp+40h] [rbp-40h]
  __int64 v83; // [rsp+40h] [rbp-40h]
  double *v84; // [rsp+48h] [rbp-38h]
  double *v85; // [rsp+48h] [rbp-38h]
  double *v86; // [rsp+48h] [rbp-38h]
  double *v87; // [rsp+48h] [rbp-38h]

  ClpObjective::ClpObjective(this, a2);
  v5 = *((int *)a2 + 13);
  v6 = *((_QWORD *)a2 + 4) == 0;
  *(_QWORD *)this = &off_4D12A0;
  v7 = *((_DWORD *)a2 + 12);
  *((_DWORD *)this + 13) = v5;
  *((_DWORD *)this + 12) = v7;
  *((_BYTE *)this + 56) = *((_BYTE *)a2 + 56);
  if ( v6 )
  {
    *((_QWORD *)this + 4) = 0;
  }
  else
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v8 = (_QWORD *)operator new[](8 * v5);
    v5 = *((int *)this + 13);
    *((_QWORD *)this + 4) = v8;
    v9 = *((_QWORD **)a2 + 4);
    if ( (_DWORD)v5 && v9 != v8 )
    {
      if ( (int)v5 >> 3 > 0 )
      {
        v10 = *((__int64 **)a2 + 4);
        v11 = v8;
        do
        {
          v12 = *v10;
          v11 += 8;
          v10 += 8;
          *(v11 - 8) = v12;
          *(v11 - 7) = *(v10 - 7);
          *(v11 - 6) = *(v10 - 6);
          *(v11 - 5) = *(v10 - 5);
          *(v11 - 4) = *(v10 - 4);
          *(v11 - 3) = *(v10 - 3);
          *(v11 - 2) = *(v10 - 2);
          *(v11 - 1) = *(v10 - 1);
        }
        while ( v11 != &v8[8 * (unsigned int)(((int)v5 >> 3) - 1) + 8] );
        v13 = (((int)v5 >> 3) - 1 + 1LL) << 6;
        v9 = (_QWORD *)((char *)v9 + v13);
        v8 = (_QWORD *)((char *)v8 + v13);
      }
      switch ( (int)v5 % 8 )
      {
        case 1:
          goto LABEL_57;
        case 2:
          goto LABEL_56;
        case 3:
          goto LABEL_55;
        case 4:
          goto LABEL_54;
        case 5:
          goto LABEL_53;
        case 6:
          goto LABEL_52;
        case 7:
          v8[6] = v9[6];
LABEL_52:
          v8[5] = v9[5];
LABEL_53:
          v8[4] = v9[4];
LABEL_54:
          v8[3] = v9[3];
LABEL_55:
          v8[2] = v9[2];
LABEL_56:
          v8[1] = v9[1];
LABEL_57:
          *v8 = *v9;
          break;
        default:
          break;
      }
    }
  }
  if ( *((_QWORD *)a2 + 5) )
  {
    if ( v5 > 0xFFFFFFFFFFFFFFFLL )
      __cxa_throw_bad_array_new_length();
    v14 = (_QWORD *)operator new[](8 * v5);
    LODWORD(v5) = *((_DWORD *)this + 13);
    *((_QWORD *)this + 5) = v14;
    v15 = *((_QWORD **)a2 + 5);
    if ( (_DWORD)v5 && v15 != v14 )
    {
      if ( (int)v5 >> 3 > 0 )
      {
        v16 = *((__int64 **)a2 + 5);
        v17 = v14;
        do
        {
          v18 = *v16;
          v17 += 8;
          v16 += 8;
          *(v17 - 8) = v18;
          *(v17 - 7) = *(v16 - 7);
          *(v17 - 6) = *(v16 - 6);
          *(v17 - 5) = *(v16 - 5);
          *(v17 - 4) = *(v16 - 4);
          *(v17 - 3) = *(v16 - 3);
          *(v17 - 2) = *(v16 - 2);
          *(v17 - 1) = *(v16 - 1);
        }
        while ( v17 != &v14[8 * (unsigned int)(((int)v5 >> 3) - 1) + 8] );
        v19 = (((int)v5 >> 3) - 1 + 1LL) << 6;
        v15 = (_QWORD *)((char *)v15 + v19);
        v14 = (_QWORD *)((char *)v14 + v19);
      }
      switch ( (int)v5 % 8 )
      {
        case 1:
          goto LABEL_49;
        case 2:
          goto LABEL_48;
        case 3:
          goto LABEL_47;
        case 4:
          goto LABEL_46;
        case 5:
          goto LABEL_45;
        case 6:
          goto LABEL_44;
        case 7:
          v14[6] = v15[6];
LABEL_44:
          v14[5] = v15[5];
LABEL_45:
          v14[4] = v15[4];
LABEL_46:
          v14[3] = v15[3];
LABEL_47:
          v14[2] = v15[2];
LABEL_48:
          v14[1] = v15[1];
LABEL_49:
          *v14 = *v15;
          v20 = *((_QWORD **)a2 + 3);
          if ( !v20 )
            goto LABEL_50;
          goto LABEL_22;
        default:
          break;
      }
    }
  }
  else
  {
    *((_QWORD *)this + 5) = 0;
  }
  v20 = *((_QWORD **)a2 + 3);
  if ( !v20 )
  {
LABEL_50:
    *((_QWORD *)this + 3) = 0;
    return;
  }
LABEL_22:
  if ( !a3 )
  {
    v46 = (CoinPackedMatrix *)operator new(0x58u);
    CoinPackedMatrix::CoinPackedMatrix(v46, *((const CoinPackedMatrix **)a2 + 3));
    *((_QWORD *)this + 3) = v46;
    return;
  }
  if ( a3 != 1 )
  {
    *((_BYTE *)this + 56) = 0;
    goto LABEL_91;
  }
  v21 = (int *)v20[6];
  v22 = v5 + 1;
  v78 = v20[5];
  v23 = (_DWORD *)v20[7];
  v24 = v20[4];
  *((_BYTE *)this + 56) = 1;
  v82 = v23;
  v77 = v24;
  if ( (unsigned __int64)v22 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v25 = operator new[](4LL * v22);
  v26 = *((int *)this + 13);
  v27 = (_DWORD *)v25;
  if ( v26 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v28 = (_DWORD *)operator new[](4 * v26);
  v29 = *((_QWORD *)a2 + 3);
  v30 = *(_DWORD *)(v29 + 64);
  if ( !*(_BYTE *)(v29 + 8) )
    v30 = *(_DWORD *)(v29 + 68);
  v31 = *((_DWORD *)this + 13);
  if ( v31 )
  {
    if ( v31 / 8 <= 0 )
    {
      v49 = v28;
    }
    else
    {
      v47 = v28;
      v48 = (unsigned int)(v31 / 8 - 1);
      do
      {
        *v47 = 0;
        v47 += 2;
        *(v47 - 1) = 0;
      }
      while ( &v28[8 * v48 + 8] != (_DWORD *)v47 );
      v49 = &v28[8 * (int)v48 + 8];
    }
    switch ( v31 % 8 )
    {
      case 1:
        goto LABEL_70;
      case 2:
        goto LABEL_69;
      case 3:
        goto LABEL_68;
      case 4:
        goto LABEL_67;
      case 5:
        goto LABEL_66;
      case 6:
        goto LABEL_65;
      case 7:
        v49[6] = 0;
LABEL_65:
        v49[5] = 0;
LABEL_66:
        v49[4] = 0;
LABEL_67:
        v49[3] = 0;
LABEL_68:
        v49[2] = 0;
LABEL_69:
        v49[1] = 0;
LABEL_70:
        *v49 = 0;
        break;
      default:
        break;
    }
  }
  if ( v30 <= 0 )
  {
    v50 = 0;
    v85 = nullptr;
    goto LABEL_72;
  }
  v32 = v82;
  v33 = v21;
  v34 = v28;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  do
  {
    v39 = *v33;
    v40 = v39 + *v32;
    if ( (int)v39 < v40 )
    {
      v41 = (int)v39 + 1;
      v84 = (double *)(v78 + 4 * (v39 - v41));
      do
      {
        while ( 1 )
        {
          v43 = *((int *)v84 + v41);
          if ( (int)v43 <= v38 )
            break;
          ++v28[v43];
          ++v37;
          ++*v34;
          v40 = *v33 + *v32;
LABEL_34:
          v42 = v41++;
          if ( v40 <= v42 )
            goto LABEL_38;
        }
        if ( (_DWORD)v43 == v38 )
        {
          ++*v34;
          ++v35;
          v40 = *v33 + *v32;
          goto LABEL_34;
        }
        v44 = v41;
        ++v36;
        ++v41;
      }
      while ( v40 > v44 );
    }
LABEL_38:
    ++v38;
    ++v33;
    ++v32;
    ++v34;
  }
  while ( v38 < v30 );
  if ( v36 )
  {
    if ( v37 == v36 )
    {
      v45 = (CoinPackedMatrix *)operator new(0x58u);
      CoinPackedMatrix::CoinPackedMatrix(v45, *((const CoinPackedMatrix **)a2 + 3));
      *((_QWORD *)this + 3) = v45;
      operator delete[](v27);
      operator delete[](v28);
      return;
    }
    printf("number above = %d, number below = %d, error\n", v36, v37);
LABEL_91:
    abort();
  }
  v50 = 4LL * (v35 + 2 * v37);
  v85 = (double *)(v35 + 2 * v37);
LABEL_72:
  v51 = (int *)operator new[](v50);
  v52 = operator new[](8LL * (_QWORD)v85);
  v86 = (double *)v52;
  *v27 = 0;
  if ( v30 <= 0 )
  {
    v75 = 0;
  }
  else
  {
    v53 = 0;
    v76 = (unsigned int)(v30 - 1) + 1LL;
    v54 = 0;
    do
    {
      v55 = v28[v54];
      v28[v54] = 0;
      v53 += v55;
      v27[++v54] = v53;
    }
    while ( v76 != v54 );
    v56 = v82;
    v57 = v52;
    v75 = v53;
    v58 = v28;
    v59 = 0;
    v81 = (char *)v28;
    v60 = (double *)v57;
    do
    {
      v61 = *v21;
      if ( (int)v61 < (int)v61 + *v56 )
      {
        v87 = v60;
        v62 = (int)v61 + 1;
        v63 = v77 + 8 * v61 - 8 * v62;
        v83 = v78 + -4 * v62 + 4 * v61;
        do
        {
          v71 = *(_DWORD *)(v83 + 4 * v62);
          if ( v71 > (int)v59 )
          {
            v64 = *(double *)(v63 + 8 * v62);
            v65 = &v81[4 * v71];
            v66 = *(_DWORD *)v65 + v27[v71];
            ++*(_DWORD *)v65;
            v67 = *v58;
            v51[v66] = v59;
            v87[v66] = v64;
            v68 = *(double *)(v63 + 8 * v62);
            v69 = v67 + v27[v59];
            *v58 = v67 + 1;
            v87[v69] = v68;
            v51[v69] = v71;
          }
          else
          {
            if ( v71 != (_DWORD)v59 )
              goto LABEL_91;
            v72 = *(double *)(v63 + 8 * v62);
            v73 = *v58 + v27[v59];
            ++*v58;
            v87[v73] = v72;
            v51[v73] = v59;
          }
          v70 = v62++;
        }
        while ( *v21 + *v56 > v70 );
        v60 = v87;
      }
      ++v59;
      ++v21;
      ++v56;
      ++v58;
    }
    while ( v76 != v59 );
    v28 = v81;
    v86 = v60;
  }
  v74 = (CoinPackedMatrix *)operator new(0x58u);
  CoinPackedMatrix::CoinPackedMatrix(
    v74,
    1,
    *((_DWORD *)a2 + 13),
    *((_DWORD *)a2 + 13),
    v75,
    v86,
    0.0,
    0.0,
    v51,
    v27,
    v28);
  *((_QWORD *)this + 3) = v74;
  operator delete[](v27);
  operator delete[](v28);
  operator delete[](v51);
  operator delete[](v86);
}

