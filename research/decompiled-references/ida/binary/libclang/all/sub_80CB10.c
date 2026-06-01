unsigned __int64 __fastcall sub_80CB10(
        _QWORD *a1,
        __int64 a2,
        __int16 a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        unsigned int a9,
        unsigned int a10)
{
  int v13; // ebp
  __int64 v14; // rdx
  int v15; // r15d
  __int64 v16; // rsi
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  unsigned __int8 v22; // al
  unsigned __int16 v23; // ax
  bool v24; // zf
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rsi
  size_t v28; // rdx
  __int64 v30; // rax
  unsigned __int64 v31; // [rsp+0h] [rbp-58h]
  unsigned __int8 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  __int64 v36; // [rsp+18h] [rbp-40h]

  v13 = a4;
  if ( a6 )
  {
    v14 = *(unsigned int *)(a6 + 8);
    v15 = *(_DWORD *)(a6 + 8);
  }
  else
  {
    v14 = 0;
    v15 = 0;
  }
  LOBYTE(a4) = HIDWORD(a7) != 0;
  v16 = 8 * (v14 + (HIDWORD(a7) != 0)) + 40;
  v17 = a1[274];
  a1[284] += v16;
  v18 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  v19 = v16 + v18;
  if ( a1[275] >= v16 + v18 && v17 )
  {
    a1[274] = v19;
  }
  else
  {
    v35 = a5;
    v33 = a2;
    v30 = sub_804090((__int64)(a1 + 274), v16, 3);
    a5 = v35;
    a2 = v33;
    a4 = HIDWORD(a7) != 0;
    v18 = v30;
  }
  *(_WORD *)v18 = *(_WORD *)v18 & 0xFE00 | 0x58;
  v31 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a9), _mm_cvtsi32_si128(a10)).m128i_u64[0];
  if ( byte_4AD234C )
  {
    v36 = a5;
    v34 = a2;
    v32 = a4;
    sub_AC4570(88);
    a5 = v36;
    a2 = v34;
    a4 = v32;
  }
  v20 = *(_DWORD *)v18;
  *(_QWORD *)(v18 + 8) = a2;
  v21 = (unsigned int)(a4 << 27);
  *(_QWORD *)(v18 + 16) = a5;
  *(_DWORD *)(v18 + 4) = v15;
  *(_DWORD *)v18 = v20 & 0xF00001FF | v21 | (a3 << 9) & 0x600 | (v13 << 19) & 0x3F80000;
  *(_QWORD *)(v18 + 24) = a8;
  v22 = sub_76B330(v18, v16, v19, v21, a5, a6);
  *(_BYTE *)(v18 + 1) = (v22 << 6) | *(_BYTE *)(v18 + 1) & 0x3F;
  *(_BYTE *)(v18 + 2) = *(_BYTE *)(v18 + 2) & 0xF8 | (v22 >> 2) & 7;
  *(_QWORD *)(v18 + 32) = v31;
  if ( (*(_BYTE *)(v18 + 3) & 8) != 0 )
  {
    v23 = *(_WORD *)v18 & 0x1FF;
    if ( v23 > 0x56u )
    {
      v26 = (_QWORD *)(v18 + 8LL * *(unsigned int *)(v18 + 4) + 40);
    }
    else
    {
      v24 = v23 == 80;
      v25 = *(unsigned int *)(v18 + 4);
      if ( v24 )
        v26 = (_QWORD *)(v18 + 8 * v25 + 24);
      else
        v26 = (_QWORD *)(v18 + 8 * v25 + 48);
    }
    *v26 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(a7), _mm_cvtsi32_si128(HIDWORD(a7))).m128i_u64[0];
  }
  if ( v15 )
  {
    v27 = *(_QWORD **)a6;
    v28 = 8LL * *(unsigned int *)(a6 + 8);
    if ( v28 <= 8 )
    {
      if ( v28 == 8 )
        *(_QWORD *)(v18 + 40) = *v27;
    }
    else
    {
      memmove((void *)(v18 + 40), v27, v28);
    }
  }
  return v18;
}

