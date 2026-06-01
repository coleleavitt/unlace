__int64 *__fastcall sub_21A7E30(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r14
  unsigned int v6; // esi
  unsigned int v7; // r12d
  __int64 i; // rbp
  __int8 v9; // dl
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rax
  const __m128i *v16; // rsi
  __int8 *v17; // rsi
  __int64 v18; // rax
  char *v19; // rsi
  unsigned __int64 v20; // rax
  char *v21; // rsi
  __int64 v23; // [rsp+38h] [rbp-90h] BYREF
  __m128i v24; // [rsp+40h] [rbp-88h] BYREF
  __m128i v25; // [rsp+50h] [rbp-78h] BYREF
  __m128i v26; // [rsp+60h] [rbp-68h] BYREF
  __m128i v27; // [rsp+70h] [rbp-58h] BYREF
  __int64 v28; // [rsp+80h] [rbp-48h]

  v5 = *(_QWORD *)(a3 + 8);
  *(_DWORD *)(a2 + 700) = -858993459 * ((__int64)(*(_QWORD *)(a2 + 80) - *(_QWORD *)(a2 + 72)) >> 4);
  v6 = sub_21A2A40(a3);
  sub_21A4B80((const __m128i **)(a2 + 376), v6);
  if ( v6 )
  {
    v7 = v6 - 1;
    for ( i = *(_QWORD *)(a3 + 8); ; LODWORD(i) = v15 )
    {
      v18 = (__int64)(*(_QWORD *)(a2 + 384) - *(_QWORD *)(a2 + 376)) >> 3;
      v19 = *(char **)(a3 + 16);
      v26 = 0u;
      v24.m128i_i32[0] = *(_DWORD *)(a2 + 672) + 954437177 * v18;
      v27 = 0u;
      LODWORD(v28) = i - v5;
      v20 = sub_21A29A0((char **)(a3 + 8), v19);
      if ( v20 > 0xFFFFFFFF )
        sub_2221C70("LEB is outside Varuint32 range", 1);
      v21 = *(char **)(a3 + 16);
      if ( (unsigned int)(v20 - 105) <= 0x16 )
      {
        v9 = -1;
        if ( ((1LL << ((unsigned __int8)v20 - 105)) & 0x7C00C1) != 0 )
          v9 = v20;
      }
      else
      {
        v9 = -1;
        if ( (unsigned int)(v20 - 99) <= 1 )
        {
          sub_21A2AC0((char **)(a3 + 8), v21);
          v21 = *(char **)(a3 + 16);
          v9 = -1;
        }
      }
      v24.m128i_i8[4] = v9;
      v10 = sub_21A2AC0((char **)(a3 + 8), v21);
      if ( v10 > 1 )
        sub_2221C70("LEB is outside Varuint1 range", 1);
      v24.m128i_i8[5] = v10;
      sub_21A3AE0(&v23, (__int64)&v24.m128i_i64[1], a3, v11, v12, v13);
      v14 = v23;
      if ( v23 )
        break;
      v15 = *(_QWORD *)(a3 + 8);
      v16 = *(const __m128i **)(a2 + 384);
      HIDWORD(v28) = *(_DWORD *)(a3 + 8) - i;
      if ( v16 == *(const __m128i **)(a2 + 392) )
      {
        --v7;
        sub_21A7C60(a2 + 376, v16, &v24);
        v15 = *(_QWORD *)(a3 + 8);
        if ( v7 == -1 )
          goto LABEL_15;
      }
      else
      {
        v17 = &v16[4].m128i_i8[8];
        --v7;
        *(__m128i *)(v17 - 72) = _mm_load_si128(&v24);
        *(__m128i *)(v17 - 56) = _mm_load_si128(&v25);
        *(__m128i *)(v17 - 40) = _mm_load_si128(&v26);
        *(__m128i *)(v17 - 24) = _mm_load_si128(&v27);
        *((_QWORD *)v17 - 1) = v28;
        *(_QWORD *)(a2 + 384) = v17;
        if ( v7 == -1 )
          goto LABEL_15;
      }
    }
    goto LABEL_17;
  }
  v15 = *(_QWORD *)(a3 + 8);
LABEL_15:
  if ( *(_QWORD *)(a3 + 16) != v15 )
  {
    sub_21A2C10(v24.m128i_i64, "global section ended prematurely");
    v14 = v24.m128i_i64[0];
LABEL_17:
    *a1 = v14;
    return a1;
  }
  *a1 = 0;
  return a1;
}
