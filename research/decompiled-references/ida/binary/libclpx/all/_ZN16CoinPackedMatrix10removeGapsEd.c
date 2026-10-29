void __fastcall CoinPackedMatrix::removeGaps(CoinPackedMatrix *this, double a2)
{
  int v3; // edx
  __int64 v4; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  int v7; // esi
  int v8; // edx
  int v9; // ebp
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // r8
  double v14; // xmm1_8
  __int64 v15; // rsi
  int v16; // eax
  __int64 v17; // rsi
  _DWORD *v18; // r8
  int *v19; // rdi
  int v20; // ebx
  __int64 v21; // rax
  __int64 v22; // r9
  int v23; // ecx
  int v24; // esi
  __int64 v25; // r9
  __int64 v26; // rax
  signed int v27; // esi
  unsigned int v28; // r15d
  __int64 v29; // rdi
  __int64 v30; // r14
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _DWORD *v34; // r12
  int v35; // ebp
  unsigned int v36; // r8d
  __int64 v37; // xmm0_8
  signed int v38; // ecx
  __int64 v39; // r10
  int v40; // r11d
  __int64 v41; // xmm0_8
  __int64 v42; // r10
  __int64 v43; // xmm0_8
  __int64 v44; // rdi
  unsigned int v45; // r12d
  __int64 v46; // r13
  __int64 v47; // r10
  __int64 v48; // r14
  unsigned int v49; // r11d
  __int64 v50; // rcx
  unsigned int v51; // edi
  __int64 v52; // r8
  __int128 v53; // xmm0
  int v54; // ebp
  signed int v55; // esi
  __int64 v56; // xmm0_8
  int v57; // edi
  int v58; // ecx
  int v59; // r8d
  __int64 v60; // xmm0_8
  int v61; // edi
  __int64 v62; // rcx
  __int64 v63; // xmm0_8
  int v64; // r8d
  int v65; // edi
  __int64 v66; // rcx
  __int64 v67; // xmm0_8
  int v68; // r8d
  int v69; // edi
  int v70; // r8d
  signed int v71; // esi
  __int64 v72; // xmm0_8
  int v73; // ebp
  __int64 v74; // xmm0_8
  int v75; // edx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // rax
  unsigned __int64 v79; // rcx
  __int64 v80; // xmm0_8
  __int64 v81; // [rsp+0h] [rbp-80h]
  CoinPackedMatrix *v82; // [rsp+8h] [rbp-78h]
  __int64 v83; // [rsp+10h] [rbp-70h]
  unsigned __int64 v84; // [rsp+18h] [rbp-68h]
  signed int v85; // [rsp+2Ch] [rbp-54h]
  __int64 v86; // [rsp+30h] [rbp-50h]
  int *v87; // [rsp+38h] [rbp-48h]
  __int64 v88; // [rsp+40h] [rbp-40h]

  v3 = *((_DWORD *)this + 16);
  if ( a2 >= 0.0 )
  {
    if ( v3 <= 0 )
    {
      v8 = 0;
    }
    else
    {
      v4 = *((_QWORD *)this + 6);
      v5 = *((_QWORD *)this + 7);
      v6 = 1;
      v7 = 0;
      v8 = 0;
      do
      {
        v9 = *(_DWORD *)(v4 + 4 * v6);
        v10 = v7 + *(_DWORD *)(v5 + 4 * v6 - 4);
        if ( v10 > v7 )
        {
          v11 = *((_QWORD *)this + 4);
          v12 = 4LL * v7;
          v13 = 4 * (v7 + (unsigned __int64)(unsigned int)(v10 + ~v7) + 1);
          do
          {
            v14 = *(double *)(v11 + 2 * v12);
            if ( fabs(v14) > a2 )
            {
              v15 = v8++;
              *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v15) = *(_DWORD *)(*((_QWORD *)this + 5) + v12);
              *(double *)(v11 + 8 * v15) = v14;
            }
            v12 += 4;
          }
          while ( v12 != v13 );
        }
        v7 = v9;
        *(_DWORD *)(v5 + 4 * v6 - 4) = v8 - *(_DWORD *)(v4 + 4 * v6 - 4);
        *(_DWORD *)(v4 + 4 * v6) = v8;
        v16 = v6++;
      }
      while ( *((_DWORD *)this + 16) > v16 );
    }
    *((_DWORD *)this + 18) = v8;
    return;
  }
  v17 = *((_QWORD *)this + 6);
  v18 = (_DWORD *)(v17 + 4LL * v3);
  v88 = v17;
  if ( *((_DWORD *)this + 18) >= *v18 )
    return;
  if ( v3 <= 0 )
  {
    v20 = 0;
LABEL_18:
    *v18 = v20;
    return;
  }
  v19 = *((int **)this + 7);
  v20 = *v19;
  if ( *v19 >= *(_DWORD *)(v17 + 4) )
  {
    v21 = 2;
    v22 = v17;
    while ( 1 )
    {
      v24 = v21;
      if ( (int)v21 > v3 )
        goto LABEL_18;
      v20 += v19[v21 - 1];
      v23 = *(_DWORD *)(v22 + 4 * v21++);
      if ( v23 > v20 )
        goto LABEL_22;
    }
  }
  v24 = 1;
