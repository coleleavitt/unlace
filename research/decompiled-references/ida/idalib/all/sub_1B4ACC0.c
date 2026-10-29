__m128i *__fastcall sub_1B4ACC0(__m128i *a1, __int64 a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rcx
  unsigned int v8; // edi
  __int64 v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rsi
  __int64 v12; // r10
  __m128i si128; // xmm0
  int v15; // ebp
  __int64 v16; // r12
  __int64 v17; // rdx
  __m128i v18; // xmm1
  int v19; // esi
  int v20; // r10d
  unsigned int v21; // edi
  int v22; // esi
  int v23; // r10d
  unsigned int v24; // edi
  __int64 *v25; // r11
  int v26; // ebp
  int v27; // ebp
  __int64 v28; // [rsp+0h] [rbp-48h]
  __int64 v29; // [rsp+0h] [rbp-48h]
  __m128 v32[3]; // [rsp+10h] [rbp-38h] BYREF

  v6 = a2;
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
      sub_1AFF290(v32, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * v8), v6, 1);
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
    a5 = (unsigned int)(*(_DWORD *)(v6 + 8) + 1);
    if ( 4 * (int)a5 < 3 * v8 )
    {
      if ( v8 - *(_DWORD *)(v6 + 12) - (unsigned int)a5 > v8 >> 3 )
      {
LABEL_7:
        v17 = *(_QWORD *)v11;
        goto LABEL_8;
      }
      v29 = v6;
      sub_1B4AAC0((__int64 *)v6, v8, (__int64)a3, v6, a5, a6);
      v6 = v29;
      v22 = *(_DWORD *)(v29 + 16);
      if ( v22 )
      {
        v23 = v22 - 1;
        a6 = *(_QWORD *)v29;
        v9 = *a3;
        LODWORD(a5) = *(_DWORD *)(v29 + 8) + 1;
        v24 = (v22 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
        v11 = *(_QWORD *)v29 + 16LL * v24;
        v17 = *(_QWORD *)v11;
        if ( *(_QWORD *)v11 == *a3 )
        {
          v17 = *a3;
          goto LABEL_8;
        }
        if ( v17 != -4096 )
        {
          v25 = (__int64 *)(*(_QWORD *)v29 + 16LL * (v23 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
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
          *(_DWORD *)(v6 + 8) = a5;
          if ( v17 != -4096 )
            --*(_DWORD *)(v6 + 12);
          goto LABEL_10;
        }
        goto LABEL_14;
      }
LABEL_45:
      ++*(_DWORD *)(v6 + 8);
      BUG();
    }
  }
  v28 = v6;
  sub_1B4AAC0((__int64 *)v6, 2 * v8, (__int64)a3, v6, a5, a6);
  v6 = v28;
  v19 = *(_DWORD *)(v28 + 16);
  if ( !v19 )
    goto LABEL_45;
  v20 = v19 - 1;
  a6 = *(_QWORD *)v28;
  v9 = *a3;
  LODWORD(a5) = *(_DWORD *)(v28 + 8) + 1;
  v21 = (v19 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
  v11 = *(_QWORD *)v28 + 16LL * v21;
  v17 = *(_QWORD *)v11;
  if ( *(_QWORD *)v11 == *a3 )
    goto LABEL_8;
  if ( v17 != -4096 )
  {
    v25 = (__int64 *)(*(_QWORD *)v28 + 16LL * (v20 & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4))));
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
  *(_DWORD *)(v6 + 8) = a5;
LABEL_10:
  *(_QWORD *)v11 = v9;
  *(_DWORD *)(v11 + 8) = 0;
  sub_1AFF290(v32, (_QWORD *)v11, (_QWORD *)(a6 + 16LL * *(unsigned int *)(v6 + 16)), v6, 1);
  v18 = _mm_load_si128((const __m128i *)v32);
  a1[1].m128i_i8[0] = 1;
  *a1 = v18;
  return a1;
}
