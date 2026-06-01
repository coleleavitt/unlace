__int64 __fastcall ClpNonLinearCost::operator=(__int64 a1, __int128 *a2)
{
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  int v13; // r12d
  int v14; // ecx
  __int128 v15; // xmm2
  __int128 v16; // xmm1
  char v17; // al
  __int128 v18; // xmm0
  char v19; // al
  int v21; // r12d
  int v22; // r13d
  __m128i *v23; // rax
  __m128i *v24; // rsi
  unsigned int v25; // r8d
  const __m128i *v26; // rdx
  __m128i *v27; // rcx
  __int64 v28; // r8
  __m128i v29; // xmm1
  __m128i v30; // xmm0
  __int64 v31; // rdx
  const void *v32; // r13
  unsigned __int64 v33; // r14
  void *v34; // rax
  void *v35; // rax
  const void *v36; // r13
  void *v37; // rax
  void *v38; // rcx
  const void *v39; // r13
  void *v40; // rax
  void *v41; // rcx
  __m128i *v42; // rax
  __m128i *v43; // rsi
  unsigned int v44; // edi
  const __m128i *v45; // rdx
  __m128i *v46; // rcx
  __int64 v47; // rdi
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __int64 v50; // rdx
  __m128i *v51; // rax
  __m128i *v52; // rsi
  unsigned int v53; // r8d
  const __m128i *v54; // rdx
  __m128i *v55; // rcx
  __int64 v56; // r8
  __m128i v57; // xmm1
  __m128i v58; // xmm0
  __int64 v59; // rdx
  unsigned __int64 v60; // r15
  int v61; // r13d
  unsigned __int64 v62; // r15
  _QWORD *v63; // rax
  _QWORD *v64; // rdi
  _QWORD *v65; // rcx
  __int64 *v66; // rdx
  __int64 v67; // xmm0_8
  __int64 v68; // rdx
  _QWORD *v69; // rax
  _QWORD *v70; // rdi
  _QWORD *v71; // rsi
  __int64 *v72; // rcx
  __int64 v73; // r8
  __int64 v74; // xmm0_8
  __int64 v75; // rdx
  int v76; // r13d
  int v77; // r14d
  __m128i *v78; // rax
  __m128i *v79; // rsi
  int v80; // r13d
  __m128i *v81; // rdx
  const __m128i *v82; // rcx
  __int64 v83; // r13
  __m128i v84; // xmm1
  __m128i v85; // xmm0
  __int64 v86; // rdx
  __m128i *v87; // rdx
  int *v88; // rcx
  int v89; // r9d
  __m128i *v90; // rcx
  int *v91; // rdx
  int v92; // r8d
  __m128i *v93; // rdi
  int *v94; // rcx
  int v95; // r9d
  __m128i *v96; // rcx
  int *v97; // rdi
  int v98; // r9d

  if ( (__int128 *)a1 != a2 )
  {
    *(_DWORD *)(a1 + 48) = *((_DWORD *)a2 + 12);
    *(_DWORD *)(a1 + 52) = *((_DWORD *)a2 + 13);
    v4 = *(void **)(a1 + 56);
    if ( v4 )
      operator delete[](v4);
    v5 = *(void **)(a1 + 64);
    if ( v5 )
      operator delete[](v5);
    v6 = *(void **)(a1 + 72);
    if ( v6 )
      operator delete[](v6);
    v7 = *(void **)(a1 + 80);
    if ( v7 )
      operator delete[](v7);
    v8 = *(void **)(a1 + 88);
    if ( v8 )
      operator delete[](v8);
    v9 = *(void **)(a1 + 104);
    if ( v9 )
      operator delete[](v9);
    v10 = *(void **)(a1 + 120);
    if ( v10 )
      operator delete[](v10);
    v11 = *(void **)(a1 + 128);
    if ( v11 )
      operator delete[](v11);
    v12 = *(void **)(a1 + 136);
    if ( v12 )
      operator delete[](v12);
    v13 = *(_DWORD *)(a1 + 48);
    v14 = *((_DWORD *)a2 + 36);
    *(_QWORD *)(a1 + 56) = 0;
    *(_QWORD *)(a1 + 64) = 0;
    *(_QWORD *)(a1 + 80) = 0;
    *(_QWORD *)(a1 + 88) = 0;
    *(_QWORD *)(a1 + 104) = 0;
    *(_QWORD *)(a1 + 120) = 0;
    *(_QWORD *)(a1 + 128) = 0;
    *(_QWORD *)(a1 + 136) = 0;
    *(_DWORD *)(a1 + 144) = v14;
    if ( !v13 )
      goto LABEL_21;
    v21 = *(_DWORD *)(a1 + 52) + v13;
    if ( (v14 & 1) != 0 )
    {
      v22 = v21 + 1;
      if ( (unsigned __int64)(v21 + 1) > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_146;
      v23 = (__m128i *)operator new[](4LL * v22);
      *(_QWORD *)(a1 + 56) = v23;
      v24 = *((__m128i **)a2 + 7);
      if ( v21 != -1 && v24 != v23 )
      {
        v25 = v22 >> 3;
        if ( v22 >> 3 > 0 )
        {
          if ( (v24 >= &v23[2] || v23 >= &v24[2]) && v25 > 1 )
          {
            v26 = *((const __m128i **)a2 + 7);
            v27 = v23;
            v28 = v25 - 1;
            do
            {
              v29 = _mm_loadu_si128(v26);
              v26 += 2;
              v27 += 2;
              v30 = _mm_loadu_si128(v26 - 1);
              v27[-2] = v29;
              v27[-1] = v30;
            }
            while ( v26 != &v24[2 * v28 + 2] );
          }
          else
          {
            v93 = v23;
            v94 = *((int **)a2 + 7);
            v28 = v25 - 1;
            do
            {
              v95 = *v94;
              v94 += 8;
              v93 += 2;
              v93[-2].m128i_i32[0] = v95;
              v93[-2].m128i_i32[1] = *(v94 - 7);
              v93[-2].m128i_i32[2] = *(v94 - 6);
              v93[-2].m128i_i32[3] = *(v94 - 5);
              v93[-1].m128i_i32[0] = *(v94 - 4);
              v93[-1].m128i_i32[1] = *(v94 - 3);
              v93[-1].m128i_i32[2] = *(v94 - 2);
              v93[-1].m128i_i32[3] = *(v94 - 1);
            }
            while ( v94 != (int *)&v24[2 * v28 + 2] );
          }
          v31 = 32 * ((int)v28 + 1LL);
          v24 = (__m128i *)((char *)v24 + v31);
          v23 = (__m128i *)((char *)v23 + v31);
        }
        switch ( v22 % 8 )
        {
          case 1:
            goto LABEL_55;
          case 2:
            goto LABEL_54;
          case 3:
            goto LABEL_53;
          case 4:
            goto LABEL_52;
          case 5:
            goto LABEL_51;
          case 6:
            goto LABEL_50;
          case 7:
            v23[1].m128i_i32[2] = v24[1].m128i_i32[2];
LABEL_50:
            v23[1].m128i_i32[1] = v24[1].m128i_i32[1];
LABEL_51:
            v23[1].m128i_i32[0] = v24[1].m128i_i32[0];
LABEL_52:
            v23->m128i_i32[3] = v24->m128i_i32[3];
LABEL_53:
            v23->m128i_i32[2] = v24->m128i_i32[2];
LABEL_54:
            v23->m128i_i32[1] = v24->m128i_i32[1];
LABEL_55:
            v23->m128i_i32[0] = v24->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      if ( (unsigned __int64)v21 > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_146;
      v42 = (__m128i *)operator new[](4LL * v21);
      *(_QWORD *)(a1 + 64) = v42;
      v43 = *((__m128i **)a2 + 8);
      if ( v43 != v42 && v21 )
      {
        v44 = v21 >> 3;
        if ( v21 >> 3 > 0 )
        {
          if ( (v43 >= &v42[2] || v42 >= &v43[2]) && v44 > 1 )
          {
            v45 = *((const __m128i **)a2 + 8);
            v46 = v42;
            v47 = v44 - 1;
            do
            {
              v48 = _mm_loadu_si128(v45);
              v45 += 2;
              v46 += 2;
              v49 = _mm_loadu_si128(v45 - 1);
              v46[-2] = v48;
              v46[-1] = v49;
            }
            while ( v45 != &v43[2 * v47 + 2] );
          }
          else
          {
            v87 = v42;
            v88 = *((int **)a2 + 8);
            v47 = v44 - 1;
            do
            {
              v89 = *v88;
              v88 += 8;
              v87 += 2;
              v87[-2].m128i_i32[0] = v89;
              v87[-2].m128i_i32[1] = *(v88 - 7);
              v87[-2].m128i_i32[2] = *(v88 - 6);
              v87[-2].m128i_i32[3] = *(v88 - 5);
              v87[-1].m128i_i32[0] = *(v88 - 4);
              v87[-1].m128i_i32[1] = *(v88 - 3);
              v87[-1].m128i_i32[2] = *(v88 - 2);
              v87[-1].m128i_i32[3] = *(v88 - 1);
            }
            while ( &v43[2 * v47 + 2] != (__m128i *)v88 );
          }
          v50 = 32 * ((int)v47 + 1LL);
          v43 = (__m128i *)((char *)v43 + v50);
          v42 = (__m128i *)((char *)v42 + v50);
        }
        switch ( v21 % 8 )
        {
          case 1:
            goto LABEL_72;
          case 2:
            goto LABEL_71;
          case 3:
            goto LABEL_70;
          case 4:
            goto LABEL_69;
          case 5:
            goto LABEL_68;
          case 6:
            goto LABEL_67;
          case 7:
            v42[1].m128i_i32[2] = v43[1].m128i_i32[2];
LABEL_67:
            v42[1].m128i_i32[1] = v43[1].m128i_i32[1];
LABEL_68:
            v42[1].m128i_i32[0] = v43[1].m128i_i32[0];
LABEL_69:
            v42->m128i_i32[3] = v43->m128i_i32[3];
LABEL_70:
            v42->m128i_i32[2] = v43->m128i_i32[2];
LABEL_71:
            v42->m128i_i32[1] = v43->m128i_i32[1];
LABEL_72:
            v42->m128i_i32[0] = v43->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      v51 = (__m128i *)operator new[](4LL * v21);
      *(_QWORD *)(a1 + 72) = v51;
      v52 = *((__m128i **)a2 + 9);
      if ( v52 != v51 && v21 )
      {
        v53 = v21 >> 3;
        if ( v21 >> 3 > 0 )
        {
          if ( (v52 >= &v51[2] || v51 >= &v52[2]) && v53 > 1 )
          {
            v54 = *((const __m128i **)a2 + 9);
            v55 = v51;
            v56 = v53 - 1;
            do
            {
              v57 = _mm_loadu_si128(v54);
              v54 += 2;
              v55 += 2;
              v58 = _mm_loadu_si128(v54 - 1);
              v55[-2] = v57;
              v55[-1] = v58;
            }
            while ( v54 != &v52[2 * v56 + 2] );
          }
          else
          {
            v96 = v51;
            v97 = *((int **)a2 + 9);
            v56 = v53 - 1;
            do
            {
              v98 = *v97;
              v96 += 2;
              v97 += 8;
              v96[-2].m128i_i32[0] = v98;
              v96[-2].m128i_i32[1] = *(v97 - 7);
              v96[-2].m128i_i32[2] = *(v97 - 6);
              v96[-2].m128i_i32[3] = *(v97 - 5);
              v96[-1].m128i_i32[0] = *(v97 - 4);
              v96[-1].m128i_i32[1] = *(v97 - 3);
              v96[-1].m128i_i32[2] = *(v97 - 2);
              v96[-1].m128i_i32[3] = *(v97 - 1);
            }
            while ( &v51[2 * v56 + 2] != v96 );
          }
          v59 = 32 * ((int)v56 + 1LL);
          v52 = (__m128i *)((char *)v52 + v59);
          v51 = (__m128i *)((char *)v51 + v59);
        }
        switch ( v21 % 8 )
        {
          case 1:
            goto LABEL_88;
          case 2:
            goto LABEL_87;
          case 3:
            goto LABEL_86;
          case 4:
            goto LABEL_85;
          case 5:
            goto LABEL_84;
          case 6:
            goto LABEL_83;
          case 7:
            v51[1].m128i_i32[2] = v52[1].m128i_i32[2];
LABEL_83:
            v51[1].m128i_i32[1] = v52[1].m128i_i32[1];
LABEL_84:
            v51[1].m128i_i32[0] = v52[1].m128i_i32[0];
LABEL_85:
            v51->m128i_i32[3] = v52->m128i_i32[3];
LABEL_86:
            v51->m128i_i32[2] = v52->m128i_i32[2];
LABEL_87:
            v51->m128i_i32[1] = v52->m128i_i32[1];
LABEL_88:
            v51->m128i_i32[0] = v52->m128i_i32[0];
            break;
          default:
            break;
        }
      }
      v60 = *(int *)(*(_QWORD *)(a1 + 56) + 4LL * v21);
      v61 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 4LL * v21);
      if ( v60 > 0xFFFFFFFFFFFFFFFLL )
        goto LABEL_146;
      v62 = 8 * v60;
      v63 = (_QWORD *)operator new[](v62);
      *(_QWORD *)(a1 + 80) = v63;
      v64 = *((_QWORD **)a2 + 10);
      if ( v64 != v63 && v61 )
      {
        if ( v61 >> 3 > 0 )
        {
          v65 = v63;
          v66 = *((__int64 **)a2 + 10);
          do
          {
            v67 = *v66;
            v65 += 8;
            v66 += 8;
            *(v65 - 8) = v67;
            *(v65 - 7) = *(v66 - 7);
            *(v65 - 6) = *(v66 - 6);
            *(v65 - 5) = *(v66 - 5);
            *(v65 - 4) = *(v66 - 4);
            *(v65 - 3) = *(v66 - 3);
            *(v65 - 2) = *(v66 - 2);
            *(v65 - 1) = *(v66 - 1);
          }
          while ( &v63[8 * (unsigned int)((v61 >> 3) - 1) + 8] != v65 );
          v68 = ((v61 >> 3) - 1 + 1LL) << 6;
          v64 = (_QWORD *)((char *)v64 + v68);
          v63 = (_QWORD *)((char *)v63 + v68);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_103;
          case 2:
            goto LABEL_102;
          case 3:
            goto LABEL_101;
          case 4:
            goto LABEL_100;
          case 5:
            goto LABEL_99;
          case 6:
            goto LABEL_98;
          case 7:
            v63[6] = v64[6];
LABEL_98:
            v63[5] = v64[5];
LABEL_99:
            v63[4] = v64[4];
LABEL_100:
            v63[3] = v64[3];
LABEL_101:
            v63[2] = v64[2];
LABEL_102:
            v63[1] = v64[1];
LABEL_103:
            *v63 = *v64;
            break;
          default:
            break;
        }
      }
      v69 = (_QWORD *)operator new[](v62);
      *(_QWORD *)(a1 + 88) = v69;
      v70 = *((_QWORD **)a2 + 11);
      if ( v70 != v69 && v61 )
      {
        if ( v61 >> 3 > 0 )
        {
          v71 = v69;
          v72 = *((__int64 **)a2 + 11);
          v73 = (unsigned int)((v61 >> 3) - 1);
          do
          {
            v74 = *v72;
            v72 += 8;
            v71 += 8;
            *(v71 - 8) = v74;
            *(v71 - 7) = *(v72 - 7);
            *(v71 - 6) = *(v72 - 6);
            *(v71 - 5) = *(v72 - 5);
            *(v71 - 4) = *(v72 - 4);
            *(v71 - 3) = *(v72 - 3);
            *(v71 - 2) = *(v72 - 2);
            *(v71 - 1) = *(v72 - 1);
          }
          while ( &v70[8 * v73 + 8] != v72 );
          v75 = ((int)v73 + 1LL) << 6;
          v70 = (_QWORD *)((char *)v70 + v75);
          v69 = (_QWORD *)((char *)v69 + v75);
        }
        switch ( v61 % 8 )
        {
          case 1:
            goto LABEL_117;
          case 2:
            goto LABEL_116;
          case 3:
            goto LABEL_115;
          case 4:
            goto LABEL_114;
          case 5:
            goto LABEL_113;
          case 6:
            goto LABEL_112;
          case 7:
            v69[6] = v70[6];
LABEL_112:
            v69[5] = v70[5];
LABEL_113:
            v69[4] = v70[4];
LABEL_114:
            v69[3] = v70[3];
LABEL_115:
            v69[2] = v70[2];
LABEL_116:
            v69[1] = v70[1];
LABEL_117:
            *v69 = *v70;
            break;
          default:
            break;
        }
      }
      v76 = v61 + 31;
      v77 = v76 >> 5;
      if ( (unsigned __int64)(v76 >> 5) > 0x1FFFFFFFFFFFFFFELL )
        goto LABEL_146;
      v78 = (__m128i *)operator new[](4LL * v77);
      *(_QWORD *)(a1 + 104) = v78;
      v79 = *((__m128i **)a2 + 13);
      if ( !v77 || v79 == v78 )
      {
        v14 = *(_DWORD *)(a1 + 144);
      }
      else
      {
        v80 = v76 >> 8;
        if ( v80 > 0 )
        {
          if ( (v79 >= &v78[2] || v78 >= &v79[2]) && (unsigned int)v80 > 1 )
          {
            v81 = v78;
            v82 = *((const __m128i **)a2 + 13);
            v83 = (unsigned int)(v80 - 1);
            do
            {
              v84 = _mm_loadu_si128(v82);
              v81 += 2;
              v82 += 2;
              v85 = _mm_loadu_si128(v82 - 1);
              v81[-2] = v84;
              v81[-1] = v85;
            }
            while ( v81 != &v78[2 * v83 + 2] );
          }
          else
          {
            v90 = v78;
            v91 = *((int **)a2 + 13);
            v83 = (unsigned int)(v80 - 1);
            do
            {
              v92 = *v91;
              v91 += 8;
              v90 += 2;
              v90[-2].m128i_i32[0] = v92;
              v90[-2].m128i_i32[1] = *(v91 - 7);
              v90[-2].m128i_i32[2] = *(v91 - 6);
              v90[-2].m128i_i32[3] = *(v91 - 5);
              v90[-1].m128i_i32[0] = *(v91 - 4);
              v90[-1].m128i_i32[1] = *(v91 - 3);
              v90[-1].m128i_i32[2] = *(v91 - 2);
              v90[-1].m128i_i32[3] = *(v91 - 1);
            }
            while ( &v79[2 * v83 + 2] != (__m128i *)v91 );
          }
          v86 = 32 * ((int)v83 + 1LL);
          v79 = (__m128i *)((char *)v79 + v86);
          v78 = (__m128i *)((char *)v78 + v86);
        }
        v14 = *(_DWORD *)(a1 + 144);
        switch ( v77 % 8 )
        {
          case 1:
            goto LABEL_40;
          case 2:
            goto LABEL_39;
          case 3:
            goto LABEL_38;
          case 4:
            goto LABEL_37;
          case 5:
            goto LABEL_36;
          case 6:
            goto LABEL_35;
          case 7:
            v78[1].m128i_i32[2] = v79[1].m128i_i32[2];
LABEL_35:
            v78[1].m128i_i32[1] = v79[1].m128i_i32[1];
LABEL_36:
            v78[1].m128i_i32[0] = v79[1].m128i_i32[0];
LABEL_37:
            v78->m128i_i32[3] = v79->m128i_i32[3];
LABEL_38:
            v78->m128i_i32[2] = v79->m128i_i32[2];
LABEL_39:
            v78->m128i_i32[1] = v79->m128i_i32[1];
LABEL_40:
            v78->m128i_i32[0] = v79->m128i_i32[0];
            break;
          default:
            break;
        }
      }
    }
    if ( (v14 & 2) == 0 )
    {
LABEL_21:
      v15 = *a2;
      *(_QWORD *)(a1 + 96) = *((_QWORD *)a2 + 12);
      v16 = a2[1];
      *(_DWORD *)(a1 + 112) = *((_DWORD *)a2 + 28);
      v17 = *((_BYTE *)a2 + 148);
      v18 = a2[2];
      *(_OWORD *)a1 = v15;
      *(_BYTE *)(a1 + 148) = v17;
      v19 = *((_BYTE *)a2 + 149);
      *(_OWORD *)(a1 + 16) = v16;
      *(_OWORD *)(a1 + 32) = v18;
      *(_BYTE *)(a1 + 149) = v19;
      return a1;
    }
    v32 = *((const void **)a2 + 16);
    if ( v32 )
    {
      if ( (unsigned __int64)v21 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v33 = 8LL * v21;
        v34 = (void *)operator new[](v33);
        v35 = memcpy(v34, v32, v33);
        v36 = *((const void **)a2 + 17);
        *(_QWORD *)(a1 + 128) = v35;
        if ( v36 )
        {
LABEL_45:
          v37 = (void *)operator new[](v33);
          v38 = memcpy(v37, v36, v33);
LABEL_46:
          v39 = *((const void **)a2 + 15);
          *(_QWORD *)(a1 + 136) = v38;
          if ( v39 )
          {
            v40 = (void *)operator new[](v21);
            v41 = memcpy(v40, v39, v21);
          }
          else
          {
            v41 = nullptr;
          }
          *(_QWORD *)(a1 + 120) = v41;
          goto LABEL_21;
        }
LABEL_142:
        v38 = nullptr;
        goto LABEL_46;
      }
    }
    else
    {
      v36 = *((const void **)a2 + 17);
      *(_QWORD *)(a1 + 128) = 0;
      if ( !v36 )
        goto LABEL_142;
      if ( (unsigned __int64)v21 <= 0xFFFFFFFFFFFFFFFLL )
      {
        v33 = 8LL * v21;
        goto LABEL_45;
      }
    }
LABEL_146:
    __cxa_throw_bad_array_new_length();
  }
  return a1;
}

