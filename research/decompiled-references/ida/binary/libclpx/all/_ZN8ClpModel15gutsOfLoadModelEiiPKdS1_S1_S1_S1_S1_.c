__int64 __fastcall ClpModel::gutsOfLoadModel(
        ClpModel *this,
        int a2,
        int a3,
        const double *a4,
        const double *a5,
        const double *a6,
        const double *src,
        const double *a8,
        const double *a9)
{
  __int64 v14; // rax
  unsigned __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  unsigned __int64 v19; // rdi
  _QWORD *v20; // rax
  int v21; // edx
  int v22; // ecx
  unsigned __int64 v23; // rbp
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rbp
  int v26; // r12d
  unsigned __int64 v27; // rbp
  unsigned __int64 v28; // rax
  _QWORD *v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // r12d
  double *v32; // rax
  double *v33; // rbp
  ClpLinearObjective *v34; // r15
  unsigned __int64 v35; // rbp
  unsigned __int64 v36; // rbp
  void *v37; // rax
  void *v38; // rcx
  unsigned __int64 v39; // rdx
  int v40; // r12d
  size_t v41; // rbp
  void *v42; // rax
  void *v43; // rcx
  unsigned __int64 v44; // rdx
  int v45; // r12d
  size_t v46; // rbp
  unsigned __int64 v47; // rax
  _QWORD *v48; // rcx
  int v49; // edx
  __int64 v50; // rax
  int v51; // edx
  double v52; // xmm1_8
  double *v53; // rcx
  double *v54; // rcx
  double *v55; // rcx
  __int64 result; // rax
  int v57; // edx
  double v58; // xmm1_8
  double *v59; // rcx
  double *v60; // rcx
  double *v61; // rcx
  _QWORD *v62; // rdx
  unsigned __int64 v63; // rbp
  int v64; // r12d
  unsigned __int64 v65; // rax
  __int64 v66; // rax
  int v67; // r9d
  unsigned int v68; // r8d
  _QWORD *v69; // rdx
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // edx
  int v73; // eax
  __int64 v74; // rdx
  int v75; // r9d
  unsigned int v76; // r8d
  unsigned __int64 v77; // rdx
  unsigned int v78; // eax
  signed int v79; // eax
  int v80; // edx
  int v81; // eax
  __int64 v82; // rax
  int v83; // esi
  unsigned int v84; // r8d
  _QWORD *v85; // rdx
  unsigned int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // edx
  int v89; // eax
  int v90; // eax
  _QWORD *v91; // rsi
  int v92; // eax
  __int64 v93; // rdi
  _QWORD *v94; // rax
  int v95; // ecx
  _QWORD *v96; // rdi
  int na; // [rsp+0h] [rbp-48h]
  __int64 n; // [rsp+0h] [rbp-48h]
  __int64 v99; // [rsp+8h] [rbp-40h]

  v99 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 45) + 32LL))(*((_QWORD *)this + 45));
  na = *((_DWORD *)this + 84);
  ClpModel::gutsOfDelete(this, 0);
  *((_DWORD *)this + 26) = a2;
  *((_DWORD *)this + 27) = a3;
  *((_DWORD *)this + 84) = na;
  *((_QWORD *)this + 45) = v99;
  if ( (unsigned __int64)a2 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v14 = operator new[](8LL * a2);
  v15 = *((int *)this + 27);
  *((_QWORD *)this + 14) = v14;
  if ( v15 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v16 = operator new[](8 * v15);
  v17 = *((int *)this + 26);
  *((_QWORD *)this + 15) = v16;
  if ( v17 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v18 = operator new[](8 * v17);
  v19 = *((int *)this + 27);
  *((_QWORD *)this + 16) = v18;
  if ( v19 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v20 = (_QWORD *)operator new[](8 * v19);
  v21 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 17) = v20;
  if ( !v21 )
  {
    v22 = *((_DWORD *)this + 27);
    if ( !v22 )
    {
      v23 = 0;
      v24 = (_QWORD *)operator new[](0);
      if ( !src )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_50;
  }
  v90 = v21 + 7;
  v91 = *((_QWORD **)this + 16);
  if ( v21 >= 0 )
    v90 = v21;
  v92 = v90 >> 3;
  if ( v92 > 0 )
  {
    v93 = (unsigned int)(v92 - 1);
    v94 = *((_QWORD **)this + 16);
    v95 = v93;
    v96 = &v91[8 * v93 + 8];
    do
    {
      *v94 = 0;
      v94[1] = 0;
      v94 += 8;
      *(v94 - 6) = 0;
      *(v94 - 5) = 0;
      *(v94 - 4) = 0;
      *(v94 - 3) = 0;
      *(v94 - 2) = 0;
      *(v94 - 1) = 0;
    }
    while ( v94 != v96 );
    v91 += 8 * v95 + 8;
  }
  switch ( v21 % 8 )
  {
    case 1:
      goto LABEL_47;
    case 2:
      goto LABEL_46;
    case 3:
      goto LABEL_45;
    case 4:
      goto LABEL_44;
    case 5:
      goto LABEL_43;
    case 6:
      goto LABEL_42;
    case 7:
      v91[6] = 0;
LABEL_42:
      v91[5] = 0;
LABEL_43:
      v91[4] = 0;
LABEL_44:
      v91[3] = 0;
LABEL_45:
      v91[2] = 0;
LABEL_46:
      v91[1] = 0;
LABEL_47:
      *v91 = 0;
      break;
    default:
      break;
  }
  v22 = *((_DWORD *)this + 27);
  if ( v22 )
  {
    v20 = *((_QWORD **)this + 17);
LABEL_50:
    if ( v22 / 8 > 0 )
    {
      v62 = v20;
      do
      {
        *v62 = 0;
        v62[1] = 0;
        v62 += 8;
        *(v62 - 6) = 0;
        *(v62 - 5) = 0;
        *(v62 - 4) = 0;
        *(v62 - 3) = 0;
        *(v62 - 2) = 0;
        *(v62 - 1) = 0;
      }
      while ( v62 != &v20[8 * (unsigned int)(v22 / 8 - 1) + 8] );
      v20 += 8 * (v22 / 8 - 1) + 8;
    }
    switch ( v22 % 8 )
    {
      case 1:
        goto LABEL_61;
      case 2:
        goto LABEL_60;
      case 3:
        goto LABEL_59;
      case 4:
        goto LABEL_58;
      case 5:
        goto LABEL_57;
      case 6:
        goto LABEL_56;
      case 7:
        v20[6] = 0;
LABEL_56:
        v20[5] = 0;
LABEL_57:
        v20[4] = 0;
LABEL_58:
        v20[3] = 0;
LABEL_59:
        v20[2] = 0;
LABEL_60:
        v20[1] = 0;
LABEL_61:
        *v20 = 0;
        break;
      default:
        break;
    }
  }
  v63 = *((int *)this + 26);
  v64 = *((_DWORD *)this + 26);
  if ( v63 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v23 = 8 * v63;
  v65 = operator new[](v23);
  v24 = (_QWORD *)v65;
  if ( src )
  {
LABEL_8:
    v24 = memcpy(v24, src, v23);
    goto LABEL_9;
  }
  if ( v64 > 0 )
  {
    v66 = (v65 >> 3) & 1;
    if ( (unsigned int)(v64 - 1) <= 4 )
    {
      v71 = 0;
LABEL_71:
      v24[v71] = 0xFFEFFFFFFFFFFFFFLL;
      if ( v64 > (int)(v71 + 1) )
      {
        v24[v71 + 1] = 0xFFEFFFFFFFFFFFFFLL;
        if ( v64 > (int)(v71 + 2) )
        {
          v24[v71 + 2] = 0xFFEFFFFFFFFFFFFFLL;
          v72 = v71 + 3;
          if ( v64 > (int)(v71 + 3) )
          {
            v73 = v71 + 4;
            v24[v72] = 0xFFEFFFFFFFFFFFFFLL;
            if ( v64 > v73 )
              v24[v73] = 0xFFEFFFFFFFFFFFFFLL;
          }
        }
      }
      goto LABEL_9;
    }
    v67 = 0;
    if ( (_DWORD)v66 )
    {
      v67 = 1;
      *v24 = 0xFFEFFFFFFFFFFFFFLL;
    }
    v68 = v64 - v66;
    v69 = &v24[v66];
    v70 = 0;
    do
    {
      ++v70;
      v69 += 2;
      *((_OWORD *)v69 - 1) = xmmword_28C780;
    }
    while ( v68 >> 1 > v70 );
    v71 = (v68 & 0xFFFFFFFE) + v67;
    if ( v68 != (v68 & 0xFFFFFFFE) )
      goto LABEL_71;
  }
LABEL_9:
  v25 = *((int *)this + 26);
  *((_QWORD *)this + 18) = v24;
  v26 = v25;
  if ( v25 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v27 = 8 * v25;
  v28 = operator new[](v27);
  v29 = (_QWORD *)v28;
  if ( a8 )
  {
    v29 = memcpy((void *)v28, a8, v27);
    goto LABEL_12;
  }
  if ( v26 > 0 )
  {
    v74 = (v28 >> 3) & 1;
    if ( (unsigned int)(v26 - 1) <= 4 )
    {
      v79 = 0;
LABEL_91:
      v29[v79] = 0x7FEFFFFFFFFFFFFFLL;
      if ( v26 > v79 + 1 )
      {
        v29[v79 + 1] = 0x7FEFFFFFFFFFFFFFLL;
        if ( v26 > v79 + 2 )
        {
          v29[v79 + 2] = 0x7FEFFFFFFFFFFFFFLL;
          v80 = v79 + 3;
          if ( v26 > v79 + 3 )
          {
            v81 = v79 + 4;
            v29[v80] = 0x7FEFFFFFFFFFFFFFLL;
            if ( v26 > v81 )
              v29[v81] = 0x7FEFFFFFFFFFFFFFLL;
          }
        }
      }
      goto LABEL_12;
    }
    v75 = 0;
    if ( (_DWORD)v74 )
    {
      v75 = 1;
      *(_QWORD *)v28 = 0x7FEFFFFFFFFFFFFFLL;
    }
    v76 = v26 - v74;
    v77 = v28 + 8 * v74;
    v78 = 0;
    do
    {
      ++v78;
      v77 += 16LL;
      *(_OWORD *)(v77 - 16) = xmmword_28C790;
    }
    while ( v76 >> 1 > v78 );
    v79 = (v76 & 0xFFFFFFFE) + v75;
    if ( v76 != (v76 & 0xFFFFFFFE) )
      goto LABEL_91;
  }
LABEL_12:
  v30 = *((int *)this + 27);
  *((_QWORD *)this + 19) = v29;
  v31 = v30;
  if ( v30 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  n = 8 * v30;
  v32 = (double *)operator new[](8 * v30);
  v33 = v32;
  if ( a6 )
  {
    memcpy(v32, a6, n);
  }
  else if ( v31 > 0 )
  {
    memset(v32, 0, 8LL * (unsigned int)(v31 - 1) + 8);
  }
  v34 = (ClpLinearObjective *)operator new(0x28u);
  ClpLinearObjective::ClpLinearObjective(v34, v33, *((_DWORD *)this + 27));
  *((_QWORD *)this + 20) = v34;
  operator delete[](v33);
  v35 = *((int *)this + 26);
  if ( a9 )
  {
    if ( v35 > 0xFFFFFFFFFFFFFFFLL )
      goto LABEL_123;
    v36 = 8 * v35;
    v37 = (void *)operator new[](v36);
    v38 = memcpy(v37, a9, v36);
  }
  else
  {
    v38 = nullptr;
  }
  v39 = *((int *)this + 27);
  *((_QWORD *)this + 21) = v38;
  v40 = v39;
  if ( v39 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_123;
  v41 = 8 * v39;
  v42 = (void *)operator new[](8 * v39);
  v43 = v42;
  if ( a4 )
  {
    v43 = memcpy(v42, a4, v41);
  }
  else if ( v40 > 0 )
  {
    v43 = memset(v42, 0, 8LL * (unsigned int)(v40 - 1) + 8);
  }
  v44 = *((int *)this + 27);
  *((_QWORD *)this + 22) = v43;
  v45 = v44;
  if ( v44 > 0xFFFFFFFFFFFFFFFLL )
LABEL_123:
    __cxa_throw_bad_array_new_length();
  v46 = 8 * v44;
  v47 = operator new[](8 * v44);
  v48 = (_QWORD *)v47;
  if ( a5 )
  {
    v48 = memcpy((void *)v47, a5, v46);
    goto LABEL_24;
  }
  if ( v45 > 0 )
  {
    v82 = (v47 >> 3) & 1;
    if ( (unsigned int)(v45 - 1) <= 4 )
    {
      v87 = 0;
LABEL_107:
      v48[v87] = 0x7FEFFFFFFFFFFFFFLL;
      if ( v45 > (int)(v87 + 1) )
      {
        v48[v87 + 1] = 0x7FEFFFFFFFFFFFFFLL;
        if ( v45 > (int)(v87 + 2) )
        {
          v48[v87 + 2] = 0x7FEFFFFFFFFFFFFFLL;
          v88 = v87 + 3;
          if ( v45 > (int)(v87 + 3) )
          {
            v89 = v87 + 4;
            v48[v88] = 0x7FEFFFFFFFFFFFFFLL;
            if ( v45 > v89 )
              v48[v89] = 0x7FEFFFFFFFFFFFFFLL;
          }
        }
      }
      goto LABEL_24;
    }
    v83 = 0;
    if ( (_DWORD)v82 )
    {
      *v48 = 0x7FEFFFFFFFFFFFFFLL;
      v83 = 1;
    }
    v84 = v45 - v82;
    v85 = &v48[v82];
    v86 = 0;
    do
    {
      ++v86;
      v85 += 2;
      *((_OWORD *)v85 - 1) = xmmword_28C790;
    }
    while ( v86 < v84 >> 1 );
    v87 = (v84 & 0xFFFFFFFE) + v83;
    if ( (v84 & 0xFFFFFFFE) != v84 )
      goto LABEL_107;
  }
LABEL_24:
  v49 = *((_DWORD *)this + 26);
  *((_QWORD *)this + 23) = v48;
  if ( v49 > 0 )
  {
    v50 = 0;
    v51 = 0;
    do
    {
      while ( 1 )
      {
        v52 = *(double *)(*((_QWORD *)this + 18) + v50);
        v53 = (double *)(v50 + *((_QWORD *)this + 14));
        if ( v52 > 0.0 || (v52 = *(double *)(*((_QWORD *)this + 19) + v50), v52 < 0.0) )
          *v53 = v52;
        else
          *v53 = 0.0;
        v54 = (double *)(v50 + *((_QWORD *)this + 18));
        if ( *v54 < -1.0e27 )
          *v54 = -1.797693134862316e308;
        v55 = (double *)(v50 + *((_QWORD *)this + 19));
        if ( *v55 <= 1.0e27 )
          break;
        *v55 = 1.797693134862316e308;
        ++v51;
        v50 += 8;
        if ( v51 >= *((_DWORD *)this + 26) )
          goto LABEL_32;
      }
      ++v51;
      v50 += 8;
    }
    while ( *((_DWORD *)this + 26) > v51 );
  }
LABEL_32:
  result = *((unsigned int *)this + 27);
  if ( (int)result > 0 )
  {
    result = 0;
    v57 = 0;
    do
    {
      while ( 1 )
      {
        v58 = *(double *)(*((_QWORD *)this + 22) + result);
        v59 = (double *)(result + *((_QWORD *)this + 15));
        if ( v58 > 0.0 || (v58 = *(double *)(*((_QWORD *)this + 23) + result), v58 < 0.0) )
          *v59 = v58;
        else
          *v59 = 0.0;
        v60 = (double *)(result + *((_QWORD *)this + 22));
        if ( *v60 < -1.0e27 )
          *v60 = -1.797693134862316e308;
        v61 = (double *)(result + *((_QWORD *)this + 23));
        if ( *v61 <= 1.0e27 )
          break;
        *v61 = 1.797693134862316e308;
        ++v57;
        result += 8;
        if ( v57 >= *((_DWORD *)this + 27) )
          return result;
      }
      ++v57;
      result += 8;
    }
    while ( *((_DWORD *)this + 27) > v57 );
  }
  return result;
}

