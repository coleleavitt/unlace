__int64 __fastcall ClpCholeskyBase::order(ClpCholeskyBase *this, ClpInterior *a2)
{
  int v3; // r14d
  char v4; // bl
  const void *v5; // rdi
  int v6; // r13d
  _QWORD *v7; // rax
  int v8; // edi
  void *v9; // rax
  size_t v10; // rdx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 (__fastcall *v13)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v14)(ClpPackedMatrix *__hidden); // rdx
  __int64 (__fastcall *v15)(ClpPackedMatrix *__hidden); // rax
  _QWORD *v16; // rdi
  __int64 v17; // rax
  __int64 (*v18)(void); // rdx
  __int64 (*v19)(void); // rdx
  __int64 (__fastcall *v20)(ClpPackedMatrix *__hidden); // rax
  unsigned __int64 v21; // rdi
  int *v22; // r15
  unsigned __int64 v23; // rdi
  __int64 v24; // rax
  unsigned __int64 v25; // rdi
  _DWORD *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  _DWORD *v29; // r12
  unsigned __int64 v30; // rax
  int v31; // edi
  unsigned __int64 v32; // rsi
  __int64 v33; // rax
  unsigned int v34; // edi
  __m128i si128; // xmm1
  unsigned int v36; // ecx
  __m128i *v37; // rdx
  unsigned int v38; // eax
  unsigned int v39; // ecx
  __m128i v40; // xmm0
  signed int v41; // eax
  int v42; // edx
  int v43; // eax
  void *v44; // rdi
  void *v45; // rdi
  __int64 v46; // rdi
  char *v47; // rax
  __int64 v48; // rdx
  int v49; // edi
  int *v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  int v53; // r14d
  char *v54; // rax
  unsigned __int64 v55; // rax
  ClpCholeskyDense *v56; // r13
  __int64 v57; // r13
  int v58; // eax
  int v59; // r10d
  __int64 v60; // r11
  int *v61; // rsi
  __int64 v62; // r14
  __int64 v63; // rax
  int v64; // edx
  int v65; // ecx
  int *v66; // rax
  __int64 v67; // r8
  int v68; // edx
  int *v69; // rax
  __int64 v70; // rdx
  unsigned __int64 v71; // rdi
  __int64 v72; // rax
  int v73; // edx
  __int64 v74; // rsi
  __int64 v75; // rdi
  __int64 v76; // rdx
  __int64 v77; // rsi
  int v79; // esi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rcx
  size_t v83; // rdx
  void *v84; // rdi
  _QWORD *v85; // rdi
  __int64 (__fastcall *v86)(ClpPackedMatrix *__hidden); // rax
  int v87; // eax
  int v88; // eax
  int v89; // ecx
  _DWORD *v90; // rdx
  int v91; // ecx
  __int64 v92; // rcx
  _DWORD *v93; // rax
  _OWORD *v94; // rax
  _DWORD *v95; // rax
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // [rsp+0h] [rbp-A8h]
  int v99; // [rsp+0h] [rbp-A8h]
  __int64 v100; // [rsp+8h] [rbp-A0h]
  __int64 v101; // [rsp+10h] [rbp-98h]
  int v102; // [rsp+2Ch] [rbp-7Ch]
  __int64 v103; // [rsp+30h] [rbp-78h]
  __int64 v104; // [rsp+38h] [rbp-70h]
  __int64 v105; // [rsp+40h] [rbp-68h]
  _DWORD *v106; // [rsp+58h] [rbp-50h]
  __int64 v107; // [rsp+68h] [rbp-40h]

  *((_QWORD *)this + 4) = a2;
  v3 = *((_DWORD *)a2 + 26);
  v4 = *((_BYTE *)this + 12);
  if ( v3 > 6 )
  {
    if ( (unsigned int)ClpCholeskyBase::preOrder(this, v4, 1, v4) )
      return 0xFFFFFFFFLL;
    v83 = *((int *)this + 11);
    v84 = *((void **)this + 7);
    *((_DWORD *)this + 20) = 0;
    memset(v84, 0, v83);
    return ClpCholeskyBase::orderAMD(this);
  }
  v5 = *((const void **)a2 + 20);
  v6 = *((_DWORD *)a2 + 27);
  v98 = 0;
  if ( v5 )
  {
    v7 = __dynamic_cast(
           v5,
           (const struct __class_type_info *)&`typeinfo for'ClpObjective,
           (const struct __class_type_info *)&`typeinfo for'ClpQuadraticObjective,
           0);
    if ( v7 )
      v98 = v7[3];
  }
  v8 = v6 + 2 * v3;
  if ( !v4 )
    v8 = v3;
  *((_DWORD *)this + 11) = v8;
  v9 = (void *)operator new[](v8);
  v10 = *((int *)this + 11);
  *((_QWORD *)this + 7) = v9;
  *((_DWORD *)this + 20) = 0;
  memset(v9, 0, v10);
  *((_QWORD *)this + 118) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 24) + 128LL))(*((_QWORD *)a2 + 24));
  v11 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v12 = *v11;
  v13 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v11 + 56LL);
  if ( v13 == ClpPackedMatrix::getVectorStarts )
  {
    v14 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v12 + 64);
    v107 = *(_QWORD *)(v11[11] + 48LL);
    if ( v14 == ClpPackedMatrix::getVectorLengths )
      goto LABEL_9;
