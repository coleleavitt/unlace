void __fastcall CoinPostsolveMatrix::assignPresolveToPostsolve(CoinPostsolveMatrix *this, CoinPresolveMatrix **a2)
{
  CoinPresolveMatrix **v2; // rbx
  CoinPresolveMatrix *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // xmm0_8
  __int64 v10; // rax
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  char *v26; // rsi
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  int v29; // edx
  __int64 v30; // r12
  __int64 v31; // r13
  __int64 v32; // r8
  __m128i si128; // xmm4
  int v34; // r10d
  __int64 v35; // r11
  __m128i v36; // xmm3
  __int64 v37; // rbx
  __m128i v38; // xmm2
  int v39; // r9d
  int v40; // esi
  int v41; // edi
  int v42; // r15d
  __int64 v43; // rdx
  bool v44; // cc
  signed int v45; // esi
  __int64 v46; // r14
  __int64 v47; // r14
  unsigned int v48; // r15d
  __int64 v49; // rcx
  unsigned int v50; // edx
  __m128i v51; // xmm0
  __m128i v52; // xmm1
  int v53; // r14d
  int v54; // r15d
  __int64 v55; // rcx
  int v56; // esi
  unsigned int v57; // r15d
  __int64 v58; // rdx
  __int64 v59; // r9
  int v60; // edi
  int v61; // ecx
  __int64 v62; // rdx
  __int64 v63; // r10
  int v64; // esi
  int v65; // edx
  __int64 v66; // rdi
  int v67; // ecx
  __int64 v68; // rdx
  int v69; // r8d
  __int64 v70; // rdi
  int v71; // esi
  CoinPresolveMatrix *v72; // [rsp+10h] [rbp-48h]
  CoinPresolveMatrix **v73; // [rsp+18h] [rbp-40h]

  v2 = a2;
  v4 = *a2;
  *((_DWORD *)this + 3) = *((_DWORD *)v4 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)v4 + 4);
  *((_DWORD *)this + 5) = *((_DWORD *)v4 + 5);
  *((_DWORD *)this + 6) = *((_DWORD *)v4 + 6);
  *(_DWORD *)this = *(_DWORD *)v4;
  *((_DWORD *)this + 1) = *((_DWORD *)v4 + 1);
  *((_DWORD *)this + 2) = *((_DWORD *)v4 + 2);
  *((_QWORD *)this + 5) = *((_QWORD *)v4 + 5);
  v5 = *((_QWORD *)v4 + 6);
  *((_QWORD *)v4 + 5) = 0;
  *((_QWORD *)this + 6) = v5;
  v6 = *((_QWORD *)v4 + 7);
  *((_QWORD *)v4 + 6) = 0;
  *((_QWORD *)this + 7) = v6;
  v7 = *((_QWORD *)v4 + 8);
  *((_QWORD *)v4 + 7) = 0;
  *((_QWORD *)this + 8) = v7;
  v8 = *((_QWORD *)v4 + 9);
  *((_QWORD *)v4 + 8) = 0;
  v9 = *((_QWORD *)v4 + 10);
  *((_QWORD *)this + 9) = v8;
  v10 = *((_QWORD *)v4 + 11);
  *((_QWORD *)v4 + 9) = 0;
  *((_QWORD *)this + 10) = v9;
  *((_QWORD *)this + 11) = v10;
  v11 = *((_QWORD *)v4 + 12);
  *((_QWORD *)v4 + 11) = 0;
  v12 = *(_OWORD *)((char *)v4 + 136);
  *((_QWORD *)this + 12) = v11;
  v13 = *((_QWORD *)v4 + 13);
  *((_QWORD *)v4 + 12) = 0;
  *((_QWORD *)this + 13) = v13;
  v14 = *((_QWORD *)v4 + 14);
  *((_QWORD *)v4 + 13) = 0;
  *((_QWORD *)this + 14) = v14;
  v15 = *((_QWORD *)v4 + 15);
  *((_QWORD *)v4 + 14) = 0;
  *((_QWORD *)this + 15) = v15;
  v16 = *((_QWORD *)v4 + 16);
  *((_QWORD *)v4 + 15) = 0;
  *((_QWORD *)this + 16) = v16;
  *((_QWORD *)v4 + 16) = 0;
  v17 = *((_QWORD *)v4 + 20);
  *(_OWORD *)((char *)this + 136) = v12;
  *(_QWORD *)&v12 = *((_QWORD *)v4 + 19);
  *((_QWORD *)this + 20) = v17;
  v18 = *((_QWORD *)v4 + 21);
  *((_QWORD *)this + 19) = v12;
  *((_QWORD *)v4 + 20) = 0;
  *((_QWORD *)this + 21) = v18;
  v19 = *((_QWORD *)v4 + 22);
  *((_QWORD *)v4 + 21) = 0;
  v20 = *((_BYTE *)this + 216) == 0;
  *((_QWORD *)this + 22) = v19;
  v21 = *((_QWORD *)v4 + 23);
  *((_QWORD *)v4 + 22) = 0;
  *((_QWORD *)this + 23) = v21;
  v22 = *((_QWORD *)v4 + 24);
  *((_QWORD *)v4 + 23) = 0;
  *((_QWORD *)this + 24) = v22;
  v23 = *((_QWORD *)v4 + 25);
  *((_QWORD *)v4 + 24) = 0;
  *((_QWORD *)this + 25) = v23;
  *((_QWORD *)v4 + 25) = 0;
  if ( !v20 )
  {
    v24 = *((_QWORD *)this + 26);
    if ( v24 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 24LL))(v24);
      v4 = *v2;
    }
  }
  v25 = *((_QWORD *)v4 + 26);
  v26 = (char *)v4 + 224;
  *((_QWORD *)this + 26) = v25;
  *(v26 - 8) = 0;
  CoinMessages::operator=((char *)this + 224, v26);
  v27 = *((int *)this + 6);
  *((_DWORD *)this + 64) = -66666666;
  *((_DWORD *)this + 65) = v27;
  if ( v27 > 0x1FFFFFFFFFFFFFFELL )
    __cxa_throw_bad_array_new_length();
  v28 = operator new[](4 * v27);
  v29 = *(_DWORD *)this;
  *((_QWORD *)this + 33) = v28;
  if ( v29 > 0 )
  {
    v30 = *((_QWORD *)this + 5);
    v31 = *((_QWORD *)this + 6);
    v73 = v2;
    v32 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_289BB0);
    v34 = -1;
    v72 = *v2;
    v35 = *((_QWORD *)*v2 + 32);
    v36 = _mm_load_si128((const __m128i *)&xmmword_289BC0);
    v37 = 4LL * (unsigned int)(v29 - 1) + 4;
    v38 = _mm_load_si128((const __m128i *)&xmmword_289C00);
    do
    {
      v39 = *(_DWORD *)(v30 + v32);
      v40 = *(_DWORD *)(v31 + v32);
      v41 = v39 + v40 - 1;
      if ( v39 >= v41 )
      {
        v41 = *(_DWORD *)(v30 + v32);
      }
      else
      {
        v42 = v40 - 1;
        v43 = -(int)((unsigned __int64)(v28 + 4LL * v39) >> 2) & 3;
        v44 = (unsigned int)(v40 - 2) <= 5;
        v45 = *(_DWORD *)(v30 + v32);
        if ( v44 )
          goto LABEL_16;
        if ( (_DWORD)v43 )
        {
          v45 = v39 + 1;
          *(_DWORD *)(v28 + 4LL * v39) = v39 + 1;
          if ( (_DWORD)v43 != 1 )
          {
            v46 = v45;
            v45 = v39 + 2;
            *(_DWORD *)(v28 + 4 * v46) = v39 + 2;
            if ( (_DWORD)v43 != 2 )
            {
              v47 = v45;
              v45 = v39 + 3;
              *(_DWORD *)(v28 + 4 * v47) = v39 + 3;
            }
          }
        }
        v48 = v42 - v43;
        v49 = v28 + 4 * (v39 + v43);
        v50 = 0;
        v51 = _mm_add_epi32(_mm_shuffle_epi32(_mm_cvtsi32_si128(v45), 0), si128);
        do
        {
          v52 = v51;
          ++v50;
          v51 = _mm_add_epi32(v51, v36);
          v49 += 16;
          *(__m128i *)(v49 - 16) = _mm_add_epi32(v52, v38);
        }
        while ( v48 >> 2 > v50 );
        v45 += v48 & 0xFFFFFFFC;
        if ( v48 != (v48 & 0xFFFFFFFC) )
        {
LABEL_16:
          *(_DWORD *)(v28 + 4LL * v45) = v45 + 1;
          if ( v45 + 1 < v41 )
          {
            *(_DWORD *)(v28 + 4LL * (v45 + 1)) = v45 + 2;
            if ( v45 + 2 < v41 )
            {
              *(_DWORD *)(v28 + 4LL * (v45 + 2)) = v45 + 3;
              if ( v41 > v45 + 3 )
              {
                *(_DWORD *)(v28 + 4LL * (v45 + 3)) = v45 + 4;
                if ( v41 > v45 + 4 )
                {
                  *(_DWORD *)(v28 + 4LL * (v45 + 4)) = v45 + 5;
                  if ( v41 > v45 + 5 )
                    *(_DWORD *)(v28 + 4LL * (v45 + 5)) = v45 + 6;
                }
              }
            }
          }
        }
      }
      v53 = v41 + 1;
      *(_DWORD *)(v28 + 4LL * v41) = -66666666;
      v54 = *(_DWORD *)(v30 + 4LL * *(int *)(v35 + 2 * v32 + 4));
      if ( *(_DWORD *)(v35 + 2 * v32) == -66666666 )
        v34 = v39;
      if ( v53 < v54 )
      {
        v55 = v53;
        v56 = *((_DWORD *)this + 64);
        v57 = v54 - 2 - v41;
        v58 = v53 + 1LL;
        v59 = v58 + v57;
        while ( 1 )
        {
          v60 = v55;
          *(_DWORD *)(v28 + 4 * v55) = v56;
          v55 = v58;
          v56 = v60;
          if ( v58 == v59 )
            break;
          ++v58;
        }
        *((_DWORD *)this + 64) = v57 + v53;
      }
      v32 += 4;
    }
    while ( v32 != v37 );
    v2 = v73;
    if ( v34 > 0 )
    {
      v61 = *((_DWORD *)this + 64);
      v62 = 0;
      v63 = (unsigned int)(v34 - 1);
      do
      {
        v64 = v62;
        *(_DWORD *)(v28 + 4 * v62++) = v61;
        v61 = v64;
      }
      while ( v62 != v63 + 1 );
      *((_DWORD *)this + 64) = v63;
    }
LABEL_34:
    CoinPresolveMatrix::~CoinPresolveMatrix(v72);
    operator delete(v72);
    goto LABEL_35;
  }
  v65 = *((_DWORD *)this + 65);
  v72 = *v2;
  if ( v65 > 0 )
  {
    v66 = (unsigned int)(v65 - 1);
    v67 = *((_DWORD *)this + 64);
    v68 = 0;
    v69 = v66;
    v70 = v66 + 1;
    do
    {
      v71 = v68;
      *(_DWORD *)(v28 + 4 * v68++) = v67;
      v67 = v71;
    }
    while ( v68 != v70 );
    *((_DWORD *)this + 64) = v69;
  }
  if ( v72 )
    goto LABEL_34;
LABEL_35:
  *v2 = nullptr;
  *((_QWORD *)this + 34) = 0;
  *((_QWORD *)this + 35) = 0;
}

