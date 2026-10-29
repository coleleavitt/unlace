__int64 __fastcall CoinModel::packColumns(CoinModel *this)
{
  unsigned __int64 v2; // rdi
  char *v3; // rbp
  __int64 v4; // r13
  __int64 v5; // r12
  int v6; // eax
  int v7; // edi
  int v8; // esi
  int *v9; // rcx
  __int64 v10; // rdx
  int v11; // r15d
  int v12; // esi
  int v13; // ecx
  __int64 v14; // rdx
  int v15; // r12d
  int v16; // edx
  __int64 v17; // r8
  int v18; // ecx
  int *v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rdx
  __m128i *v22; // rdx
  __int64 v23; // rsi
  int v24; // r9d
  int v25; // eax
  _DWORD *v26; // r10
  int v27; // r8d
  int v28; // edi
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // r11
  unsigned __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // ecx
  __int64 v36; // r11
  unsigned int v37; // eax
  __m128i v38; // xmm0
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // eax
  int v43; // eax
  int v45; // r14d
  __int64 v46; // r13
  int v47; // esi
  char *Name; // rax
  int v49; // r8d
  int v50; // r10d
  int *v51; // r9
  int v52; // edx
  int v53; // ecx
  __int64 v54; // r12
  __int64 v55; // r11
  unsigned __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rax
  unsigned int v59; // edi
  __int64 v60; // r11
  unsigned int v61; // eax
  __m128i v62; // xmm0
  __int64 v63; // rdi
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // eax
  unsigned __int64 v67; // rdi
  unsigned int v68; // [rsp+0h] [rbp-98h]
  CoinModelHash *v69; // [rsp+0h] [rbp-98h]
  _BYTE v70[120]; // [rsp+20h] [rbp-78h] BYREF

  if ( *((_DWORD *)this + 176) == 3 )
    CoinModel::badType(this);
  v2 = *((int *)this + 3);
  if ( v2 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v3 = (char *)operator new[](4 * v2);
  v4 = *((int *)this + 3);
  memset(v3, 0, 4 * v4);
  if ( (int)v4 <= 0 )
  {
    v7 = *((_DWORD *)this + 27);
    if ( v7 <= 0 )
    {
      v11 = *((_DWORD *)this + 56);
      goto LABEL_112;
    }
    v6 = *((_DWORD *)this + 3);
    goto LABEL_16;
  }
  v5 = 0;
  do
  {
    if ( *(double *)(*((_QWORD *)this + 24) + 8 * v5) != 0.0 )
      ++*(_DWORD *)&v3[4 * v5];
    if ( *(double *)(*((_QWORD *)this + 25) + 8 * v5) != 1.797693134862316e308 )
      ++*(_DWORD *)&v3[4 * v5];
    if ( *(double *)(*((_QWORD *)this + 23) + 8 * v5) != 0.0 )
      ++*(_DWORD *)&v3[4 * v5];
    if ( !*((_BYTE *)this + 708) && CoinModelHash::name((CoinModel *)((char *)this + 208), v5) )
      ++*(_DWORD *)&v3[4 * v5];
    v6 = *((_DWORD *)this + 3);
    ++v5;
    LODWORD(v4) = v6;
  }
  while ( v6 > (int)v5 );
  v7 = *((_DWORD *)this + 27);
  if ( v7 > 0 )
  {
LABEL_16:
    v8 = 0;
    v9 = (int *)(*((_QWORD *)this + 37) + 4LL);
    do
    {
      v10 = *v9;
      if ( (int)v10 >= 0 )
        ++*(_DWORD *)&v3[4 * v10];
      ++v8;
      v9 += 4;
    }
    while ( v7 > v8 );
    LODWORD(v4) = v6;
  }
  v11 = *((_DWORD *)this + 56);
  if ( v6 <= 0 )
  {
LABEL_112:
    v15 = 0;
    goto LABEL_27;
  }
  if ( v11 )
  {
    v15 = 0;
    v45 = 0;
    v46 = 0;
    v69 = (CoinModel *)((char *)this + 208);
    while ( !*(_DWORD *)&v3[v46] )
    {
LABEL_78:
      ++v45;
      *(_DWORD *)&v3[v46] = -1;
      v46 += 4;
      if ( v6 <= v45 )
      {
        LODWORD(v4) = v6;
        goto LABEL_27;
      }
    }
    while ( 1 )
    {
      v47 = v45++;
      *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * v15) = *(_QWORD *)(*((_QWORD *)this + 24) + 2 * v46);
      *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * v15) = *(_QWORD *)(*((_QWORD *)this + 25) + 2 * v46);
      *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * v15) = *(_QWORD *)(*((_QWORD *)this + 23) + 2 * v46);
      *(_DWORD *)(*((_QWORD *)this + 30) + 4LL * v15) = *(_DWORD *)(*((_QWORD *)this + 30) + v46);
      *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * v15) = *(_DWORD *)(*((_QWORD *)this + 35) + v46);
      Name = (char *)CoinModelHash::getName(v69, v47);
      CoinModelHash::setName(v69, v15, Name);
      v6 = *((_DWORD *)this + 3);
      *(_DWORD *)&v3[v46] = v15;
      v46 += 4;
      if ( v45 >= v6 )
        break;
      ++v15;
      if ( !*(_DWORD *)&v3[v46] )
        goto LABEL_78;
    }
    LODWORD(v4) = v6;
    ++v15;
  }
  else
  {
    v12 = 0;
    v13 = 0;
    v14 = 0;
    do
    {
      while ( *(_DWORD *)&v3[v14] )
      {
        ++v13;
        v15 = v12 + 1;
        *(_QWORD *)(*((_QWORD *)this + 24) + 8LL * v12) = *(_QWORD *)(*((_QWORD *)this + 24) + 2 * v14);
        *(_QWORD *)(*((_QWORD *)this + 25) + 8LL * v12) = *(_QWORD *)(*((_QWORD *)this + 25) + 2 * v14);
        *(_QWORD *)(*((_QWORD *)this + 23) + 8LL * v12) = *(_QWORD *)(*((_QWORD *)this + 23) + 2 * v14);
        *(_DWORD *)(*((_QWORD *)this + 30) + 4LL * v12) = *(_DWORD *)(*((_QWORD *)this + 30) + v14);
        *(_DWORD *)(*((_QWORD *)this + 35) + 4LL * v12) = *(_DWORD *)(*((_QWORD *)this + 35) + v14);
        v6 = *((_DWORD *)this + 3);
        *(_DWORD *)&v3[v14] = v12;
        v14 += 4;
        LODWORD(v4) = v6;
        if ( v6 <= v13 )
          goto LABEL_27;
        ++v12;
      }
      ++v13;
      *(_DWORD *)&v3[v14] = -1;
      v14 += 4;
      LODWORD(v4) = v6;
    }
    while ( v6 > v13 );
    v11 = 0;
    v15 = v12;
  }
