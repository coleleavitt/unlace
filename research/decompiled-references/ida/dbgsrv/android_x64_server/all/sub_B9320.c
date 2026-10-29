/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_B9320
// Address: 0x00000000000B9320

//----- (00000000000B9320) ----------------------------------------------------
_BOOL8 __fastcall sub_B9320(__int64 a1, __int64 a2)
{
  int v2; // r10d
  int v3; // ecx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // di
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // r9
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r10
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r11
  unsigned __int16 v12; // dx
  unsigned __int16 v13; // bx
  unsigned __int16 v14; // bp
  unsigned int v15; // r8d
  unsigned int v16; // edi
  __int16 v17; // r9
  __int16 v18; // r15
  int v19; // r13d
  unsigned int v20; // ebp
  unsigned int v21; // eax
  unsigned int v22; // eax
  int v23; // edx
  int v24; // ebx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // ebp
  int v28; // ebx
  unsigned int v29; // et0
  int v30; // ebp
  int v31; // r11d
  int v32; // ecx
  int v33; // r14d
  unsigned __int16 v34; // ax
  int v35; // edx
  unsigned __int16 v36; // r9
  unsigned __int16 v37; // r12
  __int16 v38; // r8
  __int16 v39; // di
  __int16 v40; // r15
  unsigned __int16 v41; // r11
  unsigned __int16 v42; // r9
  unsigned __int16 v43; // si
  unsigned __int16 v44; // di
  __int16 v45; // r11
  unsigned __int16 v46; // r8
  unsigned int v47; // ecx
  __int16 v48; // r13
  unsigned int v49; // et0
  int v50; // r14d
  __int16 v51; // bp
  unsigned int v52; // edi
  __int16 v53; // ax
  __int16 v54; // r8
  __int16 v55; // ax
  __int16 v56; // bx
  _BOOL8 result; // rax
  __int64 v58; // rdx
  __m128i v59; // xmm0
  __m128i v60; // xmm1
  unsigned int v61; // eax
  __m128i v62; // xmm1
  __m128i v63; // xmm1
  int v64; // ecx
  int v65; // r15d
  unsigned __int16 v66; // dx
  int v67; // ebp
  int v68; // edi
  unsigned __int16 v69; // r13
  unsigned int epi16; // r12d
  int v71; // eax
  int v72; // esi
  unsigned __int16 v73; // r9
  unsigned __int16 *v74; // rsi
  unsigned int v75; // et0
  int v76; // eax
  unsigned int v77; // edi
  unsigned int v78; // r11d
  unsigned int v79; // r14d
  unsigned int v80; // ecx
  unsigned int v81; // eax
  unsigned int v82; // r10d
  int v83; // r9d
  unsigned int v84; // r15d
  __m128i inserted; // xmm1
  __m128i v86; // xmm0
  __m128i v87; // xmm0
  int v88; // [rsp+8h] [rbp-B0h]
  int v89; // [rsp+8h] [rbp-B0h]
  int v90; // [rsp+Ch] [rbp-ACh]
  __int16 v91; // [rsp+Ch] [rbp-ACh]
  int v92; // [rsp+10h] [rbp-A8h]
  __int16 v93; // [rsp+10h] [rbp-A8h]
  int v94; // [rsp+14h] [rbp-A4h]
  __int16 v95; // [rsp+18h] [rbp-A0h]
  __int16 v96; // [rsp+18h] [rbp-A0h]
  int v97; // [rsp+18h] [rbp-A0h]
  int v98; // [rsp+20h] [rbp-98h]
  int v99; // [rsp+20h] [rbp-98h]
  unsigned __int16 v100; // [rsp+2Ch] [rbp-8Ch]
  __int16 v101; // [rsp+30h] [rbp-88h]
  unsigned int v102; // [rsp+34h] [rbp-84h]
  int v103; // [rsp+38h] [rbp-80h]
  int v104; // [rsp+3Ch] [rbp-7Ch]
  int v105; // [rsp+40h] [rbp-78h]
  int v106; // [rsp+44h] [rbp-74h]
  unsigned __int16 v108; // [rsp+50h] [rbp-68h]
  int v109; // [rsp+54h] [rbp-64h]
  _BYTE v111[22]; // [rsp+60h] [rbp-58h]

  *(_DWORD *)v111 = *(_DWORD *)a2;
  if ( *(_WORD *)(a1 + 8)
    || !*(_WORD *)(a1 + 10)
    || !*(_WORD *)(a1 + 12)
    || !*(_WORD *)(a1 + 14)
    || !*(_WORD *)(a1 + 16)
    || !*(_WORD *)(a1 + 18)
    || !*(_WORD *)(a1 + 20)
    || (*(_BYTE *)(a1 + 6) & 1) != 0 )
  {
    v2 = *(unsigned __int16 *)(a2 + 4);
    v3 = 114;
    v94 = 0;
    v4 = 0;
    v95 = 0;
    v92 = 0;
    v90 = 0;
    v106 = 0;
    v105 = 0;
    v98 = 0;
    while ( 1 )
    {
      v108 = v4;
      v5 = *(_WORD *)(a1 + 4);
      v6 = v2;
      v88 = v2;
      v109 = v3;
      if ( v5 == (_WORD)v2 )
      {
        v7 = *(_WORD *)(a1 + 6);
        v6 = *(_WORD *)(a2 + 6);
        if ( v7 == v6 )
        {
          v8 = *(_WORD *)(a1 + 8);
          v6 = *(_WORD *)(a2 + 8);
          if ( v8 == v6 )
          {
            v9 = *(_WORD *)(a1 + 10);
            v6 = *(_WORD *)(a2 + 10);
            if ( v9 == v6 )
            {
              v10 = *(_WORD *)(a1 + 12);
              v6 = *(_WORD *)(a2 + 12);
              if ( v10 == v6 )
              {
                v11 = *(_WORD *)(a1 + 14);
                v6 = *(_WORD *)(a2 + 14);
                if ( v11 == v6 )
                {
                  v12 = *(_WORD *)(a1 + 16);
                  v6 = *(_WORD *)(a2 + 16);
                  if ( v12 == v6 )
                  {
                    v13 = *(_WORD *)(a1 + 18);
                    v6 = *(_WORD *)(a2 + 18);
                    if ( v13 == v6 )
                    {
                      v5 = *(_WORD *)(a1 + 20);
                      v6 = *(_WORD *)(a2 + 20);
                      v14 = v5;
                      if ( v5 == v6 )
                        goto LABEL_23;
                    }
                    else
                    {
                      v5 = *(_WORD *)(a1 + 18);
                    }
                  }
                  else
                  {
                    v5 = *(_WORD *)(a1 + 16);
                  }
                }
                else
                {
                  v5 = *(_WORD *)(a1 + 14);
                }
              }
              else
              {
                v5 = *(_WORD *)(a1 + 12);
              }
            }
            else
            {
              v5 = *(_WORD *)(a1 + 10);
            }
          }
          else
          {
            v5 = *(_WORD *)(a1 + 8);
          }
        }
        else
        {
          v5 = *(_WORD *)(a1 + 6);
        }
      }
      v14 = *(_WORD *)(a2 + 20);
      if ( v5 <= v6 )
      {
        v5 = *(_WORD *)(a1 + 20);
        v13 = *(_WORD *)(a2 + 18);
        v12 = *(_WORD *)(a2 + 16);
        v11 = *(_WORD *)(a2 + 14);
        v10 = *(_WORD *)(a2 + 12);
        v9 = *(_WORD *)(a2 + 10);
        v7 = *(_WORD *)(a2 + 6);
        v8 = *(_WORD *)(a2 + 8);
LABEL_23:
        v20 = v14 - v5;
        *(_WORD *)(a2 + 20) = v20;
        v21 = ((unsigned int)(v13 - *(unsigned __int16 *)(a1 + 18) - (HIWORD(v20) & 1)) >> 16) & 1;
        v103 = v13 - *(unsigned __int16 *)(a1 + 18) - (HIWORD(v20) & 1);
        *(_WORD *)(a2 + 18) = v103;
        v102 = v12 - *(unsigned __int16 *)(a1 + 16) - v21;
        *(_WORD *)(a2 + 16) = v102;
        v22 = ((unsigned int)(v11 - *(unsigned __int16 *)(a1 + 14) - (HIWORD(v102) & 1)) >> 16) & 1;
        v104 = v11 - *(unsigned __int16 *)(a1 + 14) - (HIWORD(v102) & 1);
        *(_WORD *)(a2 + 14) = v104;
        v15 = v10 - *(unsigned __int16 *)(a1 + 12) - v22;
        *(_WORD *)(a2 + 12) = v15;
        v16 = v9 - *(unsigned __int16 *)(a1 + 10) - (HIWORD(v15) & 1);
        v23 = HIWORD(v16) & 1;
        *(_WORD *)(a2 + 10) = v9 - *(_WORD *)(a1 + 10) - (BYTE2(v15) & 1);
        v24 = *(unsigned __int16 *)(a1 + 8);
        v18 = v8 - v24 - v23;
        *(_WORD *)(a2 + 8) = v18;
        v25 = v7;
        v17 = v20;
        v26 = v25 - *(unsigned __int16 *)(a1 + 6) - ((((unsigned int)v8 - v24 - v23) >> 16) & 1);
        v101 = v26;
        *(_WORD *)(a2 + 6) = v26;
        v27 = *(unsigned __int16 *)(a1 + 4);
        v19 = v88 - v27 - (HIWORD(v26) & 1);
        *(_WORD *)(a2 + 4) = v88 - v27 - (BYTE2(v26) & 1);
        v100 = 1;
        goto LABEL_24;
      }
      LOWORD(v103) = *(_WORD *)(a2 + 18);
      LOWORD(v102) = *(_WORD *)(a2 + 16);
      LOWORD(v104) = *(_WORD *)(a2 + 14);
      LOWORD(v15) = *(_WORD *)(a2 + 12);
      LOWORD(v16) = *(_WORD *)(a2 + 10);
      v17 = *(_WORD *)(a2 + 20);
      v101 = *(_WORD *)(a2 + 6);
      v18 = *(_WORD *)(a2 + 8);
      v100 = 0;
      v19 = v88;
LABEL_24:
      HIWORD(v28) = HIWORD(v98);
      LOWORD(v29) = v98;
      HIWORD(v29) = v105;
      LOWORD(v28) = v29 >> 15;
      HIWORD(v30) = HIWORD(v105);
      LOWORD(v29) = v105;
      HIWORD(v29) = v106;
      LOWORD(v30) = v29 >> 15;
      HIWORD(v31) = HIWORD(v106);
      LOWORD(v29) = v106;
      HIWORD(v29) = v90;
      LOWORD(v31) = v29 >> 15;
      HIWORD(v32) = HIWORD(v90);
      LOWORD(v29) = v90;
      HIWORD(v29) = v92;
      LOWORD(v32) = v29 >> 15;
      HIWORD(v33) = HIWORD(v92);
      LOWORD(v29) = v92;
      HIWORD(v29) = v95;
      LOWORD(v33) = v29 >> 15;
      LOWORD(v29) = v95;
      HIWORD(v29) = v108;
      v34 = v29 >> 15;
      HIWORD(v35) = HIWORD(v94);
      HIWORD(v29) = v94;
      LOWORD(v29) = v108;
      LOWORD(v35) = v29 >> 15;
      v94 = v35;
      v98 = v100 + 2 * v98;
      LOWORD(v29) = v17;
      HIWORD(v29) = v103;
      *(_WORD *)(a2 + 20) = 2 * v17;
      *(_WORD *)(a2 + 18) = v29 >> 15;
      LOWORD(v29) = v103;
      HIWORD(v29) = v102;
      *(_WORD *)(a2 + 16) = v29 >> 15;
      v36 = v32;
      LOWORD(v29) = v102;
      HIWORD(v29) = v104;
      *(_WORD *)(a2 + 14) = v29 >> 15;
      LOWORD(v29) = v104;
      HIWORD(v29) = v15;
      v37 = v29 >> 15;
      LOWORD(v29) = v15;
      HIWORD(v29) = v16;
      v38 = v29 >> 15;
      *(_WORD *)(a2 + 12) = v37;
      *(_WORD *)(a2 + 10) = v38;
      LOWORD(v29) = v16;
      HIWORD(v29) = v18;
      v39 = v29 >> 15;
      *(_WORD *)(a2 + 8) = v39;
      LOWORD(v29) = v18;
      HIWORD(v29) = v101;
      v40 = v29 >> 15;
      *(_WORD *)(a2 + 6) = v40;
      HIWORD(v29) = v19;
      LOWORD(v29) = v101;
      LOWORD(v19) = v29 >> 15;
      *(_WORD *)(a2 + 4) = v19;
      v4 = v34;
      v95 = v33;
      v92 = v32;
      LOWORD(v89) = v31;
      v90 = v31;
      v106 = v30;
      v105 = v28;
      v3 = v109 - 1;
      v2 = v19;
      if ( v109 == 1 )
      {
        v41 = v36;
        v42 = v37;
        v93 = v40;
        v96 = v39;
        v91 = v38;
        v43 = v98;
        v44 = v41;
        v45 = 0;
        v46 = v30;
        goto LABEL_26;
      }
    }
  }
  v59 = _mm_cvtsi32_si128(*(unsigned __int16 *)(a2 + 4));
  *(_WORD *)(a2 + 4) >>= 1;
  v60 = _mm_loadu_si128((const __m128i *)(a2 + 6));
  *(__m128i *)(a2 + 6) = _mm_or_si128(
                           _mm_srli_epi16(v60, 1u),
                           _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v60, 2), v59, 1), 0xFu));
  v61 = *(unsigned __int16 *)(a1 + 4);
  *(_WORD *)(a1 + 4) >>= 1;
  v62 = _mm_loadu_si128((const __m128i *)(a1 + 6));
  v63 = _mm_or_si128(
          _mm_srli_epi16(v62, 1u),
          _mm_slli_epi16(_mm_blend_epi16(_mm_slli_si128(v62, 2), _mm_cvtsi32_si128(v61), 1), 0xFu));
  *(__m128i *)(a1 + 6) = v63;
  v64 = 0;
  v65 = 0;
  LOWORD(v28) = 0;
  v46 = 0;
  v89 = 0;
  v66 = 0;
  v67 = 0;
  v68 = 0;
  v69 = 0;
  epi16 = *(unsigned __int16 *)(a2 + 6);
  v71 = _mm_cvtsi128_si32(v63);
  v72 = 113;
  while ( 1 )
  {
    v99 = v72;
    if ( (unsigned __int16)epi16 >= (unsigned __int16)v71 )
    {
      epi16 -= v71;
      v74 = (unsigned __int16 *)a2;
      *(_WORD *)(a2 + 6) = epi16;
      v73 = 1;
    }
    else
    {
      v73 = 0;
      v74 = (unsigned __int16 *)a2;
    }
    HIWORD(v75) = v68;
    LOWORD(v75) = v69;
    LOWORD(v68) = v75 >> 15;
    v94 = v68;
    HIWORD(v75) = v69;
    LOWORD(v75) = v67;
    v69 = v75 >> 15;
    HIWORD(v75) = v67;
    LOWORD(v75) = v66;
    LOWORD(v67) = v75 >> 15;
    HIWORD(v76) = HIWORD(v89);
    HIWORD(v75) = v66;
    LOWORD(v75) = v89;
    v66 = v75 >> 15;
    HIWORD(v75) = v89;
    LOWORD(v75) = v46;
    LOWORD(v76) = v75 >> 15;
    v89 = v76;
    HIWORD(v75) = v46;
    LOWORD(v75) = v28;
    v46 = v75 >> 15;
    HIWORD(v75) = v28;
    LOWORD(v75) = v65;
    LOWORD(v28) = v75 >> 15;
    HIWORD(v75) = v65;
    LOWORD(v75) = v64;
    LOWORD(v65) = v75 >> 15;
    v97 = v64;
    v77 = v74[10];
    v74[10] = 2 * v77;
    v78 = v74[4];
    v79 = v74[5];
    v80 = v74[6];
    v81 = v74[7];
    v82 = v74[8];
    v83 = v65 | v73;
    v84 = v74[9];
    inserted = _mm_insert_epi16(
                 _mm_insert_epi16(
                   _mm_insert_epi16(
                     _mm_insert_epi16(
                       _mm_insert_epi16(
                         _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(epi16), v78, 1), v79, 2),
                         v80,
                         3),
                       v81,
                       4),
                     v82,
                     5),
                   v84,
                   6),
                 v77,
                 7);
    v86 = _mm_insert_epi16(
            _mm_insert_epi16(
              _mm_insert_epi16(
                _mm_insert_epi16(
                  _mm_insert_epi16(
                    _mm_insert_epi16(_mm_insert_epi16(_mm_cvtsi32_si128(v74[2]), epi16, 1), v78, 2),
                    v79,
                    3),
                  v80,
                  4),
                v81,
                5),
              v82,
              6),
            v84,
            7);
    v65 = v83;
    v87 = _mm_or_si128(_mm_add_epi16(v86, v86), _mm_srli_epi16(inserted, 0xFu));
    *(__m128i *)(v74 + 2) = v87;
    if ( !v99 )
      break;
    v71 = *(unsigned __int16 *)(a1 + 6);
    epi16 = _mm_extract_epi16(v87, 1);
    v72 = v99 - 1;
    v64 = 2 * v97;
    v68 = v94;
  }
  v44 = v66;
  v33 = v67;
  v34 = v69;
  v45 = v97 & 0x7FFF;
  LOWORD(v2) = _mm_cvtsi128_si32(v87);
  v93 = _mm_extract_epi16(v87, 1);
  v96 = _mm_extract_epi16(v87, 2);
  v91 = _mm_extract_epi16(v87, 3);
  v42 = _mm_extract_epi16(v87, 4);
  v43 = v65;
