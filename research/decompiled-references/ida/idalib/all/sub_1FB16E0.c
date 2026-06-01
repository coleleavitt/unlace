__int64 __fastcall sub_1FB16E0(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbp
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // r14
  _QWORD *v9; // r13
  __int64 (__fastcall *v10)(__int64); // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned int *v13; // rax
  __int64 *v14; // r14
  unsigned int *i; // rsi
  _QWORD *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rbx
  unsigned __int64 v19; // rsi
  _DWORD *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdx
  char v23; // cl
  const __m128i *v24; // r10
  __int64 v25; // rax
  _QWORD *v26; // r8
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // r11
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // rdx
  const __m128i *v33; // rax
  __m128 v34; // xmm0
  __m128 v35; // xmm4
  __m128i v36; // xmm2
  __m128i v37; // xmm1
  __m128i v38; // xmm0
  __m128i v39; // xmm2
  __m128i v40; // xmm0
  __m128i v41; // xmm2
  __m128i v42; // xmm3
  __m128i v43; // xmm1
  __m128i v44; // xmm3
  unsigned __int64 v45; // rax
  __int64 *v46; // rsi
  _BYTE *v47; // rcx
  __int64 v48; // rdi
  __int64 v49; // r14
  __int64 v50; // r12
  __int64 (__fastcall *v51)(__int64); // rax
  __int64 v52; // rax
  _QWORD *v53; // r12
  __int64 v54; // rax
  unsigned int v55; // eax
  int v56; // edx
  unsigned int v57; // ecx
  int v58; // r15d
  __int64 v59; // r12
  unsigned int v61; // esi
  __int64 v62; // r14
  unsigned int v63; // eax
  int v64; // ecx
  unsigned int v65; // r9d
  unsigned int v66; // ecx
  int v67; // r9d
  char v68; // al
  __int64 v69; // rdx
  _QWORD *v70; // r10
  __int64 v71; // rcx
  int v72; // edx
  unsigned int v73; // ecx
  unsigned int v74; // r13d
  unsigned __int64 v75; // rbp
  unsigned int v76; // r15d
  unsigned int v77; // ecx
  int v78; // eax
  unsigned int v79; // r10d
  unsigned int v80; // r10d
  int v81; // eax
  _QWORD *v82; // r14
  __int64 v83; // rcx
  _QWORD *v84; // r8
  __int64 v85; // rcx
  int v86; // edx
  unsigned int v87; // eax
  unsigned int v88; // ecx
  __int64 v89; // rdx
  unsigned int v90; // esi
  _QWORD *v91; // r11
  int v92; // r8d
  __int64 v93; // rcx
  __int64 v94; // rax
  int v95; // [rsp+0h] [rbp-88h]
  _QWORD *v96; // [rsp+0h] [rbp-88h]
  unsigned int v97; // [rsp+8h] [rbp-80h]
  __int64 v98; // [rsp+10h] [rbp-78h]
  _QWORD *v99; // [rsp+10h] [rbp-78h]
  unsigned int v100; // [rsp+18h] [rbp-70h]
  _QWORD *v101; // [rsp+18h] [rbp-70h]
  _QWORD *v102; // [rsp+18h] [rbp-70h]
  _QWORD *v103; // [rsp+18h] [rbp-70h]
  __int64 v104; // [rsp+20h] [rbp-68h]
  __int64 v105; // [rsp+28h] [rbp-60h]
  __int64 v106; // [rsp+28h] [rbp-60h]
  __int64 v107; // [rsp+30h] [rbp-58h]
  __int64 v108; // [rsp+38h] [rbp-50h]
  unsigned int v109; // [rsp+38h] [rbp-50h]
  const __m128i *v110; // [rsp+40h] [rbp-48h]
  int v111; // [rsp+40h] [rbp-48h]
  int v112; // [rsp+40h] [rbp-48h]

  v3 = a3;
  v4 = a1;
  LODWORD(v5) = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v7 = *(_QWORD *)(v6 + 32);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 8LL);
  if ( v7 && (unsigned __int8)sub_227D8A0(v7) )
  {
    v9 = *(_QWORD **)(v6 + 32);
    if ( !v9 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v6 + 32)) )
