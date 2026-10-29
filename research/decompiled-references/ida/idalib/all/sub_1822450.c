void __fastcall sub_1822450(__int64 a1, __int64 a2, const __m128i *a3, __m128i si128, double a5)
{
  int v7; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // eax
  unsigned __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rsi
  _BYTE *v15; // rdi
  const __m128i *v16; // r12
  __int64 v17; // rax
  void *v18; // r13
  __int64 v19; // rdx
  __m128i v20; // xmm1
  __int64 v21; // r12
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  void *v26; // rdi
  unsigned int *v27; // rax
  unsigned int *v28; // r13
  unsigned int *v29; // r12
  unsigned int **v30; // rax
  __m128i *v32; // [rsp+8h] [rbp-140h]
  __m128i v33; // [rsp+10h] [rbp-138h] BYREF
  int v34; // [rsp+2Ch] [rbp-11Ch] BYREF
  void *base; // [rsp+30h] [rbp-118h] BYREF
  __int64 v36; // [rsp+38h] [rbp-110h]
  _BYTE v37[64]; // [rsp+40h] [rbp-108h] BYREF
  __m128i v38[12]; // [rsp+80h] [rbp-C8h] BYREF

  v7 = a3[3].m128i_u16[4];
  v36 = 0x400000000LL;
  base = v37;
  if ( v7 )
  {
    v8 = 0;
    while ( 1 )
    {
      v38[0] = 0u;
      if ( !(unsigned __int8)sub_1821C20(a1, (__int64)a3, v8, v38, si128, a5) )
        break;
      si128 = _mm_load_si128(v38);
      v10 = (unsigned int)v36 + 1LL;
      if ( v10 <= HIDWORD(v36) )
      {
        ++v8;
        *((__m128i *)base + (unsigned int)v36) = si128;
        v9 = v36 + 1;
        LODWORD(v36) = v36 + 1;
        if ( v8 == v7 )
          goto LABEL_7;
      }
      else
      {
        ++v8;
        v33 = si128;
        sub_2237220(&base, v37, v10, 16);
        si128 = _mm_load_si128(&v33);
        *((__m128i *)base + (unsigned int)v36) = si128;
        v9 = v36 + 1;
        LODWORD(v36) = v36 + 1;
        if ( v7 == v8 )
          goto LABEL_7;
      }
    }
LABEL_22:
    v26 = base;
    if ( base == v37 )
      return;
LABEL_18:
    free(v26);
    return;
  }
  v9 = 0;
LABEL_7:
  if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x18 )
  {
    if ( (*(_BYTE *)(a2 + 57) & 0x20) != 0 )
    {
      v11 = *(_QWORD *)(a2 + 40);
      if ( (v11 & 7) == 0 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF8LL;
        if ( v12 )
        {
          v13 = v9;
          if ( !a3[3].m128i_i16[4] )
          {
            v27 = *(unsigned int **)(v12 + 16);
            v28 = (unsigned int *)*v27;
            v29 = v27 + 4;
            if ( v13 + 1 > (unsigned __int64)HIDWORD(v36) )
            {
              sub_2237220(&base, v37, v13 + 1, 16);
              v13 = (unsigned int)v36;
            }
            v30 = (unsigned int **)((char *)base + 16 * v13);
            *v30 = v29;
            v30[1] = v28;
            v13 = (unsigned int)(v36 + 1);
            LODWORD(v36) = v36 + 1;
          }
          goto LABEL_12;
        }
      }
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1988u, 0);
      v34 = 1;
    }
    else
    {
      sub_168B9F0((__int64)v38, (__int64 *)(a1 + 8), a3[1].m128i_u32[2], 0x1988u, 0);
      v34 = 0;
    }
    sub_1587D10((__int64)v38, &v34);
    sub_15F7200(v38);
    goto LABEL_22;
  }
  if ( !(unsigned __int8)sub_15EAA10((__int64)a3, a1, 1u) )
    goto LABEL_22;
  v13 = (unsigned int)v36;
LABEL_12:
  v14 = 16 * v13;
  v15 = base;
  if ( (unsigned __int64)v14 > 0x10 )
  {
    qsort(base, v14 >> 4, 0x10u, (__compar_fn_t)sub_E39370);
    v15 = base;
    v14 = 16LL * (unsigned int)v36;
  }
  v16 = (const __m128i *)&v15[v14];
  v17 = sub_1804640((__int64)v15, (__int64)&v15[v14]);
  v18 = base;
  v19 = ((_BYTE *)base + 16 * (unsigned int)v36 - &v15[v14]) >> 4;
  if ( (_BYTE *)base + 16 * (unsigned int)v36 - &v15[v14] > 0 )
  {
    do
    {
      v20 = _mm_loadu_si128(v16);
      v17 += 16;
      ++v16;
      *(__m128i *)(v17 - 16) = v20;
      --v19;
    }
    while ( v19 );
    v18 = base;
  }
  v21 = (v17 - (__int64)v18) >> 4;
  LODWORD(v36) = v21;
  v32 = (__m128i *)sub_1806F50((__int64 *)(*(_QWORD *)(a1 + 248) + 2352LL), 56, 3u);
  sub_B38340(v32, *(__int64 **)(a1 + 248), a3, (__int64)v18, v21);
  sub_B8CC60(a2, (__int64)v32, v22, v23, v24, v25);
  v26 = base;
  if ( base != v37 )
    goto LABEL_18;
}