LABEL_135:
    v100 = ((__int64 (*)(void))v14)();
    v11 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
    v15 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v11 + 48LL);
    if ( v15 == ClpPackedMatrix::getIndices )
      goto LABEL_10;
    goto LABEL_136;
  }
  v107 = ((__int64 (*)(void))v13)();
  v11 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
  v12 = *v11;
  v14 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v11 + 64LL);
  if ( v14 != ClpPackedMatrix::getVectorLengths )
    goto LABEL_135;
LABEL_9:
  v15 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v12 + 48);
  v100 = *(_QWORD *)(v11[11] + 56LL);
  if ( v15 == ClpPackedMatrix::getIndices )
  {
LABEL_10:
    v101 = *(_QWORD *)(v11[11] + 40LL);
    goto LABEL_11;
  }
LABEL_136:
  v101 = ((__int64 (*)(void))v15)();
LABEL_11:
  v16 = *((_QWORD **)this + 118);
  v17 = *v16;
  v18 = *(__int64 (**)(void))(*v16 + 56LL);
  if ( (char *)v18 == (char *)ClpPackedMatrix::getVectorStarts )
  {
    v103 = *(_QWORD *)(v16[11] + 48LL);
  }
  else
  {
    v97 = v18();
    v16 = *((_QWORD **)this + 118);
    v103 = v97;
    v17 = *v16;
  }
  v19 = *(__int64 (**)(void))(v17 + 64);
  if ( (char *)v19 != (char *)ClpPackedMatrix::getVectorLengths )
  {
    v96 = v19();
    v16 = *((_QWORD **)this + 118);
    v104 = v96;
    v20 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v16 + 48LL);
    if ( v20 == ClpPackedMatrix::getIndices )
      goto LABEL_15;
LABEL_133:
    v105 = ((__int64 (*)(void))v20)();
    goto LABEL_16;
  }
  v20 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(v17 + 48);
  v104 = *(_QWORD *)(v16[11] + 56LL);
  if ( v20 != ClpPackedMatrix::getIndices )
    goto LABEL_133;
LABEL_15:
  v105 = *(_QWORD *)(v16[11] + 40LL);
