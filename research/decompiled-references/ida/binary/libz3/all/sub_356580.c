void __fastcall sub_356580(__int64 a1, __int64 **a2)
{
  __int64 *v2; // rbp
  __int64 v4; // r13
  __int64 v5; // rsi
  _QWORD *v6; // rdx
  int v7; // edi
  __int64 v8; // r9
  __int64 v9; // rax
  _QWORD *v10; // r8
  _QWORD *v11; // rsi
  _QWORD *j; // r15
  __int64 v13; // rax
  void *v14; // r15
  void *v15; // r15
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // r14d
  __int64 v19; // rax
  _QWORD *v20; // rax
  _QWORD *v21; // rsi
  size_t v22; // rdx
  void *v23; // r14
  int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  __int64 *v27; // r9
  int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 *v31; // r8
  __int64 *v32; // rsi
  __int64 *k; // rax
  __int64 v34; // rdx
  void *v35; // r15
  __int64 *v36; // r15
  unsigned int v37; // r14d
  __int64 v38; // rax
  __int64 v39; // r13
  _QWORD *v40; // rax
  _QWORD *v41; // rsi
  __int64 *v42; // r14
  _QWORD *v43; // rdi
  int m; // eax
  unsigned int v45; // eax
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rsi
  __int64 *v49; // r13
  unsigned __int64 v50; // r15
  __int64 v51; // rsi
  void *v53; // r13
  unsigned int v54; // r8d
  size_t v55; // rsi
  unsigned int *v56; // rax
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 *v59; // rcx
  __int64 v60; // rdi
  unsigned int v61; // edx
  int v62; // eax
  unsigned int v63; // eax
  char *v64; // r14
  __int64 v65; // rax
  __int64 v66; // r13
  char *v67; // r15
  __int64 v68; // rax
  void *v69; // r15
  char **exception; // rbp
  void *v71; // [rsp+10h] [rbp-E8h]
  unsigned int v72; // [rsp+10h] [rbp-E8h]
  unsigned int v73; // [rsp+10h] [rbp-E8h]
  __int64 v74; // [rsp+10h] [rbp-E8h]
  __int64 *i; // [rsp+18h] [rbp-E0h]
  void *v76; // [rsp+28h] [rbp-D0h]
  __int64 v77; // [rsp+40h] [rbp-B8h] BYREF
  __int64 *v78; // [rsp+48h] [rbp-B0h]
  __int64 *v79; // [rsp+50h] [rbp-A8h] BYREF
  int v80; // [rsp+58h] [rbp-A0h]
  _QWORD v81[2]; // [rsp+60h] [rbp-98h] BYREF
  _QWORD v82[2]; // [rsp+70h] [rbp-88h] BYREF
  __int64 v83; // [rsp+80h] [rbp-78h] BYREF
  __int128 v84; // [rsp+88h] [rbp-70h]
  __int64 v85; // [rsp+98h] [rbp-60h] BYREF
  __int64 v86; // [rsp+A0h] [rbp-58h]
  __int64 v87; // [rsp+A8h] [rbp-50h] BYREF
  __int64 v88; // [rsp+B0h] [rbp-48h]

  v2 = *a2;
  if ( *a2 )
  {
    for ( i = &v2[*((unsigned int *)v2 - 1)]; i != v2; ++v2 )
    {
      v4 = *v2;
      v5 = *(unsigned int *)(a1 + 624);
      v81[0] = 0;
      v82[0] = 1;
      v6 = *(_QWORD **)(a1 + 616);
      v85 = 0;
      v87 = 1;
      v7 = *(_DWORD *)(v4 + 12);
      v79 = nullptr;
      v80 = 0;
      v83 = v4;
      v81[1] = 0;
      v8 = 56LL * (v7 & (unsigned int)(v5 - 1));
      v82[1] = 0;
      v9 = 56 * v5;
      v84 = 0;
      v10 = &v6[(unsigned __int64)v8 / 8];
      v86 = 0;
      v11 = &v6[7 * v5];
      v88 = 0;
      if ( v8 != v9 )
      {
        for ( j = &v6[(unsigned __int64)v8 / 8]; v11 != j; j += 7 )
        {
          v13 = *j;
          if ( *j > 1u )
          {
            if ( *(_DWORD *)(v13 + 12) == v7 && v4 == v13 )
            {
LABEL_25:
              v71 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v85);
              sub_182CBA0(v71, &v87);
              if ( (_QWORD)v84 )
                sub_186B220((void *)(v84 - 8));
              if ( &v79 != j + 1 )
              {
                if ( v79 )
                  sub_186B220(v79 - 1);
                v17 = j[1];
                if ( v17 )
                {
                  v18 = *(_DWORD *)(v17 - 4);
                  v19 = *(unsigned int *)(v17 - 8);
                  v72 = v19;
                  v20 = (_QWORD *)sub_186B270(8 * v19 + 8);
                  v21 = (_QWORD *)j[1];
                  v79 = v20 + 1;
                  *v20 = _mm_unpacklo_epi32(_mm_cvtsi32_si128(v72), _mm_cvtsi32_si128(v18)).m128i_u64[0];
                  if ( v21 )
                  {
                    v22 = 8LL * *((unsigned int *)v21 - 1);
                    if ( v22 <= 8 )
                    {
                      if ( v22 == 8 )
                        v20[1] = *v21;
                    }
                    else
                    {
                      memmove(v20 + 1, v21, v22);
                    }
                  }
                }
                else
                {
                  v79 = nullptr;
                }
              }
              v23 = qword_1C7F2C0;
              v80 = *((_DWORD *)j + 4);
              if ( (*((_BYTE *)j + 28) & 1) != 0 )
              {
                sub_182C690(qword_1C7F2C0, v81, j + 3);
              }
              else
              {
                v24 = *((_DWORD *)j + 6);
                BYTE4(v81[0]) &= ~1u;
                LODWORD(v81[0]) = v24;
              }
              if ( (*((_BYTE *)j + 44) & 1) != 0 )
              {
                sub_182C690(v23, v82, j + 5);
              }
              else
              {
                v25 = *((_DWORD *)j + 10);
                BYTE4(v82[0]) &= ~1u;
                LODWORD(v82[0]) = v25;
              }
              v26 = *(unsigned int *)(a1 + 624);
              v27 = *(__int64 **)(a1 + 616);
              v85 = 0;
              v87 = 1;
              v28 = *(_DWORD *)(v4 + 12);
              v83 = v4;
              v84 = 0;
              v86 = 0;
              v88 = 0;
              v29 = 56LL * (v28 & (unsigned int)(v26 - 1));
              v30 = 56 * v26;
              v31 = &v27[(unsigned __int64)v29 / 8];
              v32 = &v27[7 * v26];
              if ( v29 != v30 )
              {
                for ( k = &v27[(unsigned __int64)v29 / 8]; v32 != k; k += 7 )
                {
                  v34 = *k;
                  if ( (unsigned __int64)*k > 1 )
                  {
                    if ( *(_DWORD *)(v34 + 12) == v28 && v4 == v34 )
                    {
LABEL_85:
                      v59 = k + 7;
                      v60 = *(unsigned int *)(a1 + 628);
                      if ( v32 == k + 7 )
                        v59 = v27;
                      v61 = v60 - 1;
                      if ( *v59 )
                      {
                        *k = 1;
                        v62 = *(_DWORD *)(a1 + 632);
                        *(_DWORD *)(a1 + 628) = v61;
                        v63 = v62 + 1;
                        if ( v61 < 0x40 )
                          v61 = 64;
                        *(_DWORD *)(a1 + 632) = v63;
                        if ( v61 < v63 && !(unsigned __int8)sub_186AF10(v60) )
                        {
                          v74 = sub_355580(*(_DWORD *)(a1 + 624));
                          sub_355600(*(_QWORD *)(a1 + 616), *(_DWORD *)(a1 + 624), v74, *(_DWORD *)(a1 + 624));
                          v64 = *(char **)(a1 + 616);
                          if ( v64 )
                          {
                            v65 = *(unsigned int *)(a1 + 624);
                            if ( (_DWORD)v65 )
                            {
                              v66 = *(_QWORD *)(a1 + 616);
                              v67 = &v64[56 * v65];
                              do
                              {
                                while ( 1 )
                                {
                                  v76 = qword_1C7F2C0;
                                  sub_182CBA0(qword_1C7F2C0, v66 + 24);
                                  sub_182CBA0(v76, v66 + 40);
                                  v68 = *(_QWORD *)(v66 + 8);
                                  if ( !v68 )
                                    break;
                                  v66 += 56;
                                  sub_186B220((void *)(v68 - 8));
                                  if ( v67 == (char *)v66 )
                                    goto LABEL_97;
                                }
                                v66 += 56;
                              }
                              while ( (char *)v66 != v67 );
                            }
LABEL_97:
                            sub_186B220(v64);
                          }
                          *(_DWORD *)(a1 + 632) = 0;
                          *(_QWORD *)(a1 + 616) = v74;
                        }
                      }
                      else
                      {
                        *k = 0;
                        *(_DWORD *)(a1 + 628) = v61;
                      }
                      goto LABEL_45;
                    }
                  }
                  else if ( !v34 )
                  {
                    goto LABEL_45;
                  }
                }
              }
              if ( v27 != v31 )
              {
                for ( k = v27; v31 != k; k += 7 )
                {
                  v58 = *k;
                  if ( (unsigned __int64)*k > 1 )
                  {
                    if ( *(_DWORD *)(v58 + 12) == v28 && v4 == v58 )
                      goto LABEL_85;
                  }
                  else if ( !v58 )
                  {
                    break;
                  }
                }
              }
LABEL_45:
              v35 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, &v85);
              sub_182CBA0(v35, &v87);
              if ( (_QWORD)v84 )
                sub_186B220((void *)(v84 - 8));
              v36 = v79;
              if ( !v79 )
                goto LABEL_12;
              v37 = *((_DWORD *)v79 - 1);
              if ( v80 + 1 >= v37 )
                goto LABEL_12;
              v38 = *(_QWORD *)(a1 + 8);
              v39 = *v79;
              v78 = nullptr;
              v77 = v38;
              if ( v39 )
                ++*(_DWORD *)(v39 + 8);
              v40 = (_QWORD *)sub_186B270(0x18u);
              v41 = v40 + 1;
              v42 = &v36[v37];
              v78 = v40 + 1;
              v43 = v40 + 1;
              *v40 = 2;
              for ( m = 1; ; m = (_DWORD)v56 + 1 )
              {
                ++v36;
                *v41 = v39;
                *((_DWORD *)v43 - 1) = m;
                if ( v36 == v42 )
                  break;
                while ( 1 )
                {
                  v39 = *v36;
                  if ( *v36 )
                    ++*(_DWORD *)(v39 + 8);
                  v45 = *((_DWORD *)v43 - 1);
                  if ( v45 == *((_DWORD *)v43 - 2) )
                    break;
                  ++v36;
                  v43[v45] = v39;
                  *((_DWORD *)v43 - 1) = v45 + 1;
                  if ( v36 == v42 )
                    goto LABEL_57;
                }
                v54 = (3 * v45 + 1) >> 1;
                v55 = 8 * v54 + 8;
                if ( 8 * v45 + 8 >= (unsigned int)v55 || v45 >= v54 )
                {
                  exception = (char **)__cxa_allocate_exception(0x28u);
                  sub_24ABB0(&v83, "Overflow encountered when expanding vector");
                  *exception = (char *)off_1C63128;
                  sub_2333C0(exception + 1, &v83);
                  sub_233E40((__int64)&v83);
                  __cxa_throw(
                    exception,
                    (struct type_info *)&`typeinfo for'default_exception,
                    (void (*)(void *))sub_230E50);
                }
                v73 = (3 * v45 + 1) >> 1;
                v56 = (unsigned int *)sub_186B300(v43 - 1, v55);
                v57 = v56[1];
                v43 = v56 + 2;
                v78 = (__int64 *)(v56 + 2);
                *v56 = v73;
                LODWORD(v56) = v57;
                v41 = &v43[v57];
              }
LABEL_57:
              v46 = sub_355880(a1, (__int64)&v77, v80 + 1, (int *)v81);
              sub_34FB60(a1, v46, (__int64)v81);
              v47 = qword_1C7F2C0;
              v48 = a1 + 640;
              if ( (*(_BYTE *)(a1 + 660) & 1) != 0
                || *(_DWORD *)(a1 + 656) != 1
                || (v82[0] & 0x100000000LL) != 0
                || LODWORD(v82[0]) != 1 )
              {
                sub_1852000(qword_1C7F2C0, v48, v81);
              }
              else
              {
                sub_1832A70(qword_1C7F2C0, v48, v81);
                sub_182CBA0(v47, a1 + 656);
                *(_BYTE *)(a1 + 660) &= ~1u;
                *(_DWORD *)(a1 + 656) = 1;
              }
              v49 = v78;
              if ( v78 )
              {
                v50 = (unsigned __int64)&v78[*((unsigned int *)v78 - 1)];
                if ( (unsigned __int64)v78 >= v50 )
                  goto LABEL_68;
                do
                {
                  while ( 1 )
                  {
                    v51 = *v49;
                    if ( *v49 )
                    {
                      if ( (*(_DWORD *)(v51 + 8))-- == 1 )
                        break;
                    }
                    if ( (unsigned __int64)++v49 >= v50 )
                      goto LABEL_67;
                  }
                  sub_15D7BC0(v77, v51);
                  ++v49;
                }
                while ( (unsigned __int64)v49 < v50 );
LABEL_67:
                v49 = v78;
                if ( v78 )
LABEL_68:
                  sub_186B220(v49 - 1);
              }
              v53 = qword_1C7F2C0;
              sub_182CBA0(qword_1C7F2C0, v81);
              sub_182CBA0(v53, v82);
              if ( !v79 )
                goto LABEL_14;
              goto LABEL_13;
            }
          }
          else if ( !v13 )
          {
LABEL_10:
            v14 = qword_1C7F2C0;
            sub_182CBA0(qword_1C7F2C0, &v85);
            sub_182CBA0(v14, &v87);
            if ( !(_QWORD)v84 )
              goto LABEL_12;
            goto LABEL_11;
          }
        }
      }
      if ( v6 != v10 )
      {
        while ( 1 )
        {
          v16 = *v6;
          if ( *v6 > 1u )
          {
            if ( *(_DWORD *)(v16 + 12) == v7 && v4 == v16 )
            {
              j = v6;
              goto LABEL_25;
            }
          }
          else if ( !v16 )
          {
            goto LABEL_10;
          }
          v6 += 7;
          if ( v10 == v6 )
            goto LABEL_10;
        }
      }
      v69 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v85);
      sub_182CBA0(v69, &v87);
      if ( (_QWORD)v84 )
LABEL_11:
        sub_186B220((void *)(v84 - 8));
LABEL_12:
      v15 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v81);
      sub_182CBA0(v15, v82);
      if ( v79 )
LABEL_13:
        sub_186B220(v79 - 1);
LABEL_14:
      ;
    }
  }
}

