unsigned __int64 __fastcall sub_8C3D80(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  int v12; // ebp
  __int64 v13; // rdx
  int v14; // r13d
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // r8
  unsigned __int8 v21; // al
  _QWORD *v22; // rsi
  size_t v23; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // [rsp+8h] [rbp-60h]
  unsigned __int8 v27; // [rsp+10h] [rbp-58h]
  __int64 v28; // [rsp+10h] [rbp-58h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  __int64 v30; // [rsp+18h] [rbp-50h]
  __int64 v31; // [rsp+20h] [rbp-48h]
  __int64 v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+28h] [rbp-40h]

  v12 = a5;
  if ( a7 )
  {
    v13 = *(unsigned int *)(a7 + 8);
    v14 = *(_DWORD *)(a7 + 8);
  }
  else
  {
    v13 = 0;
    v14 = 0;
  }
  LOBYTE(a5) = HIDWORD(a8) != 0;
  v15 = 8 * (v13 + (HIDWORD(a8) != 0)) + 40;
  v16 = a1[274];
  a1[284] += v15;
  v17 = (v16 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v18 = v15 + v17;
  if ( a1[275] >= v15 + v17 && v16 )
  {
    a1[274] = v18;
  }
  else
  {
    v32 = a6;
    v30 = a4;
    v28 = a2;
    v25 = sub_8C1090((__int64)(a1 + 274), v15, 3);
    a6 = v32;
    a4 = v30;
    a2 = v28;
    a5 = HIDWORD(a8) != 0;
    v17 = v25;
  }
  *(_WORD *)v17 = *(_WORD *)v17 & 0xFE00 | 0x57;
  v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a10)).m128i_u64[0];
  if ( byte_4AD234C )
  {
    v33 = a6;
    v31 = a4;
    v29 = a2;
    v27 = a5;
    sub_AC4570(87);
    a6 = v33;
    a4 = v31;
    a2 = v29;
    a5 = v27;
  }
  v19 = *(_DWORD *)v17;
  *(_QWORD *)(v17 + 24) = a4;
  v20 = (unsigned int)(a5 << 27);
  *(_QWORD *)(v17 + 8) = a2;
  *(_QWORD *)(v17 + 16) = a6;
  *(_DWORD *)(v17 + 4) = v14;
  *(_DWORD *)v17 = v19 & 0xF00001FF | v20 | (a3 << 9) & 0x600 | (v12 << 19) & 0x3F80000;
  v21 = sub_76B330(v17, v15, v18, a4, v20, a6);
  *(_BYTE *)(v17 + 1) = (v21 << 6) | *(_BYTE *)(v17 + 1) & 0x3F;
  *(_BYTE *)(v17 + 2) = *(_BYTE *)(v17 + 2) & 0xF8 | (v21 >> 2) & 7;
  *(_QWORD *)(v17 + 32) = v26;
  if ( (*(_BYTE *)(v17 + 3) & 8) != 0 )
    *(_QWORD *)sub_80C800(v17) = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a8), _mm_cvtsi32_si128(HIDWORD(a8))).m128i_u64[0];
  if ( v14 )
  {
    v22 = *(_QWORD **)a7;
    v23 = 8LL * *(unsigned int *)(a7 + 8);
    if ( v23 <= 8 )
    {
      if ( v23 == 8 )
        *(_QWORD *)(v17 + 40) = *v22;
    }
    else
    {
      memmove((void *)(v17 + 40), v22, v23);
    }
  }
  return v17;
}

