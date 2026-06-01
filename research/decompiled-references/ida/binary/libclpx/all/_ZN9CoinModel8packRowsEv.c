__int64 __fastcall CoinModel::packRows(CoinModel *this)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r12
  int v6; // eax
  int v7; // edi
  _DWORD *v8; // rdx
  int i; // esi
  int v10; // r12d
  int v11; // esi
  int v12; // ecx
  __int64 v13; // rdx
  int v14; // r15d
  unsigned int v15; // r13d
  int v16; // eax
  const __m128i *v17; // r9
  int v18; // esi
  int v19; // r8d
  const __m128i *v20; // rdx
  __m128i v21; // xmm0
  __int64 v22; // rax
  __m128i *v23; // rax
  __int64 v24; // rsi
  int v25; // r9d
  int v26; // eax
  _DWORD *v27; // r10
  int v28; // r8d
  int v29; // edi
  int v30; // edx
  __int64 v31; // r12
  __int64 v32; // r11
  unsigned __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rax
  unsigned int v36; // ecx
  __int64 v37; // r11
  unsigned int v38; // eax
  __m128i v39; // xmm0
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  int v43; // eax
  int v44; // eax
  int v46; // r14d
  __int64 v47; // r13
  int v48; // esi
  char *Name; // rax
  int v50; // r8d
  int v51; // r10d
  int *v52; // r9
  int v53; // edx
  int v54; // ecx
  __int64 v55; // r12
  __int64 v56; // r11
  unsigned __int64 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rax
  unsigned int v60; // edi
  __int64 v61; // r11
  unsigned int v62; // eax
  __m128i v63; // xmm0
  __int64 v64; // rdi
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  unsigned __int64 v68; // rdi
  CoinModelHash *v69; // [rsp+0h] [rbp-98h]
  _BYTE v70[120]; // [rsp+20h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 176) == 3 )
    CoinModel::badType(this);
  v2 = *((int *)this + 2);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v3 = (char *)operator new[](4 * v2);
  v4 = *((int *)this + 2);
  memset(v3, 0, 4 * v4);
  if ( (int)v4 <= 0 )
  {
    v7 = *((_DWORD *)this + 27);
    if ( v7 <= 0 )
    {
      v10 = *((_DWORD *)this + 40);
      goto LABEL_112;
    }
    v6 = *((_DWORD *)this + 2);
    goto LABEL_14;
  }
  v5 = 0;
  do
  {
    if ( *(double *)(*((_QWORD *)this + 16) + 8 * v5) != -1.797693134862316e308 )
      ++*(_DWORD *)&v3[4 * v5];
    if ( *(double *)(*((_QWORD *)this + 17) + 8 * v5) != 1.797693134862316e308 )
      ++*(_DWORD *)&v3[4 * v5];
    if ( !*((_BYTE *)this + 708) && CoinModelHash::name((CoinModel *)((char *)this + 144), v5) )
      ++*(_DWORD *)&v3[4 * v5];
    v6 = *((_DWORD *)this + 2);
    ++v5;
    LODWORD(v4) = v6;
  }
  while ( v6 > (int)v5 );
  v7 = *((_DWORD *)this + 27);
  if ( v7 > 0 )
  {
LABEL_14:
    v8 = *((_DWORD **)this + 37);
    for ( i = 0; i < v7; ++i )
    {
      if ( (int)v8[1] >= 0 )
        ++*(_DWORD *)&v3[4 * (*v8 & 0x7FFFFFFF)];
      v8 += 4;
    }
    LODWORD(v4) = v6;
  }
  v10 = *((_DWORD *)this + 40);
  if ( v6 <= 0 )
  {
LABEL_112:
    v14 = 0;
    goto LABEL_25;
  }
  if ( v10 )
  {
    v14 = 0;
    v46 = 0;
    v47 = 0;
    v69 = (CoinModel *)((char *)this + 144);
    while ( !*(_DWORD *)&v3[v47] )
    {
LABEL_78:
      ++v46;
      *(_DWORD *)&v3[v47] = -1;
      v47 += 4;
      if ( v6 <= v46 )
      {
        LODWORD(v4) = v6;
        goto LABEL_25;
      }
    }
    while ( 1 )
    {
      v48 = v46++;
      *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v14) = *(_QWORD *)(*((_QWORD *)this + 16) + 2 * v47);
      *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v14) = *(_QWORD *)(*((_QWORD *)this + 17) + 2 * v47);
      *(_DWORD *)(*((_QWORD *)this + 22) + 4LL * v14) = *(_DWORD *)(*((_QWORD *)this + 22) + v47);
      Name = (char *)CoinModelHash::getName(v69, v48);
      CoinModelHash::setName(v69, v14, Name);
      v6 = *((_DWORD *)this + 2);
      *(_DWORD *)&v3[v47] = v14;
      v47 += 4;
      if ( v46 >= v6 )
        break;
      ++v14;
      if ( !*(_DWORD *)&v3[v47] )
        goto LABEL_78;
    }
    LODWORD(v4) = v6;
    ++v14;
  }
  else
  {
    v11 = 0;
    v12 = 0;
    v13 = 0;
    do
    {
      while ( *(_DWORD *)&v3[v13] )
      {
        ++v12;
        v14 = v11 + 1;
        *(_QWORD *)(*((_QWORD *)this + 16) + 8LL * v11) = *(_QWORD *)(*((_QWORD *)this + 16) + 2 * v13);
        *(_QWORD *)(*((_QWORD *)this + 17) + 8LL * v11) = *(_QWORD *)(*((_QWORD *)this + 17) + 2 * v13);
        *(_DWORD *)(*((_QWORD *)this + 22) + 4LL * v11) = *(_DWORD *)(*((_QWORD *)this + 22) + v13);
        v6 = *((_DWORD *)this + 2);
        *(_DWORD *)&v3[v13] = v11;
        v13 += 4;
        LODWORD(v4) = v6;
        if ( v6 <= v12 )
          goto LABEL_25;
        ++v11;
      }
      ++v12;
      *(_DWORD *)&v3[v13] = -1;
      v13 += 4;
      LODWORD(v4) = v6;
    }
    while ( v12 < v6 );
    v10 = 0;
    v14 = v11;
  }
