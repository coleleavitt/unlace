/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140066F00
// Address: 0x0000000140066F00

//----- (0000000140066F00) ----------------------------------------------------
_BOOL8 __fastcall sub_140066F00(__int64 a1, char a2, char a3, int a4, int a5)
{
  char v5; // r14
  bool v7; // si
  char v8; // r12
  int v10; // eax
  int v11; // edi
  __int16 v12; // bp
  __int16 v13; // r13
  unsigned int v14; // r14d
  __int16 v15; // r12
  __int64 v16; // r11
  unsigned __int16 v17; // ax
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  __int64 v20; // r8
  bool v21; // zf
  int v22; // r8d
  int v23; // ecx
  _WORD *v24; // r10
  bool v25; // cc
  __m128 si128; // xmm4
  int v27; // edx
  __m128 v28; // xmm3
  __m128 v29; // xmm1
  __int64 v30; // rcx
  __m128i v31; // xmm0
  __m128i v32; // xmm0
  __m128 v33; // xmm1
  __m128 v34; // xmm1
  __m128 v35; // xmm1
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  unsigned __int16 v39; // cx
  char v42; // [rsp+24h] [rbp-64h]
  __int128 v43; // [rsp+28h] [rbp-60h] BYREF
  int v44; // [rsp+38h] [rbp-50h]
  __int16 v45; // [rsp+3Ch] [rbp-4Ch]

  v5 = a2;
  v7 = *(_WORD *)(a1 + 2) != 0;
  v42 = a2;
  v8 = a3;
  v10 = sub_1400656A0((_WORD *)a1);
  if ( v10 > 112 )
    goto LABEL_55;
  v11 = a4 - v10;
  v7 = 1;
  if ( v11 >= 0x7FFF )
    goto LABEL_55;
  if ( v11 < 0 )
  {
    if ( v11 <= -113 )
      goto LABEL_54;
    if ( (unsigned int)sub_140067430((_WORD *)a1, v11) != 1 )
      v5 = 1;
    v42 = v5;
  }
  if ( a5 )
  {
    v44 = 0;
    v45 = 0;
    v43 = 0;
    switch ( a5 )
    {
      case 24:
        v14 = 4;
        WORD4(v43) = 256;
        v16 = 8;
        break;
      case 53:
        v13 = 2048;
        v12 = 1024;
        WORD6(v43) = 2048;
        v14 = 6;
        v15 = 2047;
        v16 = 12;
        goto LABEL_24;
      case 56:
        v14 = 6;
        WORD6(v43) = 256;
        v16 = 12;
        break;
      default:
        v12 = 0x8000;
        v13 = 1;
        if ( a5 == 64 )
        {
          v18 = *(_WORD *)(a1 + 14);
          v19 = a1 + 16;
          WORD6(v43) = 1;
          v16 = 12;
          v20 = 3;
          do
          {
            v19 += 2;
            v17 = v18 | 1;
            v21 = *(_WORD *)(v19 - 2) == 0;
            *(_WORD *)(v19 - 2) = 0;
            if ( v21 )
              v17 = v18;
            v18 = v17;
            --v20;
          }
          while ( v20 );
LABEL_39:
          if ( (v17 & (unsigned __int16)v12) == 0 )
            goto LABEL_46;
          if ( v17 == v12 )
          {
            if ( v5 )
            {
              if ( v8 )
                goto LABEL_46;
            }
            else if ( ((unsigned __int16)v13 & *(_WORD *)(v16 + a1)) == 0 )
            {
              goto LABEL_46;
            }
          }
          sub_140065060(&v43, (_WORD *)a1);
LABEL_46:
          if ( a5 < 64 && v11 <= 0 )
            sub_140065AC0((_WORD *)a1);
          if ( *(_WORD *)(a1 + 4) )
          {
            sub_140065870((_WORD *)a1);
            ++v11;
          }
          goto LABEL_51;
        }
        HIWORD(v44) = 1;
        v14 = 10;
        v15 = -1;
        v16 = 18;
        if ( a5 >= 64 )
        {
          v17 = *(_WORD *)(a1 + 20);
          v13 = 1;
LABEL_38:
          v8 = a3;
          v5 = v42;
          goto LABEL_39;
        }
LABEL_24:
        if ( v11 <= 0 )
          sub_140065870((_WORD *)a1);
        v22 = v14 + 1;
        v23 = 11 - (v14 + 1);
        v24 = (_WORD *)(a1 + 2LL * v14);
        v17 = v15 & *v24;
        v25 = (int)(v14 + 1) < 11;
        if ( v14 + 1 < 0xB )
        {
          if ( (unsigned int)v23 >= 0x10 )
          {
            si128 = (__m128)_mm_load_si128((const __m128i *)&xmmword_1400ACD70);
            v27 = 11 - v23 % 16;
            v28 = 0;
            v29 = 0;
            do
            {
              v30 = v22;
              v22 += 16;
              v31 = _mm_loadu_si128((const __m128i *)(a1 + 2 * v30));
              *(_OWORD *)(a1 + 2 * v30) = 0;
              v28 = _mm_or_ps(v28, _mm_andnot_ps((__m128)_mm_cmpeq_epi16(v31, (__m128i)0LL), si128));
              v32 = _mm_loadu_si128((const __m128i *)(a1 + 2 * v30 + 16));
              *(_OWORD *)(a1 + 2 * v30 + 16) = 0;
              v29 = _mm_or_ps(v29, _mm_andnot_ps((__m128)_mm_cmpeq_epi16(v32, (__m128i)0LL), si128));
            }
            while ( v22 < v27 );
            v33 = _mm_or_ps(v29, v28);
            v34 = _mm_or_ps(v33, (__m128)_mm_srli_si128((__m128i)v33, 8));
            v35 = _mm_or_ps(v34, (__m128)_mm_srli_si128((__m128i)v34, 4));
            v17 |= _mm_cvtsi128_si32((__m128i)_mm_or_ps(v35, (__m128)_mm_srli_si128((__m128i)v35, 2)));
          }
          v25 = v22 < 11;
        }
        if ( v25 )
        {
          v36 = v22;
          v37 = (unsigned int)(11 - v22);
          v38 = a1 + 2 * v36;
          do
          {
            v38 += 2;
            v39 = v17 | 1;
            v21 = *(_WORD *)(v38 - 2) == 0;
            *(_WORD *)(v38 - 2) = 0;
            if ( v21 )
              v39 = v17;
            v17 = v39;
            --v37;
          }
          while ( v37 );
        }
        *v24 &= ~v15;
        goto LABEL_38;
    }
    v13 = 256;
    v15 = 255;
    v12 = 128;
    goto LABEL_24;
  }
LABEL_51:
  *(_WORD *)(a1 + 20) = 0;
  if ( v11 >= 0x7FFF )
  {
LABEL_55:
    *(_OWORD *)a1 = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_WORD *)(a1 + 20) = 0;
    return v7;
  }
  if ( v11 <= 0 )
  {
LABEL_54:
    v7 = 0;
    goto LABEL_55;
  }
  *(_WORD *)(a1 + 2) = v11;
  return v7;
}
// 1400671E2: variable 'v16' is possibly undefined
// 1400ACD70: using guessed type __int128 xmmword_1400ACD70;
