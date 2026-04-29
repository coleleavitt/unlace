char __fastcall sub_69F40(__int64 a1)
{
  int v2; // edx
  int v3; // eax
  int v4; // ebp
  __int64 v5; // rbx
  bool v6; // zf
  int v7; // eax
  __int64 v8; // r14
  unsigned __int64 v9; // rdi
  _DWORD *v10; // rax
  char v11; // r15
  __int64 v12; // r12
  _DWORD *v13; // rdx
  char v14; // al
  int v15; // r12d
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  char v20; // al
  __int64 v22; // rdi
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 *v25; // rax
  unsigned __int64 v26; // rbp
  __int64 v27; // rax
  int *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // r15
  __int64 v32; // rax
  _DWORD *v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  int *v40; // rax
  int v41; // esi
  __int64 v42; // rax
  int v43; // eax
  int v44; // edx
  unsigned int v45; // eax
  void *v46; // r14
  unsigned __int64 v47; // rbp
  __int64 v48; // rdi
  __m128i si128; // xmm0
  int v50; // ebp
  unsigned int *v51; // r14
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 v55; // rbp
  __int64 v56; // rsi
  int v57; // eax
  int v58; // eax
  char v59; // al
  __int64 v60; // rax
  __int64 v61; // rcx
  _DWORD *v62; // rsi
  int *v63; // rax
  int v64; // eax
  int v65; // edx
  int *v66; // rax
  int v67; // eax
  _QWORD *v68; // rdi
  _QWORD *v69; // rdi
  _QWORD *v70; // r14
  _QWORD *v71; // rdi
  _QWORD *v72; // r14
  _QWORD *v73; // rdi
  __int64 v74; // rdx
  __int64 *v75; // rbx
  __int64 (__fastcall *v76)(_QWORD *); // rax
  __int64 *v77; // rbp
  __int64 v78; // rdi
  __int64 v79; // [rsp+8h] [rbp-A0h]
  size_t n[2]; // [rsp+10h] [rbp-98h] BYREF
  char v81; // [rsp+23h] [rbp-85h]
  int v82; // [rsp+24h] [rbp-84h]
  __int64 v83; // [rsp+28h] [rbp-80h]
  __int64 v84; // [rsp+30h] [rbp-78h]
  bool v85; // [rsp+3Fh] [rbp-69h]
  _UNKNOWN **v86; // [rsp+40h] [rbp-68h] BYREF
  int v87; // [rsp+48h] [rbp-60h]
  __int64 v88; // [rsp+50h] [rbp-58h] BYREF
  __int128 v89; // [rsp+58h] [rbp-50h]
  unsigned __int64 v90; // [rsp+68h] [rbp-40h]

  v90 = __readfsqword(0x28u);
  v81 = sub_699B0(a1);
  v2 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 0x400) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 64);
    do
    {
      BYTE1(v2) &= ~4u;
      *(_DWORD *)a1 = v2;
      if ( v3 - 1 <= 1 )
        break;
      v4 = 1;
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v4);
        if ( (unsigned int)sub_A7D60(v5) )
        {
          v6 = *(_QWORD *)(v5 + 48) == 0;
          v81 = 1;
          if ( v6 )
          {
            v4 = 1;
            sub_699B0(a1);
            goto LABEL_29;
          }
        }
        v84 = *(_QWORD *)(v5 + 376);
        if ( (_DWORD)v84 != 1 || (v7 = *(_DWORD *)(v5 + 76), v7 == 5) || (v88 = 0, v89 = 0, !(v85 = v7 != 1 && v7 != 6)) )
        {
          ++v4;
          goto LABEL_29;
        }
        v8 = v5;
        v9 = 0;
        v10 = nullptr;
        v11 = 0;
        v12 = 0;
        while ( 1 )
        {
          v13 = &v10[v9];
          if ( v13 != v10 )
          {
            while ( *(_DWORD *)(v8 + 72) != *v10 )
            {
              if ( v13 == ++v10 )
                goto LABEL_16;
            }
            if ( v13 != v10 )
              break;
          }
LABEL_16:
          if ( v9 && *(_DWORD *)(v8 + 352) != 1 )
            break;
          if ( v11 && *(int *)(v8 + 376) > 1 )
            break;
          v14 = sub_64FB0(v5, v8);
          v9 = v89;
          if ( !v14 )
            break;
          v15 = *(_DWORD *)(v8 + 72);
          v16 = v88;
          if ( *((_QWORD *)&v89 + 1) < (unsigned __int64)(v89 + 1) )
          {
            v88 = qvector_reserve(&v88, v88, v89 + 1, 4);
            v9 = v89;
            v16 = v88;
          }
          *(_DWORD *)(v16 + 4 * v9) = v15;
          v6 = *(_DWORD *)(v8 + 76) == 3;
          v9 = v89 + 1;
          *(_QWORD *)&v89 = v89 + 1;
          if ( !v6
            || *(_DWORD *)(v8 + 376) != 1
            || (v17 = **(int **)(v8 + 368),
                v11 |= *(_DWORD *)(v8 + 72) + 1 != (_DWORD)v17,
                v18 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8 * v17),
                v19 = *(_DWORD *)(v18 + 76),
                v19 == 1)
            || v19 == 6 )
          {
            v12 = v8;
            break;
          }
          v12 = v8;
          v10 = (_DWORD *)v88;
          v8 = v18;
        }
        if ( v9 > 1 )
        {
          v23 = *(unsigned __int64 **)(v5 + 424);
          if ( !v23 )
            goto LABEL_125;
          v24 = *v23;
          if ( !*(_QWORD *)(v5 + 432) )
          {
            *v23 = *v23 & 3 | (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFCLL;
            *(__m128i *)(*(_QWORD *)(v5 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                          (__m128i)*(unsigned __int64 *)(v5 + 424),
                                                          (__m128i)*(unsigned __int64 *)(v5 + 424));
            **(_QWORD **)(v5 + 424) &= ~1uLL;
            **(_QWORD **)(v5 + 424) |= 2uLL;
            goto LABEL_41;
          }
          v72 = (_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
          if ( (*(_BYTE *)(v24 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
            goto LABEL_124;
          v73 = (_QWORD *)v72[1];
          if ( (*(_BYTE *)v73 & 2) != 0 )
          {
            v68 = (_QWORD *)v72[2];
            if ( (*(_BYTE *)v68 & 2) != 0 )
              goto LABEL_142;
          }
          else
          {
            sub_65960(v73);
            v68 = (_QWORD *)v72[2];
            if ( (*(_BYTE *)v68 & 2) != 0 )
            {
              if ( (*(_BYTE *)v72 & 2) == 0 )
              {
LABEL_142:
                sub_312F40(v72 + 5);
                *v72 |= 2uLL;
              }
LABEL_121:
              if ( v24 > 3 )
                qfree(v24 & 0xFFFFFFFFFFFFFFFCLL);
              v23 = *(unsigned __int64 **)(v5 + 424);
              v24 = *v23;
LABEL_124:
              *v23 = v24 & 3 | (unsigned __int64)v23 & 0xFFFFFFFFFFFFFFFCLL;
              *(__m128i *)(*(_QWORD *)(v5 + 424) + 8LL) = _mm_unpacklo_epi64(
                                                            (__m128i)*(unsigned __int64 *)(v5 + 424),
                                                            (__m128i)*(unsigned __int64 *)(v5 + 424));
              **(_QWORD **)(v5 + 424) &= ~1uLL;
              **(_QWORD **)(v5 + 424) |= 2uLL;
LABEL_125:
              *(_QWORD *)(v5 + 432) = 0;
LABEL_41:
              v25 = *(unsigned __int64 **)(v5 + 456);
              *(_BYTE *)(v5 + 440) = 1;
              if ( !v25 )
                goto LABEL_132;
              v26 = *v25;
              if ( !*(_QWORD *)(v5 + 464) )
              {
                *v25 = *v25 & 3 | (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFCLL;
                *(__m128i *)(*(_QWORD *)(v5 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                              (__m128i)*(unsigned __int64 *)(v5 + 456),
                                                              (__m128i)*(unsigned __int64 *)(v5 + 456));
                **(_QWORD **)(v5 + 456) &= ~1uLL;
                **(_QWORD **)(v5 + 456) |= 2uLL;
LABEL_44:
                v27 = *(_QWORD *)(v5 + 64);
                *(_BYTE *)(v5 + 472) = 1;
                v81 = 0;
                *(_DWORD *)(v27 + 4) &= ~8u;
                v28 = *(int **)(v5 + 368);
                v83 = -1;
                v29 = *v28;
                v30 = *(_QWORD *)(a1 + 528);
                v82 = -1;
                v31 = *(_QWORD *)(v30 + 8 * v29);
                if ( !v31 )
                {
LABEL_88:
                  v60 = *(_QWORD *)(v5 + 48);
                  if ( v60 )
                  {
                    if ( (*(_BYTE *)(v60 + 4) & 0x40) != 0 )
                    {
                      v61 = *(_QWORD *)(v5 + 56);
                      if ( *(_DWORD *)v61 == 55 && v61 == *(_QWORD *)(v60 + 8) )
                      {
                        v74 = *(_QWORD *)(v60 + 24) + 1LL;
                        if ( v74 == *(_QWORD *)(v61 + 24) )
                          *(_QWORD *)(v60 + 24) = v74;
                      }
                    }
                  }
                  if ( v81 )
                  {
                    sub_699B0(a1);
                    v22 = v88;
                    v4 = v84;
                  }
                  else
                  {
                    v22 = v88;
                    v4 = v84;
                    v81 = v85;
                  }
                  goto LABEL_36;
                }
                while ( 2 )
                {
                  if ( *(int *)(v31 + 352) > 1 )
                    goto LABEL_88;
                  v32 = *(_QWORD *)(v31 + 376);
                  if ( (_DWORD)v32 == 1 )
                  {
                    v62 = *(_DWORD **)(v5 + 56);
                    v79 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * **(int **)(v31 + 368));
                    if ( v62 && *v62 == 55 )
                      goto LABEL_51;
                  }
                  else
                  {
                    if ( v12 != v31 )
                    {
                      if ( !under_debugger )
                        sub_3835A0(52027);
                      goto LABEL_165;
                    }
                    v33 = *(_DWORD **)(v5 + 56);
                    if ( (int)v32 > 0 )
                    {
                      v79 = *(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * **(int **)(v12 + 368));
                      if ( v33 )
                      {
                        if ( *v33 == 55 )
                          goto LABEL_51;
LABEL_163:
                        v63 = *(int **)(v31 + 56);
                        if ( v63 )
                        {
LABEL_102:
                          v64 = *v63;
                          if ( (unsigned int)(v64 - 54) > 1 && v64 != 58 )
                            goto LABEL_104;
LABEL_53:
                          if ( !(unsigned __int8)sub_64FB0(v5, v31) )
                          {
                            if ( !under_debugger )
                              sub_3835A0(52728);
                            goto LABEL_165;
                          }
                          v34 = *(_QWORD *)(v5 + 320);
                          if ( v34 < *(_QWORD *)(v31 + 320) )
                            v34 = *(_QWORD *)(v31 + 320);
                          *(_QWORD *)(v5 + 320) = v34;
                          v35 = *(_QWORD *)(v5 + 328);
                          if ( v35 > *(_QWORD *)(v31 + 328) )
                            v35 = *(_QWORD *)(v31 + 328);
                          *(_QWORD *)(v5 + 328) = v35;
                          v36 = *(_QWORD *)(v5 + 336);
                          if ( v36 > *(_QWORD *)(v31 + 336) )
                            v36 = *(_QWORD *)(v31 + 336);
                          *(_QWORD *)(v5 + 336) = v36;
                          if ( *(_QWORD *)(v5 + 512) == *(_QWORD *)(v31 + 512) )
                          {
                            v37 = *(_QWORD *)(v5 + 520);
                            if ( v37 > *(_QWORD *)(v31 + 520) )
                              v37 = *(_QWORD *)(v31 + 520);
                            *(_QWORD *)(v5 + 520) = v37;
                          }
                          v38 = *(_QWORD *)(v5 + 56);
                          v39 = *(_QWORD *)(v31 + 48);
                          if ( v38 )
                            *(_QWORD *)(v38 + 8) = v39;
                          else
                            *(_QWORD *)(v5 + 48) = v39;
                          v40 = *(int **)(v31 + 48);
                          if ( v40 )
                          {
                            v41 = *v40;
                            *((_QWORD *)v40 + 2) = *(_QWORD *)(v5 + 56);
                            v42 = *(_QWORD *)(v31 + 56);
                            *(_QWORD *)(v5 + 56) = v42;
                            if ( *(_DWORD *)v42 == 55 )
                              v83 = *(_QWORD *)(v42 + 24);
                            if ( *(_QWORD *)(v5 + 40) == *(_QWORD *)(v31 + 32) && (*(_BYTE *)(v31 + 24) & 2) == 0 )
                              *(_QWORD *)(v5 + 40) = *(_QWORD *)(v31 + 40);
                            *(_OWORD *)(v31 + 48) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                            HIWORD(v44) = HIWORD(v43);
                            if ( v41 != 55 )
                            {
                              LOBYTE(v44) = v43 | 0x80;
                              BYTE1(v44) = BYTE1(v43) & 0xFD;
                              v43 = v44;
                            }
                          }
                          else if ( *(_QWORD *)(v31 + 32) != *(_QWORD *)(v5 + 40) || (*(_BYTE *)(v31 + 24) & 2) != 0 )
                          {
                            *(_QWORD *)(v31 + 56) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                          }
                          else
                          {
                            *(_QWORD *)(v5 + 40) = *(_QWORD *)(v31 + 40);
                            *(_OWORD *)(v31 + 48) = 0;
                            v43 = *(_DWORD *)(v5 + 24);
                          }
                          v45 = v43 & 0xFFFFFFF7;
                          v46 = nullptr;
                          *(_DWORD *)(v5 + 24) = v45;
                          *(_DWORD *)(v5 + 24) = v45 | *(_DWORD *)(v31 + 24) & 0x158 | 0x40;
                          v47 = *(_QWORD *)(v31 + 376);
                          if ( v47 )
                          {
                            n[0] = 4 * v47;
                            v46 = (void *)qalloc_or_throw(4 * v47);
                            memcpy(v46, *(const void **)(v31 + 368), n[0]);
                          }
                          v48 = *(_QWORD *)(v5 + 368);
                          si128 = _mm_unpacklo_epi64((__m128i)v47, (__m128i)v47);
                          if ( v48 )
                          {
                            *(_QWORD *)(v5 + 376) = 0;
                            *(__m128i *)n = si128;
                            qfree(v48);
                            si128 = _mm_load_si128((const __m128i *)n);
                          }
                          *(_QWORD *)(v5 + 368) = v46;
                          v50 = *(_DWORD *)(v5 + 72);
                          *(__m128i *)(v5 + 376) = si128;
                          v51 = *(unsigned int **)(v31 + 368);
                          if ( 4LL * *(_QWORD *)(v31 + 376) )
                          {
                            while ( 1 )
                            {
                              v52 = *(_QWORD *)(v31 + 64);
                              v53 = *v51;
                              if ( (unsigned int)v53 >= *(_DWORD *)(v52 + 64) )
                                break;
                              sub_65C20(
                                *(_QWORD *)(*(_QWORD *)(v52 + 528) + 8 * v53) + 344LL,
                                *(_DWORD *)(v31 + 72),
                                v50);
                              v54 = *(_QWORD *)(v31 + 368);
                              if ( ++v51 == (unsigned int *)(v54 + 4LL * *(_QWORD *)(v31 + 376)) )
                                goto LABEL_79;
                            }
                            if ( !under_debugger )
                              sub_3835A0(52719);
LABEL_165:
                            BUG();
                          }
                          v54 = *(_QWORD *)(v31 + 368);
LABEL_79:
                          if ( v54 )
                          {
                            *(_QWORD *)(v31 + 376) = 0;
                            qfree(v54);
                            *(_QWORD *)(v31 + 368) = 0;
                            *(_QWORD *)(v31 + 384) = 0;
                          }
                          *(_DWORD *)(v5 + 76) = *(_DWORD *)(v31 + 76);
                          if ( v12 == v31 && v82 != -1 )
                          {
                            v55 = j__qalloc_or_throw(80);
                            v56 = v83;
                            if ( v83 == -1 )
                              v56 = *(_QWORD *)(v5 + 32);
                            *(_QWORD *)(v55 + 40) = 0;
                            *(_QWORD *)(v55 + 32) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v55 + 48) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v55 + 56) = 0;
                            *(_QWORD *)(v55 + 64) = 0xFFFFFFFF00000000LL;
                            *(_QWORD *)(v55 + 72) = 0;
                            sub_330C90(v55, v56);
                            v57 = v82;
                            *(_BYTE *)(v55 + 32) = 7;
                            *(_DWORD *)v55 = 55;
                            *(_DWORD *)(v55 + 40) = v57;
                            sub_3387D0(v5, v55);
                          }
                          sub_662F0(v31);
                          v58 = *(_DWORD *)(v31 + 72);
                          v86 = &off_4D6278;
                          v87 = v58;
                          v59 = sub_68150(a1, (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))&v86);
                          v81 |= v59;
                          if ( v12 == v31 )
                            goto LABEL_88;
                          v31 = v79;
                          if ( !v79 )
                            goto LABEL_88;
                          continue;
                        }
LABEL_104:
                        if ( *(_DWORD *)(v31 + 376) != 1 || *(_DWORD *)(v31 + 76) == 5 )
                          goto LABEL_53;
                        if ( v79 )
                        {
                          v65 = *(_DWORD *)(v79 + 72);
                          if ( v65 == *(_DWORD *)(v5 + 72) + 2 )
                            v65 = v82;
                          v82 = v65;
                          goto LABEL_53;
                        }
LABEL_117:
                        v79 = 0;
                        goto LABEL_53;
                      }
                      goto LABEL_101;
                    }
                    if ( !v33 )
                    {
                      v66 = *(int **)(v12 + 56);
                      if ( v66 )
                      {
                        v67 = *v66;
                        if ( (unsigned int)(v67 - 54) > 1 )
                        {
                          v79 = 0;
                          if ( v67 != 58 )
                            goto LABEL_53;
                        }
                      }
                      goto LABEL_117;
                    }
                    v79 = 0;
                    if ( *v33 != 55 )
                    {
LABEL_101:
                      v63 = *(int **)(v31 + 56);
                      if ( v63 )
                        goto LABEL_102;
                      goto LABEL_53;
                    }
LABEL_51:
                    sub_A2EC0(v5);
                  }
                  break;
                }
                if ( v12 == v31 )
                  goto LABEL_163;
                goto LABEL_53;
              }
              v70 = (_QWORD *)(v26 & 0xFFFFFFFFFFFFFFFCLL);
              if ( (*(_BYTE *)(v26 & 0xFFFFFFFFFFFFFFFCLL) & 2) != 0 )
                goto LABEL_131;
              v71 = (_QWORD *)v70[1];
              if ( (*(_BYTE *)v71 & 2) != 0 )
              {
                v69 = (_QWORD *)v70[2];
                if ( (*(_BYTE *)v69 & 2) != 0 )
                  goto LABEL_137;
              }
              else
              {
                sub_65960(v71);
                v69 = (_QWORD *)v70[2];
                if ( (*(_BYTE *)v69 & 2) != 0 )
                {
                  if ( (*(_BYTE *)v70 & 2) == 0 )
                  {
LABEL_137:
                    sub_312F40(v70 + 5);
                    *v70 |= 2uLL;
                  }
LABEL_128:
                  if ( v26 > 3 )
                    qfree(v26 & 0xFFFFFFFFFFFFFFFCLL);
                  v25 = *(unsigned __int64 **)(v5 + 456);
                  v26 = *v25;
LABEL_131:
                  *v25 = v26 & 3 | (unsigned __int64)v25 & 0xFFFFFFFFFFFFFFFCLL;
                  *(__m128i *)(*(_QWORD *)(v5 + 456) + 8LL) = _mm_unpacklo_epi64(
                                                                (__m128i)*(unsigned __int64 *)(v5 + 456),
                                                                (__m128i)*(unsigned __int64 *)(v5 + 456));
                  **(_QWORD **)(v5 + 456) &= ~1uLL;
                  **(_QWORD **)(v5 + 456) |= 2uLL;
LABEL_132:
                  *(_QWORD *)(v5 + 464) = 0;
                  goto LABEL_44;
                }
              }
              sub_65960(v69);
              if ( (*(_BYTE *)v70 & 2) == 0 )
                goto LABEL_137;
              goto LABEL_128;
            }
          }
          sub_65960(v68);
          if ( (*(_BYTE *)v72 & 2) == 0 )
            goto LABEL_142;
          goto LABEL_121;
        }
        v22 = v88;
        ++v4;
LABEL_36:
        if ( v22 )
        {
          *(_QWORD *)&v89 = 0;
          qfree(v22);
        }
LABEL_29:
        v3 = *(_DWORD *)(a1 + 64);
      }
      while ( v3 - 1 > v4 );
      v2 = *(_DWORD *)a1;
    }
    while ( (*(_DWORD *)a1 & 0x400) != 0 );
  }
  if ( v81 )
  {
    v75 = *(__int64 **)(a1 + 784);
    if ( v75 )
    {
      v76 = *(__int64 (__fastcall **)(_QWORD *))(*v75 + 8);
      if ( v76 == sub_66930 )
      {
        v77 = v75 + 31;
        *v75 = (__int64)off_4E8630;
        do
        {
          v77 -= 4;
          sub_66680(v77);
        }
        while ( v77 != v75 + 7 );
        v78 = v75[1];
        *v75 = (__int64)&unk_4E86E8;
        if ( v78 )
        {
          v75[2] = 0;
          qfree(v78);
        }
        j__qfree(v75);
      }
      else
      {
        v76(*(_QWORD **)(a1 + 784));
      }
    }
    *(_QWORD *)(a1 + 784) = 0;
    sub_66AE0((_QWORD *)a1);
    sub_669A0(a1, 1u, (__int64)"block merging result");
  }
  v20 = sub_13F820(a1, 1);
  return v81 | v20;
}
