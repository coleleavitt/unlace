// write access to const memory has been detected, the output may be wrong!
__m128i *__fastcall sub_160BE60(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  __m128i *v8; // r12
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rsi
  bool v16; // zf
  __m128i *v17; // r11
  _QWORD *v18; // rdx
  __int64 v19; // rcx
  _QWORD *i; // rcx
  __m128i *j; // rcx
  __int64 v22; // r9
  int v23; // r10d
  unsigned int v24; // edi
  __int64 v25; // rdx
  __int64 v26; // r13
  __int64 v27; // r8
  __m128i *result; // rax
  const __m128i *v29; // r13
  __m128i *v30; // r14
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  __int64 *k; // rdx
  const __m128i *v37; // r8
  int v38; // edi
  unsigned int v39; // esi
  __m128i *v40; // rdx
  __int64 v41; // r9
  __int64 v42; // rcx
  int v43; // edx
  int v44; // r10d
  __m128i *v45; // r11
  __int64 v46; // [rsp+8h] [rbp-70h]
  int v47; // [rsp+14h] [rbp-64h]
  __m128i v48; // [rsp+20h] [rbp-58h] BYREF
  __int64 v49; // [rsp+30h] [rbp-48h] BYREF

  v6 = a2;
  v8 = *(__m128i **)(a1 + 8);
  v9 = *(_BYTE *)a1 & 1;
  if ( a2 <= 2 )
  {
    if ( !(_BYTE)v9 )
    {
      v12 = *(_DWORD *)(a1 + 16);
      *(_BYTE *)a1 |= 1u;
      v14 = (__int64)v8;
      v6 = v12;
      goto LABEL_6;
    }
    v29 = (const __m128i *)(a1 + 8);
    v10 = a1 + 40;
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
      v29 = (const __m128i *)(a1 + 8);
      v10 = a1 + 40;
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v13 = 16LL * (unsigned int)v11;
        goto LABEL_5;
      }
    }
    else
    {
      if ( !(_BYTE)v9 )
      {
        v12 = *(_DWORD *)(a1 + 16);
        v6 = 64;
        v13 = 1024;
LABEL_5:
        v14 = sub_22300B0(v13, 8, v10, v9, a5, a6);
        *(_DWORD *)(a1 + 16) = v6;
        *(_QWORD *)(a1 + 8) = v14;
LABEL_6:
        v15 = v12;
        v16 = (*(_QWORD *)a1 & 1LL) == 0;
        *(_QWORD *)a1 &= 1uLL;
        v17 = &v8[v15];
        if ( v16 )
        {
          v18 = (_QWORD *)v14;
          v19 = 2LL * v6;
        }
        else
        {
          v18 = (_QWORD *)(a1 + 8);
          v19 = 4;
        }
        for ( i = &v18[v19]; i != v18; *((_DWORD *)v18 - 2) = 0 )
        {
          *v18 = -4096;
          v18 += 2;
        }
        for ( j = v8; v17 != j; ++j )
        {
          v27 = j->m128i_i64[0];
          if ( j->m128i_i64[0] != -4096 && v27 != -8192 )
          {
            if ( (*(_BYTE *)a1 & 1) != 0 )
            {
              v22 = a1 + 8;
              v23 = 1;
            }
            else
            {
              if ( !v6 )
              {
                *(_QWORD *)&dword_0 = j->m128i_i64[0];
                *(_DWORD *)byte_8 = j->m128i_i32[2];
                BUG();
              }
              v23 = v6 - 1;
              v22 = v14;
            }
            v24 = v23 & (((unsigned int)v27 >> 9) ^ ((unsigned int)v27 >> 4));
            v25 = v22 + 16LL * v24;
            v26 = *(_QWORD *)v25;
            if ( *(_QWORD *)v25 != v27 && v26 != -4096 )
            {
              v47 = 1;
              v46 = 0;
              while ( 1 )
              {
                if ( v26 == -8192 )
                {
                  if ( v46 )
                    v25 = v46;
                  v46 = v25;
                }
                v24 = v23 & (v47 + v24);
                v25 = v22 + 16LL * v24;
                v26 = *(_QWORD *)v25;
                if ( v27 == *(_QWORD *)v25 )
                  break;
                if ( v26 == -4096 )
                {
                  if ( v46 )
                    v25 = v46;
                  break;
                }
                ++v47;
              }
            }
            *(_QWORD *)v25 = j->m128i_i64[0];
            *(_DWORD *)(v25 + 8) = j->m128i_i32[2];
            *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
          }
        }
        return (__m128i *)operator delete(v8, v15 * 16, 8);
      }
      v29 = (const __m128i *)(a1 + 8);
      v10 = a1 + 40;
      v6 = 64;
    }
  }
  if ( v29->m128i_i64[0] == -4096 || v29->m128i_i64[0] == -8192 )
  {
    v30 = &v48;
  }
  else
  {
    v30 = (__m128i *)&v49;
    v48 = _mm_loadu_si128(v29);
  }
  if ( (const __m128i *)v10 != &v29[1] )
  {
    v31 = v29[1].m128i_i64[0];
    if ( v31 != -4096 && v31 != -8192 )
    {
      ++v30;
      v30[-1] = _mm_loadu_si128(v29 + 1);
    }
    if ( (const __m128i *)v10 != &v29[2] )
    {
      v32 = v29[2].m128i_i64[0];
      if ( v32 != -4096 && v32 != -8192 )
      {
        ++v30;
        v30[-1] = _mm_loadu_si128(v29 + 2);
      }
    }
  }
  if ( v6 > 2 )
  {
    *(_BYTE *)a1 &= ~1u;
    v33 = sub_22300B0(16LL * v6, 8, v10, v9, a5, a6);
    *(_DWORD *)(a1 + 16) = v6;
    *(_QWORD *)(a1 + 8) = v33;
    v8 = (__m128i *)v33;
  }
  v16 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v16 )
  {
    v34 = (__int64 *)v8;
    v35 = 2LL * *(unsigned int *)(a1 + 16);
  }
  else
  {
    v34 = (__int64 *)v29;
    v35 = 4;
  }
  for ( k = &v34[v35]; k != v34; *((_DWORD *)v34 - 2) = 0 )
  {
    *v34 = -4096;
    v34 += 2;
  }
  for ( result = &v48; result != v30; ++result )
  {
    v42 = result->m128i_i64[0];
    if ( result->m128i_i64[0] != -4096 && v42 != -8192 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v37 = v29;
        v38 = 1;
      }
      else
      {
        v43 = *(_DWORD *)(a1 + 16);
        if ( !v43 )
        {
          *(_QWORD *)&dword_0 = result->m128i_i64[0];
          *(_DWORD *)byte_8 = result->m128i_i32[2];
          BUG();
        }
        v38 = v43 - 1;
        v37 = v8;
      }
      v39 = v38 & (((unsigned int)v42 >> 9) ^ ((unsigned int)v42 >> 4));
      v40 = (__m128i *)&v37[v39];
      v41 = v40->m128i_i64[0];
      if ( v42 != v40->m128i_i64[0] )
      {
        v44 = 1;
        v45 = nullptr;
        if ( v41 != -4096 )
        {
          while ( 1 )
          {
            if ( v41 == -8192 && !v45 )
              v45 = v40;
            v39 = v38 & (v44 + v39);
            v40 = (__m128i *)&v37[v39];
            v41 = v40->m128i_i64[0];
            if ( v42 == v40->m128i_i64[0] )
              break;
            if ( v41 == -4096 )
            {
              if ( v45 )
                v40 = v45;
              break;
            }
            ++v44;
          }
        }
      }
      v40->m128i_i64[0] = result->m128i_i64[0];
      v40->m128i_i32[2] = result->m128i_i32[2];
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}