LABEL_26:
  v47 = (unsigned __int16)v33;
  LOWORD(v49) = ((unsigned __int16)v89 >> 1) | (v44 << 15);
  HIWORD(v49) = v44 >> 1;
  v48 = v49 >> 1;
  v50 = (v44 >> 1) | (v33 << 15);
  LOWORD(v49) = (v46 >> 1) | ((_WORD)v89 << 15);
  HIWORD(v49) = (unsigned __int16)v89 >> 1;
  v51 = v49 >> 1;
  v52 = v34;
  LOWORD(v49) = v50;
  HIWORD(v49) = v47 >> 1;
  LOWORD(v50) = v49 >> 1;
  v53 = HIWORD(v49) | (v34 << 15);
  LOWORD(v49) = ((unsigned __int16)v28 >> 1) | (v46 << 15);
  HIWORD(v49) = v46 >> 1;
  v54 = v49 >> 1;
  v52 >>= 1;
  LOWORD(v49) = v53;
  HIWORD(v49) = v52;
  v55 = v49 >> 1;
  LOWORD(v49) = (v43 >> 1) | ((_WORD)v28 << 15);
  HIWORD(v49) = (unsigned __int16)v28 >> 1;
  v56 = v49 >> 1;
  LOWORD(v49) = (v43 << 15) | v45;
  HIWORD(v49) = v43 >> 1;
  *(_WORD *)&v111[4] = (unsigned __int16)v94 >> 2;
  *(_WORD *)&v111[6] = ((v94 & 0xFFFE) << 14) | ((unsigned __int16)(v52 | ((_WORD)v94 << 15)) >> 1);
  *(_WORD *)&v111[8] = v55;
  *(_WORD *)&v111[10] = v50;
  *(_WORD *)&v111[12] = v48;
  *(_WORD *)&v111[14] = v51;
  *(_WORD *)&v111[16] = v54;
  *(_WORD *)&v111[18] = v56;
  *(_WORD *)&v111[20] = v49 >> 1;
  result = 1;
  if ( v42 | (unsigned __int16)(v93 | v2 | v96 | v91) )
  {
    v58 = a2;
  }
  else
  {
    v58 = a2;
    if ( !*(_WORD *)(a2 + 14) && !*(_WORD *)(a2 + 16) && !*(_WORD *)(a2 + 18) )
      result = *(_WORD *)(a2 + 20) != 0;
  }
  *(_QWORD *)(v58 + 14) = *(_QWORD *)&v111[14];
  *(_OWORD *)v58 = *(_OWORD *)v111;
  return result;
}
