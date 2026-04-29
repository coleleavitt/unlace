__int64 __fastcall sub_8BCB0(__int64 *a1)
{
  __int64 v1; // rax
  const char *v3; // rbp
  __int64 v4; // rbx
  bool v5; // r13
  __m128i v6; // xmm0
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbp
  int v17; // r14d
  char v18; // r13
  unsigned __int64 v19; // rax
  int v20; // ebp
  _DWORD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdi
  __int64 v25; // rax
  unsigned int v26; // ebp
  int v28; // r15d
  unsigned int v29; // ebp
  __int64 v30; // rax
  __int64 v31; // r14
  __int64 v32; // rcx
  char *v33; // rdx
  int v34; // eax
  int v35; // r11d
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // esi
  int v39; // ecx
  __int64 v40; // rcx
  char *v41; // rsi
  _DWORD *v42; // r15
  __int64 v43; // rax
  __int64 v44; // r9
  char *v45; // rax
  __int64 v46; // r14
  __int64 v47; // r13
  int v48; // edx
  int v49; // eax
  __int64 v50; // rdx
  _QWORD *v51; // rbp
  __int16 v52; // cx
  __int64 v53; // rdi
  bool v54; // al
  bool v55; // zf
  __int64 v56; // rbp
  __int64 v57; // rax
  __int64 v58; // rbp
  __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int16 v61; // ax
  __int64 v62; // rcx
  _BYTE *v63; // rdi
  __int64 v64; // rcx
  __m128i si128; // xmm0
  int v66; // [rsp+0h] [rbp-328h]
  __int64 v67; // [rsp+8h] [rbp-320h]
  unsigned int v68; // [rsp+14h] [rbp-314h]
  __int64 v69; // [rsp+20h] [rbp-308h] BYREF
  __m128i v70; // [rsp+28h] [rbp-300h]
  __int64 v71; // [rsp+40h] [rbp-2E8h] BYREF
  __int128 v72; // [rsp+48h] [rbp-2E0h]
  _QWORD v73[3]; // [rsp+60h] [rbp-2C8h] BYREF
  unsigned __int8 v74; // [rsp+78h] [rbp-2B0h]
  __int64 (__fastcall **v75)(); // [rsp+80h] [rbp-2A8h]
  void *src; // [rsp+88h] [rbp-2A0h] BYREF
  __int128 v77; // [rsp+90h] [rbp-298h]
  unsigned __int16 v78; // [rsp+A0h] [rbp-288h] BYREF
  unsigned __int16 v79; // [rsp+A2h] [rbp-286h]
  unsigned __int8 v80; // [rsp+A4h] [rbp-284h]
  unsigned __int8 v81; // [rsp+A5h] [rbp-283h]
  unsigned __int16 v82; // [rsp+A6h] [rbp-282h]
  __int64 v83; // [rsp+A8h] [rbp-280h]
  __int64 v84; // [rsp+B0h] [rbp-278h]
  __int128 v85; // [rsp+B8h] [rbp-270h]
  _BYTE v86[248]; // [rsp+C8h] [rbp-260h] BYREF
  _BYTE v87[264]; // [rsp+1C0h] [rbp-168h] BYREF
  __int64 v88; // [rsp+2C8h] [rbp-60h]
  __int64 v89; // [rsp+2D0h] [rbp-58h]
  char v90; // [rsp+2D8h] [rbp-50h]
  _QWORD v91[9]; // [rsp+2E0h] [rbp-48h] BYREF

  v91[1] = __readfsqword(0x28u);
  v1 = *a1;
  if ( !*a1 || *(_DWORD *)(v1 + 8) != 1 )
  {
    sub_1D740((__int64)"Input source is not local file.\n");
    return 0;
  }
  v3 = ::src;
  if ( *(_QWORD *)(v1 + 24) )
    v3 = *(const char **)(v1 + 16);
  v4 = open_linput(v3, 0);
  if ( !v4 )
  {
    sub_1D740((__int64)"Cannot open file: %s.\n", v3);
    return 0;
  }
  v75 = off_C74C8;
  src = nullptr;
  LODWORD(v73[0]) = 0;
  v90 = 0;
  v77 = 0;
  qlseek(v4, 0, 0);
  if ( qlread(v4, &v78, 28) != 28 )
    goto LABEL_56;
  if ( v78 == 17744 )
    goto LABEL_11;
  if ( v78 != 23126 )
  {
    if ( v78 == 23117 || v78 == 19802 )
    {
      if ( qlread(v4, v91, 8) == 8 && v91[0] == 0x6B6E694C696E55LL )
        v90 = 1;
      qlseek(v4, 60, 0);
      if ( qlread(v4, v73, 4) != 4 )
        goto LABEL_56;
    }
LABEL_11:
    v89 = LODWORD(v73[0]);
    qlseek(v4, LODWORD(v73[0]), 0);
    memset(v87, 0, sizeof(v87));
    qlseek(v4, v89, 0);
    if ( (unsigned __int64)(qlread(v4, v87, 264) - 93) <= 0xAB )
    {
      v5 = *(_DWORD *)v87 == 19536 || *(_DWORD *)v87 == 4542530 || *(_DWORD *)v87 == 17744;
      if ( v5 )
      {
        if ( *(_WORD *)&v87[24] == 523 )
        {
          *(__m128i *)v86 = _mm_load_si128((const __m128i *)v87);
          si128 = _mm_load_si128((const __m128i *)&v87[16]);
          *(_QWORD *)&v86[240] = *(_QWORD *)&v87[256];
          *(__m128i *)&v86[16] = si128;
          *(__m128i *)&v86[32] = _mm_load_si128((const __m128i *)&v87[32]);
          *(__m128i *)&v86[48] = _mm_load_si128((const __m128i *)&v87[48]);
          *(__m128i *)&v86[64] = _mm_load_si128((const __m128i *)&v87[64]);
          *(__m128i *)&v86[80] = _mm_load_si128((const __m128i *)&v87[80]);
          *(__m128i *)&v86[112] = _mm_load_si128((const __m128i *)&v87[128]);
          *(__m128i *)&v86[128] = _mm_load_si128((const __m128i *)&v87[144]);
          *(__m128i *)&v86[144] = _mm_load_si128((const __m128i *)&v87[160]);
          *(__m128i *)&v86[160] = _mm_load_si128((const __m128i *)&v87[176]);
          *(__m128i *)&v86[176] = _mm_load_si128((const __m128i *)&v87[192]);
          *(__m128i *)&v86[192] = _mm_load_si128((const __m128i *)&v87[208]);
          *(__m128i *)&v86[208] = _mm_load_si128((const __m128i *)&v87[224]);
          *(__m128i *)&v86[224] = _mm_load_si128((const __m128i *)&v87[240]);
          *(__m128 *)&v86[96] = _mm_shuffle_ps(
                                  (__m128)_mm_load_si128((const __m128i *)&v87[96]),
                                  *(__m128 *)&v87[112],
                                  136);
        }
        else
        {
          v5 = 0;
          if ( *(_WORD *)&v87[24] <= 0x20Bu )
            v5 = *(_WORD *)&v87[24] == 0 || ((*(_WORD *)&v87[24] - 263) & 0xFFFB) == 0;
          *(__m128i *)v86 = _mm_load_si128((const __m128i *)v87);
          v6 = _mm_load_si128((const __m128i *)&v87[16]);
          *(_QWORD *)&v86[240] = *(_QWORD *)&v87[240];
          *(__m128i *)&v86[16] = v6;
          *(__m128i *)&v86[32] = _mm_load_si128((const __m128i *)&v87[32]);
          *(__m128i *)&v86[48] = _mm_load_si128((const __m128i *)&v87[48]);
          *(__m128i *)&v86[64] = _mm_load_si128((const __m128i *)&v87[64]);
          *(__m128i *)&v86[80] = _mm_load_si128((const __m128i *)&v87[80]);
          *(__m128i *)&v86[96] = _mm_load_si128((const __m128i *)&v87[96]);
          *(__m128i *)&v86[112] = _mm_load_si128((const __m128i *)&v87[112]);
          *(__m128i *)&v86[128] = _mm_load_si128((const __m128i *)&v87[128]);
          *(__m128i *)&v86[144] = _mm_load_si128((const __m128i *)&v87[144]);
          *(__m128i *)&v86[160] = _mm_load_si128((const __m128i *)&v87[160]);
          *(__m128i *)&v86[176] = _mm_load_si128((const __m128i *)&v87[176]);
          *(__m128i *)&v86[192] = _mm_load_si128((const __m128i *)&v87[192]);
          *(__m128i *)&v86[208] = _mm_load_si128((const __m128i *)&v87[208]);
          *(__m128i *)&v86[224] = _mm_load_si128((const __m128i *)&v87[224]);
        }
        if ( (unsigned int)(*(_DWORD *)&v86[116] - 1) <= 0xE )
        {
          v63 = &v86[8 * *(unsigned int *)&v86[116] + 120];
          v64 = (unsigned int)(8 * (16 - *(_DWORD *)&v86[116]));
          *(_QWORD *)&v63[v64 - 8] = 0;
          memset(v63, 0, 8LL * ((unsigned int)(v64 - 1) >> 3));
        }
        v7 = 248;
        if ( *(_WORD *)&v86[24] == 523 )
          v7 = 264;
        v8 = *(unsigned __int16 *)&v86[20] + 24LL;
        v9 = 128;
        if ( v8 >= 0x80 )
          v9 = *(unsigned __int16 *)&v86[20] + 24LL;
        if ( v9 < v7 )
        {
          v10 = 120;
          if ( v7 != 248 )
            v10 = 136;
          if ( v8 >= v10 )
            memset(&v86[8 * (16 - ((v7 - v8 + 7) >> 3)) + 120], 0, (v7 - v8 + 7) & 0xFFFFFFFFFFFFFFF8LL);
        }
        if ( v5 )
        {
          v11 = *(_QWORD *)&v86[48];
          if ( *(_WORD *)&v86[24] != 523 )
            v11 = *(unsigned int *)&v86[52];
          v88 = v11;
LABEL_32:
          v12 = a1[14];
          v13 = a1[13];
          if ( a1[15] < (unsigned __int64)(v12 + 1) )
          {
            v60 = qvector_reserve(a1 + 13, v13, v12 + 1, 120);
            a1[13] = v60;
            v12 = a1[14];
            v13 = v60;
          }
          v14 = (_QWORD *)(v13 + 120 * v12);
          *v14 = 0;
          v14[14] = 0;
          memset(
            (void *)((unsigned __int64)(v14 + 1) & 0xFFFFFFFFFFFFFFF8LL),
            0,
            8LL * (((unsigned int)v14 - (((_DWORD)v14 + 8) & 0xFFFFFFF8) + 120) >> 3));
          v70 = 0;
          v69 = 0;
          v15 = *(unsigned int *)&v86[12];
          ++a1[14];
          if ( (_DWORD)v15 )
          {
            v56 = v15 + (unsigned int)(18 * *(_DWORD *)&v86[16]);
            if ( v56 == qlseek(v4, v56, 0) && qlread(v4, v73, 4) == 4 && LODWORD(v73[0]) > 4 )
            {
              qlseek(v4, -4, 1);
              if ( (unsigned __int8)sub_8B860(v4, v73, 1u, -1, -1) )
              {
                v57 = qalloc((unsigned int)(LODWORD(v73[0]) + 1));
                v58 = v57;
                if ( v57 )
                {
                  v59 = qlread(v4, v57, LODWORD(v73[0]));
                  if ( v59 == LODWORD(v73[0]) )
                  {
                    *(_BYTE *)(v58 + v59) = 0;
                    if ( v69 )
                    {
                      v70.m128i_i64[0] = 0;
                      qfree(v69);
                    }
                    v69 = v58;
                    v70 = _mm_unpacklo_epi64(
                            (__m128i)(unsigned int)(LODWORD(v73[0]) + 1),
                            (__m128i)(unsigned int)(LODWORD(v73[0]) + 1));
                  }
                  else
                  {
                    qfree(v58);
                  }
                }
              }
            }
          }
          v73[1] = a1;
          v73[0] = off_C9448;
          v73[2] = &v69;
          v74 = 0;
          if ( *(_DWORD *)v86 == 23126 )
            LODWORD(v16) = v89 + 40;
          else
            LODWORD(v16) = *(unsigned __int16 *)&v86[20] + (_DWORD)v89 + 24;
          v16 = (int)v16;
          *(_QWORD *)&v77 = 0;
          v72 = 0;
          v17 = *(unsigned __int16 *)&v86[6];
          v71 = 0;
          v18 = *(_DWORD *)&v86[56] <= 0xFFFu && *(_DWORD *)&v86[60] == *(_DWORD *)&v86[56];
          qlseek(v4, (int)v16, 0);
          if ( (int)v16 == -1 )
            v16 = qlseek(v4, 0, 1);
          v19 = qlsize(v4) - v16;
          if ( ((v19 | v16) & 0x8000000000000000LL) != 0LL )
          {
            v17 = 0;
            goto LABEL_43;
          }
          if ( (_WORD)v17 )
          {
            if ( v19 >= 40 * (unsigned __int64)(unsigned __int16)v17 )
              goto LABEL_45;
            v17 = v19 / 0x28;
LABEL_43:
            if ( (unsigned int)sub_172B0() != 1 )
              sub_179E0(0, "AUTOHIDE SESSION\nHIDECANCEL\n%s %llu is incorrect, maximum possible value is %llu%s");
            if ( v17 )
            {
LABEL_45:
              v20 = 0;
              while ( 1 )
              {
                v22 = v72;
                v23 = v71;
                v24 = v72 + 1;
                if ( *((_QWORD *)&v72 + 1) < (unsigned __int64)(v72 + 1) )
                {
                  v25 = qvector_reserve(&v71, v71, v72 + 1, 40);
                  v22 = v72;
                  v71 = v25;
                  v23 = v25;
                  v24 = v72 + 1;
                }
                *(_QWORD *)&v72 = v24;
                v21 = (_DWORD *)(v23 + 40 * v22);
                if ( qlread(v4, v21, 40) != 40 )
                  goto LABEL_97;
                if ( v21[3] == v21[5] )
                {
                  ++v20;
                  v18 &= v21[4] >= v21[2];
                  if ( v20 == v17 )
                  {
LABEL_62:
                    v28 = 512;
                    if ( v18 )
                      v28 = *(_DWORD *)&v86[60];
                    if ( (unsigned __int16)(*(_WORD *)&v86[92] - 10) <= 3u )
                      goto LABEL_111;
                    goto LABEL_65;
                  }
                }
                else
                {
                  ++v20;
                  v18 = 0;
                  if ( v20 == v17 )
                    goto LABEL_62;
                }
              }
            }
            if ( (unsigned __int16)(*(_WORD *)&v86[92] - 10) > 3u && *(_DWORD *)v86 != 23126 )
              goto LABEL_89;
            goto LABEL_115;
          }
          v61 = *(_WORD *)&v86[92] - 10;
          if ( v18 )
          {
            if ( v61 <= 3u )
              goto LABEL_115;
            v28 = *(_DWORD *)&v86[60];
            v17 = 0;
          }
          else
          {
            if ( v61 <= 3u )
            {
LABEL_115:
              if ( *(_DWORD *)v86 == 23126 )
                *(_DWORD *)&v86[80] = 0;
              goto LABEL_89;
            }
            v28 = 512;
            v17 = 0;
          }
LABEL_65:
          if ( *(_DWORD *)v86 == 23126 )
          {
LABEL_111:
            if ( !v17 )
              goto LABEL_115;
            v28 = 1;
          }
          else if ( !v17 )
          {
LABEL_89:
            v46 = qlsize(v4);
            v47 = *(unsigned int *)&v86[80];
            if ( (unsigned __int16)(*(_WORD *)&v86[92] - 10) > 3u )
            {
              if ( *(_DWORD *)&v86[56] == 4096 || !*(_DWORD *)&v86[60] )
              {
                v49 = -512;
                v48 = 511;
              }
              else
              {
                v48 = *(_DWORD *)&v86[60] - 1;
                v49 = -*(_DWORD *)&v86[60];
              }
              v47 = v49 & (unsigned int)(v48 + *(_DWORD *)&v86[80]);
            }
            v50 = v77;
            v51 = src;
            if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
            {
              src = (void *)qvector_reserve(&src, src, v77 + 1, 32);
              v50 = v77;
              v51 = src;
            }
            memmove(v51 + 4, v51, 32 * v50);
            *v51 = 0;
            v51[1] = v47;
            v51[2] = 0;
            *(_QWORD *)&v77 = v77 + 1;
            v51[3] = v46;
LABEL_97:
            if ( v71 )
            {
              *(_QWORD *)&v72 = 0;
              qfree(v71);
            }
            v52 = *(_WORD *)&v86[4];
            v53 = v69;
            v26 = v74;
            v54 = *(_WORD *)&v86[4] == 0x8664;
            v55 = *(_WORD *)&v86[4] == 512;
            *((_BYTE *)a1 + 169) = *(__int16 *)&v86[22] < 0;
            *((_BYTE *)a1 + 168) = v52 == -21916 || v55 || v54;
            if ( v53 )
            {
              v70.m128i_i64[0] = 0;
              qfree(v53);
            }
            goto LABEL_57;
          }
          v29 = 0;
          v66 = -v28;
          v30 = 40LL * v17;
          v31 = 0;
          v67 = v30;
          do
          {
            v40 = v77;
            v41 = (char *)src;
            v42 = (_DWORD *)(v31 + v71);
            v43 = v77 + 1;
            v44 = *(_DWORD *)(v31 + v71 + 20) & (unsigned int)v66;
            if ( *((_QWORD *)&v77 + 1) < (unsigned __int64)(v77 + 1) )
            {
              v68 = *(_DWORD *)(v31 + v71 + 20) & v66;
              v45 = (char *)qvector_reserve(&src, src, v77 + 1, 32);
              v40 = v77;
              src = v45;
              v41 = v45;
              v44 = v68;
              v43 = v77 + 1;
            }
            *(_QWORD *)&v77 = v43;
            v32 = 32 * v40;
            v33 = &v41[v32];
            *(_QWORD *)&v41[v32] = (unsigned int)v42[3];
            v34 = *(_DWORD *)&v86[56];
            if ( !*(_DWORD *)&v86[56] )
              v34 = 1;
            v35 = v42[2];
            if ( !v35 )
              v35 = v42[4];
            v36 = (v34 + v35 - 1) & -v34;
            if ( v36 > v42[4] )
              v36 = v42[4];
            *(_QWORD *)&v41[v32 + 24] = v36;
            v37 = v42[3] + v36;
            if ( (unsigned __int16)(*(_WORD *)&v86[92] - 10) > 3u )
            {
              if ( *(_DWORD *)&v86[56] == 4096 || !*(_DWORD *)&v86[60] )
              {
                v39 = -512;
                v38 = 511;
              }
              else
              {
                v38 = *(_DWORD *)&v86[60] - 1;
                v39 = -*(_DWORD *)&v86[60];
              }
              v37 = v39 & (unsigned int)(v38 + v37);
            }
            *((_QWORD *)v33 + 1) = v37;
            *((_QWORD *)v33 + 2) = v44;
            if ( *(_DWORD *)v86 == 23126 )
              *((_QWORD *)v33 + 2) = v44 + 40 - v82;
            sub_82F20((__int64)v73, (__int64)v42);
            if ( v29 < v42[3] + v42[2] )
              v29 = v42[3] + v42[2];
            v31 += 40;
          }
          while ( v31 != v67 );
          if ( *(_DWORD *)v86 == 23126 )
            *(_DWORD *)&v86[80] = v29;
          if ( !v18 )
            goto LABEL_97;
          goto LABEL_89;
        }
      }
    }
    goto LABEL_56;
  }
  qlseek(v4, LODWORD(v73[0]), 0);
  if ( qlread(v4, &v78, 40) == 40 )
  {
    memset(&v86[8], 0, 0xF0u);
    *(_DWORD *)v86 = v78;
    v62 = v84;
    *(_DWORD *)&v86[4] = v79 | (v80 << 16);
    if ( v79 == 512 || v79 == 0x8664 || v79 == 0xAA64 )
    {
      *(_QWORD *)&v86[40] = v83;
      *(_WORD *)&v86[24] = 523;
      *(_DWORD *)&v86[84] = HIDWORD(v83) + 40 - v82;
      *(_QWORD *)&v86[48] = v84;
    }
    else
    {
      *(_DWORD *)&v86[52] = v84;
      v62 = (unsigned int)v84;
      *(_WORD *)&v86[24] = 267;
      *(_QWORD *)&v86[40] = v83;
      *(_DWORD *)&v86[84] = HIDWORD(v83) + 40 - v82;
    }
    v88 = v62;
    *(_WORD *)&v86[92] = v81;
    *(_OWORD *)&v86[160] = v85;
    *(_QWORD *)&v86[56] = 0x100000001LL;
    v89 = LODWORD(v73[0]);
    goto LABEL_32;
  }
LABEL_56:
  sub_1D740((__int64)"Failed to read PE header from: %s\n", v3);
  v26 = 0;
LABEL_57:
  v75 = off_C74C8;
  if ( src )
  {
    *(_QWORD *)&v77 = 0;
    qfree(src);
  }
  close_linput(v4);
  return v26;
}