LABEL_22:
  if ( v24 >= v3 )
    goto LABEL_18;
  v82 = this;
  v25 = v24 + 1;
  v26 = v24 - v25;
  v86 = v26 * 4 + v88;
  v87 = &v19[v26];
  do
  {
    v27 = *(_DWORD *)(v86 + 4 * v25);
    v28 = v87[v25];
    *(_DWORD *)(v86 + 4 * v25) = v20;
    v85 = v27 + v28;
    if ( v27 < (int)(v27 + v28) )
    {
      v29 = v27;
      v30 = 4LL * v20;
      v31 = *((_QWORD *)v82 + 5);
      v32 = *((_QWORD *)v82 + 4);
      v83 = 8LL * v27;
      v81 = 8LL * v20;
      v33 = 4LL * v27;
      v34 = (_DWORD *)(v31 + v30);
      v84 = v32 + v81;
      if ( v28 > 0xE
        && (v83 >= v81 + 32 || v81 >= v83 + 32)
        && (v33 >= v30 + 16 || v30 >= v33 + 16)
        && ((unsigned __int64)v34 >= v32 + 8 * (v20 + (unsigned __int64)v28)
         || v84 >= v31 + 4 * (v20 + (unsigned __int64)v28)) )
      {
        v35 = v20;
        v36 = -(int)((unsigned __int64)(v31 + v33) >> 2) & 3;
        if ( v36 )
        {
          v37 = *(_QWORD *)(v32 + 8LL * v27);
          v35 = v20 + 1;
          *v34 = *(_DWORD *)(v31 + 4LL * v27);
          *(_QWORD *)(v32 + 8LL * v20) = v37;
          v38 = v27 + 1;
          if ( v36 == 1
            || (v39 = v35,
                v40 = *(_DWORD *)(v31 + 4LL * v38),
                v41 = *(_QWORD *)(v32 + 8LL * v38),
                v35 = v20 + 2,
                v38 = v27 + 2,
                *(_DWORD *)(v31 + 4 * v39) = v40,
                *(_QWORD *)(v32 + 8 * v39) = v41,
                v36 == 2) )
          {
            v27 = v38;
          }
          else
          {
            v42 = v35;
            v35 = v20 + 3;
            v27 += 3;
            v43 = *(_QWORD *)(v32 + 8LL * v38);
            *(_DWORD *)(v31 + 4 * v42) = *(_DWORD *)(v31 + 4LL * v38);
            *(_QWORD *)(v32 + 8 * v42) = v43;
          }
        }
        v44 = v36 + v29;
        v45 = v28 - v36;
        v46 = v31 + 4 * v44;
        v47 = v32 + 8 * v44;
        v48 = v31 + v30 + 4LL * v36;
        v49 = (v28 - v36) >> 2;
        v50 = 0;
        v51 = 0;
        v52 = v32 + v81 + 8LL * v36;
        do
        {
          ++v51;
          *(__m128i *)(v48 + v50) = _mm_load_si128((const __m128i *)(v46 + v50));
          v53 = *(_OWORD *)(v47 + 2 * v50 + 16);
          *(_OWORD *)(v52 + 2 * v50) = *(_OWORD *)(v47 + 2 * v50);
          *(_OWORD *)(v52 + 2 * v50 + 16) = v53;
          v50 += 16;
        }
        while ( v49 > v51 );
        v54 = (v45 & 0xFFFFFFFC) + v35;
        v55 = (v45 & 0xFFFFFFFC) + v27;
        if ( v45 != (v45 & 0xFFFFFFFC) )
        {
          v56 = *(_QWORD *)(v32 + 8LL * v55);
          *(_DWORD *)(v31 + 4LL * v54) = *(_DWORD *)(v31 + 4LL * v55);
          *(_QWORD *)(v32 + 8LL * v54) = v56;
          v57 = v55 + 1;
          v58 = v54 + 1;
          if ( v55 + 1 < v85 )
          {
            v59 = *(_DWORD *)(v31 + 4LL * v57);
            v60 = *(_QWORD *)(v32 + 8LL * v57);
            v61 = v55 + 2;
            *(_DWORD *)(v31 + 4LL * v58) = v59;
            *(_QWORD *)(v32 + 8LL * v58) = v60;
            if ( v85 > v55 + 2 )
            {
              v62 = v54 + 2;
              v63 = *(_QWORD *)(v32 + 8LL * v61);
              v64 = *(_DWORD *)(v31 + 4LL * v61);
              v65 = v55 + 3;
              *(_DWORD *)(v31 + 4 * v62) = v64;
              *(_QWORD *)(v32 + 8 * v62) = v63;
              if ( v85 > v55 + 3 )
              {
                v66 = v54 + 3;
                v67 = *(_QWORD *)(v32 + 8LL * v65);
                v68 = *(_DWORD *)(v31 + 4LL * v65);
                v69 = v55 + 4;
                *(_DWORD *)(v31 + 4 * v66) = v68;
                v70 = v54 + 4;
                *(_QWORD *)(v32 + 8 * v66) = v67;
                if ( v85 > v55 + 4 )
                {
                  v71 = v55 + 5;
                  v72 = *(_QWORD *)(v32 + 8LL * v69);
                  v73 = v54 + 5;
                  *(_DWORD *)(v31 + 4LL * v70) = *(_DWORD *)(v31 + 4LL * v69);
                  *(_QWORD *)(v32 + 8LL * v70) = v72;
                  if ( v85 > v71 )
                  {
                    v74 = *(_QWORD *)(v32 + 8LL * v71);
                    *(_DWORD *)(v31 + 4LL * v73) = *(_DWORD *)(v31 + 4LL * v71);
                    *(_QWORD *)(v32 + 8LL * v73) = v74;
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v77 = v83 + v32;
        v78 = v33 + v31;
        v79 = 0;
        do
        {
          v80 = *(_QWORD *)(v77 + 2 * v79);
          v34[v79 / 4] = *(_DWORD *)(v78 + v79);
          *(_QWORD *)(v84 + 2 * v79) = v80;
          v79 += 4LL;
        }
        while ( v79 != 4LL * (v28 - 1) + 4 );
      }
      v20 += v28;
    }
    v75 = v25++;
    v76 = *((int *)v82 + 16);
  }
  while ( (int)v76 > v75 );
  *(_DWORD *)(v88 + 4 * v76) = v20;
}

