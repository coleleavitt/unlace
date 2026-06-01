// Alternative name is '_ZN16ClpNonLinearCostC2ERKS_'
void __fastcall ClpNonLinearCost::ClpNonLinearCost(ClpNonLinearCost *this, const ClpNonLinearCost *a2)
{
  int v2; // r12d
  int v3; // edx
  int v4; // ecx
  int v5; // r12d
  __int128 v6; // xmm2
  __int128 v9; // xmm1
  char v10; // al
  __int128 v11; // xmm0
  int v12; // r13d
  __m128i *v13; // rax
  __m128i *v14; // rsi
  unsigned int v15; // r8d
  const __m128i *v16; // rdx
  __m128i *v17; // rcx
  __int64 v18; // r8
  __m128i v19; // xmm1
  __m128i v20; // xmm0
  __int64 v21; // rdx
  __m128i *v22; // rax
  __m128i *v23; // rsi
  unsigned int v24; // edi
  const __m128i *v25; // rdx
  __m128i *v26; // rcx
  __int64 v27; // rdi
  __m128i v28; // xmm1
  __m128i v29; // xmm0
  __int64 v30; // rdx
  __m128i *v31; // rax
  __m128i *v32; // rsi
  unsigned int v33; // r8d
  const __m128i *v34; // rdx
  __m128i *v35; // rcx
  __int64 v36; // r8
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __int64 v39; // rdx
  unsigned __int64 v40; // r15
  int v41; // r13d
  unsigned __int64 v42; // r15
  _QWORD *v43; // rax
  _QWORD *v44; // rdi
  _QWORD *v45; // rcx
  __int64 *v46; // rdx
  __int64 v47; // xmm0_8
  __int64 v48; // rdx
  _QWORD *v49; // rax
  _QWORD *v50; // rdi
  _QWORD *v51; // rcx
  __int64 *v52; // rsi
  __int64 v53; // r8
  __int64 v54; // xmm0_8
  __int64 v55; // rdx
  int v56; // r13d
  int v57; // r14d
  __m128i *v58; // rax
  __m128i *v59; // rsi
  int v60; // r13d
  __m128i *v61; // rdx
  const __m128i *v62; // rcx
  __int64 v63; // r13
  __m128i v64; // xmm1
  __m128i v65; // xmm0
  __int64 v66; // rdx
  const void *v67; // r14
  unsigned __int64 v68; // r13
  void *v69; // rax
  void *v70; // rax
  const void *v71; // r14
  void *v72; // rax
  void *v73; // rcx
  const void *v74; // rbp
  void *v75; // rax
  void *v76; // rcx
  __m128i *v77; // rdx
  int *v78; // rcx
  int v79; // r8d
  __m128i *v80; // rcx
  int *v81; // rdx
  int v82; // r9d
  __m128i *v83; // rcx
  int *v84; // rdx
  int v85; // r9d
  __m128i *v86; // rcx
  int *v87; // rdx
  int v88; // r9d

  v2 = *((_DWORD *)a2 + 12);
  v3 = *((_DWORD *)a2 + 13);
  v4 = *((_DWORD *)a2 + 36);
  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 3) = 0;
  *((_QWORD *)this + 4) = 0;
  *((_QWORD *)this + 2) = 0xBFF0000000000000LL;
  *((_QWORD *)this + 5) = 0;
  *((_DWORD *)this + 12) = v2;
  *((_DWORD *)this + 13) = v3;
  *((_QWORD *)this + 7) = 0;
  *((_QWORD *)this + 8) = 0;
  *((_QWORD *)this + 9) = 0;
  *((_QWORD *)this + 10) = 0;
  *((_QWORD *)this + 11) = 0;
  *((_QWORD *)this + 12) = 0;
  *((_QWORD *)this + 13) = 0;
  *((_DWORD *)this + 28) = -1;
  *((_QWORD *)this + 15) = 0;
  *((_QWORD *)this + 16) = 0;
  *((_QWORD *)this + 17) = 0;
  *((_DWORD *)this + 36) = v4;
  *((_BYTE *)this + 148) = 1;
  *((_BYTE *)this + 149) = *((_BYTE *)a2 + 149);
  if ( !v2 )
    return;
  v5 = v3 + v2;
  v6 = *(_OWORD *)a2;
  *((_QWORD *)this + 12) = *((_QWORD *)a2 + 12);
  v9 = *((_OWORD *)a2 + 1);
  *((_DWORD *)this + 28) = *((_DWORD *)a2 + 28);
  v10 = *((_BYTE *)a2 + 148);
  v11 = *((_OWORD *)a2 + 2);
  *(_OWORD *)this = v6;
  *((_BYTE *)this + 148) = v10;
  *((_OWORD *)this + 1) = v9;
  *((_OWORD *)this + 2) = v11;
  if ( (v4 & 1) == 0 )
    goto LABEL_20;
  v12 = v5 + 1;
  if ( (unsigned __int64)(v5 + 1) > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_127;
  v13 = (__m128i *)operator new[](4LL * v12);
  *((_QWORD *)this + 7) = v13;
  v14 = *((__m128i **)a2 + 7);
  if ( v5 != -1 && v14 != v13 )
  {
    v15 = v12 >> 3;
    if ( v12 >> 3 > 0 )
    {
      if ( (v14 >= &v13[2] || v13 >= &v14[2]) && v15 > 1 )
      {
        v16 = *((const __m128i **)a2 + 7);
        v17 = v13;
        v18 = v15 - 1;
        do
        {
          v19 = _mm_loadu_si128(v16);
          v16 += 2;
          v17 += 2;
          v20 = _mm_loadu_si128(v16 - 1);
          v17[-2] = v19;
          v17[-1] = v20;
        }
        while ( v16 != &v14[2 * v18 + 2] );
      }
      else
      {
        v86 = v13;
        v87 = *((int **)a2 + 7);
        v18 = v15 - 1;
        do
        {
          v88 = *v87;
          v87 += 8;
          v86 += 2;
          v86[-2].m128i_i32[0] = v88;
          v86[-2].m128i_i32[1] = *(v87 - 7);
          v86[-2].m128i_i32[2] = *(v87 - 6);
          v86[-2].m128i_i32[3] = *(v87 - 5);
          v86[-1].m128i_i32[0] = *(v87 - 4);
          v86[-1].m128i_i32[1] = *(v87 - 3);
          v86[-1].m128i_i32[2] = *(v87 - 2);
          v86[-1].m128i_i32[3] = *(v87 - 1);
        }
        while ( v87 != (int *)&v14[2 * v18 + 2] );
      }
      v21 = 32 * ((int)v18 + 1LL);
      v14 = (__m128i *)((char *)v14 + v21);
      v13 = (__m128i *)((char *)v13 + v21);
    }
    switch ( v12 % 8 )
    {
      case 1:
        goto LABEL_28;
      case 2:
        goto LABEL_27;
      case 3:
        goto LABEL_26;
      case 4:
        goto LABEL_25;
      case 5:
        goto LABEL_24;
      case 6:
        goto LABEL_23;
      case 7:
        v13[1].m128i_i32[2] = v14[1].m128i_i32[2];
LABEL_23:
        v13[1].m128i_i32[1] = v14[1].m128i_i32[1];
LABEL_24:
        v13[1].m128i_i32[0] = v14[1].m128i_i32[0];
LABEL_25:
        v13->m128i_i32[3] = v14->m128i_i32[3];
LABEL_26:
        v13->m128i_i32[2] = v14->m128i_i32[2];
LABEL_27:
        v13->m128i_i32[1] = v14->m128i_i32[1];
LABEL_28:
        v13->m128i_i32[0] = v14->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  if ( (unsigned __int64)v5 > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_127;
  v22 = (__m128i *)operator new[](4LL * v5);
  *((_QWORD *)this + 8) = v22;
  v23 = *((__m128i **)a2 + 8);
  if ( v23 != v22 && v5 )
  {
    v24 = v5 >> 3;
    if ( v5 >> 3 > 0 )
    {
      if ( (v23 >= &v22[2] || v22 >= &v23[2]) && v24 > 1 )
      {
        v25 = *((const __m128i **)a2 + 8);
        v26 = v22;
        v27 = v24 - 1;
        do
        {
          v28 = _mm_loadu_si128(v25);
          v25 += 2;
          v26 += 2;
          v29 = _mm_loadu_si128(v25 - 1);
          v26[-2] = v28;
          v26[-1] = v29;
        }
        while ( v25 != &v23[2 * v27 + 2] );
      }
      else
      {
        v80 = v22;
        v81 = *((int **)a2 + 8);
        v27 = v24 - 1;
        do
        {
          v82 = *v81;
          v81 += 8;
          v80 += 2;
          v80[-2].m128i_i32[0] = v82;
          v80[-2].m128i_i32[1] = *(v81 - 7);
          v80[-2].m128i_i32[2] = *(v81 - 6);
          v80[-2].m128i_i32[3] = *(v81 - 5);
          v80[-1].m128i_i32[0] = *(v81 - 4);
          v80[-1].m128i_i32[1] = *(v81 - 3);
          v80[-1].m128i_i32[2] = *(v81 - 2);
          v80[-1].m128i_i32[3] = *(v81 - 1);
        }
        while ( &v23[2 * v27 + 2] != (__m128i *)v81 );
      }
      v30 = 32 * ((int)v27 + 1LL);
      v23 = (__m128i *)((char *)v23 + v30);
      v22 = (__m128i *)((char *)v22 + v30);
    }
    switch ( v5 % 8 )
    {
      case 1:
        goto LABEL_45;
      case 2:
        goto LABEL_44;
      case 3:
        goto LABEL_43;
      case 4:
        goto LABEL_42;
      case 5:
        goto LABEL_41;
      case 6:
        goto LABEL_40;
      case 7:
        v22[1].m128i_i32[2] = v23[1].m128i_i32[2];
LABEL_40:
        v22[1].m128i_i32[1] = v23[1].m128i_i32[1];
LABEL_41:
        v22[1].m128i_i32[0] = v23[1].m128i_i32[0];
LABEL_42:
        v22->m128i_i32[3] = v23->m128i_i32[3];
LABEL_43:
        v22->m128i_i32[2] = v23->m128i_i32[2];
LABEL_44:
        v22->m128i_i32[1] = v23->m128i_i32[1];
LABEL_45:
        v22->m128i_i32[0] = v23->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v31 = (__m128i *)operator new[](4LL * v5);
  *((_QWORD *)this + 9) = v31;
  v32 = *((__m128i **)a2 + 9);
  if ( v32 != v31 && v5 )
  {
    v33 = v5 >> 3;
    if ( v5 >> 3 > 0 )
    {
      if ( (v32 >= &v31[2] || v31 >= &v32[2]) && v33 > 1 )
      {
        v34 = *((const __m128i **)a2 + 9);
        v35 = v31;
        v36 = v33 - 1;
        do
        {
          v37 = _mm_loadu_si128(v34);
          v34 += 2;
          v35 += 2;
          v38 = _mm_loadu_si128(v34 - 1);
          v35[-2] = v37;
          v35[-1] = v38;
        }
        while ( v34 != &v32[2 * v36 + 2] );
      }
      else
      {
        v83 = v31;
        v84 = *((int **)a2 + 9);
        v36 = v33 - 1;
        do
        {
          v85 = *v84;
          v84 += 8;
          v83 += 2;
          v83[-2].m128i_i32[0] = v85;
          v83[-2].m128i_i32[1] = *(v84 - 7);
          v83[-2].m128i_i32[2] = *(v84 - 6);
          v83[-2].m128i_i32[3] = *(v84 - 5);
          v83[-1].m128i_i32[0] = *(v84 - 4);
          v83[-1].m128i_i32[1] = *(v84 - 3);
          v83[-1].m128i_i32[2] = *(v84 - 2);
          v83[-1].m128i_i32[3] = *(v84 - 1);
        }
        while ( &v32[2 * v36 + 2] != (__m128i *)v84 );
      }
      v39 = 32 * ((int)v36 + 1LL);
      v32 = (__m128i *)((char *)v32 + v39);
      v31 = (__m128i *)((char *)v31 + v39);
    }
    switch ( v5 % 8 )
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
        v31[1].m128i_i32[2] = v32[1].m128i_i32[2];
LABEL_56:
        v31[1].m128i_i32[1] = v32[1].m128i_i32[1];
LABEL_57:
        v31[1].m128i_i32[0] = v32[1].m128i_i32[0];
LABEL_58:
        v31->m128i_i32[3] = v32->m128i_i32[3];
LABEL_59:
        v31->m128i_i32[2] = v32->m128i_i32[2];
LABEL_60:
        v31->m128i_i32[1] = v32->m128i_i32[1];
LABEL_61:
        v31->m128i_i32[0] = v32->m128i_i32[0];
        break;
      default:
        break;
    }
  }
  v40 = *(int *)(*((_QWORD *)this + 7) + 4LL * v5);
  v41 = *(_DWORD *)(*((_QWORD *)this + 7) + 4LL * v5);
  if ( v40 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_127;
  v42 = 8 * v40;
  v43 = (_QWORD *)operator new[](v42);
  *((_QWORD *)this + 10) = v43;
  v44 = *((_QWORD **)a2 + 10);
  if ( v44 != v43 && v41 )
  {
    if ( v41 >> 3 > 0 )
    {
      v45 = v43;
      v46 = *((__int64 **)a2 + 10);
      do
      {
        v47 = *v46;
        v45 += 8;
        v46 += 8;
        *(v45 - 8) = v47;
        *(v45 - 7) = *(v46 - 7);
        *(v45 - 6) = *(v46 - 6);
        *(v45 - 5) = *(v46 - 5);
        *(v45 - 4) = *(v46 - 4);
        *(v45 - 3) = *(v46 - 3);
        *(v45 - 2) = *(v46 - 2);
        *(v45 - 1) = *(v46 - 1);
      }
      while ( &v43[8 * (unsigned int)((v41 >> 3) - 1) + 8] != v45 );
      v48 = ((v41 >> 3) - 1 + 1LL) << 6;
      v44 = (_QWORD *)((char *)v44 + v48);
      v43 = (_QWORD *)((char *)v43 + v48);
    }
    switch ( v41 % 8 )
    {
      case 1:
        goto LABEL_76;
      case 2:
        goto LABEL_75;
      case 3:
        goto LABEL_74;
      case 4:
        goto LABEL_73;
      case 5:
        goto LABEL_72;
      case 6:
        goto LABEL_71;
      case 7:
        v43[6] = v44[6];
LABEL_71:
        v43[5] = v44[5];
LABEL_72:
        v43[4] = v44[4];
LABEL_73:
        v43[3] = v44[3];
LABEL_74:
        v43[2] = v44[2];
LABEL_75:
        v43[1] = v44[1];
LABEL_76:
        *v43 = *v44;
        break;
      default:
        break;
    }
  }
  v49 = (_QWORD *)operator new[](v42);
  *((_QWORD *)this + 11) = v49;
  v50 = *((_QWORD **)a2 + 11);
  if ( v50 != v49 && v41 )
  {
    if ( v41 >> 3 > 0 )
    {
      v51 = v49;
      v52 = *((__int64 **)a2 + 11);
      v53 = (unsigned int)((v41 >> 3) - 1);
      do
      {
        v54 = *v52;
        v51 += 8;
        v52 += 8;
        *(v51 - 8) = v54;
        *(v51 - 7) = *(v52 - 7);
        *(v51 - 6) = *(v52 - 6);
        *(v51 - 5) = *(v52 - 5);
        *(v51 - 4) = *(v52 - 4);
        *(v51 - 3) = *(v52 - 3);
        *(v51 - 2) = *(v52 - 2);
        *(v51 - 1) = *(v52 - 1);
      }
      while ( &v49[8 * v53 + 8] != v51 );
      v55 = ((int)v53 + 1LL) << 6;
      v50 = (_QWORD *)((char *)v50 + v55);
      v49 = (_QWORD *)((char *)v49 + v55);
    }
    switch ( v41 % 8 )
    {
      case 1:
        goto LABEL_90;
      case 2:
        goto LABEL_89;
      case 3:
        goto LABEL_88;
      case 4:
        goto LABEL_87;
      case 5:
        goto LABEL_86;
      case 6:
        goto LABEL_85;
      case 7:
        v49[6] = v50[6];
LABEL_85:
        v49[5] = v50[5];
LABEL_86:
        v49[4] = v50[4];
LABEL_87:
        v49[3] = v50[3];
LABEL_88:
        v49[2] = v50[2];
LABEL_89:
        v49[1] = v50[1];
LABEL_90:
        *v49 = *v50;
        break;
      default:
        break;
    }
  }
  v56 = v41 + 31;
  v57 = v56 >> 5;
  if ( (unsigned __int64)(v56 >> 5) > 0x1FFFFFFFFFFFFFFELL )
    goto LABEL_127;
  v58 = (__m128i *)operator new[](4LL * v57);
  *((_QWORD *)this + 13) = v58;
  v59 = *((__m128i **)a2 + 13);
  if ( v57 && v59 != v58 )
  {
    v60 = v56 >> 8;
    if ( v60 > 0 )
    {
      if ( (v58 >= &v59[2] || v59 >= &v58[2]) && (unsigned int)v60 > 1 )
      {
        v61 = v58;
        v62 = *((const __m128i **)a2 + 13);
        v63 = (unsigned int)(v60 - 1);
        do
        {
          v64 = _mm_loadu_si128(v62);
          v61 += 2;
          v62 += 2;
          v65 = _mm_loadu_si128(v62 - 1);
          v61[-2] = v64;
          v61[-1] = v65;
        }
        while ( v61 != &v58[2 * v63 + 2] );
      }
      else
      {
        v77 = v58;
        v78 = *((int **)a2 + 13);
        v63 = (unsigned int)(v60 - 1);
        do
        {
          v79 = *v78;
          v77 += 2;
          v78 += 8;
          v77[-2].m128i_i32[0] = v79;
          v77[-2].m128i_i32[1] = *(v78 - 7);
          v77[-2].m128i_i32[2] = *(v78 - 6);
          v77[-2].m128i_i32[3] = *(v78 - 5);
          v77[-1].m128i_i32[0] = *(v78 - 4);
          v77[-1].m128i_i32[1] = *(v78 - 3);
          v77[-1].m128i_i32[2] = *(v78 - 2);
          v77[-1].m128i_i32[3] = *(v78 - 1);
        }
        while ( &v58[2 * v63 + 2] != v77 );
      }
      v66 = 32 * ((int)v63 + 1LL);
      v59 = (__m128i *)((char *)v59 + v66);
      v58 = (__m128i *)((char *)v58 + v66);
    }
    v4 = *((_DWORD *)this + 36);
    switch ( v57 % 8 )
    {
      case 1:
        goto LABEL_19;
      case 2:
        goto LABEL_18;
      case 3:
        goto LABEL_17;
      case 4:
        goto LABEL_16;
      case 5:
        goto LABEL_15;
      case 6:
        goto LABEL_14;
      case 7:
        v58[1].m128i_i32[2] = v59[1].m128i_i32[2];
LABEL_14:
        v58[1].m128i_i32[1] = v59[1].m128i_i32[1];
LABEL_15:
        v58[1].m128i_i32[0] = v59[1].m128i_i32[0];
LABEL_16:
        v58->m128i_i32[3] = v59->m128i_i32[3];
LABEL_17:
        v58->m128i_i32[2] = v59->m128i_i32[2];
LABEL_18:
        v58->m128i_i32[1] = v59->m128i_i32[1];
LABEL_19:
        v58->m128i_i32[0] = v59->m128i_i32[0];
        break;
      default:
        break;
    }
LABEL_20:
    if ( (v4 & 2) == 0 )
      return;
    goto LABEL_101;
  }
  if ( (*((_DWORD *)this + 36) & 2) == 0 )
    return;
LABEL_101:
  v67 = *((const void **)a2 + 16);
  if ( !v67 )
  {
    v71 = *((const void **)a2 + 17);
    *((_QWORD *)this + 16) = 0;
    if ( !v71 )
      goto LABEL_123;
    if ( (unsigned __int64)v5 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v68 = 8LL * v5;
      goto LABEL_104;
    }
LABEL_127:
    __cxa_throw_bad_array_new_length();
  }
  if ( (unsigned __int64)v5 > 0xFFFFFFFFFFFFFFFLL )
    goto LABEL_127;
  v68 = 8LL * v5;
  v69 = (void *)operator new[](v68);
  v70 = memcpy(v69, v67, v68);
  v71 = *((const void **)a2 + 17);
  *((_QWORD *)this + 16) = v70;
  if ( !v71 )
  {
LABEL_123:
    v73 = nullptr;
    goto LABEL_105;
  }
LABEL_104:
  v72 = (void *)operator new[](v68);
  v73 = memcpy(v72, v71, v68);
LABEL_105:
  v74 = *((const void **)a2 + 15);
  *((_QWORD *)this + 17) = v73;
  if ( v74 )
  {
    v75 = (void *)operator new[](v5);
    v76 = memcpy(v75, v74, v5);
  }
  else
  {
    v76 = nullptr;
  }
  *((_QWORD *)this + 15) = v76;
}