LABEL_16:
  v21 = *((int *)this + 11);
  if ( v21 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v22 = (int *)operator new[](4 * v21);
  v23 = *((_DWORD *)this + 11) + 1;
  if ( v23 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v24 = operator new[](4 * v23);
  v25 = *((int *)this + 11);
  v26 = (_DWORD *)v24;
  if ( v25 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v27 = operator new[](4 * v25);
  v28 = *((int *)this + 11);
  v29 = (_DWORD *)v27;
  if ( (_DWORD)v28 )
  {
    v79 = (int)v28 / 8;
    if ( (int)v28 / 8 > 0 )
    {
      v80 = (unsigned int)(v79 - 1);
      v81 = v27 + 32 * v80 + 32;
      do
      {
        *(_OWORD *)v27 = 0;
        v27 += 32;
        *(_OWORD *)(v27 - 16) = 0;
      }
      while ( v81 != v27 );
      v27 = (__int64)&v29[8 * (int)v80 + 8];
      v82 = (unsigned int)((int)v28 % 8);
      switch ( (int)v82 )
      {
        case 1:
          goto LABEL_102;
        case 2:
          goto LABEL_117;
        case 3:
          goto LABEL_118;
        case 4:
          goto LABEL_120;
        case 5:
          goto LABEL_121;
        case 6:
          goto LABEL_122;
        case 7:
          goto LABEL_141;
        default:
          goto LABEL_104;
      }
    }
    v82 = (unsigned int)((int)v28 % 8);
    switch ( (int)v82 )
    {
      case 1:
        goto LABEL_102;
      case 2:
LABEL_117:
        *(_DWORD *)(v27 + 4) = 0;
        goto LABEL_102;
      case 3:
LABEL_118:
        *(_DWORD *)(v27 + 8) = 0;
        goto LABEL_119;
      case 4:
        goto LABEL_120;
      case 5:
        goto LABEL_121;
      case 6:
        goto LABEL_122;
      case 7:
LABEL_141:
        *(_DWORD *)(v27 + 24) = 0;
        v82 = 7;
LABEL_122:
        *(_DWORD *)(v27 + 20) = 0;
LABEL_121:
        *(_DWORD *)(v27 + 16) = 0;
LABEL_120:
        *(_DWORD *)(v27 + 12) = 0;
        *(_DWORD *)(v27 + 8) = 0;
LABEL_119:
        *(_DWORD *)(v27 + 4) = 0;
LABEL_102:
        *(_DWORD *)v27 = 0;
        if ( v79 <= 0 )
        {
          v95 = v26;
        }
        else
        {
          LODWORD(v80) = v79 - 1;
LABEL_104:
          v94 = v26;
          do
          {
            *v94 = 0;
            v94 += 2;
            *(v94 - 1) = 0;
          }
          while ( &v26[8 * (unsigned int)v80 + 8] != (_DWORD *)v94 );
          v95 = &v26[8 * (unsigned int)v80 + 8];
        }
        switch ( v82 )
        {
          case 1LL:
            goto LABEL_114;
          case 2LL:
            goto LABEL_113;
          case 3LL:
            goto LABEL_112;
          case 4LL:
            goto LABEL_111;
          case 5LL:
            goto LABEL_110;
          case 6LL:
            goto LABEL_109;
          case 7LL:
            v95[6] = 0;
LABEL_109:
            v95[5] = 0;
LABEL_110:
            v95[4] = 0;
LABEL_111:
            v95[3] = 0;
LABEL_112:
            v95[2] = 0;
LABEL_113:
            v95[1] = 0;
LABEL_114:
            *v95 = 0;
            break;
          default:
            goto LABEL_115;
        }
        break;
      default:
        break;
    }
LABEL_115:
    *((_DWORD *)this + 40) = 0;
    if ( v28 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_116;
  }
  else
  {
    *((_DWORD *)this + 40) = 0;
    v28 = 0;
  }
  v30 = operator new[](4 * v28);
  v31 = *((_DWORD *)this + 11);
  v32 = v30;
  v106 = (_DWORD *)v30;
  *((_QWORD *)this + 9) = v30;
  v102 = v31;
  if ( v31 > 0 )
  {
    v33 = -(int)(v30 >> 2) & 3;
    if ( (unsigned int)(v31 - 1) <= 5 )
    {
      v41 = 0;
LABEL_30:
      v32 = (unsigned __int64)v106;
      v106[v41] = v41;
      if ( v102 > v41 + 1 )
      {
        v106[v41 + 1] = v41 + 1;
        if ( v41 + 2 < v102 )
        {
          v106[v41 + 2] = v41 + 2;
          if ( v102 > v41 + 3 )
          {
            v106[v41 + 3] = v41 + 3;
            v42 = v41 + 4;
            if ( v102 > v41 + 4 )
            {
              v43 = v41 + 5;
              v106[v42] = v42;
              if ( v102 > v43 )
                v106[v43] = v43;
            }
          }
        }
      }
      goto LABEL_36;
    }
    v34 = 0;
    if ( (_DWORD)v33 )
    {
      *(_DWORD *)v32 = 0;
      v34 = 1;
      if ( (_DWORD)v33 != 1 )
      {
        *(_DWORD *)(v32 + 4) = 1;
        v34 = 2;
        if ( (_DWORD)v33 != 2 )
        {
          *(_DWORD *)(v32 + 8) = 2;
          v34 = 3;
        }
      }
    }
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v32 = (unsigned int)(v102 - v33);
    v36 = v102 - v33;
    v37 = (__m128i *)&v106[v33];
    v38 = 0;
    v39 = v36 >> 2;
    v40 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v34), 0), (__m128i)xmmword_289BB0);
    do
    {
      ++v38;
      ++v37;
      v37[-1] = v40;
      v40 = _mm_add_epi32(v40, si128);
    }
    while ( v39 > v38 );
    v41 = (v32 & 0xFFFFFFFC) + v34;
    if ( (v32 & 0xFFFFFFFC) != (_DWORD)v32 )
      goto LABEL_30;
  }
LABEL_36:
  if ( *((_BYTE *)this + 12) )
  {
    v85 = *(_QWORD **)(*((_QWORD *)this + 4) + 192LL);
    v86 = *(__int64 (__fastcall **)(ClpPackedMatrix *__hidden))(*v85 + 16LL);
    if ( v86 == ClpPackedMatrix::getNumElements )
    {
      v87 = *(_DWORD *)(v85[11] + 72LL);
    }
    else
    {
      v87 = ((__int64 (__fastcall *)(_QWORD *, unsigned __int64))v86)(v85, v32);
      v102 = *((_DWORD *)this + 11);
    }
    v88 = v6 + v3 + v87 + 2 * v3;
    if ( v98 )
      v88 += *(_DWORD *)(v98 + 72);
    *((_DWORD *)this + 40) = v88 - v102;
    goto LABEL_75;
  }
  if ( *((int *)this + 244) <= 0 )
    goto LABEL_57;
  v44 = *((void **)this + 119);
  if ( v44 )
    operator delete[](v44);
  v45 = *((void **)this + 120);
  if ( v45 )
    operator delete[](v45);
  v46 = *((_QWORD *)this + 121);
  if ( v46 )
    (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v46 + 48LL))(v46, v32);
  v47 = (char *)operator new[](v6);
  v48 = *((int *)this + 11);
  *((_QWORD *)this + 119) = v47;
  v49 = v48;
  v26[v48] = 0;
  if ( v6 <= 0 )
  {
    if ( !(_DWORD)v48 )
      goto LABEL_131;
    goto LABEL_93;
  }
  v50 = (int *)v100;
  do
  {
    v51 = *v50++;
    ++v26[v51];
  }
  while ( v50 != (int *)(v100 + 4LL * (unsigned int)(v6 - 1) + 4) );
  if ( v49 )
  {
LABEL_93:
    v89 = v49 + 7;
    v90 = v26;
    if ( v49 >= 0 )
      v89 = v49;
    v91 = v89 >> 3;
    if ( v91 > 0 )
    {
      v92 = (unsigned int)(v91 - 1);
      do
      {
        *(_OWORD *)v90 = 0;
        v90 += 8;
        *((_OWORD *)v90 - 1) = 0;
      }
      while ( &v26[8 * v92 + 8] != v90 );
      v90 = &v26[8 * (int)v92 + 8];
    }
    switch ( v49 % 8 )
    {
      case 1:
        goto LABEL_129;
      case 2:
        goto LABEL_128;
      case 3:
        goto LABEL_127;
      case 4:
        goto LABEL_126;
      case 5:
        goto LABEL_125;
      case 6:
        goto LABEL_124;
      case 7:
        v90[6] = 0;
LABEL_124:
        v90[5] = 0;
LABEL_125:
        v90[4] = 0;
LABEL_126:
        v90[3] = 0;
LABEL_127:
        v90[2] = 0;
LABEL_128:
        v90[1] = 0;
LABEL_129:
        *v90 = 0;
        break;
      default:
        break;
    }
    if ( v6 > 0 )
      goto LABEL_48;
LABEL_131:
    operator delete[](v47);
    goto LABEL_101;
  }
