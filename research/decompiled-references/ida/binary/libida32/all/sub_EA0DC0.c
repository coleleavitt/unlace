__int64 __fastcall sub_EA0DC0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r9
  __int64 v3; // rdx
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // rsi
  __m128i *v10; // r8
  __int64 v11; // rax
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rax
  int v16; // ecx
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rax
  __int64 v24; // rax
  const __m128i *v25; // r13
  unsigned __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // r8
  _BYTE v30[136]; // [rsp-88h] [rbp-88h] BYREF

  v2 = *(unsigned int *)(a2 + 64);
  if ( (unsigned int)v2 <= 0x25 )
  {
    v3 = 0x4001000001LL;
    result = 1;
    if ( _bittest64(&v3, v2) )
      return result;
  }
  v7 = *(unsigned int *)(a1 + 16);
  v8 = *(_QWORD *)(a1 + 8);
  v9 = *(unsigned int *)(a1 + 20);
  v10 = (__m128i *)(v8 + 96 * v7);
  if ( v7 >= v9 )
  {
    v25 = (const __m128i *)v30;
    v26 = v7 + 1;
    memset(v30, 0, 0x60u);
    if ( v9 < v26 )
    {
      v27 = a1 + 8;
      v28 = a1 + 24;
      if ( v8 > (unsigned __int64)v30 || v10 <= (__m128i *)v30 )
      {
        sub_22134E0(v27, v28, v26, 96);
        v10 = (__m128i *)(*(_QWORD *)(a1 + 8) + 96LL * *(unsigned int *)(a1 + 16));
      }
      else
      {
        sub_22134E0(v27, v28, v26, 96);
        v29 = *(_QWORD *)(a1 + 8);
        v25 = (const __m128i *)&v30[v29 - v8];
        v10 = (__m128i *)(96LL * *(unsigned int *)(a1 + 16) + v29);
      }
    }
    *v10 = _mm_loadu_si128(v25);
    v10[1] = _mm_loadu_si128(v25 + 1);
    v10[2] = _mm_loadu_si128(v25 + 2);
    v10[3] = _mm_loadu_si128(v25 + 3);
    v10[4] = _mm_loadu_si128(v25 + 4);
    v10[5] = _mm_loadu_si128(v25 + 5);
    LODWORD(v2) = *(_DWORD *)(a2 + 64);
    v11 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    *(_DWORD *)(a1 + 16) = v11;
  }
  else
  {
    memset(v10, 0, 0x60u);
    v11 = (unsigned int)(*(_DWORD *)(a1 + 16) + 1);
    *(_DWORD *)(a1 + 16) = v11;
  }
  v12 = *(unsigned int *)(a2 + 100);
  v13 = 96 * v11 - 96;
  v14 = v13 + *(_QWORD *)(a1 + 8);
  if ( v12 < *(_QWORD *)(a1 + 416) )
  {
    *(_QWORD *)v14 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8 * v12);
    v14 = *(_QWORD *)(a1 + 8) + v13;
  }
  v15 = (unsigned int)(v2 - 21);
  v16 = 0;
  if ( (unsigned int)v15 <= 0x11 )
    v16 = dword_23D4C60[v15];
  *(_DWORD *)(v14 + 8) = v16;
  *(_BYTE *)(v14 + 12) = 1;
  v17 = *(unsigned int *)(a1 + 16);
  v18 = *(_QWORD *)(a1 + 8) + 96 * v17 - 96;
  if ( !*(_BYTE *)(v18 + 12) )
  {
    if ( *(_QWORD *)v18 )
      goto LABEL_11;
LABEL_23:
    *(_DWORD *)(a1 + 16) = v17 - 1;
    return 0;
  }
  if ( *(_DWORD *)(v18 + 8) != 6 && !*(_QWORD *)v18 )
    goto LABEL_23;
LABEL_11:
  v19 = *(_DWORD *)(a2 + 356);
  if ( (_DWORD)v2 != 26 )
  {
    if ( (_DWORD)v2 == 27 )
    {
      if ( v19 == 1 )
      {
LABEL_38:
        v22 = *(_DWORD *)(a2 + 360);
        *(_BYTE *)(v18 + 20) = 1;
        *(_DWORD *)(v18 + 16) = v22;
        goto LABEL_41;
      }
      if ( !v19 )
        return 0;
      if ( v19 != 2 )
      {
        result = 0;
        if ( v19 != 3 )
        {
          if ( *(_DWORD *)(a2 + 28) == 2 )
            goto LABEL_32;
          goto LABEL_16;
        }
        return result;
      }
LABEL_40:
      v23 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL * *(unsigned int *)(a2 + 360));
      *(_BYTE *)(v18 + 32) = 1;
      *(_QWORD *)(v18 + 24) = v23;
LABEL_41:
      v18 = *(_QWORD *)(a1 + 8) + 96LL * *(unsigned int *)(a1 + 16) - 96;
      if ( *(_DWORD *)(a2 + 28) == 2 )
        goto LABEL_32;
LABEL_16:
      if ( *(_BYTE *)(a2 + 336) )
      {
LABEL_17:
        *(_BYTE *)(v18 + 72) |= 5u;
        goto LABEL_18;
      }
LABEL_24:
      if ( *(_BYTE *)(a2 + 288) )
      {
        *(_BYTE *)(v18 + 72) |= 1u;
      }
      else
      {
        if ( !*(_BYTE *)(a2 + 312) )
          goto LABEL_19;
        *(_BYTE *)(v18 + 72) |= 2u;
      }
LABEL_18:
      v18 = *(_QWORD *)(a1 + 8) + 96LL * *(unsigned int *)(a1 + 16) - 96;
LABEL_19:
      v20 = *(_QWORD *)(a2 + 376);
      *(_QWORD *)(v18 + 80) = *(_QWORD *)(a2 + 368);
      *(_QWORD *)(v18 + 88) = v20;
      return 1;
    }
    if ( (_DWORD)v2 != 21 )
    {
      if ( v19 != 2 )
        goto LABEL_15;
      v24 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL * *(unsigned int *)(a2 + 360));
      *(_BYTE *)(v18 + 48) = 1;
      *(_QWORD *)(v18 + 40) = v24;
      goto LABEL_41;
    }
  }
  if ( v19 == 2 )
    goto LABEL_40;
  result = 0;
  if ( v19 != 3 )
  {
    if ( v19 != 1 )
    {
LABEL_15:
      if ( *(_DWORD *)(a2 + 28) != 2 )
        goto LABEL_16;
LABEL_32:
      v21 = *(_QWORD *)(*(_QWORD *)(a1 + 408) + 8LL * *(unsigned int *)(a2 + 32));
      *(_BYTE *)(v18 + 64) = 1;
      *(_QWORD *)(v18 + 56) = v21;
      v18 = *(_QWORD *)(a1 + 8) + 96LL * *(unsigned int *)(a1 + 16) - 96;
      if ( *(_BYTE *)(a2 + 336) )
        goto LABEL_17;
      goto LABEL_24;
    }
    goto LABEL_38;
  }
  return result;
}

