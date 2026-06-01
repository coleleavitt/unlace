__m128i *__fastcall sub_1B47550(__m128i *a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rcx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // r10
  __int64 v9; // rdx
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  __int64 v12; // r8
  __m128i si128; // xmm0
  __int64 v15; // rax
  int v16; // edx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __int64 *v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rax
  __m128i v24; // xmm1
  int v25; // eax
  _QWORD *v26; // r12
  unsigned int *v27; // [rsp+8h] [rbp-40h]
  __m128 v28[3]; // [rsp+10h] [rbp-38h] BYREF

  v3 = a2;
  v6 = *(_BYTE *)a2 & 1;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v7 = *a3;
    v8 = a2 + 8;
    v9 = 32;
    v10 = ((unsigned __int8)((unsigned int)v7 >> 9) ^ (unsigned __int8)((unsigned int)v7 >> 4)) & 3;
    v11 = (_QWORD *)(a2
                   + 8
                   + 8LL * (((unsigned __int8)((unsigned int)v7 >> 9) ^ (unsigned __int8)((unsigned int)v7 >> 4)) & 3));
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_3:
      sub_1795210(v28, v11, (_QWORD *)(v8 + v9), v3, 1);
      si128 = _mm_load_si128((const __m128i *)v28);
      a1[1].m128i_i8[0] = 0;
      *a1 = si128;
      return a1;
    }
    v16 = 3;
  }
  else
  {
    v15 = *(unsigned int *)(a2 + 16);
    if ( !(_DWORD)v15 )
    {
      v28[0].m128_u64[0] = 0;
      v17 = *(_DWORD *)a2;
      v18 = (unsigned int)((*(_DWORD *)a2 >> 1) + 1);
LABEL_8:
      v19 = (unsigned int)(3 * v15);
      goto LABEL_9;
    }
    v7 = *a3;
    v8 = *(_QWORD *)(a2 + 8);
    v16 = v15 - 1;
    v10 = (v15 - 1) & (((unsigned int)v7 >> 9) ^ ((unsigned int)v7 >> 4));
    v11 = (_QWORD *)(v8 + 8LL * v10);
    v12 = *v11;
    if ( v7 == *v11 )
    {
LABEL_6:
      v9 = 8 * v15;
      goto LABEL_3;
    }
  }
  v25 = 1;
  v26 = nullptr;
  if ( v12 != -4096 )
  {
    while ( 1 )
    {
      if ( !v26 && v12 == -8192 )
        v26 = v11;
      v10 = v16 & (v25 + v10);
      v11 = (_QWORD *)(v8 + 8LL * v10);
      v12 = *v11;
      if ( v7 == *v11 )
        break;
      if ( v12 == -4096 )
      {
        if ( v26 )
          v11 = v26;
        goto LABEL_19;
      }
      ++v25;
    }
    if ( !(_BYTE)v6 )
    {
      v15 = *(unsigned int *)(v3 + 16);
      goto LABEL_6;
    }
    v9 = 32;
    goto LABEL_3;
  }
LABEL_19:
  v17 = *(_DWORD *)v3;
  v28[0].m128_u64[0] = (unsigned __int64)v11;
  v18 = (v17 >> 1) + 1;
  if ( !(_BYTE)v6 )
  {
    LODWORD(v15) = *(_DWORD *)(v3 + 16);
    goto LABEL_8;
  }
  v19 = 12;
  LODWORD(v15) = 4;
LABEL_9:
  if ( 4 * (int)v18 >= (unsigned int)v19 )
  {
    v27 = (unsigned int *)v3;
    sub_1B46FF0(v3, 2 * v15, v18, v3, v19, v6);
LABEL_29:
    sub_1AFCDE0((__int64)v27, a3, v28);
    v3 = (__int64)v27;
    v17 = *v27;
    goto LABEL_11;
  }
  v20 = (unsigned int)(v15 - *(_DWORD *)(v3 + 4) - v18);
  if ( (unsigned int)v20 <= (unsigned int)v15 >> 3 )
  {
    v27 = (unsigned int *)v3;
    sub_1B46FF0(v3, v15, v20, v3, v19, v6);
    goto LABEL_29;
  }
LABEL_11:
  v21 = (__int64 *)v28[0].m128_u64[0];
  *(_DWORD *)v3 = (2 * (v17 >> 1) + 2) | v17 & 1;
  if ( *v21 != -4096 )
    --*(_DWORD *)(v3 + 4);
  *v21 = *a3;
  if ( (*(_BYTE *)v3 & 1) != 0 )
  {
    v22 = v3 + 8;
    v23 = 32;
  }
  else
  {
    v22 = *(_QWORD *)(v3 + 8);
    v23 = 8LL * *(unsigned int *)(v3 + 16);
  }
  sub_1795210(v28, v21, (_QWORD *)(v23 + v22), v3, 1);
  v24 = _mm_load_si128((const __m128i *)v28);
  a1[1].m128i_i8[0] = 1;
  *a1 = v24;
  return a1;
}