LABEL_48:
  v52 = 0;
  v53 = 0;
  while ( 1 )
  {
    v54 = &v47[v52];
    if ( *(_DWORD *)(v100 + 4 * v52) >= *((_DWORD *)this + 244) )
      break;
    ++v52;
    *v54 = 0;
    if ( v6 <= (int)v52 )
      goto LABEL_53;
LABEL_50:
    v47 = *((char **)this + 119);
  }
  ++v52;
  ++v53;
  *v54 = 1;
  if ( v6 > (int)v52 )
    goto LABEL_50;
LABEL_53:
  if ( v53 && v53 <= 100 )
  {
    v55 = v53 * *((_DWORD *)this + 11);
    if ( v55 <= 0xFFFFFFFFFFFFFFFLL )
    {
      *((_QWORD *)this + 120) = operator new[](8 * v55);
      v56 = (ClpCholeskyDense *)operator new(0x3D8u);
      ClpCholeskyDense::ClpCholeskyDense(v56);
      *((_QWORD *)this + 121) = v56;
      ClpCholeskyDense::reserveSpace(v56, nullptr, v53);
      v106 = *((_DWORD **)this + 9);
      v102 = *((_DWORD *)this + 11);
      goto LABEL_57;
    }
LABEL_116:
    __cxa_throw_bad_array_new_length();
  }
  v47 = *((char **)this + 119);
  if ( v47 )
    goto LABEL_131;
