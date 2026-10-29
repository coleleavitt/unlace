__int64 __fastcall sub_8C7990(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8)
{
  signed __int64 v8; // r15
  __int64 v10; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rax
  unsigned __int64 v14; // rcx
  __int64 v15; // r13
  __int64 v16; // rdi
  int v17; // edx
  unsigned __int8 v18; // bp
  __int16 v19; // ax
  unsigned __int8 v20; // al
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax

  v8 = 8 * a3;
  v10 = 8 * a3 + 48;
  v12 = a3;
  v13 = a1[274];
  a1[284] += v10;
  v14 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  if ( a1[275] >= v10 + v14 && v13 )
  {
    a1[274] = v10 + v14;
    v15 = (v13 + 7) & 0xFFFFFFFFFFFFFFF8LL;
  }
  else
  {
    v15 = sub_8C1090((__int64)(a1 + 274), v10, 3);
  }
  v16 = *(_QWORD *)(a4 & 0xFFFFFFFFFFFFFFF0LL);
  v17 = *(unsigned __int8 *)(v16 + 16);
  if ( (unsigned int)(v17 - 42) > 1 )
  {
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 > 1
      || (v24 = sub_B0D320(v16), (v16 = v24) == 0) )
    {
      v18 = 0;
      goto LABEL_7;
    }
    LOBYTE(v17) = *(_BYTE *)(v24 + 16);
  }
  if ( (_BYTE)v17 == 42 )
    goto LABEL_6;
  while ( 1 )
  {
    v22 = *(_QWORD *)(v16 + 32);
    if ( (*(_BYTE *)(v16 + 18) & 0x10) == 0 )
      break;
    while ( 1 )
    {
      v23 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v23 + 16) - 42 > 1 )
        break;
      v22 = *(_QWORD *)(v23 + 32);
      if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
        goto LABEL_16;
    }
    v16 = sub_B0D320(v23);
  }
LABEL_16:
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                    & 0xFFFFFFFFFFFFFFF0LL)
                                        + 16LL)
     - 25 <= 1 )
LABEL_6:
    v18 = 1;
  else
    v18 = 2;
LABEL_7:
  *(_WORD *)v15 = *(_WORD *)v15 & 0xFE00 | 0x68;
  if ( byte_4AD234C )
    sub_AC4570(104);
  v19 = *(_WORD *)(v15 + 1);
  *(_QWORD *)(v15 + 8) = a4;
  *(_QWORD *)(v15 + 40) = 0;
  *(_WORD *)(v15 + 1) = (2 * v18) | v19 & 0xF801;
  *(_DWORD *)(v15 + 32) = a8;
  *(__m128i *)(v15 + 16) = _mm_unpacklo_epi64(
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(v12), _mm_cvtsi32_si128(a5)),
                             _mm_unpacklo_epi32(_mm_cvtsi32_si128(a6), _mm_cvtsi32_si128(a7)));
  if ( v8 <= 8 )
  {
    if ( v8 == 8 )
      *(_QWORD *)(v15 + 48) = *a2;
  }
  else
  {
    memmove((void *)(v15 + 48), a2, v8);
  }
  v20 = sub_76D2C0(v15);
  *(_BYTE *)(v15 + 1) = (v20 << 6) | *(_BYTE *)(v15 + 1) & 0x3F;
  *(_BYTE *)(v15 + 2) = *(_BYTE *)(v15 + 2) & 0xF8 | (v20 >> 2) & 7;
  return v15;
}