LABEL_27:
  v68 = v4 - v15;
  if ( (_DWORD)v4 != v15 )
  {
    v16 = *((_DWORD *)this + 27);
    *((_DWORD *)this + 3) = v15;
    if ( v16 <= 0 )
    {
      *((_DWORD *)this + 27) = 0;
      if ( !v11 )
        goto LABEL_34;
    }
    else
    {
      v17 = *((_QWORD *)this + 37);
      v18 = 0;
      v19 = (int *)(v17 + 4);
      v20 = v17 + 16LL * (unsigned int)(v16 - 1) + 20;
      do
      {
        if ( *v19 >= 0 )
        {
          v21 = 16LL * v18++;
          v22 = (__m128i *)(v17 + v21);
          *v22 = _mm_loadu_si128((const __m128i *)(v19 - 1));
          v22->m128i_i32[1] = *(_DWORD *)&v3[4 * *v19];
        }
        v19 += 4;
      }
      while ( v19 != (int *)v20 );
      *((_DWORD *)this + 27) = v18;
      if ( !v11 )
      {
LABEL_34:
        if ( !*((_DWORD *)this + 80) )
          goto LABEL_35;
        goto LABEL_70;
      }
    }
    CoinModelHash::setNumberItems((CoinModel *)((char *)this + 208), v15);
    CoinModelHash::resize((CoinModel *)((char *)this + 208), *((_DWORD *)this + 57), 1);
    if ( !*((_DWORD *)this + 80) )
    {
LABEL_35:
      v23 = *((_QWORD *)this + 36);
      if ( !v23 )
        goto LABEL_63;
LABEL_36:
      v24 = *((_DWORD *)this + 176);
      v25 = *((_DWORD *)this + 27);
      if ( v24 )
      {
        if ( v25 <= 0 )
        {
          v53 = 0;
        }
        else
        {
          v49 = -1;
          v50 = 0;
          v51 = (int *)(*((_QWORD *)this + 37) + 4LL);
          do
          {
            while ( 1 )
            {
              v52 = *v51;
              v53 = v49 + 1;
              if ( *v51 > v49 )
                break;
              ++v50;
              v51 += 4;
              if ( v50 >= v25 )
                goto LABEL_102;
            }
            v54 = 4 * (v49 + 1LL);
            *(_DWORD *)(v23 + v54) = v25;
            if ( v52 > v53 )
            {
              v55 = v49 + 2LL;
              v56 = v23 + v54 + 4;
              v57 = (unsigned int)(v52 - v49 - 1);
              if ( (v56 >= (unsigned __int64)this + 112 || (unsigned __int64)this + 108 >= v23 + 4 * (v55 + v57))
                && (unsigned int)v57 > 0xC )
              {
                v58 = -(int)(v56 >> 2) & 3;
                if ( v52 + -2 - v49 < (unsigned int)(v58 + 3) )
                  goto LABEL_95;
                if ( (_DWORD)v58 )
                {
                  *(_DWORD *)(v23 + v54 + 4) = *((_DWORD *)this + 27);
                  v53 = v49 + 2;
                  if ( (_DWORD)v58 != 1 )
                  {
                    *(_DWORD *)(v23 + v54 + 8) = *((_DWORD *)this + 27);
                    v53 = v49 + 3;
                    if ( (_DWORD)v58 != 2 )
                    {
                      *(_DWORD *)(v23 + v54 + 12) = *((_DWORD *)this + 27);
                      v53 = v49 + 4;
                    }
                  }
                }
                v59 = v57 - v58;
                v60 = v23 + 4 * (v58 + v55);
                v61 = 0;
                v62 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 27)), 0);
                do
                {
                  ++v61;
                  v60 += 16;
                  *(__m128i *)(v60 - 16) = v62;
                }
                while ( v59 >> 2 > v61 );
                v53 += v59 & 0xFFFFFFFC;
                if ( v59 != (v59 & 0xFFFFFFFC) )
                {
LABEL_95:
                  v63 = 4 * (v53 + 1LL);
                  *(_DWORD *)(v23 + v63) = *((_DWORD *)this + 27);
                  if ( v52 > v53 + 1 )
                  {
                    *(_DWORD *)(v23 + v63 + 4) = *((_DWORD *)this + 27);
                    if ( v52 > v53 + 2 )
                    {
                      *(_DWORD *)(v23 + v63 + 8) = *((_DWORD *)this + 27);
                      if ( v52 > v53 + 3 )
                      {
                        *(_DWORD *)(v23 + v63 + 12) = *((_DWORD *)this + 27);
                        if ( v52 > v53 + 4 )
                        {
                          *(_DWORD *)(v23 + v63 + 16) = *((_DWORD *)this + 27);
                          if ( v52 > v53 + 5 )
                            *(_DWORD *)(v23 + v63 + 20) = *((_DWORD *)this + 27);
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
                  v56 += 4LL;
                  *(_DWORD *)(v56 - 4) = *((_DWORD *)this + 27);
                }
                while ( v56 != v23 + 8 + 4 * ((unsigned int)(v52 + -2 - v49) + (__int64)v53) );
              }
            }
            v25 = *((_DWORD *)this + 27);
            ++v50;
            v51 += 4;
            v53 = v52 + 1;
            v49 = v52;
          }
          while ( v50 < v25 );
        }
LABEL_102:
        if ( *((_DWORD *)this + 3) > v53 )
        {
          v64 = v53 + 1;
          v65 = v23 + 4 * (v53 - v64);
          while ( 1 )
          {
            *(_DWORD *)(v65 + 4 * v64 + 4) = v25;
            v66 = v64++;
            if ( *((_DWORD *)this + 3) <= v66 )
              break;
            v25 = *((_DWORD *)this + 27);
          }
          v43 = *((_DWORD *)this + 178);
          if ( (v43 & 1) == 0 )
          {
LABEL_64:
            if ( (v43 & 2) == 0 )
              goto LABEL_65;
LABEL_68:
            CoinModelLinkedList::CoinModelLinkedList((CoinModelLinkedList *)v70);
            CoinModelLinkedList::operator=((char *)this + 392, v70);
            CoinModelLinkedList::~CoinModelLinkedList((CoinModelLinkedList *)v70);
            *((_DWORD *)this + 178) &= ~2u;
            CoinModel::createList(this, 2);
            goto LABEL_65;
          }
LABEL_72:
          CoinModelLinkedList::CoinModelLinkedList((CoinModelLinkedList *)v70);
          CoinModelLinkedList::operator=((char *)this + 336, v70);
          CoinModelLinkedList::~CoinModelLinkedList((CoinModelLinkedList *)v70);
          *((_DWORD *)this + 178) &= ~1u;
          CoinModel::createList(this, 1);
          if ( (*((_DWORD *)this + 178) & 2) == 0 )
            goto LABEL_65;
          goto LABEL_68;
        }
      }
      else
      {
        if ( v25 <= 0 )
        {
          v28 = 0;
        }
        else
        {
          v26 = *((_DWORD **)this + 37);
          v27 = -1;
          do
          {
            while ( 1 )
            {
              v28 = v27 + 1;
              v29 = *v26 & 0x7FFFFFFF;
              if ( v29 > v27 )
                break;
              ++v24;
              v26 += 4;
              if ( v24 >= v25 )
                goto LABEL_59;
            }
            v30 = 4 * (v27 + 1LL);
            *(_DWORD *)(v23 + v30) = v25;
            if ( v29 > v28 )
            {
              v31 = v27 + 2LL;
              v32 = v23 + v30 + 4;
              v33 = (unsigned int)(v29 - v27 - 1);
              if ( (v32 >= (unsigned __int64)this + 112 || (unsigned __int64)this + 108 >= v23 + 4 * (v31 + v33))
                && (unsigned int)v33 > 0xC )
              {
                v34 = -(int)(v32 >> 2) & 3;
                if ( (int)v34 + 3 > (unsigned int)(v29 + -2 - v27) )
                  goto LABEL_52;
                if ( (_DWORD)v34 )
                {
                  *(_DWORD *)(v23 + v30 + 4) = *((_DWORD *)this + 27);
                  v28 = v27 + 2;
                  if ( (_DWORD)v34 != 1 )
                  {
                    *(_DWORD *)(v23 + v30 + 8) = *((_DWORD *)this + 27);
                    v28 = v27 + 3;
                    if ( (_DWORD)v34 != 2 )
                    {
                      *(_DWORD *)(v23 + v30 + 12) = *((_DWORD *)this + 27);
                      v28 = v27 + 4;
                    }
                  }
                }
                v35 = v33 - v34;
                v36 = v23 + 4 * (v34 + v31);
                v37 = 0;
                v38 = _mm_shuffle_epi32(_mm_cvtsi32_si128(*((_DWORD *)this + 27)), 0);
                do
                {
                  ++v37;
                  v36 += 16;
                  *(__m128i *)(v36 - 16) = v38;
                }
                while ( v35 >> 2 > v37 );
                v28 += v35 & 0xFFFFFFFC;
                if ( (v35 & 0xFFFFFFFC) != v35 )
                {
LABEL_52:
                  v39 = 4 * (v28 + 1LL);
                  *(_DWORD *)(v23 + v39) = *((_DWORD *)this + 27);
                  if ( v29 > v28 + 1 )
                  {
                    *(_DWORD *)(v23 + v39 + 4) = *((_DWORD *)this + 27);
                    if ( v29 > v28 + 2 )
                    {
                      *(_DWORD *)(v23 + v39 + 8) = *((_DWORD *)this + 27);
                      if ( v28 + 3 < v29 )
                      {
                        *(_DWORD *)(v23 + v39 + 12) = *((_DWORD *)this + 27);
                        if ( v29 > v28 + 4 )
                        {
                          *(_DWORD *)(v23 + v39 + 16) = *((_DWORD *)this + 27);
                          if ( v29 > v28 + 5 )
                            *(_DWORD *)(v23 + v39 + 20) = *((_DWORD *)this + 27);
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v67 = v23 + 8 + 4 * (v28 + (unsigned __int64)(unsigned int)(v29 + -2 - v27));
                do
                {
                  v32 += 4LL;
                  *(_DWORD *)(v32 - 4) = *((_DWORD *)this + 27);
                }
                while ( v32 != v67 );
              }
            }
            v25 = *((_DWORD *)this + 27);
            ++v24;
            v26 += 4;
            v28 = v29 + 1;
            v27 = v29;
          }
          while ( v24 < v25 );
        }
LABEL_59:
        if ( *((_DWORD *)this + 2) > v28 )
        {
          v40 = v28 + 1;
          v41 = v23 + 4 * (v28 - v40);
          while ( 1 )
          {
            *(_DWORD *)(v41 + 4 * v40 + 4) = v25;
            v42 = v40++;
            if ( *((_DWORD *)this + 2) <= v42 )
              break;
            v25 = *((_DWORD *)this + 27);
          }
        }
      }
LABEL_63:
      v43 = *((_DWORD *)this + 178);
      if ( (v43 & 1) == 0 )
        goto LABEL_64;
      goto LABEL_72;
    }
LABEL_70:
    CoinModelHash2::setNumberItems((CoinModel *)((char *)this + 312), *((_DWORD *)this + 27));
    CoinModelHash2::resize((CoinModel *)((char *)this + 312));
    v23 = *((_QWORD *)this + 36);
    if ( !v23 )
      goto LABEL_63;
    goto LABEL_36;
  }
LABEL_65:
  operator delete[](v3);
  return v68;
}

