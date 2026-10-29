__int64 __fastcall sub_7D15C0(__int64 a1, __m128 a2)
{
  __int64 result; // rax
  _DWORD *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax
  int *v8; // r9
  int *v9; // r15
  int v10; // esi
  unsigned __int64 v11; // r14
  unsigned int v12; // r10d
  __m128 *v13; // rbx
  unsigned int v14; // eax
  __int64 v15; // rcx
  char *v16; // rbp
  int v17; // edi
  __int64 v18; // rax
  __m128 *v19; // r10
  char *v20; // rax
  __m128 *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rbx
  int v26; // ebp
  __int64 i; // r15
  __int64 v28; // rdi
  __int64 v29; // rsi
  char v30; // al
  __int64 v31; // r10
  int v32; // edi
  char *v33; // rcx
  __int64 v34; // rax
  char *v35; // rsi
  __int64 v36; // rdx
  char *v37; // r9
  char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rax
  unsigned int v41; // r12d
  __int64 v42; // rax
  unsigned int *v43; // rdx
  __int64 v44; // rsi
  char *v45; // rbx
  char *v46; // rbp
  __int64 v47; // rsi
  char *v48; // rax
  __int64 v49; // rbx
  __int64 j; // rbp
  __int64 v51; // rbp
  __m128 *v52; // rax
  int v53; // r10d
  __m128 *v54; // rdx
  const __m128i *v55; // r12
  __m128i *v56; // r11
  __int64 v57; // rdx
  __m128 *v58; // rsi
  __m128 *v59; // rdx
  __int64 v60; // rax
  unsigned int *v61; // rsi
  __int64 v62; // rdx
  _DWORD *v63; // rax
  int v64; // esi
  __int64 v65; // rax
  unsigned int **v66; // r12
  _QWORD *v67; // rcx
  __int64 v68; // rsi
  int v69; // edx
  char *v70; // rax
  char *v71; // rdi
  unsigned __int64 v72; // rax
  __int64 v73; // r10
  unsigned __int64 v74; // rax
  __int64 v75; // r11
  char v76; // al
  __int32 v77; // [rsp+0h] [rbp-120h]
  int *v78; // [rsp+8h] [rbp-118h]
  unsigned int **v79; // [rsp+8h] [rbp-118h]
  size_t v80; // [rsp+10h] [rbp-110h]
  unsigned int v81; // [rsp+10h] [rbp-110h]
  int v82; // [rsp+10h] [rbp-110h]
  int v83; // [rsp+18h] [rbp-108h]
  size_t v84; // [rsp+18h] [rbp-108h]
  int v85; // [rsp+20h] [rbp-100h]
  _QWORD *v86; // [rsp+20h] [rbp-100h]
  __int64 v87; // [rsp+28h] [rbp-F8h]
  char v88; // [rsp+37h] [rbp-E9h]
  void *v90; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v91; // [rsp+48h] [rbp-D8h]
  int v92; // [rsp+50h] [rbp-D0h]
  void *v93; // [rsp+58h] [rbp-C8h]
  __int64 v94; // [rsp+60h] [rbp-C0h]
  _BYTE v95[184]; // [rsp+68h] [rbp-B8h] BYREF

  result = *(_QWORD *)(a1 + 8352);
  if ( result && *(_DWORD *)(result - 4) )
  {
    v4 = (_DWORD *)sub_186B270(0x80u);
    v5 = *(__int64 **)(a1 + 152);
    v91 = 8;
    *(_QWORD *)v4 = 0;
    v4[2] = 0;
    *((_QWORD *)v4 + 2) = 0;
    v4[6] = 0;
    *((_QWORD *)v4 + 4) = 0;
    v4[10] = 0;
    *((_QWORD *)v4 + 6) = 0;
    v4[14] = 0;
    *((_QWORD *)v4 + 8) = 0;
    v4[18] = 0;
    *((_QWORD *)v4 + 10) = 0;
    v4[22] = 0;
    *((_QWORD *)v4 + 12) = 0;
    v4[26] = 0;
    *((_QWORD *)v4 + 14) = 0;
    v4[30] = 0;
    v90 = v4;
    v6 = *v5;
    v92 = 0;
    (*(void (__fastcall **)(__int64 *, void **))(v6 + 96))(v5, &v90);
    v7 = *(_QWORD *)(a1 + 144);
    v8 = *(int **)(a1 + 8352);
    LOBYTE(v5) = *(_BYTE *)(v7 + 4);
    v87 = v7;
    *(_BYTE *)(v7 + 4) = 1;
    v88 = (char)v5;
    if ( v8 )
    {
      v78 = &v8[6 * *(v8 - 1)];
      if ( v78 != v8 )
      {
        v9 = v8;
        do
        {
          v10 = v92;
          v11 = *((_QWORD *)v9 + 1);
          v77 = *v9;
          v12 = 2 * v91;
          if ( 3 * (int)v91 < (unsigned int)(4 * (v92 + HIDWORD(v91))) )
          {
            v51 = v12;
            v83 = 2 * v91;
            v80 = 16LL * v12;
            v52 = (__m128 *)sub_186B270(v80);
            v53 = v83;
            v15 = v80;
            v13 = v52;
            v54 = &v52[v51];
            if ( v83 )
            {
              do
              {
                v52->m128_u64[0] = 0;
                ++v52;
                v52[-1].m128_i32[2] = 0;
              }
              while ( v52 != v54 );
            }
            v55 = (const __m128i *)v90;
            v14 = v83 - 1;
            v16 = (char *)&v13[v80 / 0x10];
            v56 = (__m128i *)((char *)v90 + 16 * (unsigned int)v91);
            if ( v90 != v56 )
            {
              do
              {
                while ( v55->m128i_i64[0] <= 1uLL )
                {
                  if ( v56 == ++v55 )
                    goto LABEL_89;
                }
                v57 = 16LL * (*(_DWORD *)(v55->m128i_i64[0] + 12) & v14);
                v58 = &v13[(unsigned __int64)v57 / 0x10];
                if ( v80 == v57 )
                {
LABEL_93:
                  if ( v13 == v58 )
                  {
LABEL_109:
                    sub_1872CE0("");
                    sub_1873130(114, 213);
                  }
                  v59 = v13;
                  while ( v59->m128_u64[0] )
                  {
                    if ( v58 == ++v59 )
                      goto LABEL_109;
                  }
                }
                else
                {
                  v59 = &v13[(unsigned __int64)v57 / 0x10];
                  while ( v59->m128_u64[0] )
                  {
                    if ( v16 == (char *)++v59 )
                      goto LABEL_93;
                  }
                }
                a2 = (__m128)_mm_loadu_si128(v55++);
                *v59 = a2;
              }
              while ( v56 != v55 );
LABEL_89:
              v56 = (__m128i *)v90;
            }
            if ( v56 )
            {
              v85 = v83;
              v84 = v80;
              v81 = v53 - 1;
              sub_186B220(v56);
              v53 = v85;
              v15 = v84;
              v14 = v81;
            }
            v90 = v13;
            v10 = 0;
            LODWORD(v91) = v53;
            v92 = 0;
          }
          else
          {
            v13 = (__m128 *)v90;
            v14 = v91 - 1;
            v15 = 16LL * (unsigned int)v91;
            v16 = (char *)v90 + v15;
          }
          v17 = *(_DWORD *)(v11 + 12);
          v18 = 16LL * (v17 & v14);
          v19 = &v13[(unsigned __int64)v18 / 0x10];
          if ( v18 != v15 )
          {
            v20 = (char *)&v13[(unsigned __int64)v18 / 0x10];
            v21 = nullptr;
            while ( 1 )
            {
              v22 = *(_QWORD *)v20;
              if ( *(_QWORD *)v20 > 1u )
              {
                if ( *(_DWORD *)(v22 + 12) == v17 && v11 == v22 )
                {
                  *(_QWORD *)v20 = v11;
                  *((_DWORD *)v20 + 2) = v77;
                  goto LABEL_25;
                }
              }
              else
              {
                if ( !v22 )
                {
                  if ( v21 )
                    goto LABEL_107;
                  v21 = (__m128 *)v20;
                  goto LABEL_108;
                }
                v21 = (__m128 *)v20;
              }
              v20 += 16;
              if ( v20 == v16 )
                goto LABEL_20;
            }
          }
          v21 = nullptr;
          while ( 1 )
          {
LABEL_20:
            if ( v19 == v13 )
            {
              sub_1872CE0("");
              sub_1873130(114, 405);
            }
            v23 = v13->m128_u64[0];
            if ( v13->m128_u64[0] <= 1 )
              break;
            if ( *(_DWORD *)(v23 + 12) == v17 && v11 == v23 )
            {
              v13->m128_u64[0] = v11;
              v13->m128_i32[2] = v77;
              goto LABEL_25;
            }
LABEL_19:
            ++v13;
          }
          if ( v23 )
          {
            v21 = v13;
            goto LABEL_19;
          }
          if ( v21 )
LABEL_107:
            v92 = v10 - 1;
          else
            v21 = v13;
LABEL_108:
          v21->m128_u64[0] = v11;
          v21->m128_i32[2] = v77;
          ++HIDWORD(v91);
LABEL_25:
          v9 += 6;
        }
        while ( v78 != v9 );
        v24 = *(_QWORD *)(a1 + 8352);
        if ( v24 )
        {
          v25 = v24 + 24LL * *(unsigned int *)(v24 - 4);
          if ( v24 != v25 )
          {
            v26 = *(_DWORD *)(a1 + 2280);
            for ( i = *(_QWORD *)(a1 + 8352); v25 != i; i += 24 )
            {
              v28 = *(_QWORD *)(a1 + 152);
              v29 = *(_QWORD *)(i + 8);
              *(_DWORD *)(a1 + 2280) = *(_DWORD *)(i + 4);
              v30 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v28 + 16LL))(v28, v29);
              v31 = *(_QWORD *)(i + 8);
              if ( v30 )
              {
                v32 = *(_DWORD *)(v31 + 12);
                v33 = (char *)v90;
                v34 = 16LL * (unsigned int)v91;
                v35 = (char *)v90 + v34;
                v36 = 16LL * (v32 & (unsigned int)(v91 - 1));
                v37 = (char *)v90 + v36;
                if ( v36 == v34 )
                {
LABEL_38:
                  if ( v90 != v37 )
                  {
                    do
                    {
                      v40 = *(_QWORD *)v33;
                      if ( *(_QWORD *)v33 > 1u )
                      {
                        if ( *(_DWORD *)(v40 + 12) == v32 && v40 == v31 )
                        {
                          v38 = v33;
                          goto LABEL_124;
                        }
                      }
                      else if ( !v40 )
                      {
                        break;
                      }
                      v33 += 16;
                    }
                    while ( v37 != v33 );
                  }
LABEL_153:
                  BUG();
                }
                v38 = (char *)v90 + v36;
                while ( 1 )
                {
                  while ( 1 )
                  {
                    v39 = *(_QWORD *)v38;
                    if ( *(_QWORD *)v38 > 1u )
                      break;
                    if ( !v39 )
                      goto LABEL_153;
                    v38 += 16;
                    if ( v35 == v38 )
                      goto LABEL_38;
                  }
                  if ( *(_DWORD *)(v39 + 12) == v32 && v39 == v31 )
                    break;
                  v38 += 16;
                  if ( v35 == v38 )
                    goto LABEL_38;
                }
LABEL_124:
                v41 = 2 * *((_DWORD *)v38 + 2);
              }
              else
              {
                v41 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 24LL))(
                        *(_QWORD *)(a1 + 152),
                        *(_QWORD *)(i + 8));
              }
              if ( *(_DWORD *)i != v41 >> 1 )
              {
                sub_1872CE0("");
                sub_1873130(114, 804);
              }
              v42 = *(_QWORD *)(a1 + 1720);
              v43 = *(unsigned int **)(i + 8);
              if ( v42 )
              {
                v44 = *v43;
                if ( (unsigned int)v44 < *(_DWORD *)(v42 - 4) )
                {
                  if ( *(_QWORD *)(v42 + 8 * v44) )
                    goto LABEL_52;
                }
              }
              if ( *((_WORD *)v43 + 2) || (v63 = *(_DWORD **)(*((_QWORD *)v43 + 2) + 24LL)) == nullptr || *v63 )
              {
LABEL_99:
                v93 = v95;
                v94 = 0x1000000000LL;
                if ( !*((_WORD *)v43 + 2) )
                {
                  v65 = 2LL * v43[6];
                  v79 = (unsigned int **)&v43[v65 + 8];
                  if ( v65 * 4 )
                  {
                    v66 = (unsigned int **)(v43 + 8);
                    do
                    {
                      v68 = sub_79AEB0((_QWORD *)a1, *v66);
                      v69 = v94;
                      if ( (unsigned int)v94 < HIDWORD(v94) )
                      {
                        v67 = v93;
                      }
                      else
                      {
                        v82 = 2 * HIDWORD(v94);
                        v70 = (char *)sub_186B270(8LL * (unsigned int)(2 * HIDWORD(v94)));
                        v69 = v94;
                        v71 = (char *)v93;
                        v67 = v70;
                        if ( (_DWORD)v94 )
                        {
                          if ( (unsigned int)(v94 - 1) <= 2 || v70 == (char *)v93 + 8 )
                          {
                            v74 = 0;
                            v75 = 8LL * (unsigned int)v94;
                            do
                            {
                              v67[v74 / 8] = *(_QWORD *)&v71[v74];
                              v74 += 8LL;
                            }
                            while ( v74 != v75 );
                          }
                          else
                          {
                            v72 = 0;
                            v73 = 16LL * ((unsigned int)v94 >> 1);
                            do
                            {
                              a2 = (__m128)_mm_loadu_si128((const __m128i *)&v71[v72]);
                              *(__m128 *)&v67[v72 / 8] = a2;
                              v72 += 16LL;
                            }
                            while ( v73 != v72 );
                            if ( (v69 & 1) != 0 )
                              v67[v69 & 0xFFFFFFFE] = *(_QWORD *)&v71[8 * (v69 & 0xFFFFFFFE)];
                          }
                        }
                        if ( v71 && v71 != v95 )
                        {
                          v86 = v67;
                          sub_186B220(v71);
                          v69 = v94;
                          v67 = v86;
                        }
                        v93 = v67;
                        HIDWORD(v94) = v82;
                      }
                      ++v66;
                      v67[v69] = v68;
                      LODWORD(v94) = v69 + 1;
                    }
                    while ( v79 != v66 );
                    v43 = *(unsigned int **)(i + 8);
                  }
                }
                (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 480LL))(a1, v43);
                v60 = *(_QWORD *)(a1 + 1720);
                v61 = *(unsigned int **)(i + 8);
                if ( !v60 || (v62 = *v61, (unsigned int)v62 >= *(_DWORD *)(v60 - 4)) || !*(_QWORD *)(v60 + 8 * v62) )
                  sub_79AF20(a1, (__int64)v61, v94, (_QWORD **)v93);
                if ( v93 && v93 != v95 )
                  sub_186B220(v93);
                goto LABEL_53;
              }
              if ( v63[1] == 2 )
              {
                v76 = sub_15D2CB0(*(_QWORD *)(a1 + 144), *((_QWORD *)v43 + 4));
                v43 = *(unsigned int **)(i + 8);
                if ( v76 )
                  goto LABEL_52;
                if ( *((_WORD *)v43 + 2) )
                  goto LABEL_99;
                v63 = *(_DWORD **)(*((_QWORD *)v43 + 2) + 24LL);
                if ( !v63 || *v63 )
                  goto LABEL_99;
              }
              v64 = v63[1];
              if ( v64 != 6 && v64 != 5 && v64 != 8 && v64 != 9 && v64 != 7 )
                goto LABEL_99;
LABEL_52:
              sub_79B540(a1, v41, v43, *(double *)a2.m128_u64);
LABEL_53:
              *(_DWORD *)(a1 + 2280) = v26;
            }
          }
        }
      }
    }
    v45 = (char *)v90;
    v46 = (char *)v90 + 16 * (unsigned int)v91;
    if ( v90 != v46 )
    {
      while ( *(_QWORD *)v45 <= 1u )
      {
        v45 += 16;
        if ( v46 == v45 )
          goto LABEL_68;
      }
      if ( v46 != v45 )
      {
        v47 = *(_QWORD *)v45;
        do
        {
          if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 152) + 16LL))(
                 *(_QWORD *)(a1 + 152),
                 v47)
            && !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 56LL))(
                  *(_QWORD *)(a1 + 152),
                  *(_QWORD *)v45,
                  (unsigned int)(2 * *((_DWORD *)v45 + 2))) )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 64LL))(
              *(_QWORD *)(a1 + 152),
              *(_QWORD *)v45,
              (unsigned int)(2 * *((_DWORD *)v45 + 2)));
          }
          v48 = v45 + 16;
          if ( v46 == v45 + 16 )
            break;
          while ( 1 )
          {
            v47 = *(_QWORD *)v48;
            v45 = v48;
            if ( *(_QWORD *)v48 > 1u )
              break;
            v48 += 16;
            if ( v46 == v48 )
              goto LABEL_68;
          }
        }
        while ( v46 != v48 );
      }
    }
LABEL_68:
    if ( *(_BYTE *)(a1 + 168) )
    {
      v49 = *(_QWORD *)(a1 + 8352);
      if ( v49 )
      {
        for ( j = v49 + 24LL * *(unsigned int *)(v49 - 4); v49 != j; v49 += 24 )
        {
          while ( !(*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 16LL))(
                     *(_QWORD *)(a1 + 152),
                     *(_QWORD *)(v49 + 8)) )
          {
            v49 += 24;
            if ( v49 == j )
              goto LABEL_75;
          }
          sub_7D08A0((_QWORD *)a1, *(_QWORD *)(v49 + 8), *(double *)a2.m128_u64);
        }
      }
    }
LABEL_75:
    *(_BYTE *)(v87 + 4) = v88;
    result = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a1 + 152) + 96LL))(*(_QWORD *)(a1 + 152), 0);
    if ( v90 )
      return sub_186B220(v90);
  }
  return result;
}

