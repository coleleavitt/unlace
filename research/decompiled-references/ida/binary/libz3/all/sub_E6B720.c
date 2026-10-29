char __fastcall sub_E6B720(__int64 a1, _QWORD *a2, __int64 *a3, unsigned int **a4)
{
  char *v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  char v9; // r14
  __int64 v10; // r15
  _QWORD *v11; // rbx
  unsigned int v12; // r15d
  void *v13; // rdi
  char *v14; // rcx
  bool v15; // si
  char *v16; // rax
  __int64 v17; // rdx
  _BYTE *v18; // rdi
  char *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rax
  __int64 *v27; // rdi
  char v28; // al
  __int64 v29; // r8
  char v30; // al
  __int64 v31; // rdx
  __int64 v32; // rsi
  __int64 v33; // rax
  unsigned int *v34; // r8
  __int64 v35; // r9
  char v36; // dl
  __int16 v37; // ax
  __int64 v38; // rsi
  size_t v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rdi
  _DWORD *v42; // rsi
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  unsigned int v46; // edi
  __int64 v47; // rax
  __int64 v48; // rdx
  unsigned int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rdi
  unsigned __int64 v52; // rdx
  __int64 v53; // rdi
  _QWORD *v54; // rax
  unsigned int v55; // edx
  __int64 v56; // rdi
  unsigned __int64 v57; // rdx
  __int64 v58; // rdi
  __int64 *v59; // rax
  __int64 v60; // rdx
  char v61; // al
  __int64 v62; // rdx
  char v63; // al
  char v64; // al
  char **exception; // r12
  char **v66; // r12
  char **v67; // r12
  int v70; // [rsp+8h] [rbp-1C0h]
  int v71[2]; // [rsp+8h] [rbp-1C0h]
  unsigned int v72; // [rsp+8h] [rbp-1C0h]
  unsigned int v73; // [rsp+8h] [rbp-1C0h]
  int v74[2]; // [rsp+8h] [rbp-1C0h]
  int v76[2]; // [rsp+18h] [rbp-1B0h]
  int v77[2]; // [rsp+18h] [rbp-1B0h]
  int v78[2]; // [rsp+18h] [rbp-1B0h]
  _QWORD *v79; // [rsp+28h] [rbp-1A0h]
  _DWORD *v80; // [rsp+28h] [rbp-1A0h]
  unsigned int v81; // [rsp+34h] [rbp-194h] BYREF
  __int64 v82; // [rsp+38h] [rbp-190h] BYREF
  __int64 v83; // [rsp+40h] [rbp-188h] BYREF
  __int64 v84; // [rsp+48h] [rbp-180h] BYREF
  __int64 v85[4]; // [rsp+50h] [rbp-178h] BYREF
  void *v86; // [rsp+70h] [rbp-158h] BYREF
  __int64 v87; // [rsp+78h] [rbp-150h]
  _BYTE v88[128]; // [rsp+80h] [rbp-148h] BYREF
  void *ptr; // [rsp+100h] [rbp-C8h] BYREF
  __int64 v90; // [rsp+108h] [rbp-C0h]
  _BYTE v91[184]; // [rsp+110h] [rbp-B8h] BYREF

  v6 = (char *)*a4;
  if ( *a4 )
    *((_DWORD *)v6 - 1) = 0;
  v7 = *a3;
  v8 = 0;
  v9 = 0;
  if ( !*a3 )
    return (char)v6;
  while ( 2 )
  {
    if ( v8 >= *(_DWORD *)(v7 - 4) )
    {
LABEL_9:
      if ( !v9 )
        return (char)v6;
      v11 = nullptr;
      v12 = 0;
      v86 = v88;
      v87 = 0x1000000000LL;
      ptr = v91;
      v90 = 0x1000000000LL;
      do
      {
        if ( v12 >= *(_DWORD *)(v7 - 4) )
          break;
        if ( *(_QWORD *)(v7 + 8LL * v12) )
        {
          v21 = *(_QWORD *)(*a2 + 8LL * v12);
          if ( v11 )
          {
            v22 = *((unsigned int *)v11 - 1);
            if ( (_DWORD)v22 == *((_DWORD *)v11 - 2) )
            {
              v72 = (unsigned int)(3 * v22 + 1) >> 1;
              v39 = 16 * v72 + 8;
              if ( 16 * (int)v22 + 8 >= (unsigned int)v39 || (unsigned int)v22 >= (unsigned int)(3 * v22 + 1) >> 1 )
              {
                exception = (char **)__cxa_allocate_exception(0x28u);
                sub_E65BE0(v85, "Overflow encountered when expanding vector");
                *exception = (char *)off_1C63128;
                sub_2333C0(exception + 1, v85);
                sub_233E40((__int64)v85);
                __cxa_throw(
                  exception,
                  (struct type_info *)&`typeinfo for'default_exception,
                  (void (*)(void *))sub_230E50);
              }
              *(_QWORD *)v77 = *(_QWORD *)(*a2 + 8LL * v12);
              v40 = sub_186B270(v39);
              v41 = *((unsigned int *)v11 - 1);
              v42 = (_DWORD *)v40;
              v43 = v40 + 8;
              *(_DWORD *)(v40 + 4) = v41;
              v44 = 0;
              v45 = 16 * v41;
              if ( v45 )
              {
                do
                {
                  *(__m128i *)&v42[v44 / 4 + 2] = _mm_loadu_si128((const __m128i *)&v11[v44 / 8]);
                  v44 += 16LL;
                }
                while ( v45 != v44 );
              }
              v79 = (_QWORD *)v43;
              sub_186B220(v11 - 1);
              v21 = *(_QWORD *)v77;
              *v42 = v72;
              v11 = v79;
              v23 = (unsigned __int64)&v79[2 * (unsigned int)v42[1]];
            }
            else
            {
              v23 = (unsigned __int64)&v11[2 * v22];
            }
          }
          else
          {
            *(_QWORD *)v74 = *(_QWORD *)(*a2 + 8LL * v12);
            v54 = (_QWORD *)sub_186B270(0x28u);
            v11 = v54 + 1;
            *v54 = 2;
            v21 = *(_QWORD *)v74;
            v23 = (unsigned __int64)(v54 + 1);
          }
          *(_QWORD *)v23 = v21;
          *(_DWORD *)(v23 + 8) = 0;
          LODWORD(v23) = *((_DWORD *)v11 - 1) + 1;
          *((_DWORD *)v11 - 1) = v23;
          while ( (_DWORD)v23 )
          {
            while ( 1 )
            {
              v23 = (unsigned int)(v23 - 1);
              v34 = (unsigned int *)&v11[2 * v23];
              v35 = *(_QWORD *)v34;
              v36 = *(_BYTE *)(*(_QWORD *)v34 + 6LL);
              if ( (v36 & 2) != 0 )
                goto LABEL_66;
              v37 = *(_WORD *)(v35 + 4);
              if ( v37 != 1 )
              {
                if ( v37 == 2 )
                {
                  v38 = 194;
                  sub_1872CE0("");
                }
                else
                {
                  if ( !v37 )
                  {
                    v46 = *(_DWORD *)(v35 + 24);
                    v47 = v34[2];
                    v48 = v35 + 8 * v47;
                    while ( (unsigned int)v47 < v46 )
                    {
                      v32 = *(_QWORD *)(v48 + 32);
                      LODWORD(v47) = v47 + 1;
                      v48 += 8;
                      v34[2] = v47;
                      if ( (*(_BYTE *)(v32 + 6) & 2) == 0 )
                      {
                        v33 = *((unsigned int *)v11 - 1);
                        if ( (_DWORD)v33 == *((_DWORD *)v11 - 2) )
                        {
                          v73 = (unsigned int)(3 * v33 + 1) >> 1;
                          v49 = 16 * v73 + 8;
                          if ( 16 * (int)v33 + 8 >= v49 || (unsigned int)v33 >= (unsigned int)(3 * v33 + 1) >> 1 )
                          {
                            v66 = (char **)__cxa_allocate_exception(0x28u);
                            sub_E65BE0(v85, "Overflow encountered when expanding vector");
                            *v66 = (char *)off_1C63128;
                            sub_2333C0(v66 + 1, v85);
                            sub_233E40((__int64)v85);
                            __cxa_throw(
                              v66,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          v50 = sub_186B270(v49);
                          v51 = *((unsigned int *)v11 - 1);
                          v52 = 0;
                          *(_QWORD *)v78 = v50 + 8;
                          *(_DWORD *)(v50 + 4) = v51;
                          v53 = 16 * v51;
                          if ( v53 )
                          {
                            do
                            {
                              *(__m128i *)(v50 + v52 + 8) = _mm_loadu_si128((const __m128i *)&v11[v52 / 8]);
                              v52 += 16LL;
                            }
                            while ( v53 != v52 );
                          }
                          goto LABEL_75;
                        }
                        goto LABEL_52;
                      }
                    }
                    v85[0] = v35;
                    *(_BYTE *)(v35 + 6) |= 2u;
                    sub_E6B620((__int64)&ptr, v85);
                    goto LABEL_65;
                  }
                  v38 = 209;
                  sub_1872CE0("");
                }
                sub_1873130(114, v38);
              }
              v24 = *(unsigned int *)(v35 + 16);
              v25 = v34[2];
              v81 = *(_DWORD *)(v35 + 16);
              if ( v25 )
              {
                v59 = v85;
                *(_BYTE *)(v35 + 6) = v36 & 0xFE;
                v60 = *a3;
                v85[0] = 0;
                if ( v60 && (unsigned int)v24 < *(_DWORD *)(v60 - 4) )
                  v59 = (__int64 *)(v60 + 8 * v24);
                if ( !*v59 )
                {
LABEL_83:
                  v84 = v35;
                  goto LABEL_84;
                }
                *(_QWORD *)v71 = v35;
                sub_E6A7E0(a4, &v81);
LABEL_90:
                v35 = *(_QWORD *)v71;
LABEL_91:
                v61 = *(_BYTE *)(v35 + 6) & 2;
                goto LABEL_92;
              }
              v26 = *a3;
              if ( !*a3 )
                goto LABEL_83;
              if ( (unsigned int)v24 >= *(_DWORD *)(v26 - 4) )
                goto LABEL_83;
              v27 = (__int64 *)(v26 + 8LL * (unsigned int)v24);
              if ( !*v27 )
                goto LABEL_83;
              if ( (v36 & 1) != 0 )
                break;
              *(_QWORD *)v76 = v34;
              *(_QWORD *)v71 = v35;
              v28 = sub_E682A0(a1, v24, *v27);
              v29 = *(_QWORD *)v76;
              if ( v28 )
              {
                sub_E6A7E0(a4, &v81);
                v35 = *(_QWORD *)v71;
                v62 = *(_QWORD *)(*a3 + 8LL * (unsigned int)v24);
                v63 = *(_BYTE *)(v62 + 6);
                v82 = v62;
                if ( (v63 & 2) == 0 )
                {
                  *(_BYTE *)(v62 + 6) = v63 | 2;
                  sub_E6B620((__int64)&ptr, &v82);
                  goto LABEL_90;
                }
                goto LABEL_91;
              }
              v30 = *(_BYTE *)(*(_QWORD *)v71 + 6LL);
              v83 = *(_QWORD *)v71;
              if ( (v30 & 1) == 0 )
              {
                *(_BYTE *)(*(_QWORD *)v71 + 6LL) = v30 | 1;
                sub_E6B620((__int64)&v86, &v83);
                v29 = *(_QWORD *)v76;
              }
              v31 = *a3;
              *(_DWORD *)(v29 + 8) = 1;
              v32 = *(_QWORD *)(v31 + 8LL * (unsigned int)v24);
              v33 = *((unsigned int *)v11 - 1);
              if ( (_DWORD)v33 == *((_DWORD *)v11 - 2) )
              {
                v73 = (unsigned int)(3 * v33 + 1) >> 1;
                v55 = 16 * v73 + 8;
                if ( 16 * (int)v33 + 8 >= v55 || (unsigned int)v33 >= (unsigned int)(3 * v33 + 1) >> 1 )
                {
                  v67 = (char **)__cxa_allocate_exception(0x28u);
                  sub_E65BE0(v85, "Overflow encountered when expanding vector");
                  *v67 = (char *)off_1C63128;
                  sub_2333C0(v67 + 1, v85);
                  sub_233E40((__int64)v85);
                  __cxa_throw(v67, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
                }
                v50 = sub_186B270(v55);
                v56 = *((unsigned int *)v11 - 1);
                v57 = 0;
                *(_QWORD *)v78 = v50 + 8;
                *(_DWORD *)(v50 + 4) = v56;
                v58 = 16 * v56;
                if ( v58 )
                {
                  do
                  {
                    *(__m128i *)(v50 + v57 + 8) = _mm_loadu_si128((const __m128i *)&v11[v57 / 8]);
                    v57 += 16LL;
                  }
                  while ( v58 != v57 );
                }
LABEL_75:
                v80 = (_DWORD *)v50;
                sub_186B220(v11 - 1);
                v11 = *(_QWORD **)v78;
                *v80 = v73;
                v33 = (unsigned int)v80[1];
              }
LABEL_52:
              v23 = (unsigned __int64)&v11[2 * v33];
              *(_QWORD *)v23 = v32;
              *(_DWORD *)(v23 + 8) = 0;
              LODWORD(v23) = *((_DWORD *)v11 - 1) + 1;
              *((_DWORD *)v11 - 1) = v23;
            }
            *(_BYTE *)(v35 + 6) = v36 & 0xFE;
            v64 = *(_BYTE *)(v35 + 6);
            *v27 = 0;
            v61 = v64 & 2;
LABEL_92:
            v84 = v35;
            if ( !v61 )
            {
LABEL_84:
              *(_BYTE *)(v35 + 6) |= 2u;
              sub_E6B620((__int64)&ptr, &v84);
            }
LABEL_65:
            LODWORD(v23) = *((_DWORD *)v11 - 1) - 1;
LABEL_66:
            *((_DWORD *)v11 - 1) = v23;
          }
          v7 = *a3;
        }
        ++v12;
      }
      while ( v7 );
      v13 = ptr;
      v14 = (char *)ptr + 8 * (unsigned int)v90;
      v15 = ptr == v91 || ptr == nullptr;
      if ( ptr != v14 )
      {
        v16 = (char *)ptr;
        do
        {
          v17 = *(_QWORD *)v16;
          v16 += 8;
          *(_BYTE *)(v17 + 6) &= ~2u;
        }
        while ( v16 != v14 );
      }
      LODWORD(v90) = 0;
      if ( !v15 )
        sub_186B220(v13);
      goto LABEL_30;
    }
    while ( 1 )
    {
      v10 = *(_QWORD *)(v7 + 8LL * v8);
      if ( !v10 )
        goto LABEL_19;
      LOWORD(v6) = *(_WORD *)(v10 + 4);
      if ( (_WORD)v6 )
        break;
      LOBYTE(v6) = (*(_BYTE *)(v10 + 30) & 2) != 0;
      if ( (*(_BYTE *)(v10 + 30) & 2) == 0 )
        goto LABEL_21;
LABEL_8:
      *(_QWORD *)(v7 + 8LL * v8++) = 0;
      if ( v8 >= *(_DWORD *)(v7 - 4) )
        goto LABEL_9;
    }
    LOBYTE(v6) = (_WORD)v6 == 2;
    if ( (_BYTE)v6 )
      goto LABEL_8;
LABEL_21:
    v70 = *(_DWORD *)(*(_QWORD *)(*a2 + 8LL * v8) + 16LL);
    LOBYTE(v6) = sub_E661F0(v70, *(_QWORD *)(v7 + 8LL * v8));
    if ( (_BYTE)v6 )
    {
      LOBYTE(v6) = sub_E682A0(a1, v70, v10);
      v7 = *a3;
      if ( (_BYTE)v6 )
        v9 = (char)v6;
      else
        *(_QWORD *)(v7 + 8LL * v8) = 0;
    }
    else
    {
      v7 = *a3;
      v9 = 1;
    }
    if ( v7 )
    {
LABEL_19:
      ++v8;
      continue;
    }
    break;
  }
  if ( v9 )
  {
    v11 = nullptr;
    v86 = v88;
    v87 = 0x1000000000LL;
LABEL_30:
    v18 = v86;
    v19 = (char *)v86 + 8 * (unsigned int)v87;
    v6 = (char *)v86;
    if ( v86 != v19 )
    {
      do
      {
        v20 = *(_QWORD *)v6;
        v6 += 8;
        *(_BYTE *)(v20 + 6) &= ~1u;
      }
      while ( v19 != v6 );
    }
    LODWORD(v87) = 0;
    if ( v18 != v88 && v18 )
      LOBYTE(v6) = sub_186B220(v18);
    if ( v11 )
      LOBYTE(v6) = sub_186B220(v11 - 1);
  }
  return (char)v6;
}