LABEL_25:
  v15 = v4 - v14;
  if ( v15 )
  {
    v16 = *((_DWORD *)this + 27);
    *((_DWORD *)this + 2) = v14;
    if ( v16 <= 0 )
    {
      *((_DWORD *)this + 27) = 0;
      if ( !v10 )
      {
LABEL_31:
        if ( *((_DWORD *)this + 80) )
          goto LABEL_70;
        goto LABEL_32;
      }
    }
    else
    {
      v17 = *((const __m128i **)this + 37);
      v18 = 0;
      v19 = 0;
      v20 = v17;
      do
      {
        while ( v20->m128i_i32[1] >= 0 )
        {
          v21 = _mm_loadu_si128(v20);
          v22 = v19;
          ++v18;
          ++v19;
          v23 = (__m128i *)&v17[v22];
          ++v20;
          *v23 = v21;
          v23->m128i_i32[0] = *(_DWORD *)&v3[4 * (v20[-1].m128i_i32[0] & 0x7FFFFFFF)] | v23->m128i_i32[0] & 0x80000000;
          v16 = *((_DWORD *)this + 27);
          if ( v18 >= v16 )
          {
            *((_DWORD *)this + 27) = v19;
            if ( v10 )
              goto LABEL_69;
            goto LABEL_31;
          }
        }
        ++v18;
        ++v20;
      }
      while ( v18 < v16 );
      *((_DWORD *)this + 27) = v19;
      if ( !v10 )
        goto LABEL_31;
    }
LABEL_69:
    CoinModelHash::setNumberItems((CoinModel *)((char *)this + 144), *((_DWORD *)this + 2));
    CoinModelHash::resize((CoinModel *)((char *)this + 144), *((_DWORD *)this + 41), 1);
    if ( *((_DWORD *)this + 80) )
    {
LABEL_70:
      CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
      CoinModelHash2::resize((CoinModel *)((char *)this + 312));
      v24 = *((_QWORD *)this + 36);
      if ( !v24 )
        goto LABEL_60;
      goto LABEL_33;
    }
LABEL_32:
    v24 = *((_QWORD *)this + 36);
    if ( !v24 )
      goto LABEL_60;
LABEL_33:
    v25 = *((_DWORD *)this + 176);
    v26 = *((_DWORD *)this + 27);
    if ( v25 )
    {
      if ( v26 <= 0 )
      {
        v54 = 0;
      }
      else
      {
        v50 = -1;
        v51 = 0;
        v52 = (int *)(*((_QWORD *)this + 37) + 4LL);
        do
        {
          while ( 1 )
          {
            v53 = *v52;
            v54 = v50 + 1;
            if ( *v52 > v50 )
              break;
            ++v51;
            v52 += 4;
            if ( v51 >= v26 )
              goto LABEL_102;
          }
          v55 = 4 * (v50 + 1LL);
          *(_DWORD *)(v24 + v55) = v26;
          if ( v53 > v54 )
          {
            v56 = v50 + 2LL;
            v57 = v24 + v55 + 4;
            v58 = (unsigned int)(v53 - v50 - 1);
            if ( (v57 >= (unsigned __int64)this + 112 || (unsigned __int64)this + 108 >= v24 + 4 * (v56 + v58))
              && (unsigned int)v58 > 0xC )
            {
              v59 = -(int)(v57 >> 2) & 3;
              if ( v53 + -2 - v50 < (unsigned int)(v59 + 3) )
                goto LABEL_95;
              if ( (_DWORD)v59 )
              {
                *(_DWORD *)(v24 + v55 + 4) = *((_DWORD *)this + 27);
                v54 = v50 + 2;
                if ( (_DWORD)v59 != 1 )
                {
                  *(_DWORD *)(v24 + v55 + 8) = *((_DWORD *)this + 27);
                  v54 = v50 + 3;
                  if ( (_DWORD)v59 != 2 )
                  {
                    *(_DWORD *)(v24 + v55 + 12) = *((_DWORD *)this + 27);
                    v54 = v50 + 4;
                  }
                }
              }
              v60 = v58 - v59;
              v61 = v24 + 4 * (v59 + v56);
              v62 = 0;
              v63 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 27)), 0);
              do
              {
                ++v62;
                v61 += 16;
                *(__m128i *)(v61 - 16) = v63;
              }
              while ( v60 >> 2 > v62 );
              v54 += v60 & 0xFFFFFFFC;
              if ( v60 != (v60 & 0xFFFFFFFC) )
              {
LABEL_95:
                v64 = 4 * (v54 + 1LL);
                *(_DWORD *)(v24 + v64) = *((_DWORD *)this + 27);
                if ( v53 > v54 + 1 )
                {
                  *(_DWORD *)(v24 + v64 + 4) = *((_DWORD *)this + 27);
                  if ( v53 > v54 + 2 )
                  {
                    *(_DWORD *)(v24 + v64 + 8) = *((_DWORD *)this + 27);
                    if ( v53 > v54 + 3 )
                    {
                      *(_DWORD *)(v24 + v64 + 12) = *((_DWORD *)this + 27);
                      if ( v53 > v54 + 4 )
                      {
                        *(_DWORD *)(v24 + v64 + 16) = *((_DWORD *)this + 27);
                        if ( v53 > v54 + 5 )
                          *(_DWORD *)(v24 + v64 + 20) = *((_DWORD *)this + 27);
                      }
                    }
                  }
                }
              }
            }
            else
            {
              do
              {
                v57 += 4LL;
                *(_DWORD *)(v57 - 4) = *((_DWORD *)this + 27);
              }
              while ( v57 != v24 + 8 + 4 * ((unsigned int)(v53 + -2 - v50) + (__int64)v54) );
            }
          }
          v26 = *((_DWORD *)this + 27);
          ++v51;
          v52 += 4;
          v54 = v53 + 1;
          v50 = v53;
        }
        while ( v51 < v26 );
      }
