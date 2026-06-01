char __fastcall sub_6A500(unsigned int *a1, _UNKNOWN ***a2)
{
  __int64 v3; // rcx
  __int64 v4; // rdx
  unsigned int v5; // eax
  int v6; // ebp
  __int64 v7; // rbx
  bool v8; // zf
  int v9; // eax
  __int64 v10; // r14
  unsigned __int64 v11; // rdi
  _DWORD *v12; // rax
  char v13; // r15
  __int64 v14; // r12
  _DWORD *v15; // rdx
  char v16; // al
  int v17; // r12d
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  char v21; // al
  __int64 v23; // rdi
  unsigned __int64 *v24; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 *v26; // rax
  unsigned __int64 v27; // rbp
  __int64 v28; // rax
  int *v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // r15
  __int64 v33; // rax
  _DWORD *v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rdx
  unsigned int *v43; // rax
  __int64 v44; // rax
  int v45; // eax
  int v46; // edx
  unsigned int v47; // eax
  void *v48; // r14
  __int64 v49; // rdx
  unsigned __int64 v50; // rbp
  __int64 v51; // rdi
  __m128i si128; // xmm0
  int v53; // ebp
  unsigned int *v54; // r14
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rbp
  __int64 v59; // rsi
  int v60; // eax
  int v61; // eax
  char v62; // al
  __int64 v63; // rax
  _DWORD *v64; // rsi
  void *v65; // rax
  int *v66; // rax
  int v67; // eax
  int v68; // edx
  int *v69; // rax
  int v70; // eax
  _QWORD *v71; // rdi
  _QWORD *v72; // rdi
  _QWORD *v73; // r14
  _QWORD *v74; // rdi
  _QWORD *v75; // r14
  _QWORD *v76; // rdi
  __int64 v77; // rdx
  _QWORD *v78; // rbx
  __int64 (__fastcall *v79)(_QWORD *); // rax
  __int64 v80; // rbp
  __int64 v81; // rdi
  __int64 v82; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  char v84; // [rsp+23h] [rbp-85h]
  int v85; // [rsp+24h] [rbp-84h]
  __int64 v86; // [rsp+28h] [rbp-80h]
  __int64 v87; // [rsp+30h] [rbp-78h]
  bool v88; // [rsp+3Fh] [rbp-69h]
  _UNKNOWN **v89; // [rsp+40h] [rbp-68h] BYREF
  int v90; // [rsp+48h] [rbp-60h]
  _UNKNOWN ***v91; // [rsp+50h] [rbp-58h] BYREF
  __int128 v92; // [rsp+58h] [rbp-50h]
  unsigned __int64 v93; // [rsp+68h] [rbp-40h]

  v93 = __readfsqword(0x28u);
  v84 = sub_69F70((__int64)a1);
  v4 = *a1;
  if ( (v4 & 0x400) != 0 )
  {
    v5 = a1[16];
    do
    {
      BYTE1(v4) &= ~4u;
      *a1 = v4;
      if ( (int)(v5 - 1) <= 1 )
        break;
      v6 = 1;
      do
      {
        v7 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL * v6);
        if ( (unsigned int)sub_A8320(v7) )
        {
          v8 = *(_QWORD *)(v7 + 48) == 0;
          v84 = 1;
          if ( v8 )
          {
            v6 = 1;
            sub_69F70((__int64)a1);
            goto LABEL_29;
          }
        }
        v87 = *(_QWORD *)(v7 + 376);
        if ( (_DWORD)v87 != 1
          || (v9 = *(_DWORD *)(v7 + 76), v9 == 5)
          || (v91 = nullptr, v92 = 0, !(v88 = v9 != 1 && v9 != 6)) )
        {
          ++v6;
          goto LABEL_29;
        }
        v10 = v7;
        v11 = 0;
        v12 = nullptr;
        v13 = 0;
        v14 = 0;
        while ( 1 )
        {
          v15 = &v12[v11];
          v3 = *(unsigned int *)(v10 + 72);
          if ( v15 != v12 )
          {
            while ( (_DWORD)v3 != *v12 )
            {
              if ( v15 == ++v12 )
                goto LABEL_16;
            }
            if ( v15 != v12 )
              break;
          }
LABEL_16:
          if ( v11 && *(_DWORD *)(v10 + 352) != 1 )
            break;
          if ( v13 && *(int *)(v10 + 376) > 1 )
            break;
          a2 = (_UNKNOWN ***)v10;
          v16 = sub_655B0(v7, v10);
          v11 = v92;
          if ( !v16 )
            break;
          v17 = *(_DWORD *)(v10 + 72);
          a2 = v91;
          if ( *((_QWORD *)&v92 + 1) < (unsigned __int64)(v92 + 1) )
          {
            v91 = (_UNKNOWN ***)qvector_reserve((__int64)&v91, (__int64)v91, v92 + 1, 4);
            v11 = v92;
            a2 = v91;
          }
          *((_DWORD *)a2 + v11) = v17;
          v8 = *(_DWORD *)(v10 + 76) == 3;
          v11 = v92 + 1;
          *(_QWORD *)&v92 = v92 + 1;
          if ( !v8
            || *(_DWORD *)(v10 + 376) != 1
            || (v3 = *(unsigned int *)(v10 + 72),
                v18 = **(int **)(v10 + 368),
                v13 |= (_DWORD)v3 + 1 != (_DWORD)v18,
                v19 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8 * v18),
                v20 = *(_DWORD *)(v19 + 76),
                v20 == 1)
            || v20 == 6 )
          {
            v14 = v10;
            break;
          }
          v14 = v10;
          v12 = v91;
          v10 = v19;
        }
        if ( v11 > 1 )
        {
          v24 = *(unsigned __int64 **)(v7 + 424);
          if ( !v24 )
            goto LABEL_125;
          v25 = *v24;
          if ( !*(_QWORD *)(v7 + 432) )
          {
            *v24 = *v24 & 3 | (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(v7 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(v7 + 424),
                                                          (__m128i)*(unsigned __int64 *)(v7 + 424));
            **(_QWORD **)(v7 + 424) &= ~1uLL;
            **(_QWORD **)(v7 + 424) |= 2uLL;
            goto LABEL_41;
          }
          v75 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (*(_BYTE *)(v25 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_124;
          v76 = (_QWORD *)v75[1];
          if ( (*(_BYTE *)v76 & 2) != 0 )
          {
            v71 = (_QWORD *)v75[2];
            if ( (*(_BYTE *)v71 & 2) != 0 )
              goto LABEL_142;
          }
          else
          {
            sub_65F60(v76);
            v71 = (_QWORD *)v75[2];
            if ( (*(_BYTE *)v71 & 2) != 0 )
            {
              if ( (*(_BYTE *)v75 & 2) == 0 )
              {
LABEL_142:
                sub_312B80(v75 + 5);
                *v75 |= 2uLL;
              }
LABEL_121:
              if ( v25 > 3 )
                qfree(v25 & 0xFFFFFFFFFFFFFFFCLL);
              v24 = *(unsigned __int64 **)(v7 + 424);
              v25 = *v24;
LABEL_124:
              *v24 = v25 & 3 | (unsigned __int64)v24 & 0xFFFFFFFFFFFFFFFCLL;
              *(__m128i *)(*(_QWORD *)(v7 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                            (__m128i)*(unsigned __int64 *)(v7 + 424),
                                                            (__m128i)*(unsigned __int64 *)(v7 + 424));
              **(_QWORD **)(v7 + 424) &= ~1uLL;
              **(_QWORD **)(v7 + 424) |= 2uLL;
LABEL_125:
              *(_QWORD *)(v7 + 432) = 0;
LABEL_41:
              v26 = *(unsigned __int64 **)(v7 + 456);
              *(_BYTE *)(v7 + 440) = 1;
              if ( !v26 )
                goto LABEL_132;
              v27 = *v26;
              if ( !*(_QWORD *)(v7 + 464) )
              {
                *v26 = *v26 & 3 | (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(*(_QWORD *)(v7 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                              (__m128i)*(unsigned __int64 *)(v7 + 456),
                                                              (__m128i)*(unsigned __int64 *)(v7 + 456));
                **(_QWORD **)(v7 + 456) &= ~1uLL;
                **(_QWORD **)(v7 + 456) |= 2uLL;
LABEL_44:
                v28 = *(_QWORD *)(v7 + 64);
                *(_BYTE *)(v7 + 472) = 1;
                v84 = 0;
                *(_DWORD *)(v28 + 4) &= ~8u;
                v29 = *(int **)(v7 + 368);
                v86 = -1;
                v30 = *v29;
                v31 = *((_QWORD *)a1 + 66);
                v85 = -1;
                v32 = *(_QWORD *)(v31 + 8 * v30);
                if ( !v32 )
                {
LABEL_88:
                  v63 = *(_QWORD *)(v7 + 48);
                  if ( v63 )
                  {
                    if ( (*(_BYTE *)(v63 + 4) & 0x40) != 0 )
                    {
                      v3 = *(_QWORD *)(v7 + 56);
                      if ( *(_DWORD *)v3 == 55 && v3 == *(_QWORD *)(v63 + 8) )
                      {
                        v77 = *(_QWORD *)(v63 + 24) + 1LL;
                        if ( v77 == *(_QWORD *)(v3 + 24) )
                          *(_QWORD *)(v63 + 24) = v77;
                      }
                    }
                  }
                  if ( v84 )
                  {
                    sub_69F70((__int64)a1);
                    v23 = (__int64)v91;
                    v6 = v87;
                  }
                  else
                  {
                    v23 = (__int64)v91;
                    v6 = v87;
                    v84 = v88;
                  }
                  goto LABEL_36;
                }
                while ( 2 )
                {
                  if ( *(int *)(v32 + 352) > 1 )
                    goto LABEL_88;
                  v33 = *(_QWORD *)(v32 + 376);
                  if ( (_DWORD)v33 == 1 )
                  {
                    v64 = *(_DWORD **)(v7 + 56);
                    v82 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL * **(int **)(v32 + 368));
                    if ( v64 && *v64 == 55 )
                      goto LABEL_51;
                  }
                  else
                  {
                    if ( v14 != v32 )
                    {
                      if ( !under_debugger )
                        sub_383060(52027);
                      goto LABEL_165;
                    }
                    v34 = *(_DWORD **)(v7 + 56);
                    if ( (int)v33 > 0 )
                    {
                      v82 = *(_QWORD *)(*((_QWORD *)a1 + 66) + 8LL * **(int **)(v14 + 368));
                      if ( v34 )
                      {
                        if ( *v34 == 55 )
                          goto LABEL_51;
LABEL_163:
                        v66 = *(int **)(v32 + 56);
                        if ( v66 )
                        {
LABEL_102:
                          v67 = *v66;
                          if ( (unsigned int)(v67 - 54) > 1 && v67 != 58 )
                            goto LABEL_104;
LABEL_53:
                          v35 = v32;
                          if ( !(unsigned __int8)sub_655B0(v7, v32) )
                          {
                            if ( !under_debugger )
                              sub_383060(52728);
                            goto LABEL_165;
                          }
                          v37 = *(_QWORD *)(v7 + 320);
                          if ( v37 < *(_QWORD *)(v32 + 320) )
                            v37 = *(_QWORD *)(v32 + 320);
                          *(_QWORD *)(v7 + 320) = v37;
                          v38 = *(_QWORD *)(v7 + 328);
                          if ( v38 > *(_QWORD *)(v32 + 328) )
                            v38 = *(_QWORD *)(v32 + 328);
                          *(_QWORD *)(v7 + 328) = v38;
                          v39 = *(_QWORD *)(v7 + 336);
                          if ( v39 > *(_QWORD *)(v32 + 336) )
                            v39 = *(_QWORD *)(v32 + 336);
                          *(_QWORD *)(v7 + 336) = v39;
                          if ( *(_QWORD *)(v7 + 512) == *(_QWORD *)(v32 + 512) )
                          {
                            v40 = *(_QWORD *)(v7 + 520);
                            if ( v40 > *(_QWORD *)(v32 + 520) )
                              v40 = *(_QWORD *)(v32 + 520);
                            *(_QWORD *)(v7 + 520) = v40;
                          }
                          v41 = *(_QWORD *)(v7 + 56);
                          v42 = *(_QWORD *)(v32 + 48);
                          if ( v41 )
                            *(_QWORD *)(v41 + 8) = v42;
                          else
                            *(_QWORD *)(v7 + 48) = v42;
                          v43 = *(unsigned int **)(v32 + 48);
                          if ( v43 )
                          {
                            v35 = *v43;
                            *((_QWORD *)v43 + 2) = *(_QWORD *)(v7 + 56);
                            v44 = *(_QWORD *)(v32 + 56);
                            *(_QWORD *)(v7 + 56) = v44;
                            if ( *(_DWORD *)v44 == 55 )
                              v86 = *(_QWORD *)(v44 + 24);
                            if ( *(_QWORD *)(v7 + 40) == *(_QWORD *)(v32 + 32) && (*(_BYTE *)(v32 + 24) & 2) == 0 )
                              *(_QWORD *)(v7 + 40) = *(_QWORD *)(v32 + 40);
                            *(_OWORD *)(v32 + 48) = 0;
                            v45 = *(_DWORD *)(v7 + 24);
                            HIWORD(v46) = HIWORD(v45);
                            if ( (_DWORD)v35 != 55 )
                            {
                              LOBYTE(v46) = v45 | 0x80;
                              BYTE1(v46) = BYTE1(v45) & 0xFD;
                              v45 = v46;
                            }
                          }
                          else if ( *(_QWORD *)(v32 + 32) != *(_QWORD *)(v7 + 40) || (*(_BYTE *)(v32 + 24) & 2) != 0 )
                          {
                            *(_QWORD *)(v32 + 56) = 0;
                            v45 = *(_DWORD *)(v7 + 24);
                          }
                          else
                          {
                            *(_QWORD *)(v7 + 40) = *(_QWORD *)(v32 + 40);
                            *(_OWORD *)(v32 + 48) = 0;
                            v45 = *(_DWORD *)(v7 + 24);
                          }
                          v47 = v45 & 0xFFFFFFF7;
                          v48 = nullptr;
                          *(_DWORD *)(v7 + 24) = v47;
                          v49 = v47;
                          *(_DWORD *)(v7 + 24) = v47 | *(_DWORD *)(v32 + 24) & 0x158 | 0x40;
                          v50 = *(_QWORD *)(v32 + 376);
                          if ( v50 )
                          {
                            n[0] = 4 * v50;
                            v65 = (void *)qalloc_or_throw(4 * v50, v35, 4 * v50, v36);
                            v35 = *(_QWORD *)(v32 + 368);
                            v48 = v65;
                            memcpy(v65, (const void *)v35, n[0]);
                          }
                          v51 = *(_QWORD *)(v7 + 368);
                          si128 = _mm_unpacklo_epi64((__m128i)v50, (__m128i)v50);
                          if ( v51 )
                          {
                            *(_QWORD *)(v7 + 376) = 0;
                            *(__m128i *)n = si128;
                            qfree(v51);
                            si128 = _mm_load_si128((const __m128i *)n);
                          }
                          *(_QWORD *)(v7 + 368) = v48;
                          v53 = *(_DWORD *)(v7 + 72);
                          *(__m128i *)(v7 + 376) = si128;
                          v54 = *(unsigned int **)(v32 + 368);
                          if ( 4LL * *(_QWORD *)(v32 + 376) )
                          {
                            while ( 1 )
                            {
                              v55 = *(_QWORD *)(v32 + 64);
                              v56 = *v54;
                              if ( (unsigned int)v56 >= *(_DWORD *)(v55 + 64) )
                                break;
                              v35 = *(unsigned int *)(v32 + 72);
                              sub_66220(*(_QWORD *)(*(_QWORD *)(v55 + 528) + 8 * v56) + 344LL, v35, v53);
                              v57 = *(_QWORD *)(v32 + 368);
                              if ( ++v54 == (unsigned int *)(v57 + 4LL * *(_QWORD *)(v32 + 376)) )
                                goto LABEL_79;
                            }
                            if ( !under_debugger )
                              sub_383060(52719);
LABEL_165:
                            BUG();
                          }
                          v57 = *(_QWORD *)(v32 + 368);
LABEL_79:
                          if ( v57 )
                          {
                            *(_QWORD *)(v32 + 376) = 0;
                            qfree(v57);
                            *(_QWORD *)(v32 + 368) = 0;
                            *(_QWORD *)(v32 + 384) = 0;
                          }
                          *(_DWORD *)(v7 + 76) = *(_DWORD *)(v32 + 76);
                          if ( v14 == v32 && v85 != -1 )
                          {
                            v58 = j__qalloc_or_throw(80, v35, v49, v36);
                            v59 = v86;
                            if ( v86 == -1 )
                              v59 = *(_QWORD *)(v7 + 32);
                            *(_QWORD *)(v58 + 40) = 0;
                            *(_QWORD *)(v58 + 32) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v58 + 48) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v58 + 56) = 0;
                            *(_QWORD *)(v58 + 64) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v58 + 72) = 0;
                            sub_330970(v58, v59);
                            v60 = v85;
                            *(_BYTE *)(v58 + 32) = 7;
                            *(_DWORD *)v58 = 55;
                            *(_DWORD *)(v58 + 40) = v60;
                            sub_338690(v7, v58);
                          }
                          sub_668F0(v32);
                          v61 = *(_DWORD *)(v32 + 72);
                          a2 = &v89;
                          v89 = &off_4DBBB8;
                          v90 = v61;
                          v62 = sub_68750((__int64)a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v89);
                          v84 |= v62;
                          if ( v14 == v32 )
                            goto LABEL_88;
                          v32 = v82;
                          if ( !v82 )
                            goto LABEL_88;
                          continue;
                        }
LABEL_104:
                        if ( *(_DWORD *)(v32 + 376) != 1 || *(_DWORD *)(v32 + 76) == 5 )
                          goto LABEL_53;
                        if ( v82 )
                        {
                          v68 = *(_DWORD *)(v82 + 72);
                          if ( v68 == *(_DWORD *)(v7 + 72) + 2 )
                            v68 = v85;
                          v85 = v68;
                          goto LABEL_53;
                        }
LABEL_117:
                        v82 = 0;
                        goto LABEL_53;
                      }
                      goto LABEL_101;
                    }
                    if ( !v34 )
                    {
                      v69 = *(int **)(v14 + 56);
                      if ( v69 )
                      {
                        v70 = *v69;
                        if ( (unsigned int)(v70 - 54) > 1 )
                        {
                          v82 = 0;
                          if ( v70 != 58 )
                            goto LABEL_53;
                        }
                      }
                      goto LABEL_117;
                    }
                    v82 = 0;
                    if ( *v34 != 55 )
                    {
LABEL_101:
                      v66 = *(int **)(v32 + 56);
                      if ( v66 )
                        goto LABEL_102;
                      goto LABEL_53;
                    }
LABEL_51:
                    sub_A3480(v7);
                  }
                  break;
                }
                if ( v14 == v32 )
                  goto LABEL_163;
                goto LABEL_53;
              }
              v73 = (_QWORD *)(v27 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (*(_BYTE *)(v27 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                goto LABEL_131;
              v74 = (_QWORD *)v73[1];
              if ( (*(_BYTE *)v74 & 2) != 0 )
              {
                v72 = (_QWORD *)v73[2];
                if ( (*(_BYTE *)v72 & 2) != 0 )
                  goto LABEL_137;
              }
              else
              {
                sub_65F60(v74);
                v72 = (_QWORD *)v73[2];
                if ( (*(_BYTE *)v72 & 2) != 0 )
                {
                  if ( (*(_BYTE *)v73 & 2) == 0 )
                  {
LABEL_137:
                    sub_312B80(v73 + 5);
                    *v73 |= 2uLL;
                  }
LABEL_128:
                  if ( v27 > 3 )
                    qfree(v27 & 0xFFFFFFFFFFFFFFFCLL);
                  v26 = *(unsigned __int64 **)(v7 + 456);
                  v27 = *v26;
LABEL_131:
                  *v26 = v27 & 3 | (unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFCLL;
                  *(__m128i *)(*(_QWORD *)(v7 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(v7 + 456),
                                                                (__m128i)*(unsigned __int64 *)(v7 + 456));
                  **(_QWORD **)(v7 + 456) &= ~1uLL;
                  **(_QWORD **)(v7 + 456) |= 2uLL;
LABEL_132:
                  *(_QWORD *)(v7 + 464) = 0;
                  goto LABEL_44;
                }
              }
              sub_65F60(v72);
              if ( (*(_BYTE *)v73 & 2) == 0 )
                goto LABEL_137;
              goto LABEL_128;
            }
          }
          sub_65F60(v71);
          if ( (*(_BYTE *)v75 & 2) == 0 )
            goto LABEL_142;
          goto LABEL_121;
        }
        v23 = (__int64)v91;
        ++v6;
LABEL_36:
        if ( v23 )
        {
          *(_QWORD *)&v92 = 0;
          qfree(v23);
        }
LABEL_29:
        v5 = a1[16];
      }
      while ( (int)(v5 - 1) > v6 );
      v4 = *a1;
    }
    while ( (v4 & 0x400) != 0 );
  }
  if ( v84 )
  {
    v78 = *((_QWORD **)a1 + 98);
    if ( v78 )
    {
      v79 = *(__int64 (__fastcall **)(_QWORD *))(*v78 + 8LL);
      if ( v79 == sub_66F30 )
      {
        v80 = (__int64)(v78 + 31);
        *v78 = off_4EC750;
        do
        {
          v80 -= 32;
          sub_66C80(v80);
        }
        while ( (_QWORD *)v80 != v78 + 7 );
        v81 = v78[1];
        *v78 = &unk_4EC808;
        if ( v81 )
        {
          v78[2] = 0;
          qfree(v81);
        }
        j__qfree((__int64)v78);
      }
      else
      {
        v79(*((_QWORD **)a1 + 98));
      }
    }
    *((_QWORD *)a1 + 98) = 0;
    sub_670E0(a1, (__int64)a2, v4, v3);
    sub_66FA0((__int64)a1, 1u, (__int64)"block merging result");
  }
  v21 = sub_13FDE0(a1, 1);
  return v84 | v21;
}
