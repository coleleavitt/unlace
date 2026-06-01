__m128i *__fastcall sub_1F3B1C0(__m128i *a1, __int64 a2, __int64 *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r8d
  _QWORD *v11; // rsi
  __int64 v12; // r10
  __m128i si128; // xmm0
  int v15; // r12d
  _QWORD *v16; // r13
  __int64 v17; // rdx
  __m128i v18; // xmm1
  unsigned int v19; // r11d
  unsigned int v20; // r10d
  unsigned int v21; // r11d
  unsigned int v22; // r10d
  _QWORD *v23; // r12
  int v24; // r14d
  int v25; // r14d
  _QWORD *v28; // [rsp+8h] [rbp-40h]
  _QWORD *v29; // [rsp+8h] [rbp-40h]
  __m128 v30[3]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
  {
    v9 = *a3;
    a6 = *(_QWORD *)a2;
    v10 = (v8 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
    v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v10);
    v12 = *v11;
    if ( *a3 == *v11 )
    {
LABEL_3:
      sub_1F33660(v30, v11, (_QWORD *)(a6 + 16LL * v8), a2, 1);
      si128 = _mm_load_si128((const __m128i *)v30);
      a1[1].m128i_i8[0] = 0;
      *a1 = si128;
      return a1;
    }
    v15 = 1;
    v16 = nullptr;
    if ( v12 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v12 == -8192 )
          v16 = v11;
        v10 = (v8 - 1) & (v15 + v10);
        v11 = (_QWORD *)(a6 + 16LL * v10);
        v12 = *v11;
        if ( v9 == *v11 )
          goto LABEL_3;
        if ( v12 == -4096 )
          break;
        ++v15;
      }
      if ( v16 )
        v11 = v16;
    }
    a5 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
    if ( 4 * (int)a5 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(a2 + 12) - (unsigned int)a5 > v8 >> 3 )
      {
LABEL_7:
        v17 = *v11;
        goto LABEL_8;
      }
      v29 = a4;
      sub_1F3AFB0(a2, v8, (__int64)a3, (__int64)a4, a5, a6);
      v8 = *(_DWORD *)(a2 + 16);
      if ( v8 )
      {
        v21 = v8 - 1;
        a6 = *(_QWORD *)a2;
        v9 = *a3;
        LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
        a4 = v29;
        v22 = (v8 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v22);
        v17 = *v11;
        if ( *v11 == *a3 )
        {
          v17 = *a3;
          goto LABEL_8;
        }
        if ( v17 != -4096 )
        {
          v23 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (v21 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
          v24 = 1;
          v11 = nullptr;
          while ( 1 )
          {
            if ( v17 == -8192 && !v11 )
              v11 = v23;
            v22 = v21 & (v24 + v22);
            v23 = (_QWORD *)(a6 + 16LL * v22);
            v17 = *v23;
            if ( v9 == *v23 )
              break;
            if ( v17 == -4096 )
              goto LABEL_40;
            ++v24;
          }
LABEL_33:
          v11 = v23;
LABEL_8:
          *(_DWORD *)(a2 + 8) = a5;
          if ( v17 != -4096 )
            --*(_DWORD *)(a2 + 12);
          goto LABEL_10;
        }
        goto LABEL_14;
      }
LABEL_45:
      ++*(_DWORD *)(a2 + 8);
      BUG();
    }
  }
  v28 = a4;
  sub_1F3AFB0(a2, 2 * v8, (__int64)a3, (__int64)a4, a5, a6);
  v8 = *(_DWORD *)(a2 + 16);
  if ( !v8 )
    goto LABEL_45;
  v19 = v8 - 1;
  a6 = *(_QWORD *)a2;
  v9 = *a3;
  LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
  a4 = v28;
  v20 = (v8 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
  v11 = (_QWORD *)(*(_QWORD *)a2 + 16LL * v20);
  v17 = *v11;
  if ( *v11 == *a3 )
    goto LABEL_8;
  if ( v17 != -4096 )
  {
    v23 = (_QWORD *)(*(_QWORD *)a2 + 16LL * (v19 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
    v25 = 1;
    v11 = nullptr;
    while ( 1 )
    {
      if ( !v11 && v17 == -8192 )
        v11 = v23;
      v20 = v19 & (v25 + v20);
      v23 = (_QWORD *)(a6 + 16LL * v20);
      v17 = *v23;
      if ( v9 == *v23 )
        goto LABEL_33;
      if ( v17 == -4096 )
      {
LABEL_40:
        if ( v11 )
          goto LABEL_7;
        v11 = v23;
        break;
      }
      ++v25;
    }
  }
LABEL_14:
  *(_DWORD *)(a2 + 8) = a5;
LABEL_10:
  *v11 = v9;
  v11[1] = *a4;
  sub_1F33660(v30, v11, (_QWORD *)(a6 + 16LL * v8), a2, 1);
  v18 = _mm_load_si128((const __m128i *)v30);
  a1[1].m128i_i8[0] = 1;
  *a1 = v18;
  return a1;
}
