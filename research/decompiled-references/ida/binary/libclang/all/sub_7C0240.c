__int64 *__fastcall sub_7C0240(__int64 a1, unsigned int a2)
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
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  __m128i *v35; // rcx
  __m128i *v36; // rax
  __int64 v37; // rdi
  __m128i v38; // xmm0
  __m128i *v39; // rsi
  __int64 *result; // rax
  __int64 v41; // r8
  int v42; // edi
  int v43; // r11d
  _QWORD *v44; // r10
  unsigned int v45; // ecx
  _QWORD *v46; // rsi
  __int64 v47; // r9
  int v48; // ecx
  __int64 v49; // rax
  __int64 v50; // [rsp+0h] [rbp-78h] BYREF
  char v51; // [rsp+8h] [rbp-70h] BYREF

  LODWORD(v2) = a2;
  v4 = *(__int64 **)(a1 + 8);
  v5 = *(_BYTE *)a1 & 1;
  if ( a2 <= 8 )
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
                v18 = 7;
              }
              else
              {
                v25 = *(_DWORD *)(a1 + 16);
                v17 = *(_QWORD *)(a1 + 8);
                if ( !v25 )
                  goto LABEL_98;
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
        v2 = 8;
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
    v26 = &v50;
  }
  else
  {
    v50 = *(_QWORD *)(a1 + 8);
    v26 = (__int64 *)&v51;
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
  v30 = *(_QWORD *)(a1 + 40);
  if ( v30 != -4096 && v30 != -8192 )
    *v26++ = v30;
  v31 = *(_QWORD *)(a1 + 48);
  if ( v31 != -4096 && v31 != -8192 )
    *v26++ = v31;
  v32 = *(_QWORD *)(a1 + 56);
  if ( v32 != -8192 && v32 != -4096 )
    *v26++ = v32;
  v33 = *(_QWORD *)(a1 + 64);
  if ( v33 != -4096 && v33 != -8192 )
    *v26++ = v33;
  if ( (unsigned int)v2 > 8 )
  {
    *(_BYTE *)a1 &= ~1u;
    v49 = sub_25CC9C0(8LL * (unsigned int)v2, 8);
    *(_DWORD *)(a1 + 16) = v2;
    *(_QWORD *)(a1 + 8) = v49;
  }
  v10 = (*(_QWORD *)a1 & 1LL) == 0;
  *(_QWORD *)a1 &= 1uLL;
  if ( v10 )
  {
    v34 = *(unsigned int *)(a1 + 16);
    v35 = *(__m128i **)(a1 + 8);
    if ( !(8 * v34) )
      goto LABEL_62;
    if ( 8 * v34 == 8 )
      goto LABEL_61;
  }
  else
  {
    v35 = (__m128i *)(a1 + 8);
    v34 = 8;
  }
  v36 = v35;
  v37 = v34 >> 1;
  v38 = _mm_unpacklo_epi64((__m128i)0xFFFFFFFFFFFFF000LL, (__m128i)0xFFFFFFFFFFFFF000LL);
  v39 = &v35[v37];
  if ( ((v37 * 16) & 0x10) == 0 || (v36 = v35 + 1, *v35 = v38, v39 != &v35[1]) )
  {
    do
    {
      *v36 = v38;
      v36 += 2;
      v36[-1] = v38;
    }
    while ( v39 != v36 );
  }
  if ( (v34 & 1) != 0 )
  {
    v35 = (__m128i *)((char *)v35 + 8 * (v34 & 0xFFFFFFFFFFFFFFFELL));
LABEL_61:
    v35->m128i_i64[0] = -4096;
  }
LABEL_62:
  for ( result = &v50; v26 != result; ++result )
  {
    v24 = *result;
    if ( *result != -4096 && v24 != -8192 )
    {
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        v41 = a1 + 8;
        v42 = 7;
      }
      else
      {
        v48 = *(_DWORD *)(a1 + 16);
        v41 = *(_QWORD *)(a1 + 8);
        if ( !v48 )
        {
LABEL_98:
          *(_QWORD *)&dword_0 = v24;
          BUG();
        }
        v42 = v48 - 1;
      }
      v43 = 1;
      v44 = nullptr;
      v45 = v42 & (((unsigned int)v24 >> 9) ^ ((unsigned int)v24 >> 4));
      v46 = (_QWORD *)(v41 + 8LL * v45);
      v47 = *v46;
      if ( v24 != *v46 )
      {
        while ( v47 != -4096 )
        {
          if ( !v44 && v47 == -8192 )
            v44 = v46;
          v45 = v42 & (v43 + v45);
          v46 = (_QWORD *)(v41 + 8LL * v45);
          v47 = *v46;
          if ( v24 == *v46 )
            goto LABEL_66;
          ++v43;
        }
        if ( v44 )
          v46 = v44;
      }
LABEL_66:
      *v46 = v24;
      *(_DWORD *)a1 = (2 * (*(_DWORD *)a1 >> 1) + 2) | *(_DWORD *)a1 & 1;
    }
  }
  return result;
}

