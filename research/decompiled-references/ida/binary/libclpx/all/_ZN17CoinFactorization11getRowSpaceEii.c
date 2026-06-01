__int64 __fastcall CoinFactorization::getRowSpace(CoinFactorization *this, int a2, int a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // r11
  unsigned int v9; // ebx
  __int64 v10; // rdx
  int v11; // ebx
  int *v12; // r8
  int v13; // eax
  __int64 v14; // r9
  int v15; // r10d
  int *v16; // rax
  int v17; // r11d
  int v18; // esi
  int v19; // r11d
  __int64 v20; // rbx
  __int64 v21; // rcx
  unsigned int v22; // r13d
  int v23; // r8d
  unsigned int v24; // ebp
  int v25; // ecx
  unsigned int v26; // r14d
  __int64 v27; // rax
  unsigned int v28; // r12d
  __int64 v29; // rbp
  unsigned int v30; // ecx
  __int64 v31; // rbx
  unsigned int v32; // r12d
  __int64 v33; // rax
  int v34; // r8d
  int v35; // esi
  int v36; // eax
  int v37; // ecx
  int v38; // esi
  int v39; // r8d
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // r10
  __int64 v43; // r9
  int v44; // r12d
  __int64 v45; // r10
  __int64 v46; // r8
  __int64 v47; // rcx
  bool v48; // r9
  bool v49; // si
  unsigned __int64 v50; // rcx
  unsigned int v51; // ecx
  unsigned int v52; // r9d
  int v53; // ebp
  int v54; // r11d
  int v55; // esi
  unsigned int v56; // eax
  __int64 v57; // r8
  __int64 v58; // r10
  unsigned int v59; // r13d
  __int64 v60; // rcx
  unsigned int v61; // r9d
  int v62; // esi
  int v63; // eax
  int v64; // ecx
  int v65; // esi
  int v66; // r12d
  _DWORD *v68; // rcx
  __int64 v69; // [rsp+0h] [rbp-70h]
  __int64 v70; // [rsp+8h] [rbp-68h]
  __int64 v71; // [rsp+10h] [rbp-60h]
  __int64 v72; // [rsp+18h] [rbp-58h]
  unsigned int v73; // [rsp+20h] [rbp-50h]
  int v76; // [rsp+2Ch] [rbp-44h]

  v4 = *((_QWORD *)this + 26);
  v5 = *((_QWORD *)this + 23);
  v6 = *((int *)this + 10);
  v7 = *((_QWORD *)this + 50);
  if ( *((int *)this + 54) <= -2 )
    v4 = 0;
  v8 = *((_QWORD *)this + 53);
  v69 = v4;
  v9 = *(_DWORD *)(v4 + 4LL * a2);
  v71 = 4LL * a2;
  v10 = *((_QWORD *)this + 63);
  if ( *((int *)this + 48) <= -2 )
    v5 = 0;
  v73 = v9;
  v11 = v9 + a3 + 1;
  v12 = (int *)(v5 + 4 * v6);
  v76 = v11;
  v13 = *v12;
  if ( *((int *)this + 102) <= -2 )
    v7 = 0;
  if ( *((int *)this + 108) <= -2 )
    v8 = 0;
  v72 = v8;
  if ( *((int *)this + 128) <= -2 )
    v10 = 0;
  if ( v11 < *((_DWORD *)this + 148) - *v12 )
  {
LABEL_35:
    v41 = *(int *)(v7 + v71);
    v42 = *(int *)(v71 + v72);
    *(_DWORD *)(v7 + 4 * v42) = v41;
    *(_DWORD *)(v72 + 4 * v41) = v42;
    v43 = *(int *)(v72 + 4LL * *((int *)this + 10));
    *(_DWORD *)(v7 + 4 * v43) = a2;
    *(_DWORD *)(v72 + 4LL * *((int *)this + 10)) = a2;
    *(_DWORD *)(v71 + v72) = v43;
    *(_DWORD *)(v7 + v71) = *((_DWORD *)this + 10);
    v44 = *(_DWORD *)(v5 + v71);
    *(_DWORD *)(v5 + v71) = v13;
    if ( !v73 )
    {
LABEL_53:
      *(_DWORD *)(v5 + 4LL * *((int *)this + 10)) = v13 + a3 + 4;
      return 1;
    }
    v45 = v13;
    v46 = v44;
    v47 = 4LL * v44;
    v48 = 4LL * v13 >= v47 + 16;
    v49 = v47 >= 4LL * v13 + 16;
    v50 = v10 + v47;
    if ( !v49 && !v48 || v73 <= 0xC )
    {
      do
      {
        *(_DWORD *)(v50 + 4 * (v13 - (__int64)v44)) = *(_DWORD *)v50;
        v50 += 4LL;
      }
      while ( v50 != v10 + 4 * (v44 + (unsigned __int64)(v73 - 1)) + 4 );
      v13 += v73;
      goto LABEL_53;
    }
    v51 = -(int)(v50 >> 2) & 3;
    v52 = v73 - 1;
    if ( v51 + 3 > v73 - 1 )
    {
      v61 = v73;
      v62 = v13;
      v53 = v13 + 1;
    }
    else
    {
      if ( v51 )
      {
        v53 = v13 + 1;
        v54 = v44 + 1;
        *(_DWORD *)(v10 + 4LL * v13) = *(_DWORD *)(v10 + 4LL * v44);
        v55 = v13 + 1;
        if ( v51 != 1 )
        {
          v52 = v73 - 2;
          *(_DWORD *)(v10 + 4LL * v53) = *(_DWORD *)(v10 + 4LL * v54);
          v55 = v13 + 2;
          v54 = v44 + 2;
          if ( v51 != 2 )
          {
            v52 = v73 - 3;
            *(_DWORD *)(v10 + 4LL * v55) = *(_DWORD *)(v10 + 4LL * v54);
            v55 = v13 + 3;
            v54 = v44 + 3;
          }
        }
      }
      else
      {
        v52 = v73;
        v54 = v44;
        v55 = v13;
        v53 = v13 + 1;
      }
      v56 = 0;
      v57 = v10 + 4 * (v51 + (__int64)v44);
      v58 = v10 + 4 * (v51 + v45);
      v59 = v73 - v51;
      v60 = 0;
      do
      {
        ++v56;
        *(__m128i *)(v58 + v60) = _mm_load_si128((const __m128i *)(v57 + v60));
        v60 += 16;
      }
      while ( v59 >> 2 > v56 );
      v44 = (v59 & 0xFFFFFFFC) + v54;
      v61 = v52 - (v59 & 0xFFFFFFFC);
      v62 = (v59 & 0xFFFFFFFC) + v55;
      v46 = v44;
      if ( (v59 & 0xFFFFFFFC) == v59 )
        goto LABEL_52;
    }
    *(_DWORD *)(v10 + 4LL * v62) = *(_DWORD *)(v10 + 4 * v46);
    if ( v61 != 1 )
    {
      *(_DWORD *)(v10 + 4LL * (v62 + 1)) = *(_DWORD *)(v10 + 4LL * (v44 + 1));
      if ( v61 != 2 )
      {
        *(_DWORD *)(v10 + 4LL * (v62 + 2)) = *(_DWORD *)(v10 + 4LL * (v44 + 2));
        if ( v61 != 3 )
        {
          *(_DWORD *)(v10 + 4LL * (v62 + 3)) = *(_DWORD *)(v10 + 4LL * (v44 + 3));
          v63 = v62 + 4;
          v64 = v44 + 4;
          if ( v61 != 4 )
          {
            v65 = v62 + 5;
            v66 = v44 + 5;
            *(_DWORD *)(v10 + 4LL * v63) = *(_DWORD *)(v10 + 4LL * v64);
            if ( v61 != 5 )
              *(_DWORD *)(v10 + 4LL * v65) = *(_DWORD *)(v10 + 4LL * v66);
          }
        }
      }
    }
LABEL_52:
    v13 = v73 - 1 + v53;
    goto LABEL_53;
  }
  v14 = *(int *)(v7 + 4 * v6);
  v15 = 0;
  if ( *((_DWORD *)this + 10) != (_DWORD)v14 )
  {
    v70 = v5;
    do
    {
      v16 = (int *)(v70 + 4 * v14);
      v17 = *(_DWORD *)(v69 + 4 * v14);
      v18 = *v16;
      *v16 = v15;
      v19 = v18 + v17;
      if ( v18 < v19 )
      {
        v20 = v18;
        v21 = 4LL * v18;
        v22 = v19 - v18;
        if ( (4LL * v15 + 16 <= v21 || v21 + 16 <= 4LL * v15) && v22 > 0xC )
        {
          v23 = v15;
          v24 = -(int)((unsigned __int64)(v10 + v21) >> 2) & 3;
          if ( v24 )
          {
            v23 = v15 + 1;
            *(_DWORD *)(v10 + 4LL * v15) = *(_DWORD *)(v10 + 4LL * v18);
            v25 = v18 + 1;
            if ( v24 == 1
              || (*(_DWORD *)(v10 + 4LL * v23) = *(_DWORD *)(v10 + 4LL * v25), v23 = v15 + 2, v25 = v18 + 2, v24 == 2) )
            {
              v18 = v25;
            }
            else
            {
              v18 += 3;
              *(_DWORD *)(v10 + 4LL * v23) = *(_DWORD *)(v10 + 4LL * v25);
              v23 = v15 + 3;
            }
          }
          v26 = v22 - v24;
          v27 = v24 + (__int64)v15;
          v28 = v22 - v24;
          v29 = v10 + 4 * (v24 + v20);
          v30 = 0;
          v31 = v10 + 4 * v27;
          v32 = v28 >> 2;
          v33 = 0;
          do
          {
            ++v30;
            *(__m128i *)(v31 + v33) = _mm_load_si128((const __m128i *)(v29 + v33));
            v33 += 16;
          }
          while ( v32 > v30 );
          v34 = (v26 & 0xFFFFFFFC) + v23;
          v35 = (v26 & 0xFFFFFFFC) + v18;
          if ( v26 != (v26 & 0xFFFFFFFC) )
          {
            *(_DWORD *)(v10 + 4LL * v34) = *(_DWORD *)(v10 + 4LL * v35);
            if ( v19 > v35 + 1 )
            {
              *(_DWORD *)(v10 + 4LL * (v34 + 1)) = *(_DWORD *)(v10 + 4LL * (v35 + 1));
              if ( v19 > v35 + 2 )
              {
                *(_DWORD *)(v10 + 4LL * (v34 + 2)) = *(_DWORD *)(v10 + 4LL * (v35 + 2));
                if ( v19 > v35 + 3 )
                {
                  *(_DWORD *)(v10 + 4LL * (v34 + 3)) = *(_DWORD *)(v10 + 4LL * (v35 + 3));
                  v36 = v35 + 4;
                  v37 = v34 + 4;
                  if ( v19 > v35 + 4 )
                  {
                    v38 = v35 + 5;
                    v39 = v34 + 5;
                    *(_DWORD *)(v10 + 4LL * v37) = *(_DWORD *)(v10 + 4LL * v36);
                    if ( v19 > v38 )
                      *(_DWORD *)(v10 + 4LL * v39) = *(_DWORD *)(v10 + 4LL * v38);
                  }
                }
              }
            }
          }
        }
        else
        {
          v68 = (_DWORD *)(v10 + v21);
          do
          {
            v68[v15 - (__int64)v18] = *v68;
            ++v68;
          }
          while ( v68 != (_DWORD *)(v10 + 4 + 4 * (v18 + (unsigned __int64)(v22 - 1))) );
        }
        v15 += v22;
      }
      v14 = *(int *)(v7 + 4 * v14);
      v40 = *((int *)this + 10);
    }
    while ( (_DWORD)v40 != (_DWORD)v14 );
    v5 = v70;
    v12 = (int *)(v70 + 4 * v40);
  }
  ++*((_DWORD *)this + 230);
  *v12 = v15;
  if ( v76 < *((_DWORD *)this + 148) - v15 )
  {
    v13 = *(_DWORD *)(v5 + 4LL * *((int *)this + 10));
    goto LABEL_35;
  }
  *((_DWORD *)this + 44) = -99;
  return 0;
}

