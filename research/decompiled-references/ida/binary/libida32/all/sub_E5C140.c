__m128i *__fastcall sub_E5C140(__m128i *a1, __int64 a2, __int64 *a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rsi
  __int64 v12; // r10
  __m128i si128; // xmm0
  int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // rdx
  __m128i v18; // xmm1
  int v19; // esi
  int v20; // r10d
  unsigned int v21; // edi
  int v22; // esi
  int v23; // r10d
  unsigned int v24; // edi
  __int64 *v25; // r11
  int v26; // r12d
  int v27; // r12d
  _DWORD *v30; // [rsp+8h] [rbp-40h]
  _DWORD *v31; // [rsp+8h] [rbp-40h]
  __m128 v32[3]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(_DWORD *)(a2 + 16);
  if ( v8 )
  {
    v9 = *a3;
    a6 = *(_QWORD *)a2;
    v10 = (v8 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
    v11 = *(_QWORD *)a2 + 16LL * v10;
    v12 = *(_QWORD *)v11;
    if ( *a3 == *(_QWORD *)v11 )
    {
LABEL_3:
      sub_E5B0B0(v32, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * v8), a2, 1);
      si128 = _mm_load_si128((const __m128i *)v32);
      a1[1].m128i_i8[0] = 0;
      *a1 = si128;
      return a1;
    }
    v15 = 1;
    v16 = 0;
    if ( v12 != -4096 )
    {
      while ( 1 )
      {
        if ( !v16 && v12 == -8192 )
          v16 = v11;
        v10 = (v8 - 1) & (v15 + v10);
        v11 = a6 + 16LL * v10;
        v12 = *(_QWORD *)v11;
        if ( v9 == *(_QWORD *)v11 )
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
        v17 = *(_QWORD *)v11;
        goto LABEL_8;
      }
      v31 = a4;
      sub_B816E0((__int64 *)a2, v8, (__int64)a3, (__int64)a4, a5, a6);
      v22 = *(_DWORD *)(a2 + 16);
      if ( v22 )
      {
        v23 = v22 - 1;
        a6 = *(_QWORD *)a2;
        v9 = *a3;
        LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
        a4 = v31;
        v24 = (v22 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v11 = *(_QWORD *)a2 + 16LL * v24;
        v17 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 == *a3 )
        {
          v17 = *a3;
          goto LABEL_8;
        }
        if ( v17 != -4096 )
        {
          v25 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v23 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
          v26 = 1;
          v11 = 0;
          while ( 1 )
          {
            if ( v17 == -8192 && !v11 )
              v11 = (__int64)v25;
            v24 = v23 & (v26 + v24);
            v25 = (__int64 *)(a6 + 16LL * v24);
            v17 = *v25;
            if ( v9 == *v25 )
              break;
            if ( v17 == -4096 )
              goto LABEL_40;
            ++v26;
          }
LABEL_33:
          v11 = (__int64)v25;
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
  v30 = a4;
  sub_B816E0((__int64 *)a2, 2 * v8, (__int64)a3, (__int64)a4, a5, a6);
  v19 = *(_DWORD *)(a2 + 16);
  if ( !v19 )
    goto LABEL_45;
  v20 = v19 - 1;
  a6 = *(_QWORD *)a2;
  v9 = *a3;
  LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
  a4 = v30;
  v21 = (v19 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
  v11 = *(_QWORD *)a2 + 16LL * v21;
  v17 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 == *a3 )
    goto LABEL_8;
  if ( v17 != -4096 )
  {
    v25 = (__int64 *)(*(_QWORD *)a2 + 16LL * (v20 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
    v27 = 1;
    v11 = 0;
    while ( 1 )
    {
      if ( !v11 && v17 == -8192 )
        v11 = (__int64)v25;
      v21 = v20 & (v27 + v21);
      v25 = (__int64 *)(a6 + 16LL * v21);
      v17 = *v25;
      if ( v9 == *v25 )
        goto LABEL_33;
      if ( v17 == -4096 )
      {
LABEL_40:
        if ( v11 )
          goto LABEL_7;
        v11 = (__int64)v25;
        break;
      }
      ++v27;
    }
  }
LABEL_14:
  *(_DWORD *)(a2 + 8) = a5;
LABEL_10:
  *(_QWORD *)v11 = v9;
  *(_DWORD *)(v11 + 8) = *a4;
  sub_E5B0B0(v32, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v18 = _mm_load_si128((const __m128i *)v32);
  a1[1].m128i_i8[0] = 1;
  *a1 = v18;
  return a1;
}

