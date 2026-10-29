void __fastcall CoinModelLinkedList::resize(CoinModelLinkedList *this, int a2, int a3)
{
  int v3; // ecx
  int v5; // eax
  int v6; // ebp
  int v7; // r12d
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r14
  int v11; // eax
  _DWORD *v12; // rdi
  int v13; // eax
  unsigned __int64 v14; // r14
  int v15; // eax
  _DWORD *v16; // rdi
  int v17; // eax
  __int64 v18; // rax
  int v19; // r8d
  unsigned __int64 v20; // r13
  char *v21; // rdi
  unsigned int v22; // eax
  const __m128i *v23; // rcx
  unsigned __int64 v24; // rdx
  __int64 v25; // r9
  __m128i v26; // xmm1
  __m128i v27; // xmm0
  __int64 v28; // rax
  char *v29; // rsi
  _DWORD *v30; // rax
  unsigned __int64 v31; // rax
  int v32; // esi
  unsigned __int64 v33; // r12
  char *v34; // rdi
  unsigned int v35; // r8d
  const __m128i *v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rdx
  char *v42; // r8
  _DWORD *v43; // rdx
  unsigned int v44; // r8d
  const __m128i *v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // r8
  __m128i v48; // xmm1
  __m128i v49; // xmm0
  __int64 v50; // rcx
  _DWORD *v51; // r8
  _DWORD *v52; // rcx
  __int64 v53; // rdx
  unsigned int v54; // r8d
  const __m128i *v55; // rdx
  unsigned __int64 v56; // rcx
  __int64 v57; // r8
  __m128i v58; // xmm1
  __m128i v59; // xmm0
  __int64 v60; // rcx
  _DWORD *v61; // r8
  _DWORD *v62; // rcx
  __int64 v63; // rdx
  unsigned __int64 v64; // rsi
  char *v65; // rcx
  int v66; // edx
  char *v67; // rdx
  int v68; // r9d
  unsigned __int64 v69; // rdx
  int *v70; // rcx
  int v71; // esi
  unsigned __int64 v72; // rdx
  int *v73; // rcx
  int v74; // esi

  v3 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 11);
  if ( v3 >= a2 )
    a2 = *((_DWORD *)this + 9);
  if ( v5 >= a3 )
    a3 = *((_DWORD *)this + 11);
  v6 = a3;
  if ( v3 < a2 )
  {
    v7 = a2;
    v8 = a2 + 1;
    if ( v8 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_104;
    v9 = 4 * v8;
    v10 = operator new[](v9);
    v11 = *((_DWORD *)this + 9);
    v12 = *((_DWORD **)this + 2);
    if ( v11 )
    {
      if ( v12 != (_DWORD *)v10 )
      {
        v44 = v11 >> 3;
        if ( v11 >> 3 <= 0 )
        {
          v52 = (_DWORD *)v10;
          v51 = *((_DWORD **)this + 2);
        }
        else
        {
          if ( ((unsigned __int64)v12 >= v10 + 32 || v10 >= (unsigned __int64)(v12 + 8)) && v44 > 1 )
          {
            v45 = *((const __m128i **)this + 2);
            v46 = v10;
            v47 = v44 - 1;
            do
            {
              v48 = _mm_loadu_si128(v45);
              v45 += 2;
              v46 += 32LL;
              v49 = _mm_loadu_si128(v45 - 1);
              *(__m128i *)(v46 - 32) = v48;
              *(__m128i *)(v46 - 16) = v49;
            }
            while ( v45 != (const __m128i *)&v12[8 * v47 + 8] );
          }
          else
          {
            v69 = v10;
            v70 = *((int **)this + 2);
            v47 = v44 - 1;
            do
            {
              v71 = *v70;
              v70 += 8;
              v69 += 32LL;
              *(_DWORD *)(v69 - 32) = v71;
              *(_DWORD *)(v69 - 28) = *(v70 - 7);
              *(_DWORD *)(v69 - 24) = *(v70 - 6);
              *(_DWORD *)(v69 - 20) = *(v70 - 5);
              *(_DWORD *)(v69 - 16) = *(v70 - 4);
              *(_DWORD *)(v69 - 12) = *(v70 - 3);
              *(_DWORD *)(v69 - 8) = *(v70 - 2);
              *(_DWORD *)(v69 - 4) = *(v70 - 1);
            }
            while ( &v12[8 * v47 + 8] != v70 );
          }
          v50 = 8 * ((int)v47 + 1LL);
          v51 = &v12[v50];
          v52 = (_DWORD *)(v10 + v50 * 4);
        }
        switch ( v11 % 8 )
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
            v52[6] = v51[6];
LABEL_65:
            v52[5] = v51[5];
LABEL_66:
            v52[4] = v51[4];
LABEL_67:
            v52[3] = v51[3];
LABEL_68:
            v52[2] = v51[2];
LABEL_69:
            v52[1] = v51[1];
LABEL_70:
            *v52 = *v51;
            break;
          default:
            break;
        }
      }
      v53 = v11;
      v13 = v12[v11];
      *(_DWORD *)(v10 + 4 * v53) = -1;
    }
    else
    {
      v13 = -1;
    }
    *(_DWORD *)(v10 + v9 - 4) = v13;
    if ( v12 )
      operator delete[](v12);
    *((_QWORD *)this + 2) = v10;
    v14 = operator new[](v9);
    v15 = *((_DWORD *)this + 9);
    v16 = *((_DWORD **)this + 3);
    if ( v15 )
    {
      if ( v16 != (_DWORD *)v14 )
      {
        v54 = v15 >> 3;
        if ( v15 >> 3 <= 0 )
        {
          v62 = (_DWORD *)v14;
          v61 = *((_DWORD **)this + 3);
        }
        else
        {
          if ( ((unsigned __int64)v16 >= v14 + 32 || v14 >= (unsigned __int64)(v16 + 8)) && v54 > 1 )
          {
            v55 = *((const __m128i **)this + 3);
            v56 = v14;
            v57 = v54 - 1;
            do
            {
              v58 = _mm_loadu_si128(v55);
              v55 += 2;
              v56 += 32LL;
              v59 = _mm_loadu_si128(v55 - 1);
              *(__m128i *)(v56 - 32) = v58;
              *(__m128i *)(v56 - 16) = v59;
            }
            while ( v55 != (const __m128i *)&v16[8 * v57 + 8] );
          }
          else
          {
            v72 = v14;
            v73 = *((int **)this + 3);
            v57 = v54 - 1;
            do
            {
              v74 = *v73;
              v73 += 8;
              v72 += 32LL;
              *(_DWORD *)(v72 - 32) = v74;
              *(_DWORD *)(v72 - 28) = *(v73 - 7);
              *(_DWORD *)(v72 - 24) = *(v73 - 6);
              *(_DWORD *)(v72 - 20) = *(v73 - 5);
              *(_DWORD *)(v72 - 16) = *(v73 - 4);
              *(_DWORD *)(v72 - 12) = *(v73 - 3);
              *(_DWORD *)(v72 - 8) = *(v73 - 2);
              *(_DWORD *)(v72 - 4) = *(v73 - 1);
            }
            while ( &v16[8 * v57 + 8] != v73 );
          }
          v60 = 8 * ((int)v57 + 1LL);
          v61 = &v16[v60];
          v62 = (_DWORD *)(v14 + v60 * 4);
        }
        switch ( v15 % 8 )
        {
          case 1:
            goto LABEL_86;
          case 2:
            goto LABEL_85;
          case 3:
            goto LABEL_84;
          case 4:
            goto LABEL_83;
          case 5:
            goto LABEL_82;
          case 6:
            goto LABEL_81;
          case 7:
            v62[6] = v61[6];
LABEL_81:
            v62[5] = v61[5];
LABEL_82:
            v62[4] = v61[4];
LABEL_83:
            v62[3] = v61[3];
LABEL_84:
            v62[2] = v61[2];
LABEL_85:
            v62[1] = v61[1];
LABEL_86:
            *v62 = *v61;
            break;
          default:
            break;
        }
      }
      v63 = v15;
      v17 = v16[v15];
      *(_DWORD *)(v14 + 4 * v63) = -1;
    }
    else
    {
      v17 = -1;
    }
    *(_DWORD *)(v14 + v9 - 4) = v17;
    if ( v16 )
      operator delete[](v16);
    v5 = *((_DWORD *)this + 11);
    *((_QWORD *)this + 3) = v14;
    *((_DWORD *)this + 9) = v7;
  }
  if ( v6 <= v5 )
    return;
  if ( (unsigned __int64)v6 > 0x1FFFFFFFFFFFFFFELL )
