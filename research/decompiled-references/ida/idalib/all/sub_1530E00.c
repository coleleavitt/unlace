__m128i *__fastcall sub_1530E00(__m128i *a1, __int64 a2, _DWORD *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdi
  __int64 v9; // rax
  unsigned int v10; // r9d
  __int64 v11; // rsi
  int v12; // r10d
  __m128i si128; // xmm0
  int v15; // r12d
  __int64 v16; // r13
  __int64 v17; // r9
  __m128i v18; // xmm1
  int v19; // esi
  int v20; // r9d
  unsigned int v21; // edi
  int v22; // r11d
  int v23; // r13d
  __int64 v24; // r12
  int v25; // esi
  int v26; // edi
  unsigned int v27; // r10d
  int v28; // r11d
  int v29; // r13d
  _DWORD *v30; // [rsp+0h] [rbp-48h]
  _DWORD *v31; // [rsp+0h] [rbp-48h]
  _QWORD *v32; // [rsp+8h] [rbp-40h]
  _QWORD *v33; // [rsp+8h] [rbp-40h]
  __m128 v34[3]; // [rsp+10h] [rbp-38h] BYREF

  v8 = *(unsigned int *)(a2 + 16);
  if ( !(_DWORD)v8 )
    goto LABEL_10;
  v9 = *(_QWORD *)a2;
  v10 = (v8 - 1) & (37 * *a3);
  v11 = *(_QWORD *)a2 + 12LL * v10;
  v12 = *(_DWORD *)v11;
  if ( *a3 == *(_DWORD *)v11 )
  {
LABEL_3:
    sub_152EEE0(v34, (int *)v11, (int *)(v9 + 12 * v8), a2, 1);
    si128 = _mm_load_si128((const __m128i *)v34);
    a1[1].m128i_i8[0] = 0;
    *a1 = si128;
    return a1;
  }
  v15 = 1;
  v16 = 0;
  if ( v12 != 0x7FFFFFFF )
  {
    while ( 1 )
    {
      if ( !v16 && v12 == 0x80000000 )
        v16 = v11;
      v10 = (v8 - 1) & (v15 + v10);
      v11 = v9 + 12LL * v10;
      v12 = *(_DWORD *)v11;
      if ( *a3 == *(_DWORD *)v11 )
        goto LABEL_3;
      if ( v12 == 0x7FFFFFFF )
        break;
      ++v15;
    }
    if ( v16 )
      v11 = v16;
  }
  a6 = (unsigned int)(3 * v8);
  a5 = (unsigned int)(*(_DWORD *)(a2 + 8) + 1);
  if ( 4 * (int)a5 >= (unsigned int)a6 )
  {
LABEL_10:
    v32 = a4;
    v30 = a3;
    sub_1530C10((__int64 *)a2, 2 * v8, (__int64)a3, (__int64)a4, a5, a6);
    v19 = *(_DWORD *)(a2 + 16);
    if ( v19 )
    {
      a3 = v30;
      v20 = v19 - 1;
      v9 = *(_QWORD *)a2;
      LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
      a4 = v32;
      v21 = (v19 - 1) & (37 * *v30);
      v11 = *(_QWORD *)a2 + 12LL * v21;
      v22 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 != *v30 )
      {
        v23 = 1;
        v24 = 0;
        if ( v22 != 0x7FFFFFFF )
        {
          while ( 1 )
          {
            if ( !v24 && v22 == 0x80000000 )
              v24 = v11;
            v21 = v20 & (v23 + v21);
            v11 = v9 + 12LL * v21;
            v22 = *(_DWORD *)v11;
            if ( *v30 == *(_DWORD *)v11 )
              break;
            if ( v22 == 0x7FFFFFFF )
            {
LABEL_18:
              if ( v24 )
                v11 = v24;
              goto LABEL_7;
            }
            ++v23;
          }
        }
      }
      goto LABEL_7;
    }
    goto LABEL_40;
  }
  v17 = (unsigned int)(v8 - *(_DWORD *)(a2 + 12) - a5);
  if ( (unsigned int)v17 <= (unsigned int)v8 >> 3 )
  {
    v33 = a4;
    v31 = a3;
    sub_1530C10((__int64 *)a2, v8, (__int64)a3, (__int64)a4, a5, v17);
    v25 = *(_DWORD *)(a2 + 16);
    if ( v25 )
    {
      a3 = v31;
      v26 = v25 - 1;
      v9 = *(_QWORD *)a2;
      LODWORD(a5) = *(_DWORD *)(a2 + 8) + 1;
      a4 = v33;
      v27 = (v25 - 1) & (37 * *v31);
      v11 = *(_QWORD *)a2 + 12LL * v27;
      v28 = *(_DWORD *)v11;
      if ( *(_DWORD *)v11 != *v31 )
      {
        v29 = 1;
        v24 = 0;
        if ( v28 != 0x7FFFFFFF )
        {
          while ( 1 )
          {
            if ( v28 == 0x80000000 && !v24 )
              v24 = v11;
            v27 = v26 & (v29 + v27);
            v11 = v9 + 12LL * v27;
            v28 = *(_DWORD *)v11;
            if ( *v31 == *(_DWORD *)v11 )
              break;
            if ( v28 == 0x7FFFFFFF )
              goto LABEL_18;
            ++v29;
          }
        }
      }
      goto LABEL_7;
    }
LABEL_40:
    ++*(_DWORD *)(a2 + 8);
    BUG();
  }
LABEL_7:
  *(_DWORD *)(a2 + 8) = a5;
  if ( *(_DWORD *)v11 != 0x7FFFFFFF )
    --*(_DWORD *)(a2 + 12);
  *(_DWORD *)v11 = *a3;
  *(_QWORD *)(v11 + 4) = *a4;
  sub_152EEE0(v34, (int *)v11, (int *)(v9 + 12LL * *(unsigned int *)(a2 + 16)), a2, 1);
  v18 = _mm_load_si128((const __m128i *)v34);
  a1[1].m128i_i8[0] = 1;
  *a1 = v18;
  return a1;
}
