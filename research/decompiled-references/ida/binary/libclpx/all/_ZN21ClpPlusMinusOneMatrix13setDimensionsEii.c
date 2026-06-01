unsigned __int64 __fastcall ClpPlusMinusOneMatrix::setDimensions(ClpPlusMinusOneMatrix *this, int a2, int a3)
{
  int v4; // ebp
  unsigned __int64 result; // rax
  int v6; // ebx
  __int64 v7; // r13
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  unsigned int v10; // r15d
  unsigned __int64 v11; // rax
  int v12; // ecx
  char *v13; // rdi
  unsigned int v14; // r11d
  const __m128i *v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r11
  __m128i v18; // xmm1
  __m128i v19; // xmm0
  __int64 v20; // rdx
  char *v21; // r9
  _DWORD *v22; // rdx
  __int64 v23; // rdx
  unsigned int v24; // r8d
  bool v25; // cf
  int v26; // r8d
  unsigned int v27; // edi
  unsigned __int64 v28; // r10
  unsigned int v29; // edx
  __m128i v30; // xmm0
  int v31; // edx
  int v32; // r8d
  char *v33; // rdi
  __int64 v34; // rcx
  unsigned int v35; // r9d
  const __m128i *v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // r9
  __m128i v39; // xmm1
  __m128i v40; // xmm0
  __int64 v41; // rdx
  char *v42; // r10
  _DWORD *v43; // rdx
  unsigned __int64 v44; // r14
  __int64 v45; // rdx
  unsigned int v46; // edi
  unsigned int v47; // r8d
  unsigned __int64 v48; // rcx
  unsigned int v49; // edx
  __m128i v50; // xmm0
  int v51; // edx
  int v52; // ebx
  unsigned __int64 v53; // rdx
  int *v54; // r8
  int v55; // esi
  unsigned __int64 v56; // r8
  char *v57; // rdx
  int v58; // esi
  void *exception; // r13
  __int64 v60; // [rsp+8h] [rbp-80h]
  unsigned __int64 v61; // [rsp+8h] [rbp-80h]
  unsigned __int64 v62; // [rsp+10h] [rbp-78h]
  int v63; // [rsp+10h] [rbp-78h]
  int v64; // [rsp+18h] [rbp-70h]
  __int64 v65; // [rsp+30h] [rbp-58h]
  __int64 v66; // [rsp+38h] [rbp-50h]
  __int64 v67; // [rsp+40h] [rbp-48h]

  v4 = a3;
  result = *((unsigned int *)this + 32);
  if ( a2 < 0 )
  {
    a2 = *((_DWORD *)this + 32);
  }
  else if ( a2 < (int)result )
  {
    goto LABEL_95;
  }
  v6 = *((_DWORD *)this + 33);
  if ( a3 >= 0 )
  {
    if ( a3 >= v6 )
      goto LABEL_5;
LABEL_95:
    exception = __cxa_allocate_exception(0x30u);
    std::string::string();
    std::string::string();
    std::string::string();
    CoinError::CoinError();
    if ( (_UNKNOWN *)(v65 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v65 - 24);
    if ( (_UNKNOWN *)(v66 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v66 - 24);
    if ( (_UNKNOWN *)(v67 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      sub_5C4E8(v67 - 24);
    __cxa_throw(exception, (struct type_info *)&`typeinfo for'CoinError, (void (*)(void *))CoinError::~CoinError);
  }
  v4 = *((_DWORD *)this + 33);
LABEL_5:
  if ( *((_BYTE *)this + 136) )
  {
    *((_DWORD *)this + 33) = v4;
  }
  else
  {
    *((_DWORD *)this + 32) = a2;
    v6 = result;
    v4 = a2;
  }
  if ( v4 > v6 )
  {
    v7 = v6;
    v8 = 4LL * v6;
    v9 = v4 + 1;
    v10 = *(_DWORD *)(*((_QWORD *)this + 13) + v8);
    if ( v9 > 0x1FFFFFFFFFFFFFFELL )
      goto LABEL_94;
    v60 = 4 * v9;
    v11 = operator new[](4 * v9);
    v12 = v6 + 1;
    v13 = *((char **)this + 13);
    v64 = v6 + 1;
    if ( v6 != -1 && v13 != (char *)v11 )
    {
      v14 = v12 >> 3;
      if ( v12 >> 3 <= 0 )
      {
        v22 = (_DWORD *)v11;
        v21 = *((char **)this + 13);
      }
      else
      {
        if ( ((unsigned __int64)v13 >= v11 + 32 || v11 >= (unsigned __int64)(v13 + 32)) && v14 > 1 )
        {
          v15 = *((const __m128i **)this + 13);
          v16 = v11;
          v17 = v14 - 1;
          do
          {
            v18 = _mm_loadu_si128(v15);
            v15 += 2;
            v16 += 32LL;
            v19 = _mm_loadu_si128(v15 - 1);
            *(__m128i *)(v16 - 32) = v18;
            *(__m128i *)(v16 - 16) = v19;
          }
          while ( v15 != (const __m128i *)&v13[32 * v17 + 32] );
        }
        else
        {
          v56 = v11;
          v57 = *((char **)this + 13);
          v17 = v14 - 1;
          do
          {
            v58 = *(_DWORD *)v57;
            v57 += 32;
            v56 += 32LL;
            *(_DWORD *)(v56 - 32) = v58;
            *(_DWORD *)(v56 - 28) = *((_DWORD *)v57 - 7);
            *(_DWORD *)(v56 - 24) = *((_DWORD *)v57 - 6);
            *(_DWORD *)(v56 - 20) = *((_DWORD *)v57 - 5);
            *(_DWORD *)(v56 - 16) = *((_DWORD *)v57 - 4);
            *(_DWORD *)(v56 - 12) = *((_DWORD *)v57 - 3);
            *(_DWORD *)(v56 - 8) = *((_DWORD *)v57 - 2);
            *(_DWORD *)(v56 - 4) = *((_DWORD *)v57 - 1);
          }
          while ( v57 != &v13[32 * v17 + 32] );
        }
        v20 = 32 * ((int)v17 + 1LL);
        v21 = &v13[v20];
        v22 = (_DWORD *)(v11 + v20);
      }
      switch ( v12 % 8 )
      {
        case 1:
          goto LABEL_24;
        case 2:
          goto LABEL_23;
        case 3:
          goto LABEL_22;
        case 4:
          goto LABEL_21;
        case 5:
          goto LABEL_20;
        case 6:
          goto LABEL_19;
        case 7:
          v22[6] = *((_DWORD *)v21 + 6);
LABEL_19:
          v22[5] = *((_DWORD *)v21 + 5);
LABEL_20:
          v22[4] = *((_DWORD *)v21 + 4);
LABEL_21:
          v22[3] = *((_DWORD *)v21 + 3);
LABEL_22:
          v22[2] = *((_DWORD *)v21 + 2);
LABEL_23:
          v22[1] = *((_DWORD *)v21 + 1);
LABEL_24:
          *v22 = *(_DWORD *)v21;
          break;
        default:
          break;
      }
    }
    if ( v13 )
    {
      v62 = v11;
      operator delete[](v13);
      v12 = v6 + 1;
      v11 = v62;
    }
    if ( v12 <= v4 )
    {
      v23 = -(int)((v11 + v8 + 4) >> 2) & 3;
      v24 = v23 + 3;
      if ( (unsigned int)(v23 + 3) < 5 )
        v24 = 5;
      v25 = v4 - 1 - v6 < v24;
      v26 = v12;
      if ( v25 )
        goto LABEL_38;
      if ( (_DWORD)v23 )
      {
        *(_DWORD *)(v11 + 4LL * v12) = v10;
        v26 = v6 + 2;
        if ( (_DWORD)v23 != 1 )
        {
          *(_DWORD *)(v11 + 4LL * v26) = v10;
          v26 = v6 + 3;
          if ( (_DWORD)v23 != 2 )
          {
            *(_DWORD *)(v11 + 4LL * v26) = v10;
            v26 = v6 + 4;
          }
        }
      }
      v27 = v4 - v6 - v23;
      v28 = v11 + 4 * (v23 + v6 + 1LL);
      v29 = 0;
      v30 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0);
      do
      {
        ++v29;
        v28 += 16LL;
        *(__m128i *)(v28 - 16) = v30;
      }
      while ( v27 >> 2 > v29 );
      v26 += v27 & 0xFFFFFFFC;
      if ( v27 != (v27 & 0xFFFFFFFC) )
      {
LABEL_38:
        *(_DWORD *)(v11 + 4LL * v26) = v10;
        if ( v4 >= v26 + 1 )
        {
          *(_DWORD *)(v11 + 4LL * (v26 + 1)) = v10;
          if ( v4 >= v26 + 2 )
          {
            *(_DWORD *)(v11 + 4LL * (v26 + 2)) = v10;
            if ( v4 >= v26 + 3 )
            {
              *(_DWORD *)(v11 + 4LL * (v26 + 3)) = v10;
              v31 = v26 + 4;
              if ( v4 >= v26 + 4 )
              {
                v32 = v26 + 5;
                *(_DWORD *)(v11 + 4LL * v31) = v10;
                if ( v4 >= v32 )
                  *(_DWORD *)(v11 + 4LL * v32) = v10;
              }
            }
          }
        }
      }
    }
    *((_QWORD *)this + 13) = v11;
    v63 = v12;
    if ( (unsigned __int64)v4 > 0x1FFFFFFFFFFFFFFELL )
LABEL_94:
      __cxa_throw_bad_array_new_length();
    result = operator new[](v60 - 4);
    v33 = *((char **)this + 14);
    v34 = v63;
    if ( v6 && v33 != (char *)result )
    {
      v35 = v6 >> 3;
      if ( v6 >> 3 <= 0 )
      {
        v43 = (_DWORD *)result;
        v42 = *((char **)this + 14);
      }
      else
      {
        if ( (result >= (unsigned __int64)(v33 + 32) || (unsigned __int64)v33 >= result + 32) && v35 > 1 )
        {
          v36 = *((const __m128i **)this + 14);
          v37 = result;
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
          while ( v36 != (const __m128i *)&v33[32 * v38 + 32] );
        }
        else
        {
          v53 = result;
          v54 = *((int **)this + 14);
          v38 = v35 - 1;
          do
          {
            v55 = *v54;
            v53 += 32LL;
            v54 += 8;
            *(_DWORD *)(v53 - 32) = v55;
            *(_DWORD *)(v53 - 28) = *(v54 - 7);
            *(_DWORD *)(v53 - 24) = *(v54 - 6);
            *(_DWORD *)(v53 - 20) = *(v54 - 5);
            *(_DWORD *)(v53 - 16) = *(v54 - 4);
            *(_DWORD *)(v53 - 12) = *(v54 - 3);
            *(_DWORD *)(v53 - 8) = *(v54 - 2);
            *(_DWORD *)(v53 - 4) = *(v54 - 1);
          }
          while ( v53 != result + 32 * (v38 + 1) );
        }
        v41 = 32 * ((int)v38 + 1LL);
        v42 = &v33[v41];
        v43 = (_DWORD *)(result + v41);
      }
      switch ( v6 % 8 )
      {
        case 1:
          goto LABEL_60;
        case 2:
          goto LABEL_59;
        case 3:
          goto LABEL_58;
        case 4:
          goto LABEL_57;
        case 5:
          goto LABEL_56;
        case 6:
          goto LABEL_55;
        case 7:
          v43[6] = *((_DWORD *)v42 + 6);
LABEL_55:
          v43[5] = *((_DWORD *)v42 + 5);
LABEL_56:
          v43[4] = *((_DWORD *)v42 + 4);
LABEL_57:
          v43[3] = *((_DWORD *)v42 + 3);
LABEL_58:
          v43[2] = *((_DWORD *)v42 + 2);
LABEL_59:
          v43[1] = *((_DWORD *)v42 + 1);
LABEL_60:
          *v43 = *(_DWORD *)v42;
          break;
        default:
          break;
      }
    }
    if ( v33 )
    {
      v61 = result;
      operator delete[](v33);
      v34 = v63;
      result = v61;
    }
    v44 = result + v8;
    v45 = -(int)(v44 >> 2) & 3;
    v46 = v45 + 3;
    if ( (unsigned int)(v45 + 3) < 5 )
      v46 = 5;
    if ( v46 <= v4 - 1 - v6 )
    {
      if ( (_DWORD)v45 )
      {
        *(_DWORD *)v44 = v10;
        if ( (_DWORD)v45 != 1 )
        {
          *(_DWORD *)(result + 4 * v34) = v10;
          v64 = v6 + 2;
          if ( (_DWORD)v45 != 2 )
          {
            *(_DWORD *)(result + 4LL * (v6 + 2)) = v10;
            v64 = v6 + 3;
          }
        }
      }
      else
      {
        v64 = v6;
      }
      v47 = v4 - v6 - v45;
      v48 = result + 4 * (v45 + v6);
      v49 = 0;
      v50 = _mm_shuffle_epi32(_mm_cvtsi32_si128(v10), 0);
      do
      {
        ++v49;
        v48 += 16LL;
        *(__m128i *)(v48 - 16) = v50;
      }
      while ( v47 >> 2 > v49 );
      v6 = (v47 & 0xFFFFFFFC) + v64;
      if ( (v47 & 0xFFFFFFFC) == v47 )
        goto LABEL_80;
      LODWORD(v34) = v6 + 1;
      v7 = v6;
    }
    *(_DWORD *)(result + 4 * v7) = v10;
    if ( v4 > (int)v34 )
    {
      *(_DWORD *)(result + 4LL * (int)v34) = v10;
      if ( v4 > v6 + 2 )
      {
        *(_DWORD *)(result + 4LL * (v6 + 2)) = v10;
        if ( v4 > v6 + 3 )
        {
          *(_DWORD *)(result + 4LL * (v6 + 3)) = v10;
          v51 = v6 + 4;
          if ( v4 > v6 + 4 )
          {
            v52 = v6 + 5;
            *(_DWORD *)(result + 4LL * v51) = v10;
            if ( v4 > v52 )
              *(_DWORD *)(result + 4LL * v52) = v10;
          }
        }
      }
    }
LABEL_80:
    *((_QWORD *)this + 14) = result;
  }
  return result;
}

