__m128i *__fastcall sub_1AEBFF0(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r12
  _QWORD *v8; // rbp
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  _QWORD *v14; // rax
  __int64 *v15; // r14
  __int64 v16; // rsi
  bool v17; // zf
  _QWORD *v18; // r8
  __int64 v19; // rdx
  _QWORD *i; // rdx
  _QWORD *j; // rdi
  __int64 v22; // r11
  int v23; // r10d
  unsigned int v24; // edx
  __int64 *v25; // rcx
  __int64 v26; // r12
  __int64 v27; // rax
  int v28; // edx
  __m128i *v29; // r13
  __int64 v30; // rax
  __m128i v31; // xmm3
  __int64 v32; // rax
  __m128i v33; // xmm4
  __int64 v34; // rax
  __m128i v35; // xmm5
  __int64 v36; // rax
  __m128i v37; // xmm6
  __int64 v38; // rax
  __int64 v39; // rax
  _QWORD *k; // rax
  __m128i *result; // rax
  __int64 *v42; // r8
  int v43; // edi
  unsigned int v44; // ecx
  __int64 *v45; // rsi
  __int64 v46; // r9
  __m128i v47; // xmm1
  __int64 v48; // rdx
  int v49; // ecx
  int v50; // r13d
  __int64 *v51; // r14
  int v52; // r10d
  __int64 *v53; // r11
  __int64 v54; // [rsp+0h] [rbp-98h] BYREF
  __m128i v55; // [rsp+8h] [rbp-90h]
  __int64 v56; // [rsp+18h] [rbp-80h] BYREF

  LODWORD(v6) = a2;
  v8 = *(_QWORD **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    v15 = (__int64 *)(a1 + 8);
    v10 = a1 + 104;
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
      v10 = a1 + 104;
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
        v14 = (_QWORD *)sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_8:
        v16 = 3LL * v12;
        v17 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v18 = &v8[v16];
        if ( v17 )
        {
          v19 = 3 * v6;
        }
        else
        {
          v14 = (_QWORD *)(a1 + 8);
          v19 = 12;
        }
        for ( i = &v14[v19]; i != v14; v14 += 3 )
          *v14 = -4096;
        for ( j = v8; v18 != j; j += 3 )
        {
          v27 = *j;
          if ( *j != -4096 && v27 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 3;
            }
            else
            {
              v28 = *(_DWORD *)(a1 + 16);
              v22 = *(_QWORD *)(a1 + 8);
              if ( !v28 )
              {
                *(_QWORD *)&dword_0 = *j;
                BUG();
              }
              v23 = v28 - 1;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = (__int64 *)(v22 + 24LL * v24);
            v26 = *v25;
            if ( *v25 != v27 )
            {
              v50 = 1;
              v51 = nullptr;
              if ( v26 != -4096 )
              {
                while ( 1 )
                {
                  if ( v26 == -8192 && !v51 )
                    v51 = v25;
                  v24 = v23 & (v50 + v24);
                  v25 = (__int64 *)(v22 + 24LL * v24);
                  v26 = *v25;
                  if ( v27 == *v25 )
                    break;
                  if ( v26 == -4096 )
                  {
                    if ( v51 )
                      v25 = v51;
                    break;
                  }
                  ++v50;
                }
              }
            }
            *v25 = v27;
            *(__m128i *)(v25 + 1) = _mm_loadu_si128((const __m128i *)(j + 1));
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__m128i *)operator delete(v8, v16 * 8, 8);
      }
      v15 = (__int64 *)(a1 + 8);
      v10 = a1 + 104;
      LODWORD(v6) = 64;
    }
  }
  if ( *v15 == -4096 || *v15 == -8192 )
  {
    v29 = (__m128i *)&v54;
  }
  else
  {
    v54 = *v15;
    v29 = (__m128i *)&v56;
    v55 = _mm_loadu_si128((const __m128i *)(v15 + 1));
  }
  if ( (__int64 *)v10 != v15 + 3 )
  {
    v30 = v15[3];
    if ( v30 != -4096 && v30 != -8192 )
    {
      v31 = _mm_loadu_si128((const __m128i *)v15 + 2);
      v29->m128i_i64[0] = v30;
      v29 = (__m128i *)((char *)v29 + 24);
      v29[-1] = v31;
    }
    if ( (__int64 *)v10 != v15 + 6 )
    {
      v32 = v15[6];
      if ( v32 != -4096 && v32 != -8192 )
      {
        v33 = _mm_loadu_si128((const __m128i *)(v15 + 7));
        v29->m128i_i64[0] = v32;
        v29 = (__m128i *)((char *)v29 + 24);
        v29[-1] = v33;
      }
      if ( (__int64 *)v10 != v15 + 9 )
      {
        v34 = v15[9];
        if ( v34 != -4096 && v34 != -8192 )
        {
          v35 = _mm_loadu_si128((const __m128i *)v15 + 5);
          v29->m128i_i64[0] = v34;
          v29 = (__m128i *)((char *)v29 + 24);
          v29[-1] = v35;
        }
        if ( (__int64 *)v10 != v15 + 12 )
        {
          v36 = v15[12];
          if ( v36 != -4096 && v36 != -8192 )
          {
            v37 = _mm_loadu_si128((const __m128i *)(v15 + 13));
            v29->m128i_i64[0] = v36;
            v29 = (__m128i *)((char *)v29 + 24);
            v29[-1] = v37;
          }
        }
      }
    }
  }
  if ( (unsigned int)v6 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v38 = sub_22300B0(24LL * (unsigned int)v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v38;
    v8 = (_QWORD *)v38;
  }
  v17 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v17 )
  {
    v39 = 3LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v8 = v15;
    v39 = 12;
  }
  for ( k = &v8[v39]; k != v8; v8 += 3 )
    *v8 = -4096;
  result = (__m128i *)&v54;
  if ( v29 != (__m128i *)&v54 )
  {
    do
    {
      v48 = result->m128i_i64[0];
      if ( result->m128i_i64[0] != -8192 && v48 != -4096 )
      {
        if ( (*(_BYTE *)a1 & 1) != 0 )
        {
          v42 = v15;
          v43 = 3;
        }
        else
        {
          v49 = *(_DWORD *)(a1 + 16);
          v42 = *(__int64 **)(a1 + 8);
          if ( !v49 )
          {
            *(_QWORD *)&dword_0 = result->m128i_i64[0];
            BUG();
          }
          v43 = v49 - 1;
        }
        v44 = v43 & (((unsigned int)v48 >> 9) ^ ((unsigned int)v48 >> 4));
        v45 = &v42[3 * v44];
        v46 = *v45;
        if ( v48 != *v45 )
        {
          v52 = 1;
          v53 = nullptr;
          if ( v46 != -4096 )
          {
            while ( 1 )
            {
              if ( v46 == -8192 && !v53 )
                v53 = v45;
              v44 = v43 & (v52 + v44);
              v45 = &v42[3 * v44];
              v46 = *v45;
              if ( v48 == *v45 )
                break;
              if ( v46 == -4096 )
              {
                if ( v53 )
                  v45 = v53;
                break;
              }
              ++v52;
            }
          }
        }
        v47 = _mm_loadu_si128((const __m128i *)&result->m128i_u64[1]);
        *v45 = v48;
        *(__m128i *)(v45 + 1) = v47;
        *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
      }
      result = (__m128i *)((char *)result + 24);
    }
    while ( result != v29 );
  }
  return result;
}
