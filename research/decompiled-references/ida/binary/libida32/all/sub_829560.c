unsigned __int64 __fastcall sub_829560(__int64 a1)
{
  int v1; // r13d
  unsigned int v3; // ecx
  __m128i v4; // xmm0
  __int32 v5; // edi
  int v6; // ebp
  __int32 v7; // eax
  __int32 v8; // r8d
  __int32 v9; // r14d
  __int32 v10; // esi
  int v11; // r15d
  unsigned int v12; // ecx
  __int32 v13; // edx
  int i; // r10d
  __int32 v15; // r10d
  __int32 v16; // r8d
  __int32 v17; // esi
  unsigned int v18; // r10d
  unsigned __int32 v19; // r14d
  unsigned __int32 v20; // edi
  unsigned int v21; // r9d
  unsigned __int32 v22; // ecx
  unsigned __int32 v23; // r10d
  unsigned __int32 v24; // eax
  unsigned __int32 v25; // edx
  unsigned int v26; // r10d
  unsigned __int32 v27; // r15d
  unsigned __int32 v28; // ebp
  unsigned int v29; // r11d
  unsigned __int32 v30; // r9d
  unsigned __int32 v31; // r8d
  unsigned __int32 v32; // ebx
  unsigned int v33; // r10d
  unsigned __int32 v34; // esi
  unsigned int v35; // edi
  unsigned __int32 v36; // r11d
  unsigned int v37; // r8d
  unsigned int v38; // ecx
  unsigned int v39; // eax
  unsigned __int32 v40; // r10d
  unsigned int v41; // edi
  unsigned int v42; // edx
  unsigned int v43; // ebp
  unsigned __int32 v44; // r8d
  unsigned int v45; // eax
  unsigned int v46; // edi
  unsigned __int32 v47; // esi
  unsigned int v48; // ebx
  unsigned int v49; // r11d
  unsigned int v50; // edi
  unsigned int v51; // r14d
  unsigned int v52; // r10d
  unsigned int v53; // r9d
  unsigned int v54; // edx
  unsigned int v55; // r8d
  unsigned int v56; // ecx
  unsigned int v57; // r15d
  unsigned int v58; // eax
  unsigned __int32 v59; // eax
  unsigned __int32 v60; // r9d
  unsigned __int32 v61; // ecx
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __m128i v64; // xmm2
  __m128i v65; // xmm3
  _DWORD *v67; // [rsp+8h] [rbp-90h]
  unsigned int v68; // [rsp+14h] [rbp-84h]
  unsigned int v69; // [rsp+18h] [rbp-80h]
  unsigned int v70; // [rsp+1Ch] [rbp-7Ch]
  unsigned int v71; // [rsp+20h] [rbp-78h]
  unsigned int v72; // [rsp+24h] [rbp-74h]
  unsigned int v73; // [rsp+28h] [rbp-70h]
  unsigned int v74; // [rsp+2Ch] [rbp-6Ch]
  __m128i v75; // [rsp+30h] [rbp-68h]
  unsigned __int64 v76; // [rsp+58h] [rbp-40h]

  v1 = 0;
  v76 = __readfsqword(0x28u);
  v67 = &unk_2399CC0;
  v3 = *(_DWORD *)(a1 + 96);
  v75 = _mm_loadu_si128((const __m128i *)(a1 + 8));
  v4 = _mm_loadu_si128((const __m128i *)(a1 + 24));
  v5 = v75.m128i_i32[2];
  v73 = v3;
  v6 = _mm_cvtsi128_si32(v75);
  v7 = v75.m128i_i32[1];
  v8 = v75.m128i_i32[3];
  v9 = v4.m128i_i32[2];
  v10 = v4.m128i_i32[3];
  v74 = *(_DWORD *)(a1 + 76);
  v11 = _mm_cvtsi128_si32(v4);
  v12 = *(_DWORD *)(a1 + 44);
  v13 = v4.m128i_i32[1];
  for ( i = *(_DWORD *)(a1 + 40); ; *(_DWORD *)(a1 + 40) = i )
  {
    v15 = i + *v67 + (v9 ^ v11 & (v13 ^ v9)) + (__ROL4__(v11, 7) ^ __ROR4__(v11, 6) ^ __ROR4__(v11, 11)) + v10;
    v72 = *(_DWORD *)(a1 + 100);
    v16 = v15 + v8;
    v17 = v15 + (v6 & v7 | v5 & (v6 ^ v7)) + (__ROL4__(v6, 10) ^ __ROR4__(v6, 2) ^ __ROR4__(v6, 13));
    v68 = *(_DWORD *)(a1 + 80);
    v18 = *(_DWORD *)(a1 + 48);
    if ( v1 )
    {
      v12 += v68
           + (__ROL4__(*(_DWORD *)(a1 + 100), 15) ^ __ROL4__(*(_DWORD *)(a1 + 100), 13) ^ (*(_DWORD *)(a1 + 100) >> 10))
           + ((v18 >> 3) ^ __ROR4__(v18, 7) ^ __ROL4__(v18, 14));
      *(_DWORD *)(a1 + 44) = v12;
    }
    v69 = *(_DWORD *)(a1 + 84);
    v19 = v12 + (__ROL4__(v16, 7) ^ __ROR4__(v16, 6) ^ __ROR4__(v16, 11)) + (v13 ^ v16 & (v13 ^ v11)) + v67[1] + v9;
    v20 = v19 + v5;
    v21 = *(_DWORD *)(a1 + 52);
    v22 = v19 + (v6 & v17 | v7 & (v6 ^ v17)) + (__ROL4__(v17, 10) ^ __ROR4__(v17, 2) ^ __ROR4__(v17, 13));
    if ( v1 )
    {
      v18 += v69
           + (__ROL4__(*(_DWORD *)(a1 + 40), 15) ^ __ROL4__(*(_DWORD *)(a1 + 40), 13) ^ (*(_DWORD *)(a1 + 40) >> 10))
           + ((v21 >> 3) ^ __ROR4__(v21, 7) ^ __ROL4__(v21, 14));
      *(_DWORD *)(a1 + 48) = v18;
    }
    v23 = (__ROL4__(v20, 7) ^ __ROR4__(v20, 6) ^ __ROR4__(v20, 11)) + (v11 ^ v20 & (v11 ^ v16)) + v67[2] + v13 + v18;
    v24 = v23 + v7;
    v25 = v23 + (v22 & v17 | v6 & (v22 ^ v17)) + (__ROL4__(v22, 10) ^ __ROR4__(v22, 2) ^ __ROR4__(v22, 13));
    v70 = *(_DWORD *)(a1 + 88);
    v26 = *(_DWORD *)(a1 + 56);
    if ( v1 )
    {
      v21 += v70
           + (__ROL4__(*(_DWORD *)(a1 + 44), 15) ^ __ROL4__(*(_DWORD *)(a1 + 44), 13) ^ (*(_DWORD *)(a1 + 44) >> 10))
           + ((v26 >> 3) ^ __ROR4__(v26, 7) ^ __ROL4__(v26, 14));
      *(_DWORD *)(a1 + 52) = v21;
    }
    v27 = v21 + (__ROL4__(v24, 7) ^ __ROR4__(v24, 6) ^ __ROR4__(v24, 11)) + (v16 ^ v24 & (v20 ^ v16)) + v67[3] + v11;
    v28 = v27 + v6;
    v29 = *(_DWORD *)(a1 + 60);
    v71 = *(_DWORD *)(a1 + 92);
    v30 = v27 + (v25 & v22 | v17 & (v25 ^ v22)) + (__ROL4__(v25, 10) ^ __ROR4__(v25, 2) ^ __ROR4__(v25, 13));
    if ( v1 )
    {
      v26 += v71
           + (__ROL4__(*(_DWORD *)(a1 + 48), 15) ^ __ROL4__(*(_DWORD *)(a1 + 48), 13) ^ (*(_DWORD *)(a1 + 48) >> 10))
           + ((v29 >> 3) ^ __ROR4__(v29, 7) ^ __ROL4__(v29, 14));
      *(_DWORD *)(a1 + 56) = v26;
    }
    v31 = v26 + (__ROL4__(v28, 7) ^ __ROR4__(v28, 6) ^ __ROR4__(v28, 11)) + (v20 ^ v28 & (v24 ^ v20)) + v67[4] + v16;
    v32 = v17 + v31;
    v33 = *(_DWORD *)(a1 + 64);
    v34 = v31 + (v30 & v25 | v22 & (v30 ^ v25)) + (__ROL4__(v30, 10) ^ __ROR4__(v30, 2) ^ __ROR4__(v30, 13));
    if ( v1 )
    {
      v29 += v73
           + (__ROL4__(*(_DWORD *)(a1 + 52), 15) ^ __ROL4__(*(_DWORD *)(a1 + 52), 13) ^ (*(_DWORD *)(a1 + 52) >> 10))
           + ((v33 >> 3) ^ __ROR4__(v33, 7) ^ __ROL4__(v33, 14));
      *(_DWORD *)(a1 + 60) = v29;
    }
    v35 = v29 + (__ROL4__(v32, 7) ^ __ROR4__(v32, 6) ^ __ROR4__(v32, 11)) + (v24 ^ v32 & (v28 ^ v24)) + v67[5] + v20;
    v36 = v22 + v35;
    v37 = *(_DWORD *)(a1 + 68);
    v38 = v35 + (v34 & v30 | v25 & (v34 ^ v30)) + (__ROL4__(v34, 10) ^ __ROR4__(v34, 2) ^ __ROR4__(v34, 13));
    if ( v1 )
    {
      v33 += v72
           + (__ROL4__(*(_DWORD *)(a1 + 56), 15) ^ __ROL4__(*(_DWORD *)(a1 + 56), 13) ^ (*(_DWORD *)(a1 + 56) >> 10))
           + ((v37 >> 3) ^ __ROR4__(v37, 7) ^ __ROL4__(v37, 14));
      *(_DWORD *)(a1 + 64) = v33;
    }
    v39 = v33 + (__ROL4__(v36, 7) ^ __ROR4__(v36, 6) ^ __ROR4__(v36, 11)) + (v28 ^ v36 & (v32 ^ v28)) + v67[6] + v24;
    v40 = v25 + v39;
    v41 = *(_DWORD *)(a1 + 72);
    v42 = v39 + (v38 & v34 | v30 & (v38 ^ v34)) + (__ROL4__(v38, 10) ^ __ROR4__(v38, 2) ^ __ROR4__(v38, 13));
    if ( v1 )
    {
      v37 += *(_DWORD *)(a1 + 40)
           + (__ROL4__(*(_DWORD *)(a1 + 60), 15) ^ __ROL4__(*(_DWORD *)(a1 + 60), 13) ^ (*(_DWORD *)(a1 + 60) >> 10))
           + ((v41 >> 3) ^ __ROR4__(v41, 7) ^ __ROL4__(v41, 14));
      *(_DWORD *)(a1 + 68) = v37;
    }
    v43 = v37 + (__ROL4__(v40, 7) ^ __ROR4__(v40, 6) ^ __ROR4__(v40, 11)) + (v32 ^ v40 & (v36 ^ v32)) + v67[7] + v28;
    v44 = v30 + v43;
    v45 = v43 + (v42 & v38 | v34 & (v42 ^ v38)) + (__ROL4__(v42, 10) ^ __ROR4__(v42, 2) ^ __ROR4__(v42, 13));
    if ( v1 )
    {
      v41 += *(_DWORD *)(a1 + 44)
           + (__ROL4__(*(_DWORD *)(a1 + 64), 15) ^ __ROL4__(*(_DWORD *)(a1 + 64), 13) ^ (*(_DWORD *)(a1 + 64) >> 10))
           + ((v74 >> 3) ^ __ROR4__(v74, 7) ^ __ROL4__(v74, 14));
      *(_DWORD *)(a1 + 72) = v41;
    }
    v46 = (__ROL4__(v44, 7) ^ __ROR4__(v44, 6) ^ __ROR4__(v44, 11)) + (v36 ^ v44 & (v40 ^ v36)) + v67[8] + v32 + v41;
    v47 = v46 + v34;
    v48 = v46 + (v45 & v42 | v38 & (v45 ^ v42)) + (__ROL4__(v45, 10) ^ __ROR4__(v45, 2) ^ __ROR4__(v45, 13));
    if ( v1 )
    {
      v74 += ((v68 >> 3) ^ __ROR4__(v68, 7) ^ __ROL4__(v68, 14))
           + *(_DWORD *)(a1 + 48)
           + (__ROL4__(*(_DWORD *)(a1 + 68), 15) ^ __ROL4__(*(_DWORD *)(a1 + 68), 13) ^ (*(_DWORD *)(a1 + 68) >> 10));
      *(_DWORD *)(a1 + 76) = v74;
    }
    v49 = v74 + (__ROL4__(v47, 7) ^ __ROR4__(v47, 6) ^ __ROR4__(v47, 11)) + (v40 ^ v47 & (v44 ^ v40)) + v67[9] + v36;
    v50 = v38 + v49;
    v51 = v49 + (v48 & v45 | v42 & (v48 ^ v45)) + (__ROL4__(v48, 10) ^ __ROR4__(v48, 2) ^ __ROR4__(v48, 13));
    if ( v1 )
    {
      v68 += ((v69 >> 3) ^ __ROR4__(v69, 7) ^ __ROL4__(v69, 14))
           + *(_DWORD *)(a1 + 52)
           + (__ROL4__(*(_DWORD *)(a1 + 72), 15) ^ __ROL4__(*(_DWORD *)(a1 + 72), 13) ^ (*(_DWORD *)(a1 + 72) >> 10));
      *(_DWORD *)(a1 + 80) = v68;
    }
    v52 = v68 + (__ROL4__(v50, 7) ^ __ROR4__(v50, 6) ^ __ROR4__(v50, 11)) + (v44 ^ v50 & (v47 ^ v44)) + v67[10] + v40;
    v53 = v42 + v52;
    v54 = v52 + (v51 & v48 | v45 & (v51 ^ v48)) + (__ROL4__(v51, 10) ^ __ROR4__(v51, 2) ^ __ROR4__(v51, 13));
    if ( v1 )
    {
      v69 += ((v70 >> 3) ^ __ROR4__(v70, 7) ^ __ROL4__(v70, 14))
           + *(_DWORD *)(a1 + 56)
           + (__ROL4__(*(_DWORD *)(a1 + 76), 15) ^ __ROL4__(*(_DWORD *)(a1 + 76), 13) ^ (*(_DWORD *)(a1 + 76) >> 10));
      *(_DWORD *)(a1 + 84) = v69;
    }
    v55 = v69 + (__ROL4__(v53, 7) ^ __ROR4__(v53, 6) ^ __ROR4__(v53, 11)) + (v47 ^ v53 & (v50 ^ v47)) + v67[11] + v44;
    v56 = v45 + v55;
    v57 = v55 + (v54 & v51 | v48 & (v54 ^ v51)) + (__ROL4__(v54, 10) ^ __ROR4__(v54, 2) ^ __ROR4__(v54, 13));
    if ( v1 )
    {
      v70 += ((v71 >> 3) ^ __ROR4__(v71, 7) ^ __ROL4__(v71, 14))
           + *(_DWORD *)(a1 + 60)
           + (__ROL4__(*(_DWORD *)(a1 + 80), 15) ^ __ROL4__(*(_DWORD *)(a1 + 80), 13) ^ (*(_DWORD *)(a1 + 80) >> 10));
      *(_DWORD *)(a1 + 88) = v70;
    }
    v58 = v70 + (v50 ^ v56 & (v53 ^ v50)) + v67[12] + v47 + (__ROL4__(v56, 7) ^ __ROR4__(v56, 6) ^ __ROR4__(v56, 11));
    v10 = v48 + v58;
    v8 = v58 + (v57 & v54 | v51 & (v57 ^ v54)) + (__ROL4__(v57, 10) ^ __ROR4__(v57, 2) ^ __ROR4__(v57, 13));
    if ( v1 )
    {
      v71 += ((v73 >> 3) ^ __ROR4__(v73, 7) ^ __ROL4__(v73, 14))
           + *(_DWORD *)(a1 + 64)
           + (__ROL4__(*(_DWORD *)(a1 + 84), 15) ^ __ROL4__(*(_DWORD *)(a1 + 84), 13) ^ (*(_DWORD *)(a1 + 84) >> 10));
      *(_DWORD *)(a1 + 92) = v71;
    }
    v59 = v71 + (__ROL4__(v10, 7) ^ __ROR4__(v10, 6) ^ __ROR4__(v10, 11)) + v67[13] + v50 + (v53 ^ v10 & (v56 ^ v53));
    v9 = v59 + v51;
    v5 = v59 + (v8 & v57 | v54 & (v8 ^ v57)) + (__ROL4__(v8, 10) ^ __ROR4__(v8, 13) ^ __ROR4__(v8, 2));
    if ( v1 )
    {
      v73 += ((v72 >> 3) ^ __ROL4__(v72, 14) ^ __ROR4__(v72, 7))
           + *(_DWORD *)(a1 + 68)
           + ((*(_DWORD *)(a1 + 88) >> 10) ^ __ROL4__(*(_DWORD *)(a1 + 88), 15) ^ __ROL4__(*(_DWORD *)(a1 + 88), 13));
      *(_DWORD *)(a1 + 96) = v73;
    }
    v60 = v73 + (__ROL4__(v9, 7) ^ __ROR4__(v9, 11) ^ __ROR4__(v9, 6)) + (v56 ^ v9 & (v10 ^ v56)) + v67[14] + v53;
    v13 = v60 + v54;
    v7 = v60 + (v5 & v8 | v57 & (v5 ^ v8)) + (__ROL4__(v5, 10) ^ __ROR4__(v5, 13) ^ __ROR4__(v5, 2));
    if ( v1 )
    {
      v72 += *(_DWORD *)(a1 + 72)
           + ((*(_DWORD *)(a1 + 92) >> 10) ^ __ROL4__(*(_DWORD *)(a1 + 92), 15) ^ __ROL4__(*(_DWORD *)(a1 + 92), 13))
           + (__ROL4__(*(_DWORD *)(a1 + 40), 14) ^ __ROR4__(*(_DWORD *)(a1 + 40), 7) ^ (*(_DWORD *)(a1 + 40) >> 3));
      *(_DWORD *)(a1 + 100) = v72;
    }
    v1 += 16;
    v61 = v72 + (__ROL4__(v13, 7) ^ __ROR4__(v13, 11) ^ __ROR4__(v13, 6)) + (v10 ^ v13 & (v9 ^ v10)) + v67[15] + v56;
    v11 = v61 + v57;
    v6 = v61 + (v7 & v5 | v8 & (v7 ^ v5)) + (__ROL4__(v7, 10) ^ __ROR4__(v7, 13) ^ __ROR4__(v7, 2));
    if ( v1 == 64 )
      break;
    v12 = *(_DWORD *)(a1 + 44);
    v67 += 16;
    v74 = *(_DWORD *)(a1 + 76);
    v73 = *(_DWORD *)(a1 + 96);
    i = ((v12 >> 3) ^ __ROR4__(v12, 7) ^ __ROL4__(v12, 14))
      + *(_DWORD *)(a1 + 40)
      + v74
      + (__ROL4__(v73, 15) ^ __ROL4__(v73, 13) ^ (v73 >> 10));
  }
  v62 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 8) + v6);
  v63 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 16) + v5);
  v64 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 20) + v8);
  v65 = _mm_cvtsi32_si128(*(_DWORD *)(a1 + 12) + v7);
  *(_DWORD *)(a1 + 24) += v11;
  *(_DWORD *)(a1 + 28) += v13;
  *(_DWORD *)(a1 + 32) += v9;
  *(_DWORD *)(a1 + 36) += v10;
  *(__m128i *)(a1 + 8) = _mm_unpacklo_epi64(_mm_unpacklo_epi32(v62, v65), _mm_unpacklo_epi32(v63, v64));
  return v76 - __readfsqword(0x28u);
}

