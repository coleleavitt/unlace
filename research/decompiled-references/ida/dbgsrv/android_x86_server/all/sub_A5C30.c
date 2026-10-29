/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A5C30
// Address: 0x000A5C30

//----- (000A5C30) --------------------------------------------------------
_BOOL4 __fastcall sub_A5C30(int a1, _WORD *a2)
{
  int v2; // eax
  _WORD *v3; // edi
  unsigned __int16 v4; // bx
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // dx
  unsigned int v8; // esi
  unsigned __int16 v9; // dx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  unsigned int v12; // ecx
  unsigned int v13; // edx
  int v14; // ecx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned int v17; // eax
  unsigned int v18; // et0
  int v19; // ecx
  unsigned __int16 v20; // di
  __int16 v21; // si
  __int16 v22; // bx
  bool v23; // zf
  unsigned __int16 v24; // cx
  int v25; // edi
  __int16 v26; // ax
  unsigned __int16 v27; // si
  int v28; // eax
  unsigned int v29; // et0
  __int16 v30; // bx
  __int16 v31; // di
  __int16 v32; // dx
  __int16 v33; // cx
  _BOOL4 result; // eax
  _QWORD *v35; // ecx
  __m128i v36; // xmm0
  __m128i v37; // xmm1
  __m128i si128; // xmm2
  __m128i v39; // xmm4
  unsigned int v40; // eax
  __m128i v41; // xmm1
  __m128i v42; // xmm1
  int v43; // esi
  int v44; // ebx
  unsigned int epi16; // eax
  int v46; // ecx
  unsigned int v47; // esi
  __m128i v48; // xmm1
  __m128i v49; // xmm2
  __m128i v50; // xmm4
  __m128i v51; // xmm3
  __m128i v52; // xmm5
  __m128i v53; // xmm6
  __m128i v54; // xmm7
  __m128i v55; // xmm0
  __m128i v56; // xmm0
  int v57; // ecx
  unsigned int v58; // et0
  int v59; // ebx
  unsigned __int16 v60; // [esp+0h] [ebp-ACh]
  __int16 v61; // [esp+0h] [ebp-ACh]
  unsigned __int16 v62; // [esp+0h] [ebp-ACh]
  unsigned __int16 v63; // [esp+0h] [ebp-ACh]
  unsigned __int16 v64; // [esp+4h] [ebp-A8h]
  __int16 v65; // [esp+4h] [ebp-A8h]
  __int16 v66; // [esp+4h] [ebp-A8h]
  int v67; // [esp+4h] [ebp-A8h]
  _WORD *v68; // [esp+8h] [ebp-A4h]
  unsigned __int16 v69; // [esp+Ch] [ebp-A0h]
  int v70; // [esp+Ch] [ebp-A0h]
  int v71; // [esp+Ch] [ebp-A0h]
  unsigned __int16 v72; // [esp+10h] [ebp-9Ch]
  unsigned __int16 v73; // [esp+10h] [ebp-9Ch]
  __int16 v74; // [esp+10h] [ebp-9Ch]
  int v75; // [esp+10h] [ebp-9Ch]
  __int16 v76; // [esp+14h] [ebp-98h]
  unsigned __int16 v77; // [esp+14h] [ebp-98h]
  __int16 v78; // [esp+14h] [ebp-98h]
  int v79; // [esp+18h] [ebp-94h]
  __int16 v80; // [esp+18h] [ebp-94h]
  __int16 v81; // [esp+18h] [ebp-94h]
  int v82; // [esp+1Ch] [ebp-90h]
  unsigned int v83; // [esp+20h] [ebp-8Ch]
  unsigned int v84; // [esp+24h] [ebp-88h]
  unsigned __int16 v85; // [esp+28h] [ebp-84h]
  __int16 v86; // [esp+28h] [ebp-84h]
  __int16 v87; // [esp+28h] [ebp-84h]
  int v88; // [esp+2Ch] [ebp-80h]
  unsigned __int16 v89; // [esp+30h] [ebp-7Ch]
  int v90; // [esp+30h] [ebp-7Ch]
  __int16 v91; // [esp+34h] [ebp-78h]
  __int16 v92; // [esp+34h] [ebp-78h]
  __int16 v93; // [esp+38h] [ebp-74h]
  __int16 v95; // [esp+40h] [ebp-6Ch]
  __int16 v96; // [esp+44h] [ebp-68h]
  __int16 v97; // [esp+48h] [ebp-64h]
  __int16 v98; // [esp+4Ch] [ebp-60h]
  __int16 v99; // [esp+50h] [ebp-5Ch]
  unsigned __int16 v100; // [esp+54h] [ebp-58h]
  __int16 v101; // [esp+58h] [ebp-54h]
  unsigned __int16 v102; // [esp+5Ch] [ebp-50h]
  unsigned __int16 v103; // [esp+60h] [ebp-4Ch]
  __int16 v104; // [esp+60h] [ebp-4Ch]
  __int16 v105; // [esp+60h] [ebp-4Ch]
  int v106; // [esp+7Ch] [ebp-30h]
  __int64 v107; // [esp+82h] [ebp-2Ah]
  _BYTE v108[14]; // [esp+8Ah] [ebp-22h]

  LODWORD(v107) = *(_DWORD *)a2;
  v68 = a2;
  if ( *(_WORD *)(a1 + 8)
    || !*(_WORD *)(a1 + 10)
    || !*(_WORD *)(a1 + 12)
    || !*(_WORD *)(a1 + 14)
    || !*(_WORD *)(a1 + 16)
    || !*(_WORD *)(a1 + 18)
    || !*(_WORD *)(a1 + 20)
    || (*(_BYTE *)(a1 + 6) & 1) != 0 )
  {
    v2 = (unsigned __int16)a2[2];
    v106 = 114;
    v82 = 0;
    v93 = 0;
    v102 = 0;
    v101 = 0;
    v100 = 0;
    v99 = 0;
    v98 = 0;
    v69 = 0;
    v3 = (_WORD *)a1;
    while ( 1 )
    {
      v4 = v3[2];
      v79 = v2;
      v5 = v2;
      if ( v4 == (_WORD)v2 )
      {
        v4 = v3[3];
        v5 = v68[3];
        if ( v4 == v5 )
        {
          v6 = v3[4];
          v5 = v68[4];
          if ( v6 != v5 )
            goto LABEL_13;
          v7 = v3[5];
          v5 = v68[5];
          if ( v7 != v5 )
          {
LABEL_14:
            v4 = v7;
            goto LABEL_17;
          }
          v64 = v3[6];
          v5 = v68[6];
          if ( v64 == v5 )
          {
            v60 = v3[7];
            v5 = v68[7];
            if ( v60 == v5 )
            {
              v103 = v3[5];
              v7 = v3[8];
              v5 = v68[8];
              if ( v7 != v5 )
                goto LABEL_14;
              v6 = v3[9];
              v5 = v68[9];
              if ( v6 != v5 )
              {
LABEL_13:
                v4 = v6;
                goto LABEL_17;
              }
              v72 = v3[3];
              v4 = v3[10];
              v5 = v68[10];
              LOWORD(v8) = v4;
              v85 = v3[8];
              v9 = v3[4];
              if ( v4 == v5 )
                goto LABEL_20;
            }
            else
            {
              v4 = v3[7];
            }
          }
          else
          {
            v4 = v3[6];
          }
        }
      }
LABEL_17:
      LOWORD(v8) = v68[10];
      if ( v4 <= v5 )
      {
        v4 = v3[10];
        v6 = v68[9];
        v85 = v68[8];
        v60 = v68[7];
        v64 = v68[6];
        v103 = v68[5];
        v72 = v68[3];
        v9 = v68[4];
LABEL_20:
        v77 = v9;
        v8 = (unsigned __int16)v8 - v4;
        v68[10] = v8;
        v10 = v6 - (unsigned __int16)v3[9] - (HIWORD(v8) & 1);
        v68[9] = v10;
        v97 = v10;
        v11 = v85 - (unsigned __int16)v3[8] - (HIWORD(v10) & 1);
        v68[8] = v11;
        v96 = v11;
        v12 = v60 - (unsigned __int16)v3[7] - (HIWORD(v11) & 1);
        v68[7] = v12;
        v61 = v12;
        v13 = v64 - (unsigned __int16)v3[6] - (HIWORD(v12) & 1);
        v68[6] = v13;
        v14 = v103 - (unsigned __int16)v3[5];
        v104 = v13;
        v15 = v14 - (HIWORD(v13) & 1);
        v68[5] = v15;
        v65 = v15;
        v16 = v77 - (unsigned __int16)v3[4] - (HIWORD(v15) & 1);
        v68[4] = v16;
        v91 = v16;
        v17 = v72 - (unsigned __int16)v3[3] - (HIWORD(v16) & 1);
        v68[3] = v17;
        v76 = v17;
        v79 = v79 - (unsigned __int16)v3[2] - (HIWORD(v17) & 1);
        v68[2] = v79;
        v95 = 1;
        goto LABEL_21;
      }
      v97 = v68[9];
      v96 = v68[8];
      v61 = v68[7];
      v104 = v68[6];
      v65 = v68[5];
      v76 = v68[3];
      v91 = v68[4];
      v95 = 0;
LABEL_21:
      LOWORD(v18) = v69;
      HIWORD(v18) = v98;
      LOWORD(v88) = v18 >> 15;
      LOWORD(v18) = v98;
      HIWORD(v18) = v99;
      LOWORD(v84) = v18 >> 15;
      LOWORD(v18) = v99;
      HIWORD(v18) = v100;
      v73 = v18 >> 15;
      LOWORD(v18) = v100;
      HIWORD(v18) = v101;
      LOWORD(v83) = v18 >> 15;
      LOWORD(v18) = v101;
      HIWORD(v18) = v102;
      v89 = v18 >> 15;
      LOWORD(v18) = v102;
      HIWORD(v18) = v93;
      v86 = v18 >> 15;
      HIWORD(v19) = HIWORD(v82);
      HIWORD(v18) = v82;
      LOWORD(v18) = v93;
      LOWORD(v19) = v18 >> 15;
      v82 = v19;
      v69 = v95 + 2 * v69;
      v68[10] = 2 * v8;
      LOWORD(v18) = v8;
      HIWORD(v18) = v97;
      v68[9] = v18 >> 15;
      LOWORD(v18) = v97;
      HIWORD(v18) = v96;
      v68[8] = v18 >> 15;
      LOWORD(v18) = v96;
      HIWORD(v18) = v61;
      v68[7] = v18 >> 15;
      LOWORD(v18) = v61;
      HIWORD(v18) = v104;
      v20 = v18 >> 15;
      LOWORD(v18) = v104;
      HIWORD(v18) = v65;
      v21 = v18 >> 15;
      LOWORD(v18) = v65;
      HIWORD(v18) = v91;
      v66 = v18 >> 15;
      LOWORD(v18) = v91;
      HIWORD(v18) = v76;
      v22 = v18 >> 15;
      HIWORD(v19) = HIWORD(v79);
      HIWORD(v18) = v79;
      LOWORD(v18) = v76;
      LOWORD(v19) = v18 >> 15;
      v80 = v19;
      v62 = v20;
      v68[6] = v20;
      v105 = v21;
      v68[5] = v21;
      v68[4] = v66;
      v68[3] = v22;
      v68[2] = v19;
      v23 = v106-- == 1;
      v93 = v86;
      v102 = v89;
      v101 = v83;
      v100 = v73;
      v99 = v84;
      v98 = v88;
      v3 = (_WORD *)a1;
      v2 = v19;
      if ( v23 )
      {
        v92 = v22;
        v24 = v69;
        LOWORD(v25) = v86;
        v26 = 0;
        v27 = v73;
        goto LABEL_23;
      }
    }
  }
  v36 = _mm_cvtsi32_si128((unsigned __int16)a2[2]);
  a2[2] >>= 1;
  v37 = _mm_loadu_si128((const __m128i *)(a2 + 3));
  si128 = _mm_load_si128((const __m128i *)&xmmword_EFCF0);
  v39 = _mm_load_si128((const __m128i *)&xmmword_EFCE0);
  *(__m128i *)(a2 + 3) = _mm_or_si128(
                           _mm_srli_epi16(v37, 1u),
                           _mm_slli_epi16(_mm_or_si128(_mm_shuffle_epi8(v36, v39), _mm_shuffle_epi8(v37, si128)), 0xFu));
  v40 = *(unsigned __int16 *)(a1 + 4);
  *(_WORD *)(a1 + 4) >>= 1;
  v41 = _mm_loadu_si128((const __m128i *)(a1 + 6));
  v42 = _mm_or_si128(
          _mm_srli_epi16(v41, 1u),
          _mm_slli_epi16(
            _mm_or_si128(_mm_shuffle_epi8(_mm_cvtsi32_si128(v40), v39), _mm_shuffle_epi8(v41, si128)),
            0xFu));
  *(__m128i *)(a1 + 6) = v42;
  v81 = 0;
  v71 = 0;
  v88 = 0;
  v84 = 0;
  v75 = 0;
  v83 = 0;
  v43 = 0;
  v82 = 0;
  v44 = 0;
  epi16 = (unsigned __int16)a2[3];
  v46 = _mm_cvtsi128_si32(v42);
  v67 = 113;
  while ( 1 )
  {
    v90 = v43;
    if ( (unsigned __int16)epi16 >= (unsigned __int16)v46 )
    {
      epi16 -= v46;
      a2[3] = epi16;
      v63 = 1;
    }
    else
    {
      v63 = 0;
    }
    v47 = (unsigned __int16)a2[10];
    v68[10] = 2 * v47;
    v48 = _mm_cvtsi32_si128((unsigned __int16)v68[9]);
    v49 = _mm_cvtsi32_si128((unsigned __int16)v68[8]);
    v50 = _mm_cvtsi32_si128((unsigned __int16)v68[7]);
    v51 = _mm_cvtsi32_si128((unsigned __int16)v68[6]);
    v52 = _mm_cvtsi32_si128((unsigned __int16)v68[5]);
    a2 = v68;
    v53 = _mm_cvtsi32_si128(epi16);
    v54 = _mm_cvtsi32_si128((unsigned __int16)v68[4]);
    v55 = _mm_unpacklo_epi64(
            _mm_unpacklo_epi32(
              _mm_unpacklo_epi16(_mm_cvtsi32_si128((unsigned __int16)v68[2]), v53),
              _mm_unpacklo_epi16(v54, v52)),
            _mm_unpacklo_epi32(_mm_unpacklo_epi16(v51, v50), _mm_unpacklo_epi16(v49, v48)));
    v56 = _mm_or_si128(
            _mm_add_epi16(v55, v55),
            _mm_srli_epi16(
              _mm_unpacklo_epi64(
                _mm_unpacklo_epi32(_mm_unpacklo_epi16(v53, v54), _mm_unpacklo_epi16(v52, v51)),
                _mm_unpacklo_epi32(_mm_unpacklo_epi16(v50, v49), _mm_unpacklo_epi16(v48, _mm_cvtsi32_si128(v47)))),
              0xFu));
    HIWORD(v57) = HIWORD(v82);
    HIWORD(v58) = v82;
    LOWORD(v58) = v44;
    LOWORD(v57) = v58 >> 15;
    v82 = v57;
    HIWORD(v57) = HIWORD(v90);
    HIWORD(v58) = v44;
    LOWORD(v58) = v90;
    LOWORD(v44) = v58 >> 15;
    v25 = v44;
    HIWORD(v47) = HIWORD(v83);
    HIWORD(v58) = v90;
    LOWORD(v58) = v83;
    LOWORD(v57) = v58 >> 15;
    v59 = v57;
    HIWORD(v57) = HIWORD(v75);
    HIWORD(v58) = v83;
    LOWORD(v58) = v75;
    LOWORD(v47) = v58 >> 15;
    v83 = v47;
    HIWORD(v47) = HIWORD(v84);
    HIWORD(v58) = v75;
    LOWORD(v58) = v84;
    LOWORD(v57) = v58 >> 15;
    v75 = v57;
    HIWORD(v57) = HIWORD(v88);
    HIWORD(v58) = v84;
    LOWORD(v58) = v88;
    LOWORD(v47) = v58 >> 15;
    v84 = v47;
    HIWORD(v47) = HIWORD(v71);
    HIWORD(v58) = v88;
    LOWORD(v58) = v71;
    LOWORD(v57) = v58 >> 15;
    v88 = v57;
    HIWORD(v58) = v71;
    LOWORD(v58) = v81;
    LOWORD(v47) = v58 >> 15;
    v24 = v47 | v63;
    v71 = v47 | v63;
    *(__m128i *)(v68 + 2) = v56;
    if ( !v67 )
      break;
    --v67;
    epi16 = _mm_extract_epi16(v56, 1);
    v46 = *(unsigned __int16 *)(a1 + 6);
    v81 *= 2;
    v43 = v59;
    v44 = v25;
  }
  v27 = v75;
  v89 = v59;
  v26 = v81 & 0x7FFF;
  v80 = _mm_cvtsi128_si32(v56);
  v92 = _mm_extract_epi16(v56, 1);
  v66 = _mm_extract_epi16(v56, 2);
  v105 = _mm_extract_epi16(v56, 3);
  v62 = _mm_extract_epi16(v56, 4);
LABEL_23:
  v78 = (v24 << 15) | v26;
  v28 = (unsigned __int16)v25 >> 1;
  LOWORD(v29) = (v89 >> 1) | ((_WORD)v25 << 15);
  HIWORD(v29) = (unsigned __int16)v25 >> 1;
  v87 = v29 >> 1;
  LOWORD(v29) = ((unsigned __int16)v83 >> 1) | (v89 << 15);
  HIWORD(v29) = v89 >> 1;
  v30 = v29 >> 1;
  LOWORD(v29) = (v27 >> 1) | ((_WORD)v83 << 15);
  HIWORD(v29) = (unsigned __int16)v83 >> 1;
  v31 = v29 >> 1;
  LOWORD(v29) = ((unsigned __int16)v84 >> 1) | (v27 << 15);
  HIWORD(v29) = v27 >> 1;
  v74 = v29 >> 1;
  LOWORD(v29) = ((unsigned __int16)v88 >> 1) | ((_WORD)v84 << 15);
  HIWORD(v29) = (unsigned __int16)v84 >> 1;
  v32 = v29 >> 1;
  v70 = v24 >> 1;
  LOWORD(v29) = v70 | ((_WORD)v88 << 15);
  HIWORD(v29) = (unsigned __int16)v88 >> 1;
  v33 = v29 >> 1;
  LOWORD(v29) = v78;
  HIWORD(v29) = v70;
  WORD2(v107) = (unsigned __int16)v82 >> 2;
  HIWORD(v107) = ((v82 & 0xFFFE) << 14) | ((unsigned __int16)(v28 | ((_WORD)v82 << 15)) >> 1);
  *(_WORD *)v108 = v87;
  *(_WORD *)&v108[2] = v30;
  *(_WORD *)&v108[4] = v31;
  *(_WORD *)&v108[6] = v74;
  *(_WORD *)&v108[8] = v32;
  *(_WORD *)&v108[10] = v33;
  *(_WORD *)&v108[12] = v29 >> 1;
  result = 1;
  if ( v62 | (unsigned __int16)(v80 | v92 | v66 | v105) )
  {
    v35 = v68;
  }
  else
  {
    v35 = v68;
    if ( !v68[7] && !v68[8] && !v68[9] )
      result = v68[10] != 0;
  }
  *(_QWORD *)((char *)v35 + 14) = *(_QWORD *)&v108[6];
  v35[1] = *(_QWORD *)v108;
  *v35 = v107;
  return result;
}
// EFCE0: using guessed type __int128 xmmword_EFCE0;
// EFCF0: using guessed type __int128 xmmword_EFCF0;
