char __fastcall sub_8F6840(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r11d
  __int64 i; // rax
  _QWORD *v6; // r12
  char v7; // cl
  __int64 *v8; // rsi
  unsigned int *v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edi
  int v12; // edx
  char *v13; // r13
  __int64 v14; // rdx
  __int64 *v15; // r10
  unsigned int *v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  bool v19; // cl
  __int64 v20; // rdx
  __int64 v21; // rax
  __m128i *v22; // r14
  size_t v23; // r12
  __m128i *v24; // r13
  unsigned int v25; // edi
  __int64 v26; // rax
  __m128i *v27; // r11
  unsigned int **v28; // rax
  __m128i *v29; // rsi
  unsigned int *v30; // rdx
  unsigned int *v31; // r13
  unsigned int *v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // r15
  __int64 v35; // r12
  char *v36; // rax
  _QWORD *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rdx
  unsigned int v41; // r14d
  __m128i *v42; // rcx
  unsigned int v43; // r13d
  size_t v44; // r12
  __m128i *v45; // r10
  unsigned int v46; // edi
  __int64 v47; // r13
  __m128i *v48; // r11
  unsigned int **v49; // rax
  __m128i *v50; // rsi
  unsigned int *v51; // rdx
  unsigned int *v52; // rax
  unsigned int *v53; // rax
  __m128i *v54; // rax
  __m128i *v55; // rdx
  const __m128i *v56; // rax
  __m128i *v57; // r11
  __int64 v58; // rdx
  __m128i *v59; // rsi
  __m128i *v60; // rdx
  __m128i *v61; // rax
  __m128i *v62; // rdx
  const __m128i *v63; // rax
  __m128i *v64; // r11
  __int64 v65; // rdx
  __m128i *v66; // rsi
  __m128i *v67; // rdx
  unsigned __int64 v68; // rax
  __int64 v69; // rsi
  unsigned int v70; // r11d
  __int64 v71; // r14
  __int64 v72; // r13
  _QWORD *v73; // rax
  _QWORD *v74; // rdi
  unsigned __int64 v75; // rax
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  __int64 v78; // rdx
  __int32 v81; // [rsp+8h] [rbp-100h]
  unsigned int *v82; // [rsp+8h] [rbp-100h]
  __int32 v83; // [rsp+8h] [rbp-100h]
  unsigned int v84; // [rsp+10h] [rbp-F8h]
  __m128i *v85; // [rsp+10h] [rbp-F8h]
  unsigned int v86; // [rsp+18h] [rbp-F0h]
  __m128i *v87; // [rsp+18h] [rbp-F0h]
  unsigned int *v88; // [rsp+38h] [rbp-D0h] BYREF
  void *v89; // [rsp+40h] [rbp-C8h]
  __int64 v90; // [rsp+48h] [rbp-C0h]
  _QWORD v91[23]; // [rsp+50h] [rbp-B8h] BYREF

  v3 = 1;
  LOBYTE(i) = 1;
  v89 = v91;
  v6 = v91;
  v91[0] = a2;
  v90 = 0x1000000001LL;
LABEL_2:
  while ( 2 )
  {
    v7 = 0;
LABEL_3:
    if ( v3 )
    {
      v8 = *(__int64 **)(a1 + 9056);
      v9 = (unsigned int *)v6[--v3];
      v10 = *(unsigned int *)(a1 + 9064);
      v11 = v9[3];
      v12 = v10 - 1;
      v10 *= 8;
      v13 = (char *)v8 + v10;
      v14 = 8LL * (v11 & v12);
      v15 = &v8[(unsigned __int64)v14 / 8];
      if ( v14 != v10 )
      {
        for ( i = (__int64)&v8[(unsigned __int64)v14 / 8]; v13 != (char *)i; i += 8 )
        {
          v16 = *(unsigned int **)i;
          if ( *(_QWORD *)i > 1u )
          {
            v7 = v9 == v16 && v16[3] == v11;
            if ( v7 )
              goto LABEL_3;
          }
          else if ( !v16 )
          {
            goto LABEL_10;
          }
        }
      }
      for ( ; v15 != v8; ++v8 )
      {
        i = *v8;
        if ( (unsigned __int64)*v8 > 1 )
        {
          v19 = *(_DWORD *)(i + 12) == v11;
          LOBYTE(i) = v9 == (unsigned int *)i;
          v7 = i & v19;
          if ( v7 )
            goto LABEL_3;
        }
        else if ( !i )
        {
          break;
        }
      }
LABEL_10:
      LODWORD(v90) = v3;
      v88 = v9;
      sub_4A3CA0(a1 + 9056, (__int64 **)&v88);
      LOWORD(i) = *((_WORD *)v9 + 2);
      if ( (_WORD)i )
      {
        if ( (_WORD)i == 2 )
        {
          i = *(_QWORD *)(a1 + 8832);
          if ( i )
          {
            v20 = *v9;
            if ( (unsigned int)v20 < *(_DWORD *)(i - 4) && *(_DWORD *)(i + 4 * v20) != 0x7FFFFFFF )
            {
              v81 = sub_952CC0(*(_QWORD *)(a1 + 7472), v9);
              v21 = *(unsigned int *)(a1 + 9040);
              v84 = 2 * v21;
              if ( 3 * (int)v21 < (unsigned int)(4 * (*(_DWORD *)(a1 + 9044) + *(_DWORD *)(a1 + 9048))) )
              {
                v23 = 16LL * v84;
                v61 = (__m128i *)sub_186B270(v23);
                v22 = v61;
                v62 = &v61[v23 / 0x10];
                if ( v84 )
                {
                  do
                  {
                    v61->m128i_i64[0] = 0;
                    ++v61;
                    v61[-1].m128i_i32[2] = 0;
                  }
                  while ( v61 != v62 );
                }
                v63 = *(const __m128i **)(a1 + 9032);
                v24 = &v22[v23 / 0x10];
                v64 = (__m128i *)&v63[*(unsigned int *)(a1 + 9040)];
                v86 = v84 - 1;
                if ( v63 != v64 )
                {
                  do
                  {
                    if ( v63->m128i_i64[0] > 1uLL )
                    {
                      v65 = 16LL * (*(_DWORD *)(v63->m128i_i64[0] + 12) & v86);
                      v66 = &v22[(unsigned __int64)v65 / 0x10];
                      if ( v23 == v65 )
                      {
LABEL_124:
                        if ( v22 == v66 )
                        {
LABEL_155:
                          sub_1872CE0("");
                          sub_1873130(114, 213);
                        }
                        v67 = v22;
                        while ( v67->m128i_i64[0] )
                        {
                          if ( v66 == ++v67 )
                            goto LABEL_155;
                        }
                      }
                      else
                      {
                        v67 = &v22[(unsigned __int64)v65 / 0x10];
                        while ( v67->m128i_i64[0] )
                        {
                          if ( v24 == ++v67 )
                            goto LABEL_124;
                        }
                      }
                      *v67 = _mm_loadu_si128(v63);
                    }
                    ++v63;
                  }
                  while ( v64 != v63 );
                  v64 = *(__m128i **)(a1 + 9032);
                }
                if ( v64 )
                  sub_186B220(v64);
                *(_QWORD *)(a1 + 9032) = v22;
                *(_DWORD *)(a1 + 9048) = 0;
                *(_DWORD *)(a1 + 9040) = v84;
              }
              else
              {
                v22 = *(__m128i **)(a1 + 9032);
                v86 = v21 - 1;
                v23 = 16 * v21;
                v24 = &v22[v21];
              }
              v25 = v9[3];
              v26 = 16LL * (v25 & v86);
              v27 = &v22[(unsigned __int64)v26 / 0x10];
              if ( v26 != v23 )
              {
                v28 = (unsigned int **)&v22[(unsigned __int64)v26 / 0x10];
                v29 = nullptr;
                while ( 1 )
                {
                  v30 = *v28;
                  if ( (unsigned __int64)*v28 > 1 )
                  {
                    if ( v30[3] == v25 && v9 == v30 )
                    {
                      *v28 = v9;
                      *((_DWORD *)v28 + 2) = v81;
                      goto LABEL_130;
                    }
                  }
                  else
                  {
                    if ( !v30 )
                    {
                      if ( v29 )
                        goto LABEL_149;
                      v29 = (__m128i *)v28;
                      goto LABEL_150;
                    }
                    v29 = (__m128i *)v28;
                  }
                  v28 += 2;
                  if ( v28 == (unsigned int **)v24 )
                    goto LABEL_85;
                }
              }
              v29 = nullptr;
              while ( 1 )
              {
LABEL_85:
                if ( v27 == v22 )
                {
                  sub_1872CE0("");
                  sub_1873130(114, 405);
                }
                v53 = (unsigned int *)v22->m128i_i64[0];
                if ( v22->m128i_i64[0] > 1uLL )
                {
                  if ( v53[3] == v25 && v9 == v53 )
                  {
                    v22->m128i_i64[0] = (__int64)v9;
                    v22->m128i_i32[2] = v81;
                    goto LABEL_130;
                  }
                }
                else
                {
                  if ( !v53 )
                  {
                    if ( v29 )
LABEL_149:
                      --*(_DWORD *)(a1 + 9048);
                    else
                      v29 = v22;
LABEL_150:
                    v29->m128i_i64[0] = (__int64)v9;
                    v29->m128i_i32[2] = v81;
                    ++*(_DWORD *)(a1 + 9044);
LABEL_130:
                    v70 = v90;
                    v71 = *((_QWORD *)v9 + 3);
                    if ( (unsigned int)v90 >= HIDWORD(v90) )
                    {
                      v72 = (unsigned int)(2 * HIDWORD(v90));
                      v73 = (_QWORD *)sub_186B270(8 * v72);
                      v70 = v90;
                      v74 = v89;
                      v6 = v73;
                      if ( (_DWORD)v90 )
                      {
                        if ( (unsigned int)(v90 - 1) <= 2 || v73 == (_QWORD *)((char *)v89 + 8) )
                        {
                          v77 = 0;
                          v78 = 8LL * (unsigned int)v90;
                          do
                          {
                            v6[v77 / 8] = v74[v77 / 8];
                            v77 += 8LL;
                          }
                          while ( v78 != v77 );
                        }
                        else
                        {
                          v75 = 0;
                          v76 = 16LL * ((unsigned int)v90 >> 1);
                          do
                          {
                            *(__m128i *)&v6[v75 / 8] = _mm_loadu_si128((const __m128i *)&v74[v75 / 8]);
                            v75 += 16LL;
                          }
                          while ( v76 != v75 );
                          if ( (v70 & 1) != 0 )
                            v6[v70 & 0xFFFFFFFE] = v74[v70 & 0xFFFFFFFE];
                        }
                      }
                      if ( v74 != v91 && v74 )
                      {
                        sub_186B220(v74);
                        v70 = v90;
                      }
                      v89 = v6;
                      HIDWORD(v90) = v72;
                    }
                    else
                    {
                      v6 = v89;
                    }
                    i = v70;
                    v3 = v70 + 1;
                    v6[i] = v71;
                    LODWORD(v90) = v3;
                    goto LABEL_2;
                  }
                  v29 = v22;
                }
                ++v22;
              }
            }
          }
        }
      }
      else
      {
        v17 = *(_QWORD *)(a1 + 8656);
        if ( !v17 )
          goto LABEL_46;
        v18 = *v9;
        if ( (unsigned int)v18 >= *(_DWORD *)(v17 - 4) )
          goto LABEL_46;
        i = *(_QWORD *)(v17 + 8 * v18);
        if ( !i )
          goto LABEL_46;
        if ( a3 < *(_DWORD *)(i + 48) )
        {
          v40 = *(unsigned int *)(a1 + 9040);
          v83 = *(_DWORD *)(i + 36);
          v41 = 2 * v40;
          if ( 3 * (int)v40 < (unsigned int)(4 * (*(_DWORD *)(a1 + 9044) + *(_DWORD *)(a1 + 9048))) )
          {
            v44 = 16LL * v41;
            v54 = (__m128i *)sub_186B270(v44);
            v42 = v54;
            v55 = &v54[v44 / 0x10];
            if ( v41 )
            {
              do
              {
                v54->m128i_i64[0] = 0;
                ++v54;
                v54[-1].m128i_i32[2] = 0;
              }
              while ( v54 != v55 );
            }
            v56 = *(const __m128i **)(a1 + 9032);
            v43 = v41 - 1;
            v45 = &v42[v44 / 0x10];
            v57 = (__m128i *)&v56[*(unsigned int *)(a1 + 9040)];
            if ( v56 != v57 )
            {
              do
              {
                if ( v56->m128i_i64[0] > 1uLL )
                {
                  v58 = 16LL * (*(_DWORD *)(v56->m128i_i64[0] + 12) & v43);
                  v59 = &v42[(unsigned __int64)v58 / 0x10];
                  if ( v44 == v58 )
                  {
LABEL_114:
                    if ( v42 == v59 )
                    {
LABEL_151:
                      sub_1872CE0("");
                      sub_1873130(114, 213);
                    }
                    v60 = v42;
                    while ( v60->m128i_i64[0] )
                    {
                      if ( v59 == ++v60 )
                        goto LABEL_151;
                    }
                  }
                  else
                  {
                    v60 = &v42[(unsigned __int64)v58 / 0x10];
                    while ( v60->m128i_i64[0] )
                    {
                      if ( v45 == ++v60 )
                        goto LABEL_114;
                    }
                  }
                  *v60 = _mm_loadu_si128(v56);
                }
                ++v56;
              }
              while ( v57 != v56 );
              v57 = *(__m128i **)(a1 + 9032);
            }
            if ( v57 )
            {
              v87 = &v42[v44 / 0x10];
              v85 = v42;
              sub_186B220(v57);
              v45 = v87;
              v42 = v85;
            }
            *(_QWORD *)(a1 + 9032) = v42;
            *(_DWORD *)(a1 + 9040) = v41;
            *(_DWORD *)(a1 + 9048) = 0;
          }
          else
          {
            v42 = *(__m128i **)(a1 + 9032);
            v43 = v40 - 1;
            v44 = 16 * v40;
            v45 = &v42[v40];
          }
          v46 = v9[3];
          v47 = 16LL * (v46 & v43);
          v48 = &v42[(unsigned __int64)v47 / 0x10];
          if ( v47 != v44 )
          {
            v49 = (unsigned int **)&v42[(unsigned __int64)v47 / 0x10];
            v50 = nullptr;
            while ( 1 )
            {
              v51 = *v49;
              if ( (unsigned __int64)*v49 > 1 )
              {
                if ( v51[3] == v46 && v9 == v51 )
                {
                  *v49 = v9;
                  *((_DWORD *)v49 + 2) = v83;
                  goto LABEL_46;
                }
              }
              else
              {
                if ( !v51 )
                {
                  if ( v50 )
                    goto LABEL_44;
                  v50 = (__m128i *)v49;
                  goto LABEL_45;
                }
                v50 = (__m128i *)v49;
              }
              v49 += 2;
              if ( v49 == (unsigned int **)v45 )
                goto LABEL_78;
            }
          }
          v50 = nullptr;
          while ( 1 )
          {
LABEL_78:
            if ( v48 == v42 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v52 = (unsigned int *)v42->m128i_i64[0];
            if ( v42->m128i_i64[0] > 1uLL )
            {
              if ( v52[3] == v46 && v9 == v52 )
              {
                v42->m128i_i64[0] = (__int64)v9;
                v42->m128i_i32[2] = v83;
                goto LABEL_46;
              }
            }
            else
            {
              if ( !v52 )
              {
                if ( v50 )
LABEL_44:
                  --*(_DWORD *)(a1 + 9048);
                else
                  v50 = v42;
LABEL_45:
                v50->m128i_i64[0] = (__int64)v9;
                v50->m128i_i32[2] = v83;
                ++*(_DWORD *)(a1 + 9044);
LABEL_46:
                v31 = v9 + 8;
                v3 = v90;
                i = 8LL * v9[6];
                v32 = (unsigned int *)((char *)v9 + i + 32);
                if ( i )
                {
                  do
                  {
                    v34 = *(_QWORD *)v31;
                    if ( (*(_WORD *)(*(_QWORD *)v31 + 4LL) & 0xFFFD) == 0 )
                    {
                      if ( v3 < HIDWORD(v90) )
                      {
                        v33 = v89;
                      }
                      else
                      {
                        v82 = v32;
                        v35 = (unsigned int)(2 * HIDWORD(v90));
                        v36 = (char *)sub_186B270(8 * v35);
                        v3 = v90;
                        v37 = v89;
                        v33 = v36;
                        v32 = v82;
                        if ( (_DWORD)v90 )
                        {
                          if ( (unsigned int)(v90 - 1) <= 2 || v36 == (char *)v89 + 8 )
                          {
                            v68 = 0;
                            v69 = 8LL * (unsigned int)v90;
                            do
                            {
                              v33[v68 / 8] = v37[v68 / 8];
                              v68 += 8LL;
                            }
                            while ( v68 != v69 );
                          }
                          else
                          {
                            v38 = 0;
                            v39 = 16LL * ((unsigned int)v90 >> 1);
                            do
                            {
                              *(__m128i *)&v33[v38 / 8] = _mm_loadu_si128((const __m128i *)&v37[v38 / 8]);
                              v38 += 16LL;
                            }
                            while ( v38 != v39 );
                            if ( (v3 & 1) != 0 )
                              v33[v3 & 0xFFFFFFFE] = v37[v3 & 0xFFFFFFFE];
                          }
                        }
                        if ( v37 != v91 )
                        {
                          if ( v37 )
                          {
                            sub_186B220(v37);
                            v3 = v90;
                            v32 = v82;
                          }
                        }
                        v89 = v33;
                        HIDWORD(v90) = v35;
                      }
                      i = v3++;
                      v33[i] = v34;
                      LODWORD(v90) = v3;
                    }
                    v31 += 2;
                  }
                  while ( v32 != v31 );
                }
                v6 = v89;
                goto LABEL_2;
              }
              v50 = v42;
            }
            ++v42;
          }
        }
      }
      v6 = v89;
      v3 = v90;
      continue;
    }
    break;
  }
  if ( v7 )
    LODWORD(v90) = 0;
  if ( v6 != v91 && v6 )
    LOBYTE(i) = sub_186B220(v6);
  return i;
}