LABEL_101:
  v93 = *((_DWORD **)this + 9);
  *((_QWORD *)this + 119) = 0;
  *((_QWORD *)this + 120) = 0;
  *((_QWORD *)this + 121) = 0;
  v106 = v93;
  v102 = *((_DWORD *)this + 11);
LABEL_57:
  if ( v102 > 0 )
  {
    v57 = 0;
    v99 = *((_DWORD *)this + 40);
    do
    {
      *v22 = v57;
      v26[v57] = 1;
      v58 = *(_DWORD *)(v103 + 4 * v57);
      if ( v58 >= v58 + *(_DWORD *)(v104 + 4 * v57) )
      {
        v59 = 1;
      }
      else
      {
        v59 = 1;
        v60 = *((_QWORD *)this + 119);
        v61 = (int *)(v105 + 4LL * v58);
        v62 = v105 + 4 + 4 * ((unsigned int)(*(_DWORD *)(v104 + 4 * v57) - 1) + (__int64)v58);
        do
        {
          while ( 1 )
          {
            v63 = *v61;
            if ( !v60 || !*(_BYTE *)(v60 + v63) )
            {
              v64 = *(_DWORD *)(v107 + 4 * v63);
              v65 = v64 + *(_DWORD *)(v100 + 4 * v63);
              if ( v64 < v65 )
                break;
            }
            if ( (int *)v62 == ++v61 )
              goto LABEL_71;
          }
          v66 = (int *)(v101 + 4LL * v64);
          v67 = v101 + 4 + 4 * ((unsigned int)(v65 - v64 - 1) + (__int64)v64);
          do
          {
            v68 = *v66;
            if ( *v66 < (int)v57 && !v26[v68] )
            {
              ++v29[v68];
              v26[v68] = 1;
              v22[v59++] = v68;
            }
            ++v66;
          }
          while ( (int *)v67 != v66 );
          ++v61;
        }
        while ( (int *)v62 != v61 );
      }
LABEL_71:
      v99 += v59;
      v29[v57] += v59;
      *((_DWORD *)this + 40) = v99;
      v69 = v22;
      do
      {
        v70 = *v69++;
        v26[v70] = 0;
      }
      while ( &v22[v59 - 1 + 1] != v69 );
      ++v57;
    }
    while ( (unsigned int)(v102 - 1) + 1LL != v57 );
  }
  CoinSort_2<int,int>(v29, &v29[v102], v106);
LABEL_75:
  operator delete[](v22);
  operator delete[](v26);
  operator delete[](v29);
  v71 = *((int *)this + 11);
  if ( v71 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_116;
  v72 = operator new[](4 * v71);
  v73 = *((_DWORD *)this + 11);
  *((_QWORD *)this + 8) = v72;
  if ( v73 > 0 )
  {
    v74 = (unsigned int)(v73 - 1);
    v75 = *((_QWORD *)this + 9);
    v76 = 0;
    v77 = v74 + 1;
    do
    {
      *(_DWORD *)(v72 + 4LL * *(int *)(v75 + 4 * v76)) = v76;
      ++v76;
    }
    while ( v76 != v77 );
  }
  return 0;
}

