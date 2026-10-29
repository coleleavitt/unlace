__m128i *__fastcall sub_1AEB110(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r12d
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 *v15; // r13
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r8
  __int64 v19; // rdx
  _QWORD *i; // rdx
  _QWORD *j; // rax
  __int64 v22; // r11
  int v23; // r10d
  unsigned int v24; // ecx
  __int64 *v25; // rdi
  __int64 v26; // r12
  __int64 v27; // rdx
  int v28; // ecx
  __m128i *v29; // r12
  __int64 v30; // rax
  __m128i v31; // xmm6
  __m128i v32; // xmm7
  __int64 v33; // rax
  __m128i v34; // xmm6
  __m128i v35; // xmm7
  __int64 v36; // rax
  __m128i v37; // xmm4
  __m128i v38; // xmm5
  __int64 v39; // rax
  __m128i v40; // xmm6
  __m128i v41; // xmm7
  __int64 v42; // rax
  __m128i v43; // xmm4
  __m128i v44; // xmm5
  __int64 v45; // rax
  __m128i v46; // xmm4
  __m128i v47; // xmm5
  __int64 v48; // rax
  __m128i v49; // xmm6
  __m128i v50; // xmm7
  __int64 v51; // rax
  __m128i v52; // xmm4
  __m128i v53; // xmm5
  __int64 v54; // rax
  __int64 v55; // rax
  _QWORD *k; // rax
  __m128i *result; // rax
  __int64 *v58; // r8
  int v59; // edi
  unsigned int v60; // ecx
  __int64 *v61; // rsi
  __int64 v62; // r9
  __m128i v63; // xmm2
  __m128i v64; // xmm3
  int v65; // ecx
  int v66; // r13d
  __int64 *v67; // r14
  int v68; // r10d
  __int64 *v69; // r11
  __int64 v70; // [rsp+0h] [rbp-178h] BYREF
  __m128i v71; // [rsp+8h] [rbp-170h]
  __m128i v72; // [rsp+18h] [rbp-160h]
  __int64 v73; // [rsp+28h] [rbp-150h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 328;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = v8;
      v6 = v12;
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
    v6 = (unsigned int)v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 328;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 40LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 2560;
LABEL_5:
        v14 = (_QWORD *)sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 5LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v19 = 5 * v6;
        }
        else
        {
          v14 = (_QWORD *)(a1 + 8);
          v19 = 40;
        }
        for ( i = &v14[v19]; i != v14; v14 += 5 )
          *v14 = -4096;
        for ( j = v8; v18 != j; j += 5 )
        {
          v27 = *j;
          if ( *j != -4096 && v27 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 7;
            }
            else
            {
              v28 = *(_DWORD *)(a1 + 16);
              v22 = *(_QWORD *)(a1 + 8);
              if ( !v28 )
                goto LABEL_103;
              v23 = v28 - 1;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = (__int64 *)(v22 + 40LL * v24);
            v26 = *v25;
            if ( *v25 != v27 )
            {
              v66 = 1;
              v67 = nullptr;
              if ( v26 != -4096 )
              {
                while ( 1 )
                {
                  if ( v26 == -8192 && !v67 )
                    v67 = v25;
                  v24 = v23 & (v66 + v24);
                  v25 = (__int64 *)(v22 + 40LL * v24);
                  v26 = *v25;
                  if ( v27 == *v25 )
                    break;
                  if ( v26 == -4096 )
                  {
                    if ( v67 )
                      v25 = v67;
                    break;
                  }
                  ++v66;
                }
              }
            }
            *v25 = v27;
            *(__m128i *)(v25 + 1) = _mm_loadu_si128((const __m128i *)(j + 1));
            *(__m128i *)(v25 + 3) = _mm_loadu_si128((const __m128i *)(j + 3));
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__m128i *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 328;
      LODWORD(v6) = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v29 = (__m128i *)&v70;
  }
  else
  {
    v70 = *v15;
    v29 = (__m128i *)&v73;
    v71 = _mm_loadu_si128((const __m128i *)(v15 + 1));
    v72 = _mm_loadu_si128((const __m128i *)(v15 + 3));
  }
  if ( (__int64 *)v10 != v15 + 5 )
  {
    v30 = v15[5];
    if ( v30 != -4096 && v30 != -8192 )
    {
      v31 = _mm_loadu_si128((const __m128i *)v15 + 3);
      v32 = _mm_loadu_si128((const __m128i *)v15 + 4);
      v29->m128i_i64[0] = v30;
      v29 = (__m128i *)((char *)v29 + 40);
      v29[-2] = v31;
      v29[-1] = v32;
    }
    if ( (__int64 *)v10 != v15 + 10 )
    {
      v33 = v15[10];
      if ( v33 != -4096 && v33 != -8192 )
      {
        v34 = _mm_loadu_si128((const __m128i *)(v15 + 11));
        v35 = _mm_loadu_si128((const __m128i *)(v15 + 13));
        v29->m128i_i64[0] = v33;
        v29 = (__m128i *)((char *)v29 + 40);
        v29[-2] = v34;
        v29[-1] = v35;
      }
      if ( (__int64 *)v10 != v15 + 15 )
      {
        v36 = v15[15];
        if ( v36 != -4096 && v36 != -8192 )
        {
          v37 = _mm_loadu_si128((const __m128i *)v15 + 8);
          v29->m128i_i64[0] = v36;
          v29 = (__m128i *)((char *)v29 + 40);
          v38 = _mm_loadu_si128((const __m128i *)v15 + 9);
          v29[-2] = v37;
          v29[-1] = v38;
        }
        if ( (__int64 *)v10 != v15 + 20 )
        {
          v39 = v15[20];
          if ( v39 != -4096 && v39 != -8192 )
          {
            v40 = _mm_loadu_si128((const __m128i *)(v15 + 21));
            v29->m128i_i64[0] = v39;
            v29 = (__m128i *)((char *)v29 + 40);
            v41 = _mm_loadu_si128((const __m128i *)(v15 + 23));
            v29[-2] = v40;
            v29[-1] = v41;
          }
          if ( (__int64 *)v10 != v15 + 25 )
          {
            v42 = v15[25];
            if ( v42 != -4096 && v42 != -8192 )
            {
              v43 = _mm_loadu_si128((const __m128i *)v15 + 13);
              v29->m128i_i64[0] = v42;
              v29 = (__m128i *)((char *)v29 + 40);
              v44 = _mm_loadu_si128((const __m128i *)v15 + 14);
              v29[-2] = v43;
              v29[-1] = v44;
            }
            if ( (__int64 *)v10 != v15 + 30 )
            {
              v45 = v15[30];
              if ( v45 != -4096 && v45 != -8192 )
              {
                v46 = _mm_loadu_si128((const __m128i *)(v15 + 31));
                v29->m128i_i64[0] = v45;
                v29 = (__m128i *)((char *)v29 + 40);
                v47 = _mm_loadu_si128((const __m128i *)(v15 + 33));
                v29[-2] = v46;
                v29[-1] = v47;
              }
              if ( (__int64 *)v10 != v15 + 35 )
              {
                v48 = v15[35];
                if ( v48 != -4096 && v48 != -8192 )
                {
                  v49 = _mm_loadu_si128((const __m128i *)v15 + 18);
                  v29->m128i_i64[0] = v48;
                  v29 = (__m128i *)((char *)v29 + 40);
                  v50 = _mm_loadu_si128((const __m128i *)v15 + 19);
                  v29[-2] = v49;
                  v29[-1] = v50;
                }
                if ( (__int64 *)v10 != v15 + 40 )
                {
                  v51 = v15[40];
                  if ( v51 != -4096 && v51 != -8192 )
                  {
                    v52 = _mm_loadu_si128((const __m128i *)(v15 + 41));
                    v29->m128i_i64[0] = v51;
                    v29 = (__m128i *)((char *)v29 + 40);
                    v53 = _mm_loadu_si128((const __m128i *)(v15 + 43));
                    v29[-2] = v52;
                    v29[-1] = v53;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v54 = sub_22300B0(40LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v54;
    v8 = (_QWORD *)v54;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v55 = 5LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v8 = v15;
    v55 = 40;
  }
  for ( k = &v8[v55]; k != v8; v8 += 5 )
    *v8 = -4096;
  result = (__m128i *)&v70;
  if ( v29 != (__m128i *)&v70 )
  {
    do
    {
      v27 = result->m128i_i64[0];
      if ( result->m128i_i64[0] != -8192 && v27 != -4096 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v58 = v15;
          v59 = 7;
        }
        else
        {
          v65 = *(_DWORD *)(a1 + 16);
          v58 = *(__int64 **)(a1 + 8);
          if ( !v65 )
          {
LABEL_103:
            *(_QWORD *)&dword_0 = v27;
            BUG();
          }
          v59 = v65 - 1;
        }
        v60 = v59 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
        v61 = &v58[5 * v60];
        v62 = *v61;
        if ( v27 != *v61 )
        {
          v68 = 1;
          v69 = nullptr;
          if ( v62 != -4096 )
          {
            while ( 1 )
            {
              if ( v62 == -8192 && !v69 )
                v69 = v61;
              v60 = v59 & (v68 + v60);
              v61 = &v58[5 * v60];
              v62 = *v61;
              if ( v27 == *v61 )
                break;
              if ( v62 == -4096 )
              {
                if ( v69 )
                  v61 = v69;
                break;
              }
              ++v68;
            }
          }
        }
        v63 = _mm_loadu_si128((const __m128i *)&result->m128i_u64[1]);
        v64 = _mm_loadu_si128((__m128i *)((char *)result + 24));
        *v61 = v27;
        *(__m128i *)(v61 + 1) = v63;
        *(__m128i *)(v61 + 3) = v64;
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result = (__m128i *)((char *)result + 40);
    }
    while ( result != v29 );
  }
  return result;
}
