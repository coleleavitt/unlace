unsigned __int64 __fastcall CoinIndexedVector::append(
        CoinIndexedVector *this,
        CoinIndexedVector *a2,
        signed int a3,
        char a4)
{
  __int64 v4; // r12
  __int64 v5; // r14
  __int64 v6; // r13
  int v7; // r10d
  int *v8; // r8
  __int64 v9; // rbp
  unsigned __int64 result; // rax
  int v11; // r11d
  char v12; // r15
  int *v13; // r9
  _QWORD *v14; // rbx
  __int64 v15; // r15
  __int64 v16; // xmm0_8
  __int64 v17; // r11
  __int64 v18; // rcx
  __int64 v19; // rbp
  int *v20; // r12
  unsigned __int64 v21; // r11
  __m128i v22; // xmm3
  __int64 v23; // r14
  unsigned int v24; // ebp
  __int64 v25; // r13
  unsigned __int64 v26; // rcx
  __int128 v27; // xmm2
  __int128 v28; // xmm0
  signed int v29; // ecx
  _QWORD *v30; // rbp
  int v31; // r11d
  _QWORD *v32; // rbp
  int v33; // r11d
  int v34; // ecx
  _QWORD *v35; // rbp
  __int64 v36; // xmm0_8
  __int64 v37; // rbx
  unsigned __int64 v38; // rcx
  __int64 v39; // r11
  __int64 v40; // xmm0_8
  unsigned __int64 v41; // rcx
  __int64 v42; // rsi
  __int64 v43; // xmm0_8
  __int64 v44; // r12
  unsigned __int64 v45; // rcx
  int v46; // esi
  unsigned __int64 v47; // r12
  int v48; // r15d
  unsigned __int64 v49; // r11
  unsigned int v50; // esi
  unsigned __int64 v51; // rcx
  unsigned int v52; // esi
  __m128i v53; // xmm2
  __int64 v54; // r13
  int *v55; // r12
  __int64 v56; // r14
  unsigned int v57; // ebp
  unsigned __int64 v58; // r11
  __int128 v59; // xmm1
  signed int v60; // ecx
  int v61; // r11d
  int v62; // esi
  int v63; // r11d
  int v64; // esi
  int v65; // ecx
  int v66; // r11d
  int v67; // edx
  unsigned __int64 v68; // rcx
  __int64 v69; // r11
  int v70; // ebp
  __int64 *v71; // r11
  __int64 v72; // xmm0_8
  unsigned __int64 v73; // rcx
  __int64 v74; // rsi
  __int64 v75; // xmm0_8
  unsigned __int64 v76; // r11
  __int64 v77; // rcx
  _QWORD *v78; // rbp
  unsigned __int64 v79; // rsi
  __int64 v80; // rcx
  __int64 v81; // xmm0_8
  unsigned __int64 v82; // rcx
  int v83; // esi
  unsigned __int64 v84; // rcx
  __int64 v85; // xmm0_8
  __int64 v86; // [rsp+0h] [rbp-58h]
  unsigned __int64 v87; // [rsp+8h] [rbp-50h]
  int v88; // [rsp+8h] [rbp-50h]
  int v89; // [rsp+8h] [rbp-50h]
  unsigned int v90; // [rsp+10h] [rbp-48h]

  v4 = *((int *)this + 4);
  v5 = *(_QWORD *)this;
  v6 = *((_QWORD *)this + 1);
  v7 = *((_DWORD *)a2 + 4);
  v8 = *(int **)a2;
  v9 = 4 * v4;
  result = *((_QWORD *)a2 + 1);
  v11 = *((_DWORD *)this + 4);
  v12 = *((_BYTE *)a2 + 28);
  v13 = (int *)(*(_QWORD *)this + 4 * v4);
  if ( *((_BYTE *)this + 28) )
  {
    v86 = 8 * v4;
    v14 = (_QWORD *)(v6 + 8 * v4);
    if ( a4 )
    {
      if ( v12 )
      {
        if ( v7 <= 0 )
        {
LABEL_17:
          *((_DWORD *)this + 4) = v11 + v7;
          *((_DWORD *)a2 + 4) = 0;
          return result;
        }
        v15 = v4 + v7;
        v87 = v5 + 4 * v15;
        if ( ((unsigned __int64)v14 >= v87 || (unsigned __int64)v13 >= v6 + 8 * v15)
          && (unsigned int)v7 > 9
          && ((unsigned __int64)v14 >= result + 32 || result >= v6 + v86 + 32)
          && (v13 >= v8 + 4 || (unsigned __int64)v8 >= v5 + v9 + 16)
          && (result >= v87 || (unsigned __int64)v13 >= result + 8LL * v7) )
        {
          v88 = 0;
          if ( (result & 8) != 0 )
          {
            v16 = *(_QWORD *)result;
            v88 = 1;
            *v13 = a3 + *v8;
            *v14 = v16;
            *(_QWORD *)result = 0;
          }
          v17 = (result & 8) != 0;
          v18 = 8LL * ((result & 8) != 0);
          v19 = v17 * 4 + v9;
          v20 = &v8[v17];
          v21 = result + v18;
          v22 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
          v90 = v7 - ((result & 8) != 0);
          v23 = v19 + v5;
          v24 = 0;
          v25 = v86 + v18 + v6;
          v26 = 0;
          do
          {
            ++v24;
            v27 = *(_OWORD *)(v21 + 2 * v26);
            *(__m128i *)(v23 + v26) = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v20[v26 / 4]), v22);
            v28 = *(_OWORD *)(v21 + 2 * v26 + 16);
            *(_OWORD *)(v25 + 2 * v26) = v27;
            *(_OWORD *)(v25 + 2 * v26 + 16) = v28;
            *(_OWORD *)(v21 + 2 * v26) = 0;
            *(_OWORD *)(v21 + 2 * v26 + 16) = 0;
            v26 += 16LL;
          }
          while ( v90 >> 2 > v24 );
          v29 = (v90 & 0xFFFFFFFC) + v88;
          if ( (v90 & 0xFFFFFFFC) != v90 )
          {
            v13[v29] = a3 + v8[v29];
            v30 = (_QWORD *)(result + 8LL * v29);
            v14[v29] = *v30;
            v31 = v29 + 1;
            *v30 = 0;
            if ( v29 + 1 < v7 )
            {
              v13[v31] = a3 + v8[v31];
              v32 = (_QWORD *)(result + 8LL * v31);
              v14[v31] = *v32;
              v33 = v29 + 2;
              *v32 = 0;
              if ( v7 > v29 + 2 )
              {
                v34 = v29 + 3;
                v13[v33] = a3 + v8[v33];
                v35 = (_QWORD *)(result + 8LL * v33);
                v14[v33] = *v35;
                *v35 = 0;
                if ( v7 > v34 )
                {
                  result += 8LL * v34;
                  v36 = *(_QWORD *)result;
                  v13[v34] = v8[v34] + a3;
                  v14[v34] = v36;
                  *(_QWORD *)result = 0;
                }
              }
            }
          }
        }
        else
        {
          v84 = 0;
          do
          {
            v85 = *(_QWORD *)(result + 2 * v84);
            v13[v84 / 4] = a3 + v8[v84 / 4];
            v14[v84 / 4] = v85;
            *(_QWORD *)(result + 2 * v84) = 0;
            v84 += 4LL;
          }
          while ( v84 != 4LL * (unsigned int)(v7 - 1) + 4 );
        }
      }
      else
      {
        if ( v7 <= 0 )
          goto LABEL_17;
        v68 = 0;
        do
        {
          v69 = v8[v68 / 4];
          v70 = a3 + v69;
          v71 = (__int64 *)(result + 8 * v69);
          v72 = *v71;
          v13[v68 / 4] = v70;
          v14[v68 / 4] = v72;
          v68 += 4LL;
          *v71 = 0;
        }
        while ( v68 != 4LL * (unsigned int)(v7 - 1) + 4 );
      }
LABEL_16:
      v11 = *((_DWORD *)this + 4);
      goto LABEL_17;
    }
    if ( v12 )
    {
      if ( v7 <= 0 )
        goto LABEL_29;
      v44 = v7 + v4;
      if ( (unsigned int)v7 > 0xA
        && (v13 >= v8 + 4 || (unsigned __int64)v8 >= v5 + v9 + 16)
        && (result >= v6 + v86 + 32 || (unsigned __int64)v14 >= result + 32)
        && ((unsigned __int64)v14 >= v5 + 4 * v44 || (unsigned __int64)v13 >= v6 + 8 * v44) )
      {
        v89 = 0;
        v45 = (result >> 3) & 1;
        if ( ((result >> 3) & 1) != 0 )
        {
          v46 = *v8;
          v89 = 1;
          *v14 = *(_QWORD *)result;
          *v13 = a3 + v46;
        }
        v47 = 8 * ((result >> 3) & 1);
        v48 = v7 - v45;
        v49 = (result >> 3) & 1;
        v50 = v7 - v45;
        v51 = result + v47;
        v52 = v50 >> 2;
        v53 = _mm_shuffle_epi32(_mm_cvtsi32_si128(a3), 0);
        v54 = v86 + v47 + v6;
        v55 = &v8[v49];
        v56 = v9 + v49 * 4 + v5;
        v57 = 0;
        v58 = 0;
        do
        {
          ++v57;
          v59 = *(_OWORD *)(v51 + 2 * v58);
          *(_OWORD *)(v54 + 2 * v58 + 16) = *(_OWORD *)(v51 + 2 * v58 + 16);
          *(_OWORD *)(v54 + 2 * v58) = v59;
          *(__m128i *)(v56 + v58) = _mm_add_epi32(_mm_loadu_si128((const __m128i *)&v55[v58 / 4]), v53);
          v58 += 16LL;
        }
        while ( v52 > v57 );
        v60 = (v48 & 0xFFFFFFFC) + v89;
        if ( v48 != (v48 & 0xFFFFFFFC) )
        {
          v61 = v8[v60];
          v14[v60] = *(_QWORD *)(result + 8LL * v60);
          v13[v60] = a3 + v61;
          v62 = v60 + 1;
          if ( v7 > v60 + 1 )
          {
            v63 = v8[v62];
            v14[v62] = *(_QWORD *)(result + 8LL * v62);
            v13[v62] = a3 + v63;
            v64 = v60 + 2;
            if ( v7 > v60 + 2 )
            {
              v65 = v60 + 3;
              v66 = v8[v64];
              v14[v64] = *(_QWORD *)(result + 8LL * v64);
              v13[v64] = a3 + v66;
              if ( v7 > v65 )
              {
                v67 = v8[v65] + a3;
                v14[v65] = *(_QWORD *)(result + 8LL * v65);
                v13[v65] = v67;
              }
            }
          }
        }
      }
      else
      {
        v82 = 0;
        do
        {
          v83 = v8[v82 / 4];
          v14[v82 / 4] = *(_QWORD *)(result + 2 * v82);
          v13[v82 / 4] = a3 + v83;
          v82 += 4LL;
        }
        while ( v82 != 4LL * (unsigned int)(v7 - 1) + 4 );
      }
    }
    else
    {
      if ( v7 <= 0 )
        goto LABEL_29;
      v73 = 0;
      do
      {
        v74 = v8[v73 / 4];
        v75 = *(_QWORD *)(result + 8 * v74);
        v13[v73 / 4] = a3 + v74;
        v14[v73 / 4] = v75;
        v73 += 4LL;
      }
      while ( v73 != 4LL * (unsigned int)(v7 - 1) + 4 );
    }
    goto LABEL_28;
  }
  v37 = v6 + 8LL * a3;
  if ( a4 )
  {
    if ( v12 )
    {
      if ( v7 <= 0 )
        goto LABEL_17;
      v38 = 0;
      do
      {
        v39 = v8[v38 / 4];
        v40 = *(_QWORD *)(result + 2 * v38);
        v13[v38 / 4] = a3 + v39;
        *(_QWORD *)(v37 + 8 * v39) = v40;
        *(_QWORD *)(result + 2 * v38) = 0;
        v38 += 4LL;
      }
      while ( v38 != 4LL * (unsigned int)(v7 - 1) + 4 );
    }
    else
    {
      if ( v7 <= 0 )
        goto LABEL_17;
      v76 = 0;
      do
      {
        v77 = v8[v76 / 4];
        v13[v76 / 4] = a3 + v77;
        v78 = (_QWORD *)(result + 8 * v77);
        v76 += 4LL;
        *(_QWORD *)(v37 + 8 * v77) = *v78;
        *v78 = 0;
      }
      while ( v76 != 4LL * (unsigned int)(v7 - 1) + 4 );
    }
    goto LABEL_16;
  }
  if ( !v12 )
  {
    if ( v7 <= 0 )
      goto LABEL_29;
    v79 = 0;
    do
    {
      v80 = v8[v79 / 4];
      v81 = *(_QWORD *)(result + 8 * v80);
      v13[v79 / 4] = a3 + v80;
      v79 += 4LL;
      *(_QWORD *)(v37 + 8 * v80) = v81;
    }
    while ( v79 != 4LL * (unsigned int)(v7 - 1) + 4 );
    goto LABEL_28;
  }
  if ( v7 > 0 )
  {
    v41 = 0;
    do
    {
      v42 = v8[v41 / 4];
      v43 = *(_QWORD *)(result + 2 * v41);
      v13[v41 / 4] = a3 + v42;
      v41 += 4LL;
      *(_QWORD *)(v37 + 8 * v42) = v43;
    }
    while ( v41 != 4LL * (unsigned int)(v7 - 1) + 4 );
LABEL_28:
    v11 = *((_DWORD *)this + 4);
  }
LABEL_29:
  *((_DWORD *)this + 4) = v11 + v7;
  return result;
}

