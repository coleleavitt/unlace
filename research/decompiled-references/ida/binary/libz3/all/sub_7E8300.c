void __fastcall sub_7E8300(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdx
  char v5; // al
  char v6; // al
  __int64 v7; // r14
  _QWORD *v8; // rbx
  int v9; // r12d
  __int64 v10; // rdi
  __int64 *v11; // rsi
  __int64 v12; // rax
  int v13; // edx
  _QWORD *v14; // rax
  char *v15; // r15
  __int64 v16; // rax
  int v17; // edx
  __int64 *v18; // rax
  __int64 v19; // rsi
  _QWORD *v20; // rdx
  _QWORD *v21; // rax
  _QWORD *v22; // r15
  unsigned int v23; // r8d
  unsigned int *v24; // rdi
  int v25; // eax
  unsigned int i; // r8d
  unsigned int v27; // eax
  unsigned int j; // r12d
  __int64 v29; // rdi
  __int64 v30; // r15
  __int64 v31; // r14
  char v32; // al
  unsigned int v33; // edx
  unsigned int v34; // r12d
  __int64 v35; // rsi
  _QWORD *v36; // rdi
  __int64 v37; // rax
  int v38; // edx
  __int64 v39; // rax
  __int64 v40; // r14
  __int64 v41; // rsi
  _DWORD *v42; // rax
  __int64 v43; // rax
  int v44; // edx
  __int64 *v45; // rax
  unsigned int v46; // edx
  size_t v47; // rsi
  unsigned int *v48; // rax
  __int64 v49; // rsi
  unsigned int v50; // r12d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rsi
  __int64 v54; // r12
  __int64 v55; // rax
  __int64 *v56; // rdi
  __int64 v57; // rax
  int v58; // eax
  __int64 v59; // r9
  __int64 v60; // rsi
  _QWORD *v61; // rsi
  unsigned int v62; // eax
  __int64 v63; // rdi
  int v64; // eax
  _QWORD *v65; // rdi
  __int64 v66; // r8
  char v67; // al
  unsigned int v68; // eax
  unsigned int v69; // r12d
  __int64 v70; // r12
  __int64 *v71; // rdi
  __int64 v72; // r10
  _QWORD *v73; // rax
  __int64 k; // rax
  unsigned int v75; // r12d
  unsigned int *v76; // rax
  __int64 v77; // rdi
  _QWORD *v78; // rax
  __int64 m; // r10
  char **v80; // r12
  char **exception; // r12
  char **v82; // r12
  int v83[2]; // [rsp+0h] [rbp-90h]
  int v84[2]; // [rsp+0h] [rbp-90h]
  unsigned int v85; // [rsp+0h] [rbp-90h]
  unsigned int v86; // [rsp+8h] [rbp-88h]
  __int64 v87; // [rsp+8h] [rbp-88h]
  __int64 v88; // [rsp+8h] [rbp-88h]
  __int64 v89; // [rsp+8h] [rbp-88h]
  unsigned int v90; // [rsp+10h] [rbp-80h]
  int v91[2]; // [rsp+10h] [rbp-80h]
  int v92[2]; // [rsp+10h] [rbp-80h]
  int v93[2]; // [rsp+10h] [rbp-80h]
  _QWORD *v94; // [rsp+30h] [rbp-60h] BYREF
  __int64 v95[11]; // [rsp+38h] [rbp-58h] BYREF

  v2 = a2[9];
  if ( !v2 )
    return;
  v5 = *(_BYTE *)(v2 + 3) >> 6;
  if ( !v5 )
  {
    do
    {
      v2 = *(_QWORD *)(v2 + 16);
      v5 = *(_BYTE *)(v2 + 3) >> 6;
    }
    while ( !v5 );
    if ( v5 != 1 )
      goto LABEL_4;
LABEL_79:
    v90 = *(_DWORD *)(v2 + 4) + 1;
    goto LABEL_6;
  }
  if ( v5 == 1 )
    goto LABEL_79;
LABEL_4:
  if ( v5 == 2 )
    v90 = *(_DWORD *)(v2 + 4) - 1;
  else
    v90 = *(_DWORD *)(v2 + 4);
LABEL_6:
  v94 = nullptr;
  if ( !v90 )
    return;
  v6 = *((_BYTE *)a2 + 123);
  v7 = 0;
  v8 = nullptr;
  v9 = 0;
  while ( (v6 & 0x10) != 0 )
  {
    v10 = a2[13];
    v11 = a2 + 13;
    v12 = v10;
    v13 = 17;
    while ( 1 )
    {
      if ( *(char *)(v12 + 3) < 0 )
      {
        if ( *(_BYTE *)(v12 + 3) >> 6 != 2 )
        {
          v14 = (_QWORD *)(v7 + *(_QWORD *)(v12 + 16));
          goto LABEL_12;
        }
        goto LABEL_62;
      }
      if ( *(_DWORD *)(v12 + 4) == v9 )
        break;
LABEL_62:
      v12 = *(_QWORD *)(v12 + 16);
      if ( !--v13 )
      {
        sub_236900((_QWORD *)(*a2 + 672), v11);
        v10 = a2[13];
        v11 = a2 + 13;
        v14 = (_QWORD *)(v7 + *(_QWORD *)(v10 + 16));
        goto LABEL_12;
      }
    }
    v14 = (_QWORD *)(v12 + 8);
LABEL_12:
    if ( !*v14 )
      goto LABEL_30;
    if ( v94 )
      *((_DWORD *)v94 - 1) = 0;
    v15 = (char *)*a1;
    if ( (*((_BYTE *)a2 + 123) & 0x10) == 0 )
    {
      v19 = 0;
      goto LABEL_21;
    }
    v16 = v10;
    v17 = 17;
    while ( 2 )
    {
      if ( *(char *)(v16 + 3) < 0 )
      {
        if ( *(_BYTE *)(v16 + 3) >> 6 != 2 )
        {
          v18 = (__int64 *)(v7 + *(_QWORD *)(v16 + 16));
          goto LABEL_20;
        }
LABEL_68:
        v16 = *(_QWORD *)(v16 + 16);
        if ( !--v17 )
        {
          sub_236900((_QWORD *)(*a2 + 672), v11);
          v18 = (__int64 *)(v7 + *(_QWORD *)(a2[13] + 16));
          goto LABEL_20;
        }
        continue;
      }
      break;
    }
    if ( *(_DWORD *)(v16 + 4) != v9 )
      goto LABEL_68;
    v18 = (__int64 *)(v16 + 8);
LABEL_20:
    v19 = *v18;
LABEL_21:
    sub_15D6A80(v15, v19, &v94);
    v20 = v94;
    if ( v94 && *((_DWORD *)v94 - 1) )
    {
      if ( !v8 )
      {
        *(_QWORD *)v83 = v94;
        v21 = (_QWORD *)sub_186B270(0x18u);
        v8 = v21 + 1;
        v22 = *(_QWORD **)v83;
        v23 = 0;
        v20 = v94;
        v24 = (unsigned int *)(v21 + 1);
        *v21 = 2;
        v25 = 1;
        goto LABEL_25;
      }
      v22 = v94;
      for ( i = 0; ; v22 = &v20[i] )
      {
        v27 = *((_DWORD *)v8 - 1);
        if ( v27 == *((_DWORD *)v8 - 2) )
        {
          v46 = (3 * v27 + 1) >> 1;
          v47 = 8 * v46 + 8;
          if ( 8 * v27 + 8 >= (unsigned int)v47 || v27 >= v46 )
          {
            exception = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v95, "Overflow encountered when expanding vector");
            *exception = (char *)off_1C63128;
            sub_2333C0(exception + 1, v95);
            sub_233E40((__int64)v95);
            __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v86 = (3 * v27 + 1) >> 1;
          v85 = i;
          v48 = (unsigned int *)sub_186B300(v8 - 1, v47);
          v49 = v48[1];
          v8 = v48 + 2;
          v23 = v85;
          *v48 = v86;
          v20 = v94;
          v24 = &v48[2 * v49 + 2];
          v25 = v49 + 1;
LABEL_25:
          *(_QWORD *)v24 = *v22;
          *((_DWORD *)v8 - 1) = v25;
          if ( !v20 )
            break;
          i = v23 + 1;
          if ( i >= *((_DWORD *)v20 - 1) )
            break;
        }
        else
        {
          ++i;
          v8[v27] = *v22;
          *((_DWORD *)v8 - 1) = v27 + 1;
          if ( i >= *((_DWORD *)v20 - 1) )
            break;
        }
      }
    }
LABEL_30:
    if ( ++v9 == v90 )
      goto LABEL_123;
    v6 = *((_BYTE *)a2 + 123);
    v7 += 8;
  }
  if ( v90 != v9 + 1 )
  {
    if ( v8 )
      goto LABEL_34;
LABEL_125:
    v8 = nullptr;
    goto LABEL_38;
  }
LABEL_123:
  if ( !v8 )
  {
    v6 = *((_BYTE *)a2 + 123);
    goto LABEL_125;
  }
LABEL_34:
  for ( j = 0; j < *((_DWORD *)v8 - 1); ++j )
    sub_7E7560(a1 + 38, (char **)a1 + 19, v8[j]);
  v6 = *((_BYTE *)a2 + 123);
LABEL_38:
  v29 = *a2;
  v30 = 0;
  *(_QWORD *)v84 = v90;
  if ( (v6 & 0x20) != 0 )
  {
LABEL_39:
    v31 = *(_QWORD *)(v29 + 864);
    goto LABEL_40;
  }
  while ( 2 )
  {
    v43 = a2[9];
    v44 = 17;
    while ( 1 )
    {
      if ( *(char *)(v43 + 3) < 0 )
      {
        if ( *(_BYTE *)(v43 + 3) >> 6 != 2 )
        {
          v45 = (__int64 *)(*(_QWORD *)(v43 + 16) + 8 * v30);
          goto LABEL_60;
        }
        goto LABEL_81;
      }
      if ( *(_DWORD *)(v43 + 4) == (_DWORD)v30 )
        break;
LABEL_81:
      v43 = *(_QWORD *)(v43 + 16);
      if ( !--v44 )
      {
        sub_233F80((__int64 *)(v29 + 616), (_DWORD *)a2 + 18);
        v45 = (__int64 *)(*(_QWORD *)(a2[9] + 16) + 8 * v30);
        goto LABEL_60;
      }
    }
    v45 = (__int64 *)(v43 + 8);
LABEL_60:
    v31 = *v45;
LABEL_40:
    v32 = *(_BYTE *)(v31 + 6);
    if ( (v32 & 2) == 0 )
    {
      *(_BYTE *)(v31 + 6) = v32 | 2;
      v33 = *((_DWORD *)a1 + 4);
      v34 = *((_DWORD *)a1 + 5);
      if ( v33 >= v34 )
      {
        v54 = 2 * v34;
        v55 = sub_186B270(8 * v54);
        v33 = *((_DWORD *)a1 + 4);
        v56 = (__int64 *)a1[1];
        v35 = v55;
        if ( v33 )
        {
          if ( v33 - 1 <= 2 || (__int64 *)v55 == v56 + 1 )
          {
            for ( k = 0; k != v33; ++k )
              *(_QWORD *)(v35 + k * 8) = v56[k];
          }
          else
          {
            v57 = 0;
            do
            {
              *(__m128i *)(v35 + v57 * 8) = _mm_loadu_si128((const __m128i *)&v56[v57]);
              v57 += 2;
            }
            while ( v57 != 2LL * (v33 >> 1) );
            if ( (v33 & 1) != 0 )
              *(_QWORD *)(v35 + 8LL * (v33 & 0xFFFFFFFE)) = v56[v33 & 0xFFFFFFFE];
          }
        }
        if ( v56 != a1 + 3 && v56 )
        {
          sub_186B220(v56);
          v33 = *((_DWORD *)a1 + 4);
        }
        a1[1] = v35;
        *((_DWORD *)a1 + 5) = v54;
      }
      else
      {
        v35 = a1[1];
      }
      v36 = (_QWORD *)a1[37];
      *(_QWORD *)(v35 + 8LL * v33) = v31;
      *((_DWORD *)a1 + 4) = v33 + 1;
      if ( v36 )
      {
        v37 = *((unsigned int *)v36 - 1);
        if ( (_DWORD)v37 == *((_DWORD *)v36 - 2) )
        {
          v50 = (unsigned int)(3 * v37 + 1) >> 1;
          v51 = 8 * v50 + 8;
          if ( 8 * (int)v37 + 8 >= (unsigned int)v51 || (unsigned int)v37 >= v50 )
          {
            v82 = (char **)__cxa_allocate_exception(0x28u);
            sub_24ABB0(v95, "Overflow encountered when expanding vector");
            *v82 = (char *)off_1C63128;
            sub_2333C0(v82 + 1, v95);
            sub_233E40((__int64)v95);
            __cxa_throw(v82, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
          }
          v52 = (unsigned int *)sub_186B300(v36 - 1, v51);
          v53 = v52[1];
          v36 = v52 + 2;
          *v52 = v50;
          a1[37] = (__int64)(v52 + 2);
          v38 = v53 + 1;
          *(_QWORD *)&v52[2 * v53 + 2] = v31;
          v52[1] = v53 + 1;
        }
        else
        {
          v38 = v37 + 1;
          v36[v37] = v31;
          *((_DWORD *)v36 - 1) = v37 + 1;
        }
      }
      else
      {
        v73 = (_QWORD *)sub_186B270(0x18u);
        v36 = v73 + 1;
        v73[1] = v31;
        v38 = 1;
        a1[37] = (__int64)(v73 + 1);
        *v73 = 0x100000002LL;
      }
      if ( v38 )
      {
        while ( 1 )
        {
          v39 = (unsigned int)(v38 - 1);
          v40 = v36[v39];
          *((_DWORD *)v36 - 1) = v39;
          if ( *(_WORD *)(v40 + 4) )
            break;
          v41 = *(unsigned int *)(v40 + 24);
          v42 = *(_DWORD **)(*(_QWORD *)(v40 + 16) + 24LL);
          if ( (_DWORD)v41 )
          {
            if ( !v42 || *v42 )
              break;
            v58 = v42[1];
            if ( ((v58 - 6) & 0xFFFFFFFD) == 0 )
              goto LABEL_103;
            if ( ((v58 - 2) & 0xFFFFFFFD) == 0 )
            {
              if ( (unsigned __int8)sub_15D2CB0(*a1, *(_QWORD *)(v40 + 40)) )
              {
                v41 = *(unsigned int *)(v40 + 24);
                if ( (_DWORD)v41 )
                {
LABEL_103:
                  v59 = v40 + 8 * v41;
                  do
                  {
                    v66 = *(_QWORD *)(v40 + 32);
                    v67 = *(_BYTE *)(v66 + 6);
                    if ( (v67 & 2) == 0 )
                    {
                      *(_BYTE *)(v66 + 6) = v67 | 2;
                      v68 = *((_DWORD *)a1 + 4);
                      v69 = *((_DWORD *)a1 + 5);
                      if ( v68 < v69 )
                      {
                        v60 = a1[1];
                      }
                      else
                      {
                        *(_QWORD *)v91 = v59;
                        v70 = 2 * v69;
                        v87 = v66;
                        v60 = sub_186B270(8 * v70);
                        v68 = *((_DWORD *)a1 + 4);
                        v71 = (__int64 *)a1[1];
                        v66 = v87;
                        v59 = *(_QWORD *)v91;
                        if ( v68 )
                        {
                          if ( v68 - 1 <= 2 || (__int64 *)v60 == v71 + 1 )
                          {
                            for ( m = 0; m != v68; ++m )
                              *(_QWORD *)(v60 + m * 8) = v71[m];
                          }
                          else
                          {
                            v72 = 0;
                            do
                            {
                              *(__m128i *)(v60 + v72 * 8) = _mm_loadu_si128((const __m128i *)&v71[v72]);
                              v72 += 2;
                            }
                            while ( v72 != 2LL * (v68 >> 1) );
                            if ( (v68 & 1) != 0 )
                              *(_QWORD *)(v60 + 8LL * (v68 & 0xFFFFFFFE)) = v71[v68 & 0xFFFFFFFE];
                          }
                        }
                        if ( v71 != a1 + 3 && v71 )
                        {
                          sub_186B220(v71);
                          v68 = *((_DWORD *)a1 + 4);
                          v59 = *(_QWORD *)v91;
                          v66 = v87;
                        }
                        a1[1] = v60;
                        *((_DWORD *)a1 + 5) = v70;
                      }
                      *(_QWORD *)(v60 + 8LL * v68) = v66;
                      v61 = (_QWORD *)a1[37];
                      *((_DWORD *)a1 + 4) = v68 + 1;
                      if ( v61 )
                      {
                        v62 = *((_DWORD *)v61 - 1);
                        if ( v62 == *((_DWORD *)v61 - 2) )
                        {
                          v75 = (3 * v62 + 1) >> 1;
                          if ( 8 * v62 + 8 >= 8 * v75 + 8 || v62 >= v75 )
                          {
                            v80 = (char **)__cxa_allocate_exception(0x28u);
                            sub_24ABB0(v95, "Overflow encountered when expanding vector");
                            *v80 = (char *)off_1C63128;
                            sub_2333C0(v80 + 1, v95);
                            sub_233E40((__int64)v95);
                            __cxa_throw(
                              v80,
                              (struct type_info *)&`typeinfo for'default_exception,
                              (void (*)(void *))sub_230E50);
                          }
                          *(_QWORD *)v92 = v59;
                          v88 = v66;
                          v76 = (unsigned int *)sub_186B300(v61 - 1, 8 * v75 + 8);
                          v77 = v76[1];
                          v61 = v76 + 2;
                          v66 = v88;
                          *v76 = v75;
                          a1[37] = (__int64)(v76 + 2);
                          v59 = *(_QWORD *)v92;
                          LODWORD(v76) = v77;
                          v65 = &v61[v77];
                          v64 = (_DWORD)v76 + 1;
                        }
                        else
                        {
                          v63 = v62;
                          v64 = v62 + 1;
                          v65 = &v61[v63];
                        }
                      }
                      else
                      {
                        *(_QWORD *)v93 = v59;
                        v89 = v66;
                        v78 = (_QWORD *)sub_186B270(0x18u);
                        v66 = v89;
                        v59 = *(_QWORD *)v93;
                        *v78 = 2;
                        v61 = v78 + 1;
                        v64 = 1;
                        a1[37] = (__int64)v61;
                        v65 = v61;
                      }
                      *v65 = v66;
                      *((_DWORD *)v61 - 1) = v64;
                    }
                    v40 += 8;
                  }
                  while ( v59 != v40 );
                }
              }
LABEL_52:
              v36 = (_QWORD *)a1[37];
              if ( !v36 )
                goto LABEL_54;
            }
          }
          else if ( v42 && *v42 != -1 )
          {
            break;
          }
          v38 = *((_DWORD *)v36 - 1);
          if ( !v38 )
            goto LABEL_54;
        }
        sub_7E7560(a1 + 38, (char **)a1 + 19, v40);
        goto LABEL_52;
      }
    }
LABEL_54:
    if ( *(_QWORD *)v84 != ++v30 )
    {
      v29 = *a2;
      if ( (*((_BYTE *)a2 + 123) & 0x20) != 0 )
        goto LABEL_39;
      continue;
    }
    break;
  }
  if ( v8 )
    sub_186B220(v8 - 1);
  if ( v94 )
    sub_186B220(v94 - 1);
}

