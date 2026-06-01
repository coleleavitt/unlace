__m128i *__fastcall sub_1B01FD0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  _QWORD *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r9
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  __int64 v23; // r10
  int v24; // r11d
  unsigned int v25; // edi
  __int64 v26; // r8
  __int64 v27; // r13
  __m128i v28; // xmm0
  __int64 v29; // rdx
  __m128i *v30; // r13
  __int64 v31; // rax
  __m128i v32; // xmm3
  __int64 v33; // rax
  __m128i v34; // xmm4
  __int64 v35; // rax
  __m128i v36; // xmm5
  __int64 v37; // rax
  __m128i v38; // xmm6
  __int64 v39; // rax
  __m128i v40; // xmm7
  __int64 v41; // rax
  __m128i v42; // xmm7
  __int64 v43; // rax
  __m128i v44; // xmm6
  __int64 v45; // rax
  __m128i v46; // xmm5
  __int64 v47; // rax
  _QWORD *v48; // rax
  __int64 v49; // rdx
  _QWORD *k; // rdx
  __m128i *result; // rax
  _QWORD *v52; // r8
  int v53; // edi
  unsigned int v54; // ecx
  __int64 *v55; // rsi
  __int64 v56; // r9
  __m128i v57; // xmm1
  int v58; // ecx
  int v59; // r10d
  __int64 *v60; // r11
  __int64 v61; // [rsp+8h] [rbp-110h]
  int v62; // [rsp+14h] [rbp-104h]
  __int64 v63; // [rsp+20h] [rbp-F8h] BYREF
  __m128i v64; // [rsp+28h] [rbp-F0h]
  __int64 v65; // [rsp+38h] [rbp-E0h] BYREF

  v6 = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 200;
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
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
    v6 = v11;
    if ( (unsigned int)v11 > 0x40 )
    {
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 200;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 24LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1536;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 3LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v19 = (_QWORD *)v14;
          v20 = 3LL * v6;
        }
        else
        {
          v19 = (_QWORD *)(a1 + 8);
          v20 = 24;
        }
        for ( i = &v19[v20]; i != v19; v19 += 3 )
          *v19 = -4096;
        for ( j = v8; v18 != j; j += 3 )
        {
          v29 = *j;
          if ( *j != -4096 && v29 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v23 = a1 + 8;
              v24 = 7;
            }
            else
            {
              if ( !v6 )
                goto LABEL_106;
              v24 = v6 - 1;
              v23 = v14;
            }
            v25 = v24 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
            v26 = v23 + 24LL * v25;
            v27 = *(_QWORD *)v26;
            if ( *(_QWORD *)v26 != v29 && v27 != -4096 )
            {
              v62 = 1;
              v61 = 0;
              while ( 1 )
              {
                if ( v27 == -8192 )
                {
                  if ( v61 )
                    v26 = v61;
                  v61 = v26;
                }
                v25 = v24 & (v62 + v25);
                v26 = v23 + 24LL * v25;
                v27 = *(_QWORD *)v26;
                if ( v29 == *(_QWORD *)v26 )
                  break;
                if ( v27 == -4096 )
                {
                  if ( v61 )
                    v26 = v61;
                  break;
                }
                ++v62;
              }
            }
            v28 = _mm_loadu_si128((const __m128i *)(j + 1));
            *(_QWORD *)v26 = v29;
            *(__m128i *)(v26 + 8) = v28;
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__m128i *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 200;
      v6 = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v30 = (__m128i *)&v63;
  }
  else
  {
    v63 = *v15;
    v30 = (__m128i *)&v65;
    v64 = _mm_loadu_si128((const __m128i *)(v15 + 1));
  }
  if ( (__int64 *)v10 != v15 + 3 )
  {
    v31 = v15[3];
    if ( v31 != -4096 && v31 != -8192 )
    {
      v32 = _mm_loadu_si128((const __m128i *)v15 + 2);
      v30->m128i_i64[0] = v31;
      v30 = (__m128i *)((char *)v30 + 24);
      v30[-1] = v32;
    }
    if ( (__int64 *)v10 != v15 + 6 )
    {
      v33 = v15[6];
      if ( v33 != -4096 && v33 != -8192 )
      {
        v34 = _mm_loadu_si128((const __m128i *)(v15 + 7));
        v30->m128i_i64[0] = v33;
        v30 = (__m128i *)((char *)v30 + 24);
        v30[-1] = v34;
      }
      if ( (__int64 *)v10 != v15 + 9 )
      {
        v35 = v15[9];
        if ( v35 != -4096 && v35 != -8192 )
        {
          v36 = _mm_loadu_si128((const __m128i *)v15 + 5);
          v30->m128i_i64[0] = v35;
          v30 = (__m128i *)((char *)v30 + 24);
          v30[-1] = v36;
        }
        if ( (__int64 *)v10 != v15 + 12 )
        {
          v37 = v15[12];
          if ( v37 != -4096 && v37 != -8192 )
          {
            v38 = _mm_loadu_si128((const __m128i *)(v15 + 13));
            v30->m128i_i64[0] = v37;
            v30 = (__m128i *)((char *)v30 + 24);
            v30[-1] = v38;
          }
          if ( (__int64 *)v10 != v15 + 15 )
          {
            v39 = v15[15];
            if ( v39 != -4096 && v39 != -8192 )
            {
              v40 = _mm_loadu_si128((const __m128i *)v15 + 8);
              v30->m128i_i64[0] = v39;
              v30 = (__m128i *)((char *)v30 + 24);
              v30[-1] = v40;
            }
            if ( (__int64 *)v10 != v15 + 18 )
            {
              v41 = v15[18];
              if ( v41 != -4096 && v41 != -8192 )
              {
                v42 = _mm_loadu_si128((const __m128i *)(v15 + 19));
                v30->m128i_i64[0] = v41;
                v30 = (__m128i *)((char *)v30 + 24);
                v30[-1] = v42;
              }
              if ( (__int64 *)v10 != v15 + 21 )
              {
                v43 = v15[21];
                if ( v43 != -4096 && v43 != -8192 )
                {
                  v44 = _mm_loadu_si128((const __m128i *)v15 + 11);
                  v30->m128i_i64[0] = v43;
                  v30 = (__m128i *)((char *)v30 + 24);
                  v30[-1] = v44;
                }
                if ( (__int64 *)v10 != v15 + 24 )
                {
                  v45 = v15[24];
                  if ( v45 != -4096 && v45 != -8192 )
                  {
                    v46 = _mm_loadu_si128((const __m128i *)(v15 + 25));
                    v30->m128i_i64[0] = v45;
                    v30 = (__m128i *)((char *)v30 + 24);
                    v30[-1] = v46;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( v6 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v47 = sub_22300B0(24LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v47;
    v8 = (_QWORD *)v47;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v48 = v8;
    v49 = 3LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v48 = v15;
    v49 = 24;
  }
  for ( k = &v48[v49]; k != v48; v48 += 3 )
    *v48 = -4096;
  result = (__m128i *)&v63;
  if ( v30 != (__m128i *)&v63 )
  {
    do
    {
      v29 = result->m128i_i64[0];
      if ( result->m128i_i64[0] != -8192 && v29 != -4096 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v52 = v15;
          v53 = 7;
        }
        else
        {
          v58 = *(_DWORD *)(a1 + 16);
          if ( !v58 )
          {
LABEL_106:
            *(_QWORD *)&dword_0 = v29;
            BUG();
          }
          v53 = v58 - 1;
          v52 = v8;
        }
        v54 = v53 & (((unsigned int)v29 >> 9) ^ ((unsigned int)v29 >> 4));
        v55 = &v52[3 * v54];
        v56 = *v55;
        if ( v29 != *v55 )
        {
          v59 = 1;
          v60 = nullptr;
          if ( v56 != -4096 )
          {
            while ( 1 )
            {
              if ( v56 == -8192 && !v60 )
                v60 = v55;
              v54 = v53 & (v59 + v54);
              v55 = &v52[3 * v54];
              v56 = *v55;
              if ( v29 == *v55 )
                break;
              if ( v56 == -4096 )
              {
                if ( v60 )
                  v55 = v60;
                break;
              }
              ++v59;
            }
          }
        }
        v57 = _mm_loadu_si128((const __m128i *)&result->m128i_u64[1]);
        *v55 = v29;
        *(__m128i *)(v55 + 1) = v57;
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result = (__m128i *)((char *)result + 24);
    }
    while ( result != v30 );
  }
  return result;
}
