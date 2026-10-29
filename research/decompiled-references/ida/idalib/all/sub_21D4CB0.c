__m128i *__fastcall sub_21D4CB0(__m128i *a1, unsigned int *a2, __int64 *a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  char v9; // r8
  unsigned int *v10; // rdx
  int v11; // r11d
  __int64 v12; // rax
  unsigned int v13; // edi
  unsigned int *v14; // rsi
  __int64 v15; // r10
  __m128i si128; // xmm0
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // esi
  __int64 v21; // r8
  __int64 *v22; // rsi
  unsigned int *v23; // rdx
  __int64 v24; // rax
  __m128i v25; // xmm1
  int v26; // eax
  unsigned int *v27; // r13
  _QWORD *v28; // [rsp+8h] [rbp-40h]
  __m128 v29[3]; // [rsp+10h] [rbp-38h] BYREF

  v9 = *(_BYTE *)a2 & 1;
  if ( v9 )
  {
    a6 = *a3;
    v10 = a2 + 2;
    v11 = 31;
    v12 = 128;
    v13 = ((unsigned __int8)((unsigned int)*a3 >> 9) ^ (unsigned __int8)((unsigned int)*a3 >> 4)) & 0x1F;
    v14 = &a2[4 * (((unsigned __int8)((unsigned int)*a3 >> 9) ^ (unsigned __int8)((unsigned int)*a3 >> 4)) & 0x1F) + 2];
    v15 = *(_QWORD *)v14;
    if ( *a3 == *(_QWORD *)v14 )
    {
LABEL_3:
      sub_21D47C0(v29, v14, &v10[v12], (__int64)a2, 1);
      si128 = _mm_load_si128((const __m128i *)v29);
      a1[1].m128i_i8[0] = 0;
      *a1 = si128;
      return a1;
    }
  }
  else
  {
    v18 = a2[4];
    if ( !(_DWORD)v18 )
    {
      v29[0].m128_u64[0] = 0;
      v19 = *a2;
      v20 = (*a2 >> 1) + 1;
LABEL_8:
      v21 = (unsigned int)(3 * v18);
      goto LABEL_9;
    }
    a6 = *a3;
    v10 = *((unsigned int **)a2 + 1);
    v11 = v18 - 1;
    v13 = (v18 - 1) & (((unsigned int)*a3 >> 9) ^ ((unsigned int)*a3 >> 4));
    v14 = &v10[4 * v13];
    v15 = *(_QWORD *)v14;
    if ( *a3 == *(_QWORD *)v14 )
    {
LABEL_6:
      v12 = 4 * v18;
      goto LABEL_3;
    }
  }
  v26 = 1;
  v27 = nullptr;
  if ( v15 != -4096 )
  {
    while ( 1 )
    {
      if ( !v27 && v15 == -8192 )
        v27 = v14;
      v13 = v11 & (v26 + v13);
      v14 = &v10[4 * v13];
      v15 = *(_QWORD *)v14;
      if ( a6 == *(_QWORD *)v14 )
        break;
      if ( v15 == -4096 )
      {
        if ( v27 )
          v14 = v27;
        goto LABEL_18;
      }
      ++v26;
    }
    if ( !v9 )
    {
      v18 = a2[4];
      goto LABEL_6;
    }
    v12 = 128;
    goto LABEL_3;
  }
LABEL_18:
  v19 = *a2;
  v29[0].m128_u64[0] = (unsigned __int64)v14;
  v20 = ((unsigned int)v19 >> 1) + 1;
  if ( !v9 )
  {
    LODWORD(v18) = a2[4];
    goto LABEL_8;
  }
  v21 = 96;
  LODWORD(v18) = 32;
LABEL_9:
  if ( 4 * v20 >= (unsigned int)v21 )
  {
    v28 = a4;
    sub_21D4830((__int64)a2, 2 * v18, v19, (__int64)a4, v21, a6);
LABEL_28:
    sub_21D4610((__int64)a2, a3, v29);
    LODWORD(v19) = *a2;
    a4 = v28;
    goto LABEL_11;
  }
  if ( (unsigned int)v18 - a2[1] - v20 <= (unsigned int)v18 >> 3 )
  {
    v28 = a4;
    sub_21D4830((__int64)a2, v18, v19, (__int64)a4, v21, a6);
    goto LABEL_28;
  }
LABEL_11:
  v22 = (__int64 *)v29[0].m128_u64[0];
  *a2 = (2 * ((unsigned int)v19 >> 1) + 2) | v19 & 1;
  if ( *v22 != -4096 )
    --a2[1];
  *v22 = *a3;
  v22[1] = *a4;
  if ( (*(_BYTE *)a2 & 1) != 0 )
  {
    v23 = a2 + 2;
    v24 = 128;
  }
  else
  {
    v23 = *((unsigned int **)a2 + 1);
    v24 = 4LL * a2[4];
  }
  sub_21D47C0(v29, v22, &v23[v24], (__int64)a2, 1);
  v25 = _mm_load_si128((const __m128i *)v29);
  a1[1].m128i_i8[0] = 1;
  *a1 = v25;
  return a1;
}