LABEL_102:
      if ( *((_DWORD *)this + 3) > v54 )
      {
        v65 = v54 + 1;
        v66 = v24 + 4 * (v54 - v65);
        while ( 1 )
        {
          *(_DWORD *)(v66 + 4 * v65 + 4) = v26;
          v67 = v65++;
          if ( *((_DWORD *)this + 3) <= v67 )
            break;
          v26 = *((_DWORD *)this + 27);
        }
        v44 = *((_DWORD *)this + 178);
        if ( (v44 & 1) == 0 )
        {
LABEL_61:
          if ( (v44 & 2) == 0 )
            goto LABEL_62;
LABEL_68:
          CoinModelLinkedList::CoinModelLinkedList((CoinModelLinkedList *)v70);
          CoinModelLinkedList::operator=((char *)this + 392, v70);
          CoinModelLinkedList::~CoinModelLinkedList((CoinModelLinkedList *)v70);
          *((_DWORD *)this + 178) &= ~2u;
          CoinModel::createList(this, 2);
          goto LABEL_62;
        }
LABEL_72:
        CoinModelLinkedList::CoinModelLinkedList((CoinModelLinkedList *)v70);
        CoinModelLinkedList::operator=((char *)this + 336, v70);
        CoinModelLinkedList::~CoinModelLinkedList((CoinModelLinkedList *)v70);
        *((_DWORD *)this + 178) &= ~1u;
        CoinModel::createList(this, 1);
        if ( (*((_DWORD *)this + 178) & 2) == 0 )
          goto LABEL_62;
        goto LABEL_68;
      }
    }
    else
    {
      if ( v26 <= 0 )
      {
        v29 = 0;
      }
      else
      {
        v27 = *((_DWORD **)this + 37);
        v28 = -1;
        do
        {
          while ( 1 )
          {
            v29 = v28 + 1;
            v30 = *v27 & 0x7FFFFFFF;
            if ( v30 > v28 )
              break;
            ++v25;
            v27 += 4;
            if ( v25 >= v26 )
              goto LABEL_56;
          }
          v31 = 4 * (v28 + 1LL);
          *(_DWORD *)(v24 + v31) = v26;
          if ( v30 > v29 )
          {
            v32 = v28 + 2LL;
            v33 = v24 + v31 + 4;
            v34 = (unsigned int)(v30 - v28 - 1);
            if ( (v33 >= (unsigned __int64)this + 112 || (unsigned __int64)this + 108 >= v24 + 4 * (v32 + v34))
              && (unsigned int)v34 > 0xC )
            {
              v35 = -(int)(v33 >> 2) & 3;
              if ( (int)v35 + 3 > (unsigned int)(v30 + -2 - v28) )
                goto LABEL_49;
              if ( (_DWORD)v35 )
              {
                *(_DWORD *)(v24 + v31 + 4) = *((_DWORD *)this + 27);
                v29 = v28 + 2;
                if ( (_DWORD)v35 != 1 )
                {
                  *(_DWORD *)(v24 + v31 + 8) = *((_DWORD *)this + 27);
                  v29 = v28 + 3;
                  if ( (_DWORD)v35 != 2 )
                  {
                    *(_DWORD *)(v24 + v31 + 12) = *((_DWORD *)this + 27);
                    v29 = v28 + 4;
                  }
                }
              }
              v36 = v34 - v35;
              v37 = v24 + 4 * (v35 + v32);
              v38 = 0;
              v39 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 27)), 0);
              do
              {
                ++v38;
                v37 += 16;
                *(__m128i *)(v37 - 16) = v39;
              }
              while ( v36 >> 2 > v38 );
              v29 += v36 & 0xFFFFFFFC;
              if ( (v36 & 0xFFFFFFFC) != v36 )
              {
LABEL_49:
                v40 = 4 * (v29 + 1LL);
                *(_DWORD *)(v24 + v40) = *((_DWORD *)this + 27);
                if ( v30 > v29 + 1 )
                {
                  *(_DWORD *)(v24 + v40 + 4) = *((_DWORD *)this + 27);
                  if ( v30 > v29 + 2 )
                  {
                    *(_DWORD *)(v24 + v40 + 8) = *((_DWORD *)this + 27);
                    if ( v30 > v29 + 3 )
                    {
                      *(_DWORD *)(v24 + v40 + 12) = *((_DWORD *)this + 27);
                      if ( v30 > v29 + 4 )
                      {
                        *(_DWORD *)(v24 + v40 + 16) = *((_DWORD *)this + 27);
                        if ( v30 > v29 + 5 )
                          *(_DWORD *)(v24 + v40 + 20) = *((_DWORD *)this + 27);
                      }
                    }
                  }
                }
              }
            }
            else
            {
              v68 = v24 + 8 + 4 * (v29 + (unsigned __int64)(unsigned int)(v30 + -2 - v28));
              do
              {
                v33 += 4LL;
                *(_DWORD *)(v33 - 4) = *((_DWORD *)this + 27);
              }
              while ( v33 != v68 );
            }
          }
          v26 = *((_DWORD *)this + 27);
          ++v25;
          v27 += 4;
          v29 = v30 + 1;
          v28 = v30;
        }
        while ( v25 < v26 );
      }
LABEL_56:
      if ( *((_DWORD *)this + 2) > v29 )
      {
        v41 = v29 + 1;
        v42 = v24 + 4 * (v29 - v41);
        while ( 1 )
        {
          *(_DWORD *)(v42 + 4 * v41 + 4) = v26;
          v43 = v41++;
          if ( *((_DWORD *)this + 2) <= v43 )
            break;
          v26 = *((_DWORD *)this + 27);
        }
      }
    }
LABEL_60:
    v44 = *((_DWORD *)this + 178);
    if ( (v44 & 1) == 0 )
      goto LABEL_61;
    goto LABEL_72;
  }
LABEL_62:
  operator delete[](v3);
  return v15;
}