LABEL_104:
    __cxa_throw_bad_array_new_length();
  v18 = operator new[](4LL * v6);
  v19 = *((_DWORD *)this + 10);
  v20 = v18;
  v21 = *(char **)this;
  if ( v19 && v21 != (char *)v18 )
  {
    v22 = v19 >> 3;
    if ( v19 >> 3 <= 0 )
    {
      v30 = (_DWORD *)v20;
      v29 = *(char **)this;
    }
    else
    {
      if ( ((unsigned __int64)v21 >= v20 + 32 || v20 >= (unsigned __int64)(v21 + 32)) && v22 > 1 )
      {
        v23 = *(const __m128i **)this;
        v24 = v20;
        v25 = v22 - 1;
        do
        {
          v26 = _mm_loadu_si128(v23);
          v23 += 2;
          v24 += 32LL;
          v27 = _mm_loadu_si128(v23 - 1);
          *(__m128i *)(v24 - 32) = v26;
          *(__m128i *)(v24 - 16) = v27;
        }
        while ( v23 != (const __m128i *)&v21[32 * v25 + 32] );
      }
      else
      {
        v64 = v20;
        v65 = *(char **)this;
        v25 = v22 - 1;
        do
        {
          v66 = *(_DWORD *)v65;
          v65 += 32;
          v64 += 32LL;
          *(_DWORD *)(v64 - 32) = v66;
          *(_DWORD *)(v64 - 28) = *((_DWORD *)v65 - 7);
          *(_DWORD *)(v64 - 24) = *((_DWORD *)v65 - 6);
          *(_DWORD *)(v64 - 20) = *((_DWORD *)v65 - 5);
          *(_DWORD *)(v64 - 16) = *((_DWORD *)v65 - 4);
          *(_DWORD *)(v64 - 12) = *((_DWORD *)v65 - 3);
          *(_DWORD *)(v64 - 8) = *((_DWORD *)v65 - 2);
          *(_DWORD *)(v64 - 4) = *((_DWORD *)v65 - 1);
        }
        while ( &v21[32 * v25 + 32] != v65 );
      }
      v28 = 32 * ((int)v25 + 1LL);
      v29 = &v21[v28];
      v30 = (_DWORD *)(v20 + v28);
    }
    switch ( v19 % 8 )
    {
      case 1:
        goto LABEL_33;
      case 2:
        goto LABEL_32;
      case 3:
        goto LABEL_31;
      case 4:
        goto LABEL_30;
      case 5:
        goto LABEL_29;
      case 6:
        goto LABEL_28;
      case 7:
        v30[6] = *((_DWORD *)v29 + 6);
LABEL_28:
        v30[5] = *((_DWORD *)v29 + 5);
LABEL_29:
        v30[4] = *((_DWORD *)v29 + 4);
LABEL_30:
        v30[3] = *((_DWORD *)v29 + 3);
LABEL_31:
        v30[2] = *((_DWORD *)v29 + 2);
LABEL_32:
        v30[1] = *((_DWORD *)v29 + 1);
LABEL_33:
        *v30 = *(_DWORD *)v29;
        break;
      default:
        break;
    }
  }
  if ( v21 )
    operator delete[](v21);
  *(_QWORD *)this = v20;
  v31 = operator new[](4LL * v6);
  v32 = *((_DWORD *)this + 10);
  v33 = v31;
  v34 = *((char **)this + 1);
  if ( v32 && v34 != (char *)v31 )
  {
    v35 = v32 >> 3;
    if ( v32 >> 3 <= 0 )
    {
      v43 = (_DWORD *)v31;
      v42 = *((char **)this + 1);
    }
    else
    {
      if ( (v31 >= (unsigned __int64)(v34 + 32) || (unsigned __int64)v34 >= v31 + 32) && v35 > 1 )
      {
        v36 = *((const __m128i **)this + 1);
        v37 = v31;
        v38 = v35 - 1;
        do
        {
          v39 = _mm_loadu_si128(v36);
          v36 += 2;
          v37 += 32LL;
          v40 = _mm_loadu_si128(v36 - 1);
          *(__m128i *)(v37 - 32) = v39;
          *(__m128i *)(v37 - 16) = v40;
        }
        while ( &v34[32 * v38 + 32] != (char *)v36 );
      }
      else
      {
        v67 = *((char **)this + 1);
        v38 = v35 - 1;
        do
        {
          v68 = *(_DWORD *)v67;
          v67 += 32;
          v31 += 32LL;
          *(_DWORD *)(v31 - 32) = v68;
          *(_DWORD *)(v31 - 28) = *((_DWORD *)v67 - 7);
          *(_DWORD *)(v31 - 24) = *((_DWORD *)v67 - 6);
          *(_DWORD *)(v31 - 20) = *((_DWORD *)v67 - 5);
          *(_DWORD *)(v31 - 16) = *((_DWORD *)v67 - 4);
          *(_DWORD *)(v31 - 12) = *((_DWORD *)v67 - 3);
          *(_DWORD *)(v31 - 8) = *((_DWORD *)v67 - 2);
          *(_DWORD *)(v31 - 4) = *((_DWORD *)v67 - 1);
        }
        while ( v67 != &v34[32 * v38 + 32] );
      }
      v41 = 32 * ((int)v38 + 1LL);
      v42 = &v34[v41];
      v43 = (_DWORD *)(v33 + v41);
    }
    switch ( v32 % 8 )
    {
      case 1:
        goto LABEL_51;
      case 2:
        goto LABEL_50;
      case 3:
        goto LABEL_49;
      case 4:
        goto LABEL_48;
      case 5:
        goto LABEL_47;
      case 6:
        goto LABEL_46;
      case 7:
        v43[6] = *((_DWORD *)v42 + 6);
LABEL_46:
        v43[5] = *((_DWORD *)v42 + 5);
LABEL_47:
        v43[4] = *((_DWORD *)v42 + 4);
LABEL_48:
        v43[3] = *((_DWORD *)v42 + 3);
LABEL_49:
        v43[2] = *((_DWORD *)v42 + 2);
LABEL_50:
        v43[1] = *((_DWORD *)v42 + 1);
LABEL_51:
        *v43 = *(_DWORD *)v42;
        break;
      default:
        break;
    }
  }
  if ( v34 )
    operator delete[](v34);
  *((_QWORD *)this + 1) = v33;
  *((_DWORD *)this + 11) = v6;
}

