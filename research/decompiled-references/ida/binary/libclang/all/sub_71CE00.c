__int64 *__fastcall sub_71CE00(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // rbp
  __int64 *v4; // r12
  char v5; // cl
  unsigned __int64 v6; // rdx
  int v7; // r13d
  __int64 v8; // rax
  __m128i *v9; // rdx
  bool v10; // zf
  __int64 *v11; // rdi
  __m128i *v12; // rax
  __int64 v13; // r8
  __m128i v14; // xmm0
  __m128i *v15; // rcx
  __int64 *i; // rax
  __int64 v17; // r11
  int v18; // r10d
  int v19; // r14d
  _QWORD *v20; // r13
  __int64 v21; // rcx
  _QWORD *v22; // r8
  __int64 v23; // rbp
  __int64 v24; // rdx
  int v25; // ecx
  __int64 *v26; // r12
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  __m128i *v31; // rcx
  __m128i *v32; // rax
  __int64 v33; // rdi
  __m128i v34; // xmm0
  __m128i *v35; // rsi
  __int64 *result; // rax
  __int64 v37; // r8
  int v38; // edi
  int v39; // r11d
  _QWORD *v40; // r10
  unsigned int v41; // ecx
  _QWORD *v42; // rsi
  __int64 v43; // r9
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // [rsp+0h] [rbp-58h] BYREF
  char v47; // [rsp+8h] [rbp-50h] BYREF

  LODWORD(v2) = a2;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_BYTE *)a1 & 1;
  if ( a2 <= 4 )
  {
    if ( !v5 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      v9 = *(__m128i **)(a1 + 8);
      *(_BYTE *)a1 |= 1u;
      LODWORD(v2) = v7;
LABEL_8:
      v10 = (*(_QWORD *)a1 & 1LL) == 0;
      *(_QWORD *)a1 &= 1uLL;
      v11 = &v4[v7];
      if ( v10 )
      {
        v2 = (unsigned int)v2;
        if ( !(8LL * (unsigned int)v2) )
          goto LABEL_16;
        if ( 8LL * (unsigned int)v2 == 8 )
        {
LABEL_15:
          v9->m128i_i64[0] = -4096;
LABEL_16:
          for ( i = v4; v11 != i; ++i )
          {
            v24 = *i;
            if ( *i != -4096 && v24 != -8192 )
            {
              if ( (*(_BYTE *)a1 & 1) != 0 )
              {
                v17 = a1 + 8;
                v18 = 3;
              }
              else
              {
                v25 = *(_DWORD *)(a1 + 16);
                v17 = *(_QWORD *)(a1 + 8);
                if ( !v25 )
                  goto LABEL_86;
                v18 = v25 - 1;
              }
              v19 = 1;
              v20 = nullptr;
              LODWORD(v21) = v18 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
              v22 = (_QWORD *)(v17 + 8LL * (unsigned int)v21);
              v23 = *v22;
              if ( v24 != *v22 )
              {
                while ( v23 != -4096 )
                {
                  if ( v23 == -8192 && !v20 )
                    v20 = v22;
                  v21 = v18 & (unsigned int)(v21 + v19);
                  v22 = (_QWORD *)(v17 + 8 * v21);
                  v23 = *v22;
                  if ( v24 == *v22 )
                    goto LABEL_20;
                  ++v19;
                }
                if ( v20 )
                  v22 = v20;
              }
LABEL_20:
              *v22 = v24;
              *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
            }
          }
          return (__int64 *)operator delete();
        }
      }
      else
      {
        v9 = (__m128i *)(a1 + 8);
        v2 = 4;
      }
      v12 = v9;
      v13 = v2 >> 1;
      v14 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
      v15 = &v9[v13];
      if ( ((v13 * 16) & 0x10) == 0 || (v12 = v9 + 1, *v9 = v14, v15 != &v9[1]) )
      {
        do
        {
          *v12 = v14;
          v12 += 2;
          v12[-1] = v14;
        }
        while ( v15 != v12 );
      }
      if ( (v2 & 1) == 0 )
        goto LABEL_16;
      v9 = (__m128i *)((char *)v9 + 8 * (v2 & 0xFFFFFFFFFFFFFFFELL));
      goto LABEL_15;
    }
  }
  else
  {
    v6 = (a2 - 1)
       | ((unsigned __int64)(a2 - 1) >> 1)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)
       | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1) | (((a2 - 1) | ((unsigned __int64)(a2 - 1) >> 1)) >> 2)) >> 4);
    v2 = (v6 | (v6 >> 8) | ((v6 | (v6 >> 8)) >> 16)) + 1;
    if ( (unsigned int)v2 < 0x40 )
      LODWORD(v2) = 64;
    if ( !v5 )
    {
      v7 = *(_DWORD *)(a1 + 16);
      v8 = sub_25CC9C0(8LL * (unsigned int)v2, 8);
      *(_DWORD *)(a1 + 16) = v2;
      *(_QWORD *)(a1 + 8) = v8;
      v9 = (__m128i *)v8;
      goto LABEL_8;
    }
  }
  if ( v4 == (__int64 *)-8192LL || v4 == (__int64 *)-4096LL )
  {
    v26 = &v46;
  }
  else
  {
    v46 = *(_QWORD *)(a1 + 8);
    v26 = (__int64 *)&v47;
  }
  v27 = *(_QWORD *)(a1 + 16);
  if ( v27 != -4096 && v27 != -8192 )
    *v26++ = v27;
  v28 = *(_QWORD *)(a1 + 24);
  if ( v28 != -4096 && v28 != -8192 )
    *v26++ = v28;
  v29 = *(_QWORD *)(a1 + 32);
  if ( v29 != -4096 && v29 != -8192 )
    *v26++ = v29;
  if ( (unsigned int)v2 > 4 )
  {
    *(_BYTE *)a1 &= ~1u;
    v45 = sub_25CC9C0(8LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v45;
  }
  v10 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v10 )
  {
    v30 = *(unsigned int *)(a1 + 16);
    v31 = *(__m128i **)(a1 + 8);
    if ( !(8 * v30) )
      goto LABEL_50;
    if ( 8 * v30 == 8 )
      goto LABEL_49;
  }
  else
  {
    v31 = (__m128i *)(a1 + 8);
    v30 = 4;
  }
  v32 = v31;
  v33 = v30 >> 1;
  v34 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
  v35 = &v31[v33];
  if ( ((v33 * 16) & 0x10) == 0 || (v32 = v31 + 1, *v31 = v34, &v31[1] != v35) )
  {
    do
    {
      *v32 = v34;
      v32 += 2;
      v32[-1] = v34;
    }
    while ( v32 != v35 );
  }
  if ( (v30 & 1) != 0 )
  {
    v31 = (__m128i *)((char *)v31 + 8 * (v30 & 0xFFFFFFFFFFFFFFFELL));
LABEL_49:
    v31->m128i_i64[0] = -4096;
  }
LABEL_50:
  for ( result = &v46; v26 != result; ++result )
  {
    v24 = *result;
    if ( *result != -4096 && v24 != -8192 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v37 = a1 + 8;
        v38 = 3;
      }
      else
      {
        v44 = *(_DWORD *)(a1 + 16);
        v37 = *(_QWORD *)(a1 + 8);
        if ( !v44 )
        {
LABEL_86:
          *(_QWORD *)&dword_0 = v24;
          BUG();
        }
        v38 = v44 - 1;
      }
      v39 = 1;
      v40 = nullptr;
      v41 = v38 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
      v42 = (_QWORD *)(v37 + 8LL * v41);
      v43 = *v42;
      if ( v24 != *v42 )
      {
        while ( v43 != -4096 )
        {
          if ( !v40 && v43 == -8192 )
            v40 = v42;
          v41 = v38 & (v39 + v41);
          v42 = (_QWORD *)(v37 + 8LL * v41);
          v43 = *v42;
          if ( v24 == *v42 )
            goto LABEL_54;
          ++v39;
        }
        if ( v40 )
          v42 = v40;
      }
LABEL_54:
      *v42 = v24;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}

