char __fastcall sub_233F80(__int64 *a1, _DWORD *a2)
{
  unsigned int *v2; // r15
  char result; // al
  _QWORD *v4; // rdx
  char v6; // al
  unsigned int *v7; // rdi
  char v8; // si
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  int v11; // ebx
  __int64 v12; // rsi
  int v13; // eax
  unsigned int **v14; // rsi
  unsigned int v15; // eax
  unsigned int v16; // r13d
  size_t v17; // rsi
  unsigned int *v18; // rax
  __int64 v19; // rsi
  unsigned int *v20; // r13
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rbp
  __int64 v24; // r13
  unsigned int v25; // r14d
  unsigned __int64 *v26; // rbx
  char v27; // al
  __int64 v28; // rax
  unsigned __int64 *v29; // rax
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rsi
  __int64 v33; // rdi
  bool v34; // zf
  unsigned int *v35; // rbx
  unsigned int v36; // eax
  char v37; // al
  __int64 v38; // rax
  __int64 *v39; // rbx
  __int64 *v40; // r14
  __int64 v41; // rsi
  __int64 v42; // rdi
  __int64 v43; // r11
  __int64 v44; // rax
  _QWORD *v45; // rax
  _QWORD *v46; // rax
  unsigned int **v47; // rdx
  unsigned int *i; // rbp
  unsigned int v49; // ebx
  __int64 v50; // rbp
  __int64 v51; // r13
  __int64 v52; // rsi
  _QWORD *v53; // rax
  __int64 v54; // rdx
  unsigned __int64 *v55; // r14
  __int64 v56; // rsi
  __int64 v57; // rax
  int v58; // edx
  __int64 v59; // rbp
  __int64 v60; // r11
  unsigned __int64 v61; // rax
  __int64 v62; // r10
  char v63; // al
  __int64 v64; // rsi
  int v65; // eax
  unsigned int **v66; // rsi
  unsigned int v67; // eax
  unsigned int v68; // ebx
  size_t v69; // rsi
  unsigned int *v70; // rax
  __int64 v71; // rsi
  unsigned __int64 v72; // rax
  __int64 v73; // rdx
  unsigned __int64 *v74; // rcx
  unsigned __int64 v75; // rsi
  __int64 v76; // rdi
  unsigned __int64 v77; // rsi
  __int64 v78; // rdi
  __int64 v79; // rdi
  unsigned int *v80; // rbp
  unsigned int v81; // eax
  char v82; // al
  __int64 v83; // rsi
  unsigned __int64 *v84; // rdx
  __int64 v85; // rax
  _QWORD *v86; // rax
  __int64 v87; // rax
  __int64 *v88; // rbp
  __int64 *v89; // rdx
  __int64 v90; // rsi
  __int64 v91; // rdi
  __int64 v92; // rsi
  __int64 v93; // rdi
  _QWORD *v94; // rax
  unsigned __int64 *v95; // rdx
  __int64 v96; // rax
  __int64 k; // rax
  __int64 j; // rax
  char **exception; // rbp
  __int64 v100; // rdx
  unsigned __int64 *v102; // [rsp+8h] [rbp-70h]
  __int64 *v103; // [rsp+8h] [rbp-70h]
  __int64 v104; // [rsp+8h] [rbp-70h]
  __int64 v105; // [rsp+8h] [rbp-70h]
  unsigned __int64 *v106; // [rsp+8h] [rbp-70h]
  unsigned __int64 *v107; // [rsp+10h] [rbp-68h]
  __int64 v108; // [rsp+18h] [rbp-60h]
  __int64 v109[11]; // [rsp+20h] [rbp-58h] BYREF

  v2 = *(unsigned int **)a2;
  result = *(_BYTE *)(*(_QWORD *)a2 + 3LL) >> 6;
  if ( result == 3 )
    return result;
  v4 = (_QWORD *)a1[3];
  if ( v4 )
  {
    *((_DWORD *)v4 - 1) = 0;
    v6 = *((_BYTE *)v2 + 3) >> 6;
    if ( v6 )
    {
      v7 = v2;
      v8 = *((_BYTE *)v2 + 3) >> 6;
      if ( v6 != 1 )
        goto LABEL_5;
LABEL_140:
      v10 = (v2[1] + 1) >> 1;
      goto LABEL_8;
    }
  }
  else if ( result )
  {
    if ( result != 1 )
    {
      v10 = (v2[1] - 1) >> 1;
      if ( !v10 )
        goto LABEL_65;
LABEL_62:
      v11 = 0;
      v45 = (_QWORD *)sub_186B270(0x18u);
      v4 = v45 + 1;
      *v45 = 2;
      v13 = 1;
      a1[3] = (__int64)v4;
      v14 = (unsigned int **)v4;
      goto LABEL_12;
    }
    goto LABEL_140;
  }
  v7 = v2;
  do
  {
    v7 = *((unsigned int **)v7 + 2);
    v8 = *((_BYTE *)v7 + 3) >> 6;
  }
  while ( !v8 );
  if ( v8 == 1 )
  {
    v6 = 0;
    v9 = v7[1] + 1;
    goto LABEL_7;
  }
  v6 = 0;
LABEL_5:
  if ( v8 == 2 )
    v9 = v7[1] - 1;
  else
    v9 = v7[1];
LABEL_7:
  v10 = v9 >> 1;
  if ( v6 == 3 )
    goto LABEL_22;
LABEL_8:
  if ( !v10 )
    goto LABEL_65;
  if ( !v4 )
    goto LABEL_62;
  v11 = 0;
  do
  {
    v15 = *((_DWORD *)v4 - 1);
    if ( v15 == *((_DWORD *)v4 - 2) )
    {
      v16 = (3 * v15 + 1) >> 1;
      v17 = 8 * v16 + 8;
      if ( 8 * v15 + 8 >= (unsigned int)v17 || v15 >= v16 )
      {
LABEL_157:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_A3E10(v109, "Overflow encountered when expanding vector", v100);
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, v109);
        sub_233E40((__int64)v109);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v18 = (unsigned int *)sub_186B300(v4 - 1, v17);
      v19 = v18[1];
      v4 = v18 + 2;
      *v18 = v16;
      a1[3] = (__int64)(v18 + 2);
      LODWORD(v18) = v19;
      v14 = (unsigned int **)&v4[v19];
      v13 = (_DWORD)v18 + 1;
    }
    else
    {
      v12 = v15;
      v13 = v15 + 1;
      v14 = (unsigned int **)&v4[v12];
    }
LABEL_12:
    *v14 = v2;
    v2 = *((unsigned int **)v2 + 2);
    ++v11;
    *((_DWORD *)v4 - 1) = v13;
    if ( *((_BYTE *)v2 + 3) >> 6 == 3 )
      goto LABEL_25;
  }
  while ( v11 != v10 );
LABEL_65:
  v47 = (unsigned int **)a1[2];
  if ( !v47 )
  {
    i = v2;
    v86 = (_QWORD *)sub_186B270(0x18u);
    v47 = (unsigned int **)(v86 + 1);
    *v86 = 2;
    v65 = 1;
    a1[2] = (__int64)v47;
    v66 = v47;
    goto LABEL_88;
  }
  *((_DWORD *)v47 - 1) = 0;
  for ( i = v2; *((_BYTE *)i + 3) >> 6 != 3; *((_DWORD *)v47 - 1) = v65 )
  {
    v67 = *((_DWORD *)v47 - 1);
    if ( v67 == *((_DWORD *)v47 - 2) )
    {
      v68 = (3 * v67 + 1) >> 1;
      v69 = 8 * v68 + 8;
      if ( 8 * v67 + 8 >= (unsigned int)v69 || v67 >= v68 )
        goto LABEL_157;
      v70 = (unsigned int *)sub_186B300(v47 - 1, v69);
      v71 = v70[1];
      v47 = (unsigned int **)(v70 + 2);
      *v70 = v68;
      a1[2] = (__int64)(v70 + 2);
      LODWORD(v70) = v71;
      v66 = &v47[v71];
      v65 = (_DWORD)v70 + 1;
    }
    else
    {
      v64 = v67;
      v65 = v67 + 1;
      v66 = &v47[v64];
    }
LABEL_88:
    *v66 = i;
    i = *((unsigned int **)i + 2);
  }
  v49 = i[1];
  v50 = *((_QWORD *)i + 2);
  if ( v50 )
  {
    v51 = *(_QWORD *)(v50 - 8);
    v52 = 8 * v51 + 8;
  }
  else
  {
    v52 = 8;
    v51 = 0;
  }
  v53 = (_QWORD *)sub_17E9C90(a1[1], v52);
  v54 = 0;
  *v53 = v51;
  v55 = v53 + 1;
  if ( v49 )
  {
    do
    {
      v56 = *(_QWORD *)(v50 + v54 * 8);
      v53[v54 + 1] = v56;
      if ( v56 )
        ++*(_DWORD *)(v56 + 8);
      ++v54;
    }
    while ( v49 != v54 );
  }
  v57 = a1[2];
  if ( v57 )
  {
    v58 = *(_DWORD *)(v57 - 4);
    if ( v58 )
    {
      v59 = 8LL * (unsigned int)(v58 - 1);
      while ( 1 )
      {
        v62 = *(_QWORD *)(v57 + v59);
        v63 = *(_BYTE *)(v62 + 3) >> 6;
        if ( v63 == 2 )
        {
          v77 = v55[--v49];
          if ( v77 )
          {
            v78 = *a1;
            v34 = (*(_DWORD *)(v77 + 8))-- == 1;
            if ( v34 )
              sub_15D7BC0(v78, v77);
          }
        }
        else
        {
          if ( v63 == 3 )
          {
            sub_1872CE0("");
            sub_1873130(114, 231);
          }
          if ( v63 )
          {
            v60 = v49;
            if ( v55 )
            {
              if ( v49 != *(v55 - 1) )
              {
LABEL_79:
                v61 = *(_QWORD *)(v62 + 8);
                if ( v61 )
                  ++*(_DWORD *)(v61 + 8);
                v55[v60] = v61;
                ++v49;
                goto LABEL_82;
              }
              if ( v49 )
              {
                v108 = v62;
                v95 = (unsigned __int64 *)sub_17E9C90(a1[1], 8 * ((3 * (unsigned __int64)v49 + 1) >> 1) + 8);
                *v95 = (3 * (unsigned __int64)v49 + 1) >> 1;
                v106 = v95 + 1;
                if ( (unsigned __int64)v49 - 1 <= 2 || v55 == v95 )
                {
                  for ( j = 0; j != v49; ++j )
                    v95[j + 1] = v55[j];
                }
                else
                {
                  v96 = 0;
                  do
                  {
                    *(__m128i *)&v95[v96 + 1] = _mm_loadu_si128((const __m128i *)&v55[v96]);
                    v96 += 2;
                  }
                  while ( 2 * ((unsigned __int64)v49 >> 1) != v96 );
                  if ( (v49 & 1) != 0 )
                    v95[(v49 & 0xFFFFFFFE) + 1] = v55[v49 & 0xFFFFFFFE];
                }
                sub_17E9C40(a1[1], 8 * *(v55 - 1) + 8, v55 - 1);
                v55 = v106;
                v60 = v49;
                v62 = v108;
                goto LABEL_79;
              }
            }
            else if ( v49 )
            {
              goto LABEL_79;
            }
            v104 = v62;
            v94 = (_QWORD *)sub_17E9C90(a1[1], 24);
            v62 = v104;
            v60 = v49;
            *v94 = 2;
            v55 = v94 + 1;
            goto LABEL_79;
          }
          v72 = *(_QWORD *)(v62 + 8);
          v73 = *(unsigned int *)(v62 + 4);
          if ( v72 )
            ++*(_DWORD *)(v72 + 8);
          v74 = &v55[v73];
          v75 = *v74;
          if ( *v74 )
          {
            v76 = *a1;
            v34 = (*(_DWORD *)(v75 + 8))-- == 1;
            if ( v34 )
            {
              v107 = &v55[v73];
              v105 = v62;
              sub_15D7BC0(v76, v75);
              v74 = v107;
              v72 = *(_QWORD *)(v105 + 8);
            }
          }
          *v74 = v72;
        }
LABEL_82:
        v59 -= 8;
        if ( v59 == -8 )
          break;
        v57 = a1[2];
      }
    }
  }
  v20 = *((unsigned int **)v2 + 2);
  if ( !v20 || (v21 = (*v20 + 0x3FFFFFFF) & 0x3FFFFFFF | *v20 & 0xC0000000, *v20 = v21, (v21 & 0x3FFFFFFF) != 0) )
  {
LABEL_20:
    if ( *((char *)v2 + 3) >= 0 )
      goto LABEL_129;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v82 = *((_BYTE *)v20 + 3) >> 6;
    if ( v82 == 2 )
      goto LABEL_104;
    if ( v82 == 3 )
      break;
    v83 = *((_QWORD *)v20 + 1);
    if ( v83 )
    {
      v79 = *a1;
      v34 = (*(_DWORD *)(v83 + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(v79, v83);
    }
LABEL_104:
    v80 = *((unsigned int **)v20 + 2);
    sub_17E9C40(a1[1], 24, v20);
    if ( !v80 )
      goto LABEL_20;
    v81 = (*v80 + 0x3FFFFFFF) & 0x3FFFFFFF | *v80 & 0xC0000000;
    *v80 = v81;
    if ( (v81 & 0x3FFFFFFF) != 0 )
      goto LABEL_20;
    v20 = v80;
  }
  v87 = v20[1];
  v88 = *((__int64 **)v20 + 2);
  if ( (_DWORD)v87 )
  {
    v89 = &v88[v87];
    do
    {
      while ( 1 )
      {
        v90 = *v88;
        if ( *v88 )
        {
          v91 = *a1;
          v34 = (*(_DWORD *)(v90 + 8))-- == 1;
          if ( v34 )
            break;
        }
        if ( v89 == ++v88 )
          goto LABEL_126;
      }
      v103 = v89;
      ++v88;
      sub_15D7BC0(v91, v90);
      v89 = v103;
    }
    while ( v103 != v88 );
LABEL_126:
    v88 = *((__int64 **)v20 + 2);
  }
  if ( !v88 )
  {
    sub_17E9C40(a1[1], 24, v20);
    goto LABEL_20;
  }
  sub_17E9C40(a1[1], 8 * *(v88 - 1) + 8, v88 - 1);
  sub_17E9C40(a1[1], 24, v20);
  if ( *((char *)v2 + 3) >= 0 )
  {
LABEL_129:
    v92 = *((_QWORD *)v2 + 1);
    if ( v92 )
    {
      v93 = *a1;
      v34 = (*(_DWORD *)(v92 + 8))-- == 1;
      if ( v34 )
        sub_15D7BC0(v93, v92);
    }
  }
LABEL_21:
  *((_BYTE *)v2 + 3) |= 0xC0u;
  v4 = (_QWORD *)a1[3];
  v2[1] = v49;
  *((_QWORD *)v2 + 2) = v55;
LABEL_22:
  if ( !v4 )
    goto LABEL_23;
LABEL_25:
  v22 = *((_DWORD *)v4 - 1);
  if ( !v22 )
    goto LABEL_23;
  v23 = (unsigned int)(v22 - 1);
  while ( 2 )
  {
    v24 = v4[v23];
    v25 = v2[1];
    v26 = *((unsigned __int64 **)v2 + 2);
    v27 = *(_BYTE *)(v24 + 3) >> 6;
    switch ( v27 )
    {
      case 2:
        *((_BYTE *)v2 + 3) = *((_BYTE *)v2 + 3) & 0x3F | 0x40;
        v44 = v25 - 1;
        v2[1] = v44;
        --v25;
        *((_QWORD *)v2 + 1) = v26[v44];
        v30 = (*(_DWORD *)v24 + 1) & 0x3FFFFFFF;
        goto LABEL_33;
      case 3:
        sub_1872CE0("");
        sub_1873130(114, 588);
      case 1:
        v43 = v25;
        *((_BYTE *)v2 + 3) = *((_BYTE *)v2 + 3) & 0x3F | 0x80;
        if ( v26 )
        {
          if ( v25 != *(v26 - 1) )
          {
LABEL_55:
            ++v25;
            v26[v43] = *(_QWORD *)(v24 + 8);
            v2[1] = v25;
            v30 = (*(_DWORD *)v24 + 1) & 0x3FFFFFFF;
            goto LABEL_33;
          }
          if ( v25 )
          {
            v84 = (unsigned __int64 *)sub_17E9C90(a1[1], 8 * ((3 * (unsigned __int64)v25 + 1) >> 1) + 8);
            *v84 = (3 * (unsigned __int64)v25 + 1) >> 1;
            v102 = v84 + 1;
            if ( (unsigned __int64)v25 - 1 <= 2 || v26 == v84 )
            {
              for ( k = 0; k != v25; ++k )
                v84[k + 1] = v26[k];
            }
            else
            {
              v85 = 0;
              do
              {
                *(__m128i *)&v84[v85 + 1] = _mm_loadu_si128((const __m128i *)&v26[v85]);
                v85 += 2;
              }
              while ( v85 != 2 * ((unsigned __int64)v25 >> 1) );
              if ( (v25 & 1) != 0 )
                v84[(v25 & 0xFFFFFFFE) + 1] = v26[v25 & 0xFFFFFFFE];
            }
            sub_17E9C40(a1[1], 8 * *(v26 - 1) + 8, v26 - 1);
            v26 = v102;
            v43 = v25;
            goto LABEL_55;
          }
        }
        else if ( v25 )
        {
          goto LABEL_55;
        }
        v46 = (_QWORD *)sub_17E9C90(a1[1], 24);
        v43 = v25;
        *v46 = 2;
        v26 = v46 + 1;
        goto LABEL_55;
    }
    *((_BYTE *)v2 + 3) &= 0x3Fu;
    v28 = *(unsigned int *)(v24 + 4);
    v2[1] = v28;
    v29 = &v26[v28];
    *((_QWORD *)v2 + 1) = *v29;
    *v29 = *(_QWORD *)(v24 + 8);
    v30 = (*(_DWORD *)v24 + 1) & 0x3FFFFFFF;
LABEL_33:
    *(_DWORD *)v24 = *(_DWORD *)v24 & 0xC0000000 | v30 & 0x3FFFFFFF;
    *((_QWORD *)v2 + 2) = v24;
    *(_DWORD *)(v24 + 4) = v25;
    *(_BYTE *)(v24 + 3) |= 0xC0u;
    *(_QWORD *)(v24 + 16) = v26;
    v31 = (*v2 + 0x3FFFFFFF) & 0x3FFFFFFF | *v2 & 0xC0000000;
    *v2 = v31;
    if ( (v31 & 0x3FFFFFFF) != 0 )
      goto LABEL_27;
    while ( 2 )
    {
      v37 = *((_BYTE *)v2 + 3) >> 6;
      if ( v37 == 2 )
      {
LABEL_38:
        v35 = *((unsigned int **)v2 + 2);
        sub_17E9C40(a1[1], 24, v2);
        if ( !v35 )
          goto LABEL_27;
        v36 = (*v35 + 0x3FFFFFFF) & 0x3FFFFFFF | *v35 & 0xC0000000;
        *v35 = v36;
        if ( (v36 & 0x3FFFFFFF) != 0 )
          goto LABEL_27;
        v2 = v35;
        continue;
      }
      break;
    }
    if ( v37 != 3 )
    {
      v32 = *((_QWORD *)v2 + 1);
      if ( v32 )
      {
        v33 = *a1;
        v34 = (*(_DWORD *)(v32 + 8))-- == 1;
        if ( v34 )
          sub_15D7BC0(v33, v32);
      }
      goto LABEL_38;
    }
    v38 = v2[1];
    v39 = *((__int64 **)v2 + 2);
    if ( (_DWORD)v38 )
    {
      v40 = &v39[v38];
      do
      {
        while ( 1 )
        {
          v41 = *v39;
          if ( *v39 )
          {
            v42 = *a1;
            v34 = (*(_DWORD *)(v41 + 8))-- == 1;
            if ( v34 )
              break;
          }
          if ( ++v39 == v40 )
            goto LABEL_49;
        }
        sub_15D7BC0(v42, v41);
        ++v39;
      }
      while ( v39 != v40 );
LABEL_49:
      v39 = *((__int64 **)v2 + 2);
    }
    if ( v39 )
      sub_17E9C40(a1[1], 8 * *(v39 - 1) + 8, v39 - 1);
    sub_17E9C40(a1[1], 24, v2);
LABEL_27:
    if ( --v23 != -1 )
    {
      v4 = (_QWORD *)a1[3];
      v2 = (unsigned int *)v24;
      continue;
    }
    break;
  }
LABEL_23:
  result = (char)a2;
  a2[2] = 0;
  return result;
}