LABEL_142:
      BUG();
    v10 = *(__int64 (__fastcall **)(__int64))(*v9 + 80LL);
    if ( v10 == sub_A1EA60 )
      v11 = v9[11];
    else
      v11 = v10((__int64)v9);
    v8 += v9[4] - v9[2] + v11;
  }
  v12 = *(unsigned int *)(v6 + 48) + 8 * v8;
  v13 = *(unsigned int **)(v4 + 168);
  v14 = *(__int64 **)(v4 + 16);
  v104 = v12;
  for ( i = &v13[*(unsigned int *)(v4 + 176)]; i != v13; ++v13 )
  {
    v16 = (_QWORD *)(*v14 + 8LL * *v13);
    if ( *v16 )
    {
      *v16 = v12 - *v16;
      v14 = *(__int64 **)(v4 + 16);
    }
  }
  v17 = *(_QWORD *)(v4 + 8);
  *(_DWORD *)(v4 + 176) = 0;
  v18 = *(_QWORD *)(v17 + 16);
  if ( (_DWORD)v3 )
  {
    LODWORD(v19) = v3;
    v98 = *v14;
    v97 = *((_DWORD *)v14 + 2);
    v20 = *(_DWORD **)(*(_QWORD *)(v18 + 64) + 16LL * (unsigned int)(v3 - 4));
    sub_A1FEC0(*(_QWORD *)(v17 + 16), v3, *(_DWORD *)(v18 + 56));
    v95 = v20[2];
    v21 = *(_QWORD *)v20;
    if ( (*(_BYTE *)(*(_QWORD *)v20 + 8LL) & 1) == 0 )
    {
      v22 = (*(_BYTE *)(v21 + 8) >> 1) & 7;
      switch ( (_BYTE)v22 )
      {
        case 2:
          if ( *(_QWORD *)v21 )
            sub_A1FFA0(v18, (unsigned int)v5, *(_QWORD *)v21);
          break;
        case 4:
          if ( (unsigned __int8)(v5 - 97) <= 0x19u )
          {
            v90 = (char)v5 - 97;
          }
          else if ( (unsigned __int8)(v5 - 65) <= 0x19u )
          {
            v90 = (char)v5 - 39;
          }
          else
          {
            v90 = (char)v5 + 4;
            if ( (unsigned __int8)(v5 - 48) > 9u )
              v90 = ((_BYTE)v5 != 46) + 62;
          }
          sub_1FB14E0(v18, v90);
          break;
        case 1:
          if ( *(_QWORD *)v21 )
            sub_A1FEC0(v18, v5, *(_QWORD *)v21);
          break;
        default:
          goto LABEL_86;
      }
    }
    LODWORD(v5) = 1;
    v107 = v97;
    if ( v95 != 1 )
    {
      v105 = v4;
      v3 = v18;
      LODWORD(v18) = 0;
      while ( 1 )
      {
        v22 = *(_QWORD *)v20 + 16LL * (unsigned int)v5;
        if ( (*(_BYTE *)(v22 + 8) & 1) == 0 )
        {
          v23 = (*(_BYTE *)(v22 + 8) >> 1) & 7;
          if ( v23 == 3 )
          {
            v5 = (unsigned int)(v5 + 1);
            v62 = *(_QWORD *)v20 + 16 * v5;
            sub_1FB1590(v3, v97 - v18);
            if ( v97 != (_DWORD)v18 )
            {
              while ( 1 )
              {
                v19 = *(_QWORD *)(v98 + 8LL * (unsigned int)v18);
                v68 = (*(_BYTE *)(v62 + 8) >> 1) & 7;
                switch ( v68 )
                {
                  case 2:
                    v22 = *(_QWORD *)v62;
                    if ( *(_QWORD *)v62 )
                      sub_A1FFA0(v3, v19, v22);
                    break;
                  case 4:
                    v22 = (unsigned int)(v19 - 97);
                    if ( (unsigned __int8)(v19 - 97) <= 0x19u )
                    {
                      v63 = (char)v19 - 97;
                    }
                    else
                    {
                      v22 = (unsigned int)(v19 - 65);
                      if ( (unsigned __int8)(v19 - 65) <= 0x19u )
                      {
                        v63 = (char)v19 - 39;
                      }
                      else
                      {
                        v22 = (unsigned int)(v19 - 48);
                        v63 = (char)v19 + 4;
                        if ( (unsigned __int8)(v19 - 48) > 9u )
                          v63 = ((_BYTE)v19 != 46) + 62;
                      }
                    }
                    v64 = *(_DWORD *)(v3 + 48);
                    v65 = v63 << v64;
                    v66 = v64 + 6;
                    v67 = *(_DWORD *)(v3 + 52) | v65;
                    *(_DWORD *)(v3 + 52) = v67;
                    if ( v66 > 0x1F )
                    {
                      v70 = *(_QWORD **)(v3 + 24);
                      v71 = v70[1];
                      if ( (unsigned __int64)(v71 + 4) > v70[2] )
                      {
                        v109 = v63;
                        v111 = v67;
                        v102 = *(_QWORD **)(v3 + 24);
                        sub_2236E10(v102, v70 + 3, v71 + 4, 1);
                        v70 = v102;
                        v67 = v111;
                        v63 = v109;
                        v71 = v102[1];
                      }
                      *(_DWORD *)(*v70 + v71) = v67;
                      v72 = *(_DWORD *)(v3 + 48);
                      v73 = 0;
                      v70[1] += 4LL;
                      if ( v72 )
                        v73 = v63 >> (32 - v72);
                      *(_DWORD *)(v3 + 52) = v73;
                      v22 = ((_BYTE)v72 + 6) & 0x1F;
                      *(_DWORD *)(v3 + 48) = v22;
                    }
                    else
                    {
                      *(_DWORD *)(v3 + 48) = v66;
                    }
                    break;
                  case 1:
                    v22 = *(_QWORD *)v62;
                    if ( *(_QWORD *)v62 )
                      sub_A1FEC0(v3, v19, v22);
                    break;
                  default:
                    goto LABEL_86;
                }
                LODWORD(v18) = v18 + 1;
                if ( v97 == (_DWORD)v18 )
                  goto LABEL_70;
              }
            }
            goto LABEL_70;
          }
          if ( v23 == 5 )
          {
            sub_1FB1590(v3, v97 - v18);
            v24 = (const __m128i *)(v98 + 8LL * (unsigned int)v18);
            v25 = 8LL * (unsigned int)v18;
            if ( *(_DWORD *)(v3 + 48) )
            {
              v91 = *(_QWORD **)(v3 + 24);
              v92 = *(_DWORD *)(v3 + 52);
              v93 = v91[1];
              if ( (unsigned __int64)(v93 + 4) > v91[2] )
              {
                v112 = *(_DWORD *)(v3 + 52);
                v103 = *(_QWORD **)(v3 + 24);
                sub_2236E10(v103, v91 + 3, v93 + 4, 1);
                v91 = v103;
                v24 = (const __m128i *)(v98 + 8LL * (unsigned int)v18);
                v92 = v112;
                v25 = 8LL * (unsigned int)v18;
                v93 = v103[1];
              }
              *(_DWORD *)(*v91 + v93) = v92;
              v91[1] += 4LL;
              *(_QWORD *)(v3 + 48) = 0;
            }
            v26 = *(_QWORD **)(v3 + 24);
            v27 = 8 * (v107 - (unsigned int)v18);
            v28 = v26[1];
            v29 = v27 >> 3;
            v30 = (v27 >> 3) + v28;
            if ( v30 > v26[2] )
            {
              v110 = v24;
              v108 = v25;
              v101 = *(_QWORD **)(v3 + 24);
              sub_2236E10(v101, v26 + 3, v30, 1);
              v26 = v101;
              v29 = v27 >> 3;
              v24 = v110;
              v25 = v108;
              v28 = v101[1];
              v30 = (v27 >> 3) + v28;
            }
            v31 = *v26 + v28;
            if ( v27 > 0 )
            {
              if ( ((unsigned __int64)v24 >= *v26 + v30 || v31 >= v98 + v27 + v25) && v27 > 120 )
              {
                v32 = v31;
                v33 = v24;
                do
                {
                  v34 = (__m128)_mm_loadu_si128(v33);
                  v35 = (__m128)_mm_loadu_si128(v33 + 1);
                  v32 += 16LL;
                  v33 += 8;
                  v36 = (__m128i)_mm_shuffle_ps(v34, v35, 136);
                  v37 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v33 - 6), (__m128)_mm_loadu_si128(v33 - 5), 136);
                  v38 = _mm_unpacklo_epi16(v36, v37);
                  v39 = _mm_unpackhi_epi16(v36, v37);
                  v40 = _mm_unpacklo_epi16(_mm_unpacklo_epi16(v38, v39), _mm_unpackhi_epi16(v38, v39));
                  v41 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v33 - 2), (__m128)_mm_loadu_si128(v33 - 1), 136);
                  v42 = (__m128i)_mm_shuffle_ps((__m128)_mm_loadu_si128(v33 - 4), (__m128)_mm_loadu_si128(v33 - 3), 136);
                  v43 = _mm_unpacklo_epi16(v42, v41);
                  v44 = _mm_unpackhi_epi16(v42, v41);
                  *(__m128i *)(v32 - 16) = _mm_packus_epi16(
                                             _mm_and_si128(v40, (__m128i)xmmword_23A8D80),
                                             _mm_and_si128(
                                               _mm_unpacklo_epi16(
                                                 _mm_unpacklo_epi16(v43, v44),
                                                 _mm_unpackhi_epi16(v43, v44)),
                                               (__m128i)xmmword_23A8D80));
                }
                while ( v31 + (v29 & 0xFFFFFFFFFFFFFFF0LL) != v32 );
                v45 = v29 - (v29 & 0xFFFFFFFFFFFFFFF0LL);
                v46 = &v24->m128i_i64[v29 & 0xFFFFFFFFFFFFFFF0LL];
                v47 = (_BYTE *)((v29 & 0xFFFFFFFFFFFFFFF0LL) + v31);
                if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != v29 )
                {
                  *v47 = *v46;
                  if ( v45 != 1 )
                  {
                    v47[1] = v46[1];
                    if ( v45 != 2 )
                    {
                      v47[2] = v46[2];
                      if ( v45 != 3 )
                      {
                        v47[3] = v46[3];
                        if ( v45 != 4 )
                        {
                          v47[4] = v46[4];
                          if ( v45 != 5 )
                          {
                            v47[5] = v46[5];
                            if ( v45 != 6 )
                            {
                              v47[6] = v46[6];
                              if ( v45 != 7 )
                              {
                                v47[7] = v46[7];
                                if ( v45 != 8 )
                                {
                                  v47[8] = v46[8];
                                  if ( v45 != 9 )
                                  {
                                    v47[9] = v46[9];
                                    if ( v45 != 10 )
                                    {
                                      v47[10] = v46[10];
                                      if ( v45 != 11 )
                                      {
                                        v47[11] = v46[11];
                                        if ( v45 != 12 )
                                        {
                                          v47[12] = v46[12];
                                          if ( v45 != 13 )
                                          {
                                            v47[13] = v46[13];
                                            if ( v45 != 14 )
                                              v47[14] = v46[14];
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              else
              {
                v94 = 0;
                do
                {
                  *(_BYTE *)(v31 + v94) = v24->m128i_i64[v94];
                  ++v94;
                }
                while ( v29 - v94 > 0 );
              }
              v30 = v29 + v26[1];
            }
            v26[1] = v30;
            while ( 1 )
            {
              v48 = *(_QWORD *)(v3 + 32);
              v49 = *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8LL);
              if ( v48 && (unsigned __int8)sub_227D8A0(v48) )
              {
                v50 = *(_QWORD *)(v3 + 32);
                if ( !v50 || !(unsigned __int8)sub_227D8A0(*(_QWORD *)(v3 + 32)) )
                  goto LABEL_142;
                v51 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v50 + 80LL);
                if ( v51 == sub_A1EA60 )
                  v52 = *(_QWORD *)(v50 + 88);
                else
                  LOBYTE(v52) = v51(v50);
                LOBYTE(v49) = v49 + *(_BYTE *)(v50 + 32) - *(_BYTE *)(v50 + 16) + v52;
              }
              if ( (v49 & 3) == 0 )
                goto LABEL_70;
              v53 = *(_QWORD **)(v3 + 24);
              v54 = v53[1];
              if ( (unsigned __int64)(v54 + 1) > v53[2] )
              {
                sub_2236E10(*(_QWORD *)(v3 + 24), v53 + 3, v54 + 1, 1);
                v54 = v53[1];
              }
              *(_BYTE *)(*v53 + v54) = 0;
              ++v53[1];
            }
          }
          v19 = *(_QWORD *)(v98 + 8LL * (unsigned int)v18);
          if ( v23 == 2 )
          {
            v89 = *(_QWORD *)v22;
            if ( v89 )
              sub_A1FFA0(v3, v19, v89);
          }
          else if ( v23 == 4 )
          {
            if ( (unsigned __int8)(v19 - 97) <= 0x19u )
            {
              v61 = (char)v19 - 97;
            }
            else if ( (unsigned __int8)(v19 - 65) <= 0x19u )
            {
              v61 = (char)v19 - 39;
            }
            else if ( (unsigned __int8)(v19 - 48) <= 9u )
            {
              v61 = (char)v19 + 4;
            }
            else
            {
              v61 = ((_BYTE)v19 != 46) + 62;
            }
            sub_1FB14E0(v3, v61);
          }
          else
          {
LABEL_86:
            v69 = *(_QWORD *)v22;
            if ( v69 )
              sub_A1FEC0(v3, v19, v69);
          }
        }
        LODWORD(v18) = v18 + 1;
LABEL_70:
        LODWORD(v5) = v5 + 1;
        if ( v95 == (_DWORD)v5 )
        {
          v4 = v105;
          break;
        }
      }
    }
  }
  else
  {
    v74 = *((_DWORD *)v14 + 2);
    sub_A1FEC0(*(_QWORD *)(v17 + 16), 3u, *(_DWORD *)(v18 + 56));
    sub_1FB1590(v18, v5);
    sub_1FB1590(v18, v74);
    if ( v74 )
    {
      v99 = v14;
      v106 = v4;
      v59 = 0;
      do
      {
        v75 = *(_QWORD *)(*v99 + v59);
        v55 = v75;
        if ( v75 == (unsigned int)v75 )
        {
          sub_1FB1590(v18, v75);
        }
        else
        {
          v76 = *(_DWORD *)(v18 + 52);
          v77 = *(_DWORD *)(v18 + 48);
          if ( v75 > 0x1F )
          {
            do
            {
              v80 = v75 & 0x1F | 0x20;
              v81 = v80 << v77;
              v77 += 6;
              v76 |= v81;
              *(_DWORD *)(v18 + 52) = v76;
              if ( v77 > 0x1F )
              {
                v82 = *(_QWORD **)(v18 + 24);
                v83 = v82[1];
                if ( (unsigned __int64)(v83 + 4) > v82[2] )
                {
                  sub_2236E10(*(_QWORD *)(v18 + 24), v82 + 3, v83 + 4, 1);
                  v83 = v82[1];
                  v80 = v75 & 0x1F | 0x20;
                }
                *(_DWORD *)(*v82 + v83) = v76;
                v78 = *(_DWORD *)(v18 + 48);
                v76 = 0;
                v82[1] += 4LL;
                v79 = v80 >> (32 - v78);
                if ( v78 )
                  v76 = v79;
                v77 = ((_BYTE)v78 + 6) & 0x1F;
                *(_DWORD *)(v18 + 52) = v76;
              }
              v75 >>= 5;
              *(_DWORD *)(v18 + 48) = v77;
            }
            while ( v75 > 0x1F );
            v55 = v75;
          }
          v56 = v55 << v77;
          v57 = v77 + 6;
          v58 = v56 | v76;
          *(_DWORD *)(v18 + 52) = v58;
          if ( v57 > 0x1F )
          {
            v84 = *(_QWORD **)(v18 + 24);
            v85 = v84[1];
            if ( (unsigned __int64)(v85 + 4) > v84[2] )
            {
              v100 = v55;
              v96 = *(_QWORD **)(v18 + 24);
              sub_2236E10(v96, v84 + 3, v85 + 4, 1);
              v84 = v96;
              v55 = v100;
              v85 = v96[1];
            }
            *(_DWORD *)(*v84 + v85) = v58;
            v86 = *(_DWORD *)(v18 + 48);
            v84[1] += 4LL;
            v87 = v55 >> (32 - v86);
            v88 = 0;
            if ( v86 )
              v88 = v87;
            *(_DWORD *)(v18 + 52) = v88;
            *(_DWORD *)(v18 + 48) = ((_BYTE)v86 + 6) & 0x1F;
          }
          else
          {
            *(_DWORD *)(v18 + 48) = v57;
          }
        }
        v59 += 8;
      }
      while ( 8LL * (v74 - 1) + 8 != v59 );
      v4 = v106;
    }
  }
  sub_1FCF3C0(v4);
  return v104;
}
