_BOOL8 __fastcall sub_437A10(__int64 a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // rbp
  unsigned int v5; // ebx
  _QWORD *v6; // rax
  __int64 v7; // rbx
  __int16 v8; // cx
  int v9; // edx
  _QWORD *v10; // rbx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  int v14; // edi
  char *v15; // rdx
  int v16; // esi
  __int16 v17; // ax
  __int64 v18; // rdx
  unsigned int *v19; // r13
  unsigned int v20; // ecx
  __int64 v21; // r10
  __int64 v22; // rax
  char *v23; // rsi
  int v24; // r8d
  unsigned int v25; // ecx
  char *v26; // rdi
  __int64 v27; // rcx
  char *v28; // r9
  char *i; // rax
  __int64 v30; // rcx
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // r9d
  _DWORD *v34; // r10
  unsigned int v35; // esi
  unsigned int *v36; // r15
  unsigned int v37; // ecx
  __int64 v38; // rcx
  unsigned int **v39; // rcx
  __int64 v40; // rcx
  int v41; // edx
  __int64 v42; // r10
  __int64 v43; // rax
  char *v44; // rcx
  int v45; // edi
  unsigned int v46; // edx
  char *v47; // rsi
  __int64 v48; // rdx
  char *v49; // r8
  char *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  unsigned int **v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rbx
  char *v57; // rdi
  unsigned __int64 v58; // rdx
  __int64 v59; // rsi
  __int64 v60; // rbx
  char *v61; // rdi
  unsigned __int64 v62; // rdx
  __int64 v63; // rsi
  __int64 v64; // r10
  __int64 v65; // rcx
  char *v66; // rdi
  int v67; // r8d
  unsigned int v68; // esi
  char *v69; // r11
  __int64 v70; // rsi
  char *v71; // r9
  char *v72; // rcx
  __int64 v73; // rsi
  __int64 v74; // rax
  unsigned int v75; // ecx
  unsigned int **v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rbx
  char *v79; // rdi
  unsigned __int64 v80; // rdx
  __int64 v81; // rsi
  unsigned int v82; // [rsp+0h] [rbp-188h]
  unsigned int v83; // [rsp+0h] [rbp-188h]
  _QWORD *v84; // [rsp+0h] [rbp-188h]
  _QWORD *v85; // [rsp+0h] [rbp-188h]
  _QWORD *v86; // [rsp+0h] [rbp-188h]
  bool v87; // [rsp+1Bh] [rbp-16Dh]
  __int64 v89; // [rsp+28h] [rbp-160h] BYREF
  void *v90; // [rsp+30h] [rbp-158h]
  void *v91; // [rsp+40h] [rbp-148h]
  __int64 v92; // [rsp+48h] [rbp-140h]
  _DWORD *v93; // [rsp+50h] [rbp-138h] BYREF
  int v94; // [rsp+58h] [rbp-130h]

  v4 = a2;
  v5 = *a2;
  v89 = 0;
  v90 = nullptr;
  sub_186B510(&v89, v5 + 1, 0);
  v87 = 0;
  *((_DWORD *)v90 + (v5 >> 5)) |= 1 << v5;
  v93 = a2;
  v94 = 0;
  v91 = &v93;
  v92 = 0x1000000001LL;
  v6 = &v93;
  v7 = 0;
  while ( 1 )
  {
    v8 = *((_WORD *)v4 + 2);
    v9 = v7;
    if ( v8 == 1 )
      break;
LABEL_3:
    v10 = &v6[2 * v7];
    if ( v8 != 2 )
    {
      if ( v8 )
      {
        sub_1872CE0("");
        sub_1873130(114, 100);
      }
      v12 = v4[6];
      v13 = *((_DWORD *)v10 + 2);
      if ( v13 >= v12 )
      {
LABEL_29:
        LODWORD(v92) = v9;
        if ( !v87 && !*((_WORD *)v4 + 2) )
        {
          v21 = *((_QWORD *)v4 + 2);
          v22 = *(unsigned int *)(a1 + 40);
          v23 = *(char **)(a1 + 32);
          v24 = *(_DWORD *)(v21 + 12);
          v25 = v22 - 1;
          v22 *= 24;
          v26 = &v23[v22];
          v27 = 24LL * (v24 & v25);
          v28 = &v23[v27];
          if ( v27 != v22 )
          {
            for ( i = &v23[v27]; v26 != i; i += 24 )
            {
              v30 = *(_QWORD *)i;
              if ( *(_QWORD *)i > 1u )
              {
                if ( *(_DWORD *)(v30 + 12) == v24 && v21 == v30 )
                {
LABEL_100:
                  v87 = *((_DWORD *)i + 4) != a3;
                  v6 = v91;
                  goto LABEL_7;
                }
              }
              else if ( !v30 )
              {
                goto LABEL_6;
              }
            }
          }
          for ( ; v28 != v23; v23 += 24 )
          {
            v74 = *(_QWORD *)v23;
            if ( *(_QWORD *)v23 > 1u )
            {
              if ( *(_DWORD *)(v74 + 12) == v24 && v21 == v74 )
              {
                i = v23;
                goto LABEL_100;
              }
            }
            else if ( !v74 )
            {
              break;
            }
          }
        }
LABEL_6:
        v6 = v91;
LABEL_7:
        if ( v9 )
          goto LABEL_8;
        goto LABEL_10;
      }
      while ( 2 )
      {
        while ( 1 )
        {
          v18 = v13++;
          v19 = *(unsigned int **)&v4[2 * v18 + 8];
          *((_DWORD *)v10 + 2) = v13;
          v20 = *v19;
          if ( *v19 >= (unsigned int)v89 )
            break;
          v14 = 1 << v20;
          v15 = (char *)v90 + 4 * (v20 >> 5);
          v16 = *(_DWORD *)v15;
          if ( ((1 << v20) & *(_DWORD *)v15) == 0 )
            goto LABEL_19;
          if ( v13 >= v12 )
          {
LABEL_28:
            v9 = v92 - 1;
            goto LABEL_29;
          }
        }
        v82 = *v19;
        sub_186B510(&v89, v20 + 1, 0);
        v14 = 1 << v82;
        v15 = (char *)v90 + 4 * (v82 >> 5);
        v16 = *(_DWORD *)v15;
LABEL_19:
        *(_DWORD *)v15 = v16 | v14;
        v17 = *((_WORD *)v19 + 2);
        if ( v17 != 1 )
        {
          if ( v17 == 2 )
          {
            v53 = (unsigned int)v92;
            if ( (unsigned int)v92 >= HIDWORD(v92) )
            {
              v60 = (unsigned int)(2 * HIDWORD(v92));
              v6 = (_QWORD *)sub_186B270(16 * v60);
              v61 = (char *)v91;
              v62 = 0;
              v53 = (unsigned int)v92;
              v63 = 16LL * (unsigned int)v92;
              if ( (_DWORD)v92 )
              {
                do
                {
                  *(__m128i *)&v6[v62 / 8] = _mm_loadu_si128((const __m128i *)&v61[v62]);
                  v62 += 16LL;
                }
                while ( v62 != v63 );
              }
              if ( v61 != (char *)&v93 && v61 )
              {
                v85 = v6;
                sub_186B220(v61);
                v53 = (unsigned int)v92;
                v6 = v85;
              }
              v91 = v6;
              HIDWORD(v92) = v60;
            }
            else
            {
              v6 = v91;
            }
            v54 = (unsigned int **)&v6[2 * v53];
            *v54 = v19;
            *((_DWORD *)v54 + 2) = 0;
            v40 = (unsigned int)v92;
            v41 = v92 + 1;
            goto LABEL_47;
          }
          if ( v17 )
          {
            sub_1872CE0("");
            sub_1873130(114, 73);
          }
          if ( v19[6] )
          {
            v75 = v92;
            if ( (unsigned int)v92 >= HIDWORD(v92) )
            {
              v78 = (unsigned int)(2 * HIDWORD(v92));
              v6 = (_QWORD *)sub_186B270(16 * v78);
              v79 = (char *)v91;
              v80 = 0;
              v75 = v92;
              v81 = 16LL * (unsigned int)v92;
              if ( (_DWORD)v92 )
              {
                do
                {
                  *(__m128i *)&v6[v80 / 8] = _mm_loadu_si128((const __m128i *)&v79[v80]);
                  v80 += 16LL;
                }
                while ( v80 != v81 );
              }
              if ( v79 != (char *)&v93 && v79 )
              {
                v86 = v6;
                sub_186B220(v79);
                v75 = v92;
                v6 = v86;
              }
              v91 = v6;
              HIDWORD(v92) = v78;
            }
            else
            {
              v6 = v91;
            }
            v76 = (unsigned int **)&v6[2 * v75];
            *((_DWORD *)v76 + 2) = 0;
            v40 = (unsigned int)v92;
            *v76 = v19;
            v41 = v40 + 1;
            goto LABEL_47;
          }
          if ( !v87 )
          {
            v42 = *((_QWORD *)v19 + 2);
            v43 = *(unsigned int *)(a1 + 40);
            v44 = *(char **)(a1 + 32);
            v45 = *(_DWORD *)(v42 + 12);
            v46 = v43 - 1;
            v43 *= 24;
            v47 = &v44[v43];
            v48 = 24LL * (v45 & v46);
            v49 = &v44[v48];
            if ( v48 != v43 )
            {
              v50 = &v44[v48];
              while ( 1 )
              {
                while ( 1 )
                {
                  v51 = *(_QWORD *)v50;
                  if ( *(_QWORD *)v50 > 1u )
                    break;
                  if ( !v51 )
                    goto LABEL_23;
                  v50 += 24;
                  if ( v47 == v50 )
                    goto LABEL_58;
                }
                if ( *(_DWORD *)(v51 + 12) == v45 && v42 == v51 )
                  break;
                v50 += 24;
                if ( v47 == v50 )
                  goto LABEL_58;
              }
LABEL_76:
              v87 = *((_DWORD *)v50 + 4) != a3;
              v13 = *((_DWORD *)v10 + 2);
LABEL_24:
              if ( v13 >= v12 )
                goto LABEL_28;
              continue;
            }
LABEL_58:
            while ( v49 != v44 )
            {
              v52 = *(_QWORD *)v44;
              if ( *(_QWORD *)v44 > 1u )
              {
                if ( *(_DWORD *)(v52 + 12) == v45 && v42 == v52 )
                {
                  v50 = v44;
                  goto LABEL_76;
                }
              }
              else if ( !v52 )
              {
                goto LABEL_23;
              }
              v44 += 24;
            }
          }
        }
        break;
      }
LABEL_23:
      v13 = *((_DWORD *)v10 + 2);
      goto LABEL_24;
    }
    v31 = v4[18];
    v32 = *((_DWORD *)v10 + 2);
    v33 = v89;
    v34 = v90;
    v35 = v31 + v4[19] + 1;
    if ( v32 >= v35 )
    {
LABEL_89:
      v9 = v92 - 1;
      LODWORD(v92) = v92 - 1;
      if ( v87 || *((_WORD *)v4 + 2) )
        goto LABEL_7;
      v64 = *((_QWORD *)v4 + 2);
      v65 = *(unsigned int *)(a1 + 40);
      v66 = *(char **)(a1 + 32);
      v67 = *(_DWORD *)(v64 + 12);
      v68 = v65 - 1;
      v65 *= 24;
      v69 = &v66[v65];
      v70 = 24LL * (v67 & v68);
      v71 = &v66[v70];
      if ( v70 != v65 )
      {
        v72 = &v66[v70];
        do
        {
          v73 = *(_QWORD *)v72;
          if ( *(_QWORD *)v72 > 1u )
          {
            if ( *(_DWORD *)(v73 + 12) == v67 && v64 == v73 )
              goto LABEL_113;
          }
          else if ( !v73 )
          {
            goto LABEL_7;
          }
          v72 += 24;
        }
        while ( v69 != v72 );
      }
      if ( v66 == v71 )
        goto LABEL_7;
      while ( 1 )
      {
        v77 = *(_QWORD *)v66;
        if ( *(_QWORD *)v66 > 1u )
        {
          if ( *(_DWORD *)(v77 + 12) == v67 && v64 == v77 )
          {
            v72 = v66;
LABEL_113:
            v87 = *((_DWORD *)v72 + 4) != a3;
            goto LABEL_7;
          }
        }
        else if ( !v77 )
        {
          goto LABEL_7;
        }
        v66 += 24;
        if ( v71 == v66 )
          goto LABEL_7;
      }
    }
    if ( !v32 )
    {
      v36 = *((unsigned int **)v4 + 3);
      goto LABEL_42;
    }
    while ( 1 )
    {
      v55 = v32 - 1;
      if ( v31 < v32 )
        v55 = (unsigned int)v55 - v31;
      v36 = *(unsigned int **)&v4[4 * (unsigned int)v4[5] + 20 + 2 * v55];
LABEL_42:
      v37 = *v36;
      *((_DWORD *)v10 + 2) = ++v32;
      if ( v37 >= v33 )
        break;
      if ( (v34[v37 >> 5] & (1 << v37)) == 0 )
        goto LABEL_44;
      if ( v32 >= v35 )
        goto LABEL_89;
      v31 = v4[18];
    }
    v83 = v37;
    sub_186B510(&v89, v37 + 1, 0);
    v37 = v83;
LABEL_44:
    *((_DWORD *)v90 + (v37 >> 5)) |= 1 << v37;
    v38 = (unsigned int)v92;
    if ( (unsigned int)v92 >= HIDWORD(v92) )
    {
      v56 = (unsigned int)(2 * HIDWORD(v92));
      v6 = (_QWORD *)sub_186B270(16 * v56);
      v57 = (char *)v91;
      v58 = 0;
      v38 = (unsigned int)v92;
      v59 = 16LL * (unsigned int)v92;
      if ( (_DWORD)v92 )
      {
        do
        {
          *(__m128i *)&v6[v58 / 8] = _mm_loadu_si128((const __m128i *)&v57[v58]);
          v58 += 16LL;
        }
        while ( v58 != v59 );
      }
      if ( v57 != (char *)&v93 && v57 )
      {
        v84 = v6;
        sub_186B220(v57);
        v38 = (unsigned int)v92;
        v6 = v84;
      }
      v91 = v6;
      HIDWORD(v92) = v56;
    }
    else
    {
      v6 = v91;
    }
    v39 = (unsigned int **)&v6[2 * v38];
    *v39 = v36;
    *((_DWORD *)v39 + 2) = 0;
    v40 = (unsigned int)v92;
    v41 = v92 + 1;
LABEL_47:
    LODWORD(v92) = v41;
    v7 = (unsigned int)(v41 - 1);
    v4 = (_DWORD *)v6[2 * v40];
  }
  while ( 1 )
  {
    LODWORD(v92) = v7;
    if ( !v9 )
      break;
LABEL_8:
    v7 = (unsigned int)(v9 - 1);
    v4 = (_DWORD *)v6[2 * v7];
    --v9;
    v8 = *((_WORD *)v4 + 2);
    if ( v8 != 1 )
      goto LABEL_3;
  }
LABEL_10:
  if ( v6 && v6 != &v93 )
    sub_186B220(v6);
  if ( v90 )
    sub_186B220(v90);
  return !v87;
}

