__int64 __fastcall sub_6AF700(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rsi
  __int64 v5; // r12
  signed __int64 v6; // r13
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 result; // rax
  __int64 *v11; // rsi
  unsigned __int64 v12; // rdx
  size_t v13; // r12
  int v14; // r13d
  __int64 v15; // rdx
  __int64 *v16; // rdi
  __int64 v17; // rdx
  __m128i si128; // xmm0
  void *v19; // rdi
  unsigned __int64 v20; // r12
  void *v21; // rdi
  unsigned int v22; // r12d
  _BYTE *v23; // rsi
  size_t v24; // rdx
  const void *v25; // rsi
  size_t v26; // rcx
  _BYTE *v27; // rdi
  __int64 *v28; // rdi
  void *v29; // rdi
  void *v30; // rdi
  size_t v31; // rdx
  __int64 v32; // rdx

  if ( !*(_BYTE *)(a1 + 128) )
  {
    si128 = _mm_load_si128((const __m128i *)&xmmword_3C7E610);
    v19 = (void *)(a1 + 24);
    *(_QWORD *)a1 = v19;
    *(__m128i *)(a1 + 8) = si128;
    v20 = *(_QWORD *)(a2 + 8);
    if ( !v20 || a1 == a2 )
    {
LABEL_22:
      result = 0x600000000LL;
      v21 = (void *)(a1 + 80);
      *(_QWORD *)(a1 + 64) = a1 + 80;
      *(_QWORD *)(a1 + 72) = 0x600000000LL;
      v22 = *(_DWORD *)(a2 + 72);
      if ( !v22 )
        goto LABEL_23;
      result = a1 + 64;
      if ( a1 + 64 == a2 + 64 )
        goto LABEL_23;
      v25 = *(const void **)(a2 + 64);
      if ( v25 != (const void *)(a2 + 80) )
      {
        *(_QWORD *)(a1 + 64) = v25;
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
        result = *(unsigned int *)(a2 + 76);
        *(_DWORD *)(a1 + 76) = result;
        *(_QWORD *)(a2 + 64) = a2 + 80;
        *(_QWORD *)(a2 + 72) = 0;
        goto LABEL_23;
      }
      v26 = 8LL * v22;
      if ( v22 > 6uLL )
      {
        result = sub_25D6060(a1 + 64, a1 + 80, v22, 8);
        v26 = 8LL * *(unsigned int *)(a2 + 72);
        if ( !v26 )
          goto LABEL_33;
        v21 = *(void **)(a1 + 64);
        v25 = *(const void **)(a2 + 64);
      }
      result = (__int64)memcpy(v21, v25, v26);
LABEL_33:
      *(_DWORD *)(a1 + 72) = v22;
      *(_DWORD *)(a2 + 72) = 0;
LABEL_23:
      *(_BYTE *)(a1 + 128) = 1;
      return result;
    }
    v23 = *(_BYTE **)a2;
    if ( v23 != (_BYTE *)(a2 + 24) )
    {
      *(_QWORD *)a1 = v23;
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)a2 = a2 + 24;
      *(_OWORD *)(a2 + 8) = 0;
      goto LABEL_22;
    }
    v24 = v20;
    if ( v20 > 0x28 )
    {
      sub_25D6230(a1, v19, v20, 1);
      v24 = *(_QWORD *)(a2 + 8);
      if ( !v24 )
        goto LABEL_28;
      v19 = *(void **)a1;
      v23 = *(_BYTE **)a2;
    }
    memcpy(v19, v23, v24);
LABEL_28:
    *(_QWORD *)(a1 + 8) = v20;
    *(_QWORD *)(a2 + 8) = 0;
    goto LABEL_22;
  }
  if ( a1 == a2 )
    goto LABEL_11;
  v4 = *(_BYTE **)a2;
  if ( v4 != (_BYTE *)(a2 + 24) )
  {
    v30 = *(void **)a1;
    if ( v30 != (void *)(a1 + 24) )
    {
      free(v30);
      v4 = *(_BYTE **)a2;
    }
    *(_QWORD *)a1 = v4;
    v9 = a1 + 64;
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    result = a2 + 64;
    *(_QWORD *)a2 = a2 + 24;
    *(_OWORD *)(a2 + 8) = 0;
    if ( a1 + 64 == a2 + 64 )
      return result;
    goto LABEL_12;
  }
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 >= (unsigned __int64)v5 )
  {
    if ( v5 )
    {
      v27 = *(_BYTE **)a1;
      if ( v5 <= 1 )
      {
        if ( v5 == 1 )
          *v27 = *v4;
      }
      else
      {
        memmove(v27, v4, *(_QWORD *)(a2 + 8));
      }
    }
    goto LABEL_10;
  }
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)v5 )
  {
    v32 = *(_QWORD *)(a2 + 8);
    v6 = 0;
    *(_QWORD *)(a1 + 8) = 0;
    sub_25D6230(a1, a1 + 24, v32, 1);
  }
  else
  {
    v7 = *(_BYTE **)a1;
    if ( !v6 )
    {
      v31 = *(_QWORD *)(a2 + 8);
LABEL_49:
      memcpy(v7, v4, v31);
      goto LABEL_10;
    }
    if ( v6 <= 1 )
    {
      if ( v6 != 1 )
      {
        v7 += v6;
        v4 += v6;
        v31 = v5 - v6;
        goto LABEL_49;
      }
      *v7 = *v4;
    }
    else
    {
      memmove(v7, v4, v6);
    }
  }
  v8 = *(_QWORD *)(a2 + 8);
  if ( v6 != v8 )
  {
    v31 = v8 - v6;
    v7 = (_BYTE *)(v6 + *(_QWORD *)a1);
    v4 = (_BYTE *)(v6 + *(_QWORD *)a2);
    goto LABEL_49;
  }
