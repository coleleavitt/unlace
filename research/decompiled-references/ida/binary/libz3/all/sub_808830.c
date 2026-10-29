char *__fastcall sub_808830(__int64 a1, __int64 a2, char **a3)
{
  char **v3; // rbp
  char **v4; // rbp
  char **exception; // rbp
  unsigned int **v8; // rbx
  char *v9; // rbp
  unsigned int **i; // rcx
  __int64 v11; // rax
  unsigned int *v12; // r13
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  char *v17; // rdx
  char v18; // al
  int v19; // edx
  _QWORD *v20; // rsi
  unsigned int v21; // edx
  __int64 v22; // rax
  __int16 v23; // cx
  _BYTE *v24; // rdi
  char *v25; // rcx
  char *result; // rax
  __int64 v27; // rdx
  unsigned int **v28; // rbx
  __int64 v29; // rax
  unsigned int **v30; // r8
  unsigned int *v31; // rbp
  __int64 v32; // rax
  __int64 v33; // rcx
  int v34; // ecx
  _QWORD *v35; // rsi
  char *v36; // rcx
  unsigned int v37; // eax
  __int64 v38; // rsi
  int v39; // eax
  char *v40; // rsi
  unsigned int *v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  int v44; // ecx
  _QWORD *v45; // r13
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  char *v49; // rcx
  __int64 v50; // r8
  char *v51; // r14
  __int64 v52; // r15
  __int64 j; // rcx
  signed __int64 v54; // r13
  char *v55; // rax
  char *v56; // rbx
  unsigned int v57; // edx
  size_t v58; // rsi
  unsigned int *v59; // rax
  __int64 v60; // r13
  char *v61; // rax
  char *v62; // rdi
  unsigned __int64 v63; // rax
  __int64 v64; // r9
  __int64 v65; // rbp
  char *v66; // rax
  char *v67; // rdi
  unsigned __int64 v68; // rax
  __int64 v69; // r8
  unsigned int v70; // r13d
  size_t v71; // rsi
  unsigned int *v72; // rax
  __int64 v73; // rsi
  _QWORD *v74; // rax
  unsigned __int64 v75; // rax
  __int64 v76; // r9
  _QWORD *v77; // rax
  __int64 v78; // rbp
  char *v79; // rax
  char *v80; // rdi
  unsigned __int64 v81; // rax
  __int64 v82; // rsi
  unsigned __int64 v83; // rax
  __int64 v84; // r10
  unsigned int v85; // r13d
  unsigned int v86; // ecx
  unsigned int *v87; // rax
  __int64 v88; // rcx
  _QWORD *v89; // rbp
  unsigned __int64 v90; // rax
  __int64 v91; // r8
  __int64 v92; // [rsp+8h] [rbp-110h]
  unsigned int **v93; // [rsp+8h] [rbp-110h]
  unsigned int v94; // [rsp+8h] [rbp-110h]
  unsigned int **v95; // [rsp+8h] [rbp-110h]
  unsigned int v96; // [rsp+8h] [rbp-110h]
  unsigned int **v97; // [rsp+8h] [rbp-110h]
  unsigned int v98; // [rsp+8h] [rbp-110h]
  unsigned int v99; // [rsp+8h] [rbp-110h]
  unsigned int v100; // [rsp+8h] [rbp-110h]
  unsigned int v101; // [rsp+8h] [rbp-110h]
  __int64 v102; // [rsp+10h] [rbp-108h]
  unsigned int v103; // [rsp+10h] [rbp-108h]
  unsigned int **v104; // [rsp+10h] [rbp-108h]
  unsigned int **v105; // [rsp+10h] [rbp-108h]
  unsigned int **v106; // [rsp+10h] [rbp-108h]
  __int64 v107[4]; // [rsp+30h] [rbp-E8h] BYREF
  void *v108; // [rsp+50h] [rbp-C8h]
  __int64 v109; // [rsp+58h] [rbp-C0h]
  _BYTE v110[184]; // [rsp+60h] [rbp-B8h] BYREF

  v8 = *(unsigned int ***)(a2 + 8);
  v9 = *a3;
  v108 = v110;
  v109 = 0x1000000000LL;
  if ( v8 )
  {
    for ( i = &v8[*((unsigned int *)v8 - 1)]; i != v8; LODWORD(v109) = v19 + 1 )
    {
      while ( 1 )
      {
        v11 = *(_QWORD *)(a1 + 280);
        v12 = *v8;
        if ( !v11 || (v13 = *v12, (unsigned int)v13 >= *(_DWORD *)(v11 - 4)) || !*(_QWORD *)(v11 + 8 * v13) )
        {
          if ( (*((_BYTE *)v12 + 6) & 1) == 0 )
          {
            if ( v9 )
            {
              v14 = *((_DWORD *)v9 - 1);
              if ( v14 == *((_DWORD *)v9 - 2) )
              {
                v57 = (3 * v14 + 1) >> 1;
                v58 = 8 * v57 + 8;
                if ( 8 * v14 + 8 >= (unsigned int)v58 || v14 >= v57 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(v107, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, v107);
                  sub_233E40((__int64)v107);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v103 = (3 * v14 + 1) >> 1;
                v93 = i;
                v59 = (unsigned int *)sub_186B300(v9 - 8, v58);
                v9 = (char *)(v59 + 2);
                i = v93;
                *a3 = (char *)(v59 + 2);
                *v59 = v103;
                LODWORD(v59) = v59[1];
                v17 = &v9[8 * (unsigned int)v59];
                v16 = (_DWORD)v59 + 1;
              }
              else
              {
                v15 = v14;
                v16 = v14 + 1;
                v17 = &v9[8 * v15];
              }
            }
            else
            {
              v97 = i;
              v74 = (_QWORD *)sub_186B270(0x18u);
              v9 = (char *)(v74 + 1);
              *v74 = 2;
              i = v97;
              v16 = 1;
              *a3 = v9;
              v17 = v9;
            }
            *(_QWORD *)v17 = v12;
            *((_DWORD *)v9 - 1) = v16;
            v18 = *((_BYTE *)v12 + 6);
            if ( (v18 & 1) == 0 )
              break;
          }
        }
        if ( i == ++v8 )
          goto LABEL_16;
      }
      *((_BYTE *)v12 + 6) = v18 | 1;
      v19 = v109;
      if ( (unsigned int)v109 >= HIDWORD(v109) )
      {
        v95 = i;
        v65 = (unsigned int)(2 * HIDWORD(v109));
        v66 = (char *)sub_186B270(8 * v65);
        v19 = v109;
        v67 = (char *)v108;
        v20 = v66;
        i = v95;
        if ( (_DWORD)v109 )
        {
          if ( (unsigned int)(v109 - 1) <= 2 || v66 == (char *)v108 + 8 )
          {
            v75 = 0;
            v76 = 8LL * (unsigned int)v109;
            do
            {
              v20[v75 / 8] = *(_QWORD *)&v67[v75];
              v75 += 8LL;
            }
            while ( v76 != v75 );
          }
          else
          {
            v68 = 0;
            v69 = 16LL * ((unsigned int)v109 >> 1);
            do
            {
              *(__m128i *)&v20[v68 / 8] = _mm_loadu_si128((const __m128i *)&v67[v68]);
              v68 += 16LL;
            }
            while ( v68 != v69 );
            if ( (v19 & 1) != 0 )
              v20[v19 & 0xFFFFFFFE] = *(_QWORD *)&v67[8 * (v19 & 0xFFFFFFFE)];
          }
        }
        if ( v67 != v110 && v67 )
        {
          sub_186B220(v67);
          v19 = v109;
          i = v95;
        }
        HIDWORD(v109) = v65;
        v9 = *a3;
        v108 = v20;
      }
      else
      {
        v20 = v108;
      }
      ++v8;
      v20[v19] = v12;
    }
  }
LABEL_16:
  v21 = 0;
  if ( !v9 )
    goto LABEL_21;
  while ( v21 < *((_DWORD *)v9 - 1) )
  {
    v22 = *(_QWORD *)&v9[8 * v21];
    v23 = *(_WORD *)(v22 + 4);
    if ( !v23 )
    {
      v28 = (unsigned int **)(v22 + 32);
      v29 = *(unsigned int *)(v22 + 24);
      v30 = &v28[v29];
      if ( v29 * 8 )
      {
        do
        {
          v31 = *v28;
          if ( (*((_BYTE *)*v28 + 6) & 1) == 0 )
          {
            v32 = *(_QWORD *)(a1 + 280);
            if ( !v32 || (v33 = *v31, (unsigned int)v33 >= *(_DWORD *)(v32 - 4)) || !*(_QWORD *)(v32 + 8 * v33) )
            {
              *((_BYTE *)v31 + 6) |= 1u;
              v34 = v109;
              if ( (unsigned int)v109 >= HIDWORD(v109) )
              {
                v104 = v30;
                v60 = (unsigned int)(2 * HIDWORD(v109));
                v94 = v21;
                v61 = (char *)sub_186B270(8 * v60);
                v34 = v109;
                v62 = (char *)v108;
                v35 = v61;
                v21 = v94;
                v30 = v104;
                if ( (_DWORD)v109 )
                {
                  if ( (unsigned int)(v109 - 1) <= 2 || v61 == (char *)v108 + 8 )
                  {
                    v83 = 0;
                    v84 = 8LL * (unsigned int)v109;
                    do
                    {
                      v35[v83 / 8] = *(_QWORD *)&v62[v83];
                      v83 += 8LL;
                    }
                    while ( v83 != v84 );
                  }
                  else
                  {
                    v63 = 0;
                    v64 = 16LL * ((unsigned int)v109 >> 1);
                    do
                    {
                      *(__m128i *)&v35[v63 / 8] = _mm_loadu_si128((const __m128i *)&v62[v63]);
                      v63 += 16LL;
                    }
                    while ( v64 != v63 );
                    if ( (v34 & 1) != 0 )
                      v35[v34 & 0xFFFFFFFE] = *(_QWORD *)&v62[8 * (v34 & 0xFFFFFFFE)];
                  }
                }
                if ( v62 != v110 && v62 )
                {
                  sub_186B220(v62);
                  v34 = v109;
                  v30 = v104;
                  v21 = v94;
                }
                v108 = v35;
                HIDWORD(v109) = v60;
              }
              else
              {
                v35 = v108;
              }
              v35[v34] = v31;
              LODWORD(v109) = v34 + 1;
              v36 = *a3;
              if ( *a3 )
              {
                v37 = *((_DWORD *)v36 - 1);
                if ( v37 == *((_DWORD *)v36 - 2) )
                {
                  v70 = (3 * v37 + 1) >> 1;
                  v71 = 8 * v70 + 8;
                  if ( 8 * v37 + 8 >= (unsigned int)v71 || v37 >= v70 )
                  {
                    v4 = (char **)__cxa_allocate_exception(0x28u);
                    sub_24ABB0(v107, "Overflow encountered when expanding vector");
                    *v4 = (char *)off_1C63128;
                    sub_2333C0(v4 + 1, v107);
                    sub_233E40((__int64)v107);
                    __cxa_throw(v4, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                  }
                  v105 = v30;
                  v96 = v21;
                  v72 = (unsigned int *)sub_186B300(v36 - 8, v71);
                  v73 = v72[1];
                  v36 = (char *)(v72 + 2);
                  v21 = v96;
                  *v72 = v70;
                  *a3 = (char *)(v72 + 2);
                  v30 = v105;
                  LODWORD(v72) = v73;
                  v40 = &v36[8 * v73];
                  v39 = (_DWORD)v72 + 1;
                }
                else
                {
                  v38 = v37;
                  v39 = v37 + 1;
                  v40 = &v36[8 * v38];
                }
              }
              else
              {
                v106 = v30;
                v98 = v21;
                v77 = (_QWORD *)sub_186B270(0x18u);
                v36 = (char *)(v77 + 1);
                *v77 = 2;
                v21 = v98;
                v39 = 1;
                *a3 = v36;
                v30 = v106;
                v40 = v36;
              }
              *(_QWORD *)v40 = v31;
              *((_DWORD *)v36 - 1) = v39;
            }
          }
          ++v28;
        }
        while ( v30 != v28 );
      }
      goto LABEL_20;
    }
    if ( v23 != 2
      || (v41 = *(unsigned int **)(v22 + 24), (*((_BYTE *)v41 + 6) & 1) != 0)
      || (v42 = *(_QWORD *)(a1 + 280)) != 0
      && (v43 = *v41, (unsigned int)v43 < *(_DWORD *)(v42 - 4))
      && *(_QWORD *)(v42 + 8 * v43) )
    {
LABEL_20:
      v9 = *a3;
      ++v21;
      if ( !*a3 )
        goto LABEL_21;
    }
    else
    {
      *((_BYTE *)v41 + 6) |= 1u;
      v44 = v109;
      if ( (unsigned int)v109 >= HIDWORD(v109) )
      {
        v99 = v21;
        v78 = (unsigned int)(2 * HIDWORD(v109));
        v79 = (char *)sub_186B270(8 * v78);
        v44 = v109;
        v80 = (char *)v108;
        v45 = v79;
        v21 = v99;
        if ( (_DWORD)v109 )
        {
          if ( (unsigned int)(v109 - 1) <= 2 || v79 == (char *)v108 + 8 )
          {
            v90 = 0;
            v91 = 8LL * (unsigned int)v109;
            do
            {
              v45[v90 / 8] = *(_QWORD *)&v80[v90];
              v90 += 8LL;
            }
            while ( v90 != v91 );
          }
          else
          {
            v81 = 0;
            v82 = 16LL * ((unsigned int)v109 >> 1);
            do
            {
              *(__m128i *)&v45[v81 / 8] = _mm_loadu_si128((const __m128i *)&v80[v81]);
              v81 += 16LL;
            }
            while ( v82 != v81 );
            if ( (v44 & 1) != 0 )
              v45[v44 & 0xFFFFFFFE] = *(_QWORD *)&v80[8 * (v44 & 0xFFFFFFFE)];
          }
        }
        if ( v80 && v80 != v110 )
        {
          sub_186B220(v80);
          v44 = v109;
          v21 = v99;
        }
        v108 = v45;
        HIDWORD(v109) = v78;
      }
      else
      {
        v45 = v108;
      }
      v9 = *a3;
      v45[v44] = v41;
      LODWORD(v109) = v44 + 1;
      if ( v9 )
      {
        v46 = *((_DWORD *)v9 - 1);
        if ( v46 == *((_DWORD *)v9 - 2) )
        {
          v85 = (3 * v46 + 1) >> 1;
          v86 = 8 * v85 + 8;
          if ( 8 * v46 + 8 >= v86 || v46 >= v85 )
          {
            v3 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v107, "Overflow encountered when expanding vector");
            *v3 = (char *)off_1C63128;
            sub_2333C0(v3 + 1, v107);
            sub_233E40((__int64)v107);
            __cxa_throw(v3, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v100 = v21;
          v87 = (unsigned int *)sub_186B300(v9 - 8, v86);
          v88 = v87[1];
          v9 = (char *)(v87 + 2);
          v21 = v100;
          *v87 = v85;
          *a3 = (char *)(v87 + 2);
          LODWORD(v87) = v88;
          v49 = &v9[8 * v88];
          v48 = (_DWORD)v87 + 1;
        }
        else
        {
          v47 = v46;
          v48 = v46 + 1;
          v49 = &v9[8 * v47];
        }
      }
      else
      {
        v101 = v21;
        v89 = (_QWORD *)sub_186B270(0x18u);
        *v89 = 2;
        v21 = v101;
        v48 = 1;
        v9 = (char *)(v89 + 1);
        *a3 = v9;
        v49 = v9;
      }
      *(_QWORD *)v49 = v41;
      ++v21;
      *((_DWORD *)v9 - 1) = v48;
    }
  }
  v50 = 8LL * *((unsigned int *)v9 - 1);
  v51 = &v9[v50];
  if ( v9 != &v9[v50] )
  {
    v52 = ((v50 >> 3) + 1) >> 1;
    for ( j = v52; ; j = (v92 + 1) >> 1 )
    {
      v54 = 8 * j;
      v102 = v50;
      v92 = j;
      v55 = (char *)operator new(8 * j, (const std::nothrow_t *)&std::nothrow);
      v50 = v102;
      v56 = v55;
      if ( v55 )
        break;
      if ( v92 == 1 )
      {
        v54 = 0;
        sub_805C60(v9, (__int64)v51);
        goto LABEL_55;
      }
    }
    if ( v92 == v52 )
    {
      sub_8044C0(v9, &v9[v54], v55);
      sub_8044C0(&v9[v54], v51, v56);
      sub_8041D0(v9, &v9[v54], v51, v54 >> 3, (v102 - v54) >> 3, v56);
    }
    else
    {
      sub_805410(v9, v51, v55, v92);
    }
LABEL_55:
    operator delete(v56, v54);
  }
LABEL_21:
  v24 = v108;
  v25 = (char *)v108 + 8 * (unsigned int)v109;
  result = (char *)v108;
  if ( v108 != v25 )
  {
    do
    {
      v27 = *(_QWORD *)result;
      result += 8;
      *(_BYTE *)(v27 + 6) &= ~1u;
    }
    while ( result != v25 );
  }
  LODWORD(v109) = 0;
  if ( v24 )
  {
    if ( v24 != v110 )
      return (char *)sub_186B220(v24);
  }
  return result;
}

