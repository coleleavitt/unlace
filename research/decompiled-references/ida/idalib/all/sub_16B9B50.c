_BYTE *__fastcall sub_16B9B50(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  char *v8; // r12
  char v9; // si
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  _QWORD *v15; // r15
  unsigned __int64 v16; // rsi
  bool v17; // zf
  char *v18; // r9
  _QWORD *v19; // rdx
  unsigned __int64 v20; // rcx
  _QWORD *i; // rcx
  char *j; // rdx
  __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // r8d
  unsigned __int64 v26; // rdi
  __int64 v27; // r13
  __m128i v28; // xmm3
  __int64 v29; // rcx
  _QWORD *v30; // rax
  _QWORD *v31; // r13
  __int64 v32; // rdx
  __m128i v33; // xmm1
  __m128i v34; // xmm2
  __int64 v35; // rax
  _QWORD *v36; // rax
  unsigned __int64 v37; // rdx
  _QWORD *k; // rdx
  _BYTE *result; // rax
  char *v40; // r8
  int v41; // edi
  unsigned int v42; // esi
  char *v43; // rcx
  __int64 v44; // r9
  __m128i v45; // xmm6
  __m128i v46; // xmm7
  __int64 v47; // rdx
  __m128i v48; // xmm6
  __int64 v49; // rdx
  int v50; // edi
  int v51; // ebp
  char *v52; // r10
  unsigned __int64 v53; // [rsp+8h] [rbp-450h]
  int v54; // [rsp+14h] [rbp-444h]
  _BYTE v55[1080]; // [rsp+20h] [rbp-438h] BYREF

  v8 = *(char **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 0x10 )
  {
    v15 = (_QWORD *)(a1 + 8);
    a4 = (_QWORD *)(a1 + 1032);
    if ( !v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      a2 = v12;
      goto LABEL_8;
    }
  }
  else
  {
    v10 = (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
          | (a2 - 1)
          | ((unsigned __int64)(a2 - 1) >> 1)
          | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4)) >> 8)
        | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
        | (a2 - 1)
        | ((unsigned __int64)(a2 - 1) >> 1)
        | (((((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2) | (a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 4);
    v11 = (v10 | (v10 >> 16)) + 1;
    a2 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (_QWORD *)(a1 + 8);
      a4 = (_QWORD *)(a1 + 1032);
      if ( !v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = (unsigned __int64)(unsigned int)v11 << 6;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        a2 = 64;
        v13 = 4096;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, a4, a5, a6);
        *(_DWORD *)(a1 + 16) = a2;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = (unsigned __int64)v12 << 6;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v19 = (_QWORD *)v14;
          v20 = (unsigned __int64)a2 << 6;
        }
        else
        {
          v19 = (_QWORD *)(a1 + 8);
          v20 = 1024;
        }
        for ( i = (_QWORD *)((char *)v19 + v20); i != v19; v19 += 8 )
          *v19 = -4096;
        for ( j = v8; v18 != j; j += 64 )
        {
          v29 = *(_QWORD *)j;
          if ( *(_QWORD *)j != -4096 && v29 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v23 = a1 + 8;
              v24 = 15;
            }
            else
            {
              if ( !a2 )
              {
                *(_QWORD *)&dword_0 = *(_QWORD *)j;
                BUG();
              }
              v24 = a2 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
            v26 = v23 + ((unsigned __int64)v25 << 6);
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v29 && v27 != -4096 )
            {
              v54 = 1;
              v53 = 0;
              while ( 1 )
              {
                if ( v27 == -8192 )
                {
                  if ( v53 )
                    v26 = v53;
                  v53 = v26;
                }
                v25 = v24 & (v54 + v25);
                v26 = v23 + ((unsigned __int64)v25 << 6);
                v27 = *(_QWORD *)v26;
                if ( v29 == *(_QWORD *)v26 )
                  break;
                if ( v27 == -4096 )
                {
                  if ( v53 )
                    v26 = v53;
                  break;
                }
                ++v54;
              }
            }
            v28 = _mm_loadu_si128((const __m128i *)(j + 8));
            *(_QWORD *)v26 = v29;
            *(__m128i *)(v26 + 8) = v28;
            *(__m128i *)(v26 + 24) = _mm_loadu_si128((const __m128i *)(j + 24));
            *(__m128i *)(v26 + 40) = _mm_loadu_si128((const __m128i *)(j + 40));
            *(_QWORD *)(v26 + 56) = *((_QWORD *)j + 7);
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (_BYTE *)operator delete(v8, v16, 8);
      }
      v15 = (_QWORD *)(a1 + 8);
      a4 = (_QWORD *)(a1 + 1032);
      a2 = 64;
    }
  }
  v30 = v15;
  v31 = v55;
  do
  {
    v32 = *v30;
    if ( *v30 != -4096 && v32 != -8192 )
    {
      *v31 = v32;
      v31 += 8;
      v33 = _mm_loadu_si128((const __m128i *)(v30 + 3));
      v34 = _mm_loadu_si128((const __m128i *)(v30 + 5));
      v32 = v30[7];
      *(__m128i *)(v31 - 7) = _mm_loadu_si128((const __m128i *)(v30 + 1));
      *(__m128i *)(v31 - 5) = v33;
      *(__m128i *)(v31 - 3) = v34;
      *(v31 - 1) = v32;
    }
    v30 += 8;
  }
  while ( v30 != a4 );
  if ( a2 > 0x10 )
  {
    *(_BYTE *)a1 &= ~1u;
    v35 = sub_22300B0((unsigned __int64)a2 << 6, 8, v32, a4, a5, a6);
    *(_DWORD *)(a1 + 16) = a2;
    *(_QWORD *)(a1 + 8) = v35;
    v8 = (char *)v35;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v36 = v8;
    v37 = (unsigned __int64)*(unsigned int *)(a1 + 16) << 6;
  }
  else
  {
    v36 = v15;
    v37 = 1024;
  }
  for ( k = (_QWORD *)((char *)v36 + v37); k != v36; v36 += 8 )
    *v36 = -4096;
  for ( result = v55; v31 != (_QWORD *)result; result += 64 )
  {
    v49 = *(_QWORD *)result;
    if ( *(_QWORD *)result != -8192 && v49 != -4096 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v40 = (char *)v15;
        v41 = 15;
      }
      else
      {
        v50 = *(_DWORD *)(a1 + 16);
        if ( !v50 )
        {
          *(_QWORD *)&dword_0 = *(_QWORD *)result;
          BUG();
        }
        v41 = v50 - 1;
        v40 = v8;
      }
      v42 = v41 & (((unsigned int)v49 >> 9) ^ ((unsigned int)v49 >> 4));
      v43 = &v40[64 * (unsigned __int64)v42];
      v44 = *(_QWORD *)v43;
      if ( v49 != *(_QWORD *)v43 )
      {
        v51 = 1;
        v52 = nullptr;
        if ( v44 != -4096 )
        {
          while ( 1 )
          {
            if ( v44 == -8192 && !v52 )
              v52 = v43;
            v42 = v41 & (v51 + v42);
            v43 = &v40[64 * (unsigned __int64)v42];
            v44 = *(_QWORD *)v43;
            if ( v49 == *(_QWORD *)v43 )
              break;
            if ( v44 == -4096 )
            {
              if ( v52 )
                v43 = v52;
              break;
            }
            ++v51;
          }
        }
      }
      v45 = _mm_loadu_si128((const __m128i *)(result + 8));
      v46 = _mm_loadu_si128((const __m128i *)(result + 24));
      *(_QWORD *)v43 = v49;
      v47 = *((_QWORD *)result + 7);
      *(__m128i *)(v43 + 8) = v45;
      v48 = _mm_loadu_si128((const __m128i *)(result + 40));
      *(__m128i *)(v43 + 24) = v46;
      *(__m128i *)(v43 + 40) = v48;
      *((_QWORD *)v43 + 7) = v47;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
