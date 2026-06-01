void __fastcall sub_15EF470(unsigned __int8 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v8; // rdx
  char v9; // si
  __int64 v10; // rax
  _QWORD *v11; // r13
  __int64 v12; // rbx
  unsigned __int64 v13; // rdi
  _QWORD *v14; // rax
  unsigned __int64 v15; // rsi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *i; // rsi
  _QWORD *j; // r15
  unsigned __int64 v20; // rdx
  unsigned __int8 *v21; // r9
  int v22; // ecx
  __int64 v23; // rsi
  int v24; // r10d
  unsigned __int8 *v25; // r11
  unsigned int k; // eax
  unsigned __int8 *v27; // rdi
  __int64 v28; // r8
  int v29; // ecx
  __m128i v30; // xmm1
  int v31; // eax
  _QWORD *v32; // rdi
  unsigned __int8 *v33; // rbx
  _BYTE *v34; // r15
  unsigned __int8 *v35; // r13
  __m128i v36; // xmm2
  unsigned __int8 *v37; // rdi
  __int64 v38; // rax
  bool v39; // zf
  unsigned __int8 *v40; // rax
  unsigned __int64 v41; // rdx
  unsigned __int8 *m; // rdx
  _BYTE *n; // r13
  unsigned __int64 v44; // rdx
  unsigned __int8 *v45; // r8
  int v46; // ecx
  __int64 v47; // rsi
  unsigned __int8 *v48; // r10
  int v49; // r9d
  unsigned int ii; // eax
  unsigned __int8 *v51; // rdi
  __int64 v52; // r11
  unsigned int v53; // eax
  int v54; // ecx
  __m128i si128; // xmm3
  int v56; // edx
  _BYTE *v57; // rdi
  unsigned int v58; // eax
  __int64 v59; // [rsp+0h] [rbp-248h]
  unsigned __int8 *v60; // [rsp+0h] [rbp-248h]
  _BYTE v61[568]; // [rsp+10h] [rbp-238h] BYREF

  v8 = *a1;
  v9 = *a1 & 1;
  if ( a2 <= 8 )
  {
    if ( !v9 )
    {
      v14 = *((_QWORD **)a1 + 1);
      v12 = *((unsigned int *)a1 + 4);
      *a1 = v8 | 1;
      a2 = v12;
      v11 = v14;
      goto LABEL_8;
    }
    v33 = a1 + 520;
    v60 = a1 + 8;
  }
  else
  {
    v8 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
         | (a2 - 1)
         | ((unsigned __int64)(a2 - 1) >> 1)
         | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v10 = (v8 | (v8 >> 16)) + 1;
    a2 = v10;
    if ( (unsigned int)v10 > 0x40 )
    {
      v60 = a1 + 8;
      v33 = a1 + 520;
      if ( !v9 )
      {
        v11 = *((_QWORD **)a1 + 1);
        v12 = *((unsigned int *)a1 + 4);
        v13 = (unsigned __int64)(unsigned int)v10 << 6;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !v9 )
      {
        v11 = *((_QWORD **)a1 + 1);
        v12 = *((unsigned int *)a1 + 4);
        a2 = 64;
        v13 = 4096;
LABEL_5:
        v14 = (_QWORD *)sub_22300B0(v13, 8, v8, a4, a5, a6);
        *((_DWORD *)a1 + 4) = a2;
        *((_QWORD *)a1 + 1) = v14;
LABEL_8:
        v59 = v12 << 6;
        v15 = (unsigned __int64)a2 << 6;
        v16 = &v11[8 * v12];
        v17 = *(_QWORD *)a1 & 1LL;
        *(_QWORD *)a1 = v17;
        if ( v17 )
        {
          v14 = a1 + 8;
          v15 = 512;
        }
        for ( i = (_QWORD *)((char *)v14 + v15); i != v14; *(v14 - 7) = 0 )
        {
          *v14 = 0;
          v14 += 8;
        }
        for ( j = v11; v16 != j; j += 8 )
        {
          v20 = *j;
          if ( *j && v20 != 4 || j[1] )
          {
            if ( (*a1 & 1) != 0 )
            {
              v21 = a1 + 8;
              v22 = 7;
            }
            else
            {
              v29 = *((_DWORD *)a1 + 4);
              v21 = *((unsigned __int8 **)a1 + 1);
              if ( !v29 )
              {
                *(__m128i *)&dword_0 = _mm_loadu_si128((const __m128i *)j);
                BUG();
              }
              v22 = v29 - 1;
            }
            v23 = j[1];
            v24 = 1;
            v25 = nullptr;
            for ( k = v22
                    & (((0xBF58476D1CE4E5B9LL
                       * (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4)
                        | ((unsigned __int64)((unsigned int)v20 ^ (unsigned int)(v20 >> 9)) << 32))) >> 31)
                     ^ (484763065 * (((unsigned int)v23 >> 9) ^ ((unsigned int)v23 >> 4)))); ; k = v22 & v58 )
            {
              v27 = &v21[64 * (unsigned __int64)k];
              v28 = *(_QWORD *)v27;
              if ( v20 == *(_QWORD *)v27 && v23 == *((_QWORD *)v27 + 1) )
                break;
              if ( v28 )
              {
                if ( v28 == 4 && !(*((_QWORD *)v27 + 1) | (unsigned __int64)v25) )
                  v25 = &v21[64 * (unsigned __int64)k];
              }
              else if ( !*((_QWORD *)v27 + 1) )
              {
                if ( v25 )
                  v27 = v25;
                break;
              }
              v58 = v24 + k;
              ++v24;
            }
            v30 = _mm_loadu_si128((const __m128i *)j);
            *((_QWORD *)v27 + 3) = 0x400000000LL;
            *((_QWORD *)v27 + 2) = v27 + 32;
            v31 = *((_DWORD *)j + 6);
            *(__m128i *)v27 = v30;
            if ( v31 )
              sub_15EF320((char ***)v27 + 2, (char ***)j + 2);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            v32 = (_QWORD *)j[2];
            if ( v32 != j + 4 )
              free(v32);
          }
        }
        operator delete(v11, v59, 8);
        return;
      }
      v33 = a1 + 520;
      a2 = 64;
      v60 = a1 + 8;
    }
  }
  v34 = v61;
  v35 = v60;
  do
  {
    if ( *(_QWORD *)v35 && *(_QWORD *)v35 != 4 || *((_QWORD *)v35 + 1) )
    {
      v36 = _mm_loadu_si128((const __m128i *)v35);
      a4 = *((unsigned int *)v35 + 6);
      *((_QWORD *)v34 + 3) = 0x400000000LL;
      *((_QWORD *)v34 + 2) = v34 + 32;
      *(__m128i *)v34 = v36;
      if ( (_DWORD)a4 )
        sub_15EF320((char ***)v34 + 2, (char ***)v35 + 2);
      v37 = *((unsigned __int8 **)v35 + 2);
      v34 += 64;
      if ( v37 != v35 + 32 )
        free(v37);
    }
    v35 += 64;
  }
  while ( v35 != v33 );
  if ( a2 > 8 )
  {
    *a1 &= ~1u;
    v38 = sub_22300B0((unsigned __int64)a2 << 6, 8, v8, a4, a5, a6);
    *((_DWORD *)a1 + 4) = a2;
    *((_QWORD *)a1 + 1) = v38;
  }
  v39 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v39 )
  {
    v40 = *((unsigned __int8 **)a1 + 1);
    v41 = (unsigned __int64)*((unsigned int *)a1 + 4) << 6;
  }
  else
  {
    v40 = v60;
    v41 = 512;
  }
  for ( m = &v40[v41]; m != v40; *((_QWORD *)v40 - 7) = 0 )
  {
    *(_QWORD *)v40 = 0;
    v40 += 64;
  }
  for ( n = v61; v34 != n; n += 64 )
  {
    v44 = *(_QWORD *)n;
    if ( *(_QWORD *)n && v44 != 4 || *((_QWORD *)n + 1) )
    {
      if ( (*a1 & 1) != 0 )
      {
        v45 = v60;
        v46 = 7;
      }
      else
      {
        v54 = *((_DWORD *)a1 + 4);
        v45 = *((unsigned __int8 **)a1 + 1);
        if ( !v54 )
        {
          *(__m128i *)&dword_0 = _mm_load_si128((const __m128i *)n);
          BUG();
        }
        v46 = v54 - 1;
      }
      v47 = *((_QWORD *)n + 1);
      v48 = nullptr;
      v49 = 1;
      for ( ii = v46
               & (((0xBF58476D1CE4E5B9LL
                  * (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4)
                   | ((unsigned __int64)((unsigned int)v44 ^ (unsigned int)(v44 >> 9)) << 32))) >> 31)
                ^ (484763065 * (((unsigned int)v47 >> 9) ^ ((unsigned int)v47 >> 4)))); ; ii = v46 & v53 )
      {
        v51 = &v45[64 * (unsigned __int64)ii];
        v52 = *(_QWORD *)v51;
        if ( v44 == *(_QWORD *)v51 && v47 == *((_QWORD *)v51 + 1) )
          break;
        if ( v52 )
        {
          if ( v52 == 4 && !(*((_QWORD *)v51 + 1) | (unsigned __int64)v48) )
            v48 = &v45[64 * (unsigned __int64)ii];
        }
        else if ( !*((_QWORD *)v51 + 1) )
        {
          if ( v48 )
            v51 = v48;
          break;
        }
        v53 = v49 + ii;
        ++v49;
      }
      si128 = _mm_load_si128((const __m128i *)n);
      *((_QWORD *)v51 + 3) = 0x400000000LL;
      v56 = *((_DWORD *)n + 6);
      *((_QWORD *)v51 + 2) = v51 + 32;
      *(__m128i *)v51 = si128;
      if ( v56 )
        sub_15EF320((char ***)v51 + 2, (char ***)n + 2);
      v57 = *((_BYTE **)n + 2);
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      if ( v57 != n + 32 )
        free(v57);
    }
  }
}