LABEL_10:
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a2 + 8) = 0;
LABEL_11:
  v9 = a1 + 64;
  result = a2 + 64;
  if ( a1 + 64 == a2 + 64 )
    return result;
LABEL_12:
  v11 = *(__int64 **)(a2 + 64);
  if ( v11 == (__int64 *)(a2 + 80) )
  {
    v12 = *(unsigned int *)(a2 + 72);
    v13 = *(unsigned int *)(a1 + 72);
    v14 = *(_DWORD *)(a2 + 72);
    if ( v13 >= v12 )
    {
      if ( *(_DWORD *)(a2 + 72) )
      {
        v28 = *(__int64 **)(a1 + 64);
        if ( v12 == 1 )
        {
          result = *v11;
          *v28 = *v11;
        }
        else
        {
          result = (__int64)memmove(v28, v11, 8 * v12);
        }
      }
      goto LABEL_19;
    }
    if ( *(unsigned int *)(a1 + 76) < v12 )
    {
      *(_DWORD *)(a1 + 72) = 0;
      v13 = 0;
      result = sub_25D6060(v9, a1 + 80, v12, 8);
      v11 = *(__int64 **)(a2 + 64);
      v17 = *(unsigned int *)(a2 + 72);
    }
    else
    {
      v15 = 8 * v12;
      if ( !*(_DWORD *)(a1 + 72) )
        goto LABEL_47;
      v13 *= 8LL;
      v16 = *(__int64 **)(a1 + 64);
      if ( v13 == 8 )
      {
        *v16 = *v11;
        result = *(_QWORD *)(a2 + 64);
        v17 = *(unsigned int *)(a2 + 72);
        v11 = (__int64 *)(result + 8);
      }
      else
      {
        result = (__int64)memmove(v16, v11, v13);
        v17 = *(unsigned int *)(a2 + 72);
        v11 = (__int64 *)(v13 + *(_QWORD *)(a2 + 64));
      }
    }
    v15 = 8 * v17;
    if ( v15 == v13 )
    {
LABEL_19:
      *(_DWORD *)(a1 + 72) = v14;
      *(_DWORD *)(a2 + 72) = 0;
      return result;
    }
LABEL_47:
    result = (__int64)memcpy((void *)(v13 + *(_QWORD *)(a1 + 64)), v11, v15 - v13);
    goto LABEL_19;
  }
  v29 = *(void **)(a1 + 64);
  if ( v29 != (void *)(a1 + 80) )
  {
    free(v29);
    v11 = *(__int64 **)(a2 + 64);
  }
  *(_QWORD *)(a1 + 64) = v11;
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  result = *(unsigned int *)(a2 + 76);
  *(_DWORD *)(a1 + 76) = result;
  *(_QWORD *)(a2 + 64) = a2 + 80;
  *(_QWORD *)(a2 + 72) = 0;
  return result;
}

