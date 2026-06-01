__int64 __fastcall sub_C2A120(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int64 v4; // r13
  unsigned int v6; // edx
  unsigned int v7; // ebp
  _QWORD *v8; // r12
  __int64 *p_ptr; // rdx
  unsigned __int64 v10; // rax
  __int16 v11; // si
  __int64 *v12; // r12
  unsigned int v13; // r14d
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r15
  char v17; // di
  unsigned int v18; // edx
  unsigned int v19; // ebp
  _QWORD *v20; // r9
  __int16 v21; // ax
  __int64 v22; // r13
  char v23; // al
  __int64 v24; // rsi
  __int64 v25; // rbp
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v28; // rax
  unsigned int v29; // edx
  unsigned int v30; // ebp
  _QWORD *v31; // r12
  __int64 v32; // rcx
  __int64 *v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  unsigned int v36; // ecx
  __int64 *v37; // rax
  __int64 v38; // rcx
  __int64 *v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rbp
  __int64 v42; // rax
  _QWORD *v43; // rdi
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // rdx
  __int64 v47; // r9
  __int64 v48; // rsi
  __int64 m; // rcx
  __int64 v50; // rax
  int v51; // esi
  __int64 v52; // r13
  unsigned int v53; // r10d
  _QWORD *v54; // rbp
  __int64 v55; // rcx
  unsigned int v56; // r8d
  _QWORD *v57; // r12
  int v58; // edi
  __int64 v59; // rax
  _QWORD *v60; // r10
  _QWORD *v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rax
  __int64 k; // rax
  __int64 v65; // rbp
  __int64 v66; // rax
  _QWORD *v67; // rdi
  __int64 v68; // rax
  __int64 v69; // r12
  _QWORD *v70; // rax
  int v71; // r10d
  char *v72; // rax
  char *v73; // r11
  __int64 v74; // rdx
  _QWORD *v75; // rsi
  _QWORD *v76; // rdx
  __int64 v77; // rsi
  __int64 j; // rax
  __int64 i; // rax
  __int64 v80; // rax
  _QWORD *v81; // [rsp+10h] [rbp-178h]
  __int64 *v82; // [rsp+10h] [rbp-178h]
  __int64 *v83; // [rsp+10h] [rbp-178h]
  size_t v84; // [rsp+10h] [rbp-178h]
  __int64 v85; // [rsp+10h] [rbp-178h]
  __int64 v86; // [rsp+10h] [rbp-178h]
  __int64 *v87; // [rsp+10h] [rbp-178h]
  int v89; // [rsp+20h] [rbp-168h]
  size_t v90; // [rsp+20h] [rbp-168h]
  unsigned int v91; // [rsp+20h] [rbp-168h]
  __int64 v92; // [rsp+28h] [rbp-160h]
  int v93; // [rsp+28h] [rbp-160h]
  __int64 v94; // [rsp+28h] [rbp-160h]
  int v95; // [rsp+38h] [rbp-150h]
  __int64 *v96; // [rsp+40h] [rbp-148h]
  __int64 v97; // [rsp+48h] [rbp-140h]
  __int64 ptr; // [rsp+50h] [rbp-138h] BYREF
  int v99; // [rsp+58h] [rbp-130h]

  result = *(unsigned __int8 *)(a3 + 6);
  if ( (result & 1) != 0 )
    return result;
  v4 = a3;
  *(_BYTE *)(a3 + 6) = result | 1;
  v6 = *(_DWORD *)(a2 + 8);
  v7 = *(_DWORD *)(a2 + 12);
  if ( v6 >= v7 )
  {
    v65 = 2 * v7;
    v66 = sub_186B270(8 * v65);
    v6 = *(_DWORD *)(a2 + 8);
    v67 = *(_QWORD **)a2;
    v8 = (_QWORD *)v66;
    if ( v6 )
    {
      if ( v6 - 1 <= 2 || (_QWORD *)v66 == v67 + 1 )
      {
        for ( i = 0; i != v6; ++i )
          v8[i] = v67[i];
      }
      else
      {
        v68 = 0;
        do
        {
          *(__m128i *)&v8[v68] = _mm_loadu_si128((const __m128i *)&v67[v68]);
          v68 += 2;
        }
        while ( 2LL * (v6 >> 1) != v68 );
        if ( (v6 & 1) != 0 )
          v8[v6 & 0xFFFFFFFE] = v67[v6 & 0xFFFFFFFE];
      }
    }
    if ( v67 != (_QWORD *)(a2 + 16) && v67 )
    {
      sub_186B220(v67);
      v6 = *(_DWORD *)(a2 + 8);
    }
    *(_QWORD *)a2 = v8;
    *(_DWORD *)(a2 + 12) = v65;
  }
  else
  {
    v8 = *(_QWORD **)a2;
  }
  v8[v6] = v4;
  *(_DWORD *)(a2 + 8) = v6 + 1;
  p_ptr = &ptr;
  v96 = &ptr;
  ptr = v4;
  v99 = 0;
  v97 = 0x1000000001LL;
  LODWORD(v10) = 0;
  while ( 1 )
  {
LABEL_6:
    v11 = *(_WORD *)(v4 + 4);
    v12 = &p_ptr[2 * (unsigned int)v10];
    if ( v11 == 1 )
      goto LABEL_22;
    if ( v11 != 2 )
      break;
    if ( *((_DWORD *)v12 + 2)
      || (v22 = *(_QWORD *)(v4 + 24), *((_DWORD *)v12 + 2) = 1, v23 = *(_BYTE *)(v22 + 6), (v23 & 1) != 0) )
    {
      LODWORD(v10) = v97 - 1;
LABEL_22:
      LODWORD(v97) = v10;
      goto LABEL_23;
    }
    *(_BYTE *)(v22 + 6) = v23 | 1;
    v29 = *(_DWORD *)(a2 + 8);
    v30 = *(_DWORD *)(a2 + 12);
    if ( v29 >= v30 )
    {
      v41 = 2 * v30;
      v42 = sub_186B270(8 * v41);
      v29 = *(_DWORD *)(a2 + 8);
      v43 = *(_QWORD **)a2;
      v31 = (_QWORD *)v42;
      if ( v29 )
      {
        if ( v29 - 1 <= 2 || (_QWORD *)v42 == v43 + 1 )
        {
          for ( j = 0; j != v29; ++j )
            v31[j] = v43[j];
        }
        else
        {
          v44 = 0;
          do
          {
            *(__m128i *)&v31[v44] = _mm_loadu_si128((const __m128i *)&v43[v44]);
            v44 += 2;
          }
          while ( 2LL * (v29 >> 1) != v44 );
          if ( (v29 & 1) != 0 )
            v31[v29 & 0xFFFFFFFE] = v43[v29 & 0xFFFFFFFE];
        }
      }
      if ( v43 != (_QWORD *)(a2 + 16) && v43 )
      {
        sub_186B220(v43);
        v29 = *(_DWORD *)(a2 + 8);
      }
      *(_QWORD *)a2 = v31;
      *(_DWORD *)(a2 + 12) = v41;
    }
    else
    {
      v31 = *(_QWORD **)a2;
    }
    v32 = (unsigned int)v97;
    v31[v29] = v22;
    *(_DWORD *)(a2 + 8) = v29 + 1;
    if ( (unsigned int)v97 >= HIDWORD(v97) )
    {
      p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v97)));
      v40 = 0;
      v32 = (unsigned int)v97;
      if ( (_DWORD)v97 )
      {
        do
        {
          *(__m128i *)&p_ptr[v40] = _mm_loadu_si128((const __m128i *)&v96[v40]);
          v40 += 2;
        }
        while ( 2LL * (unsigned int)v97 != v40 );
      }
      if ( v96 != &ptr && v96 )
      {
        v82 = p_ptr;
        sub_186B220(v96);
        v32 = (unsigned int)v97;
        p_ptr = v82;
      }
      v96 = p_ptr;
      HIDWORD(v97) *= 2;
    }
    else
    {
      p_ptr = v96;
    }
    v33 = &p_ptr[2 * v32];
    *v33 = v22;
    *((_DWORD *)v33 + 2) = 0;
    v34 = (unsigned int)v97;
    v35 = v97 + 1;
LABEL_47:
    LODWORD(v97) = v35;
    LODWORD(v10) = v35 - 1;
    v4 = p_ptr[2 * v34];
  }
  if ( v11 )
  {
    v24 = 100;
    sub_1872CE0("");
    goto LABEL_26;
  }
  v13 = *(_DWORD *)(v4 + 24);
LABEL_10:
  v14 = *((unsigned int *)v12 + 2);
  v15 = v4 + 8 * v14;
  while ( (unsigned int)v14 < v13 )
  {
    v16 = *(_QWORD *)(v15 + 32);
    LODWORD(v14) = v14 + 1;
    v15 += 8;
    *((_DWORD *)v12 + 2) = v14;
    v17 = *(_BYTE *)(v16 + 6);
    if ( (v17 & 1) == 0 )
    {
      *(_BYTE *)(v16 + 6) = v17 | 1;
      v18 = *(_DWORD *)(a2 + 8);
      v19 = *(_DWORD *)(a2 + 12);
      if ( v18 >= v19 )
      {
        v25 = 2 * v19;
        v26 = sub_186B270(8 * v25);
        v18 = *(_DWORD *)(a2 + 8);
        v27 = *(_QWORD **)a2;
        v20 = (_QWORD *)v26;
        if ( v18 )
        {
          if ( v18 - 1 <= 2 || (_QWORD *)v26 == v27 + 1 )
          {
            for ( k = 0; k != v18; ++k )
              v20[k] = v27[k];
          }
          else
          {
            v28 = 0;
            do
            {
              *(__m128i *)&v20[v28] = _mm_loadu_si128((const __m128i *)&v27[v28]);
              v28 += 2;
            }
            while ( 2LL * (v18 >> 1) != v28 );
            if ( (v18 & 1) != 0 )
              v20[v18 & 0xFFFFFFFE] = v27[v18 & 0xFFFFFFFE];
          }
        }
        if ( v27 && v27 != (_QWORD *)(a2 + 16) )
        {
          v81 = v20;
          sub_186B220(v27);
          v18 = *(_DWORD *)(a2 + 8);
          v20 = v81;
        }
        *(_QWORD *)a2 = v20;
        *(_DWORD *)(a2 + 12) = v25;
      }
      else
      {
        v20 = *(_QWORD **)a2;
      }
      v20[v18] = v16;
      *(_DWORD *)(a2 + 8) = v18 + 1;
      v21 = *(_WORD *)(v16 + 4);
      if ( v21 != 1 )
      {
        if ( v21 == 2 )
        {
          v38 = (unsigned int)v97;
          if ( (unsigned int)v97 >= HIDWORD(v97) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v97)));
            v45 = 0;
            v38 = (unsigned int)v97;
            if ( (_DWORD)v97 )
            {
              do
              {
                *(__m128i *)&p_ptr[v45] = _mm_loadu_si128((const __m128i *)&v96[v45]);
                v45 += 2;
              }
              while ( v45 != 2LL * (unsigned int)v97 );
            }
            if ( v96 != &ptr && v96 )
            {
              v83 = p_ptr;
              sub_186B220(v96);
              v38 = (unsigned int)v97;
              p_ptr = v83;
            }
            v96 = p_ptr;
            HIDWORD(v97) *= 2;
          }
          else
          {
            p_ptr = v96;
          }
          v39 = &p_ptr[2 * v38];
          *v39 = v16;
          *((_DWORD *)v39 + 2) = 0;
          v34 = (unsigned int)v97;
          v35 = v97 + 1;
          goto LABEL_47;
        }
        if ( v21 )
        {
          sub_1872CE0("");
          sub_1873130(114, 73);
        }
        if ( *(_DWORD *)(v16 + 24) )
        {
          v36 = v97;
          if ( (unsigned int)v97 >= HIDWORD(v97) )
          {
            p_ptr = (__int64 *)sub_186B270(16LL * (unsigned int)(2 * HIDWORD(v97)));
            v80 = 0;
            v36 = v97;
            if ( (_DWORD)v97 )
            {
              do
              {
                *(__m128i *)&p_ptr[v80] = _mm_loadu_si128((const __m128i *)&v96[v80]);
                v80 += 2;
              }
              while ( 2LL * (unsigned int)v97 != v80 );
            }
            if ( v96 )
            {
              if ( v96 != &ptr )
              {
                v87 = p_ptr;
                sub_186B220(v96);
                v36 = v97;
                p_ptr = v87;
              }
            }
            v96 = p_ptr;
            HIDWORD(v97) *= 2;
          }
          else
          {
            p_ptr = v96;
          }
          v37 = &p_ptr[2 * v36];
          *((_DWORD *)v37 + 2) = 0;
          v34 = (unsigned int)v97;
          *v37 = v16;
          v35 = v97 + 1;
          goto LABEL_47;
        }
      }
      goto LABEL_10;
    }
  }
  v46 = (__int64 *)(v4 + 32);
  v47 = *a1;
  LODWORD(v10) = v97 - 1;
  LODWORD(v97) = v97 - 1;
  v48 = 8LL * *(unsigned int *)(v4 + 24);
  if ( !v48 )
  {
LABEL_27:
    p_ptr = v96;
    if ( (_DWORD)v10 )
      goto LABEL_24;
    goto LABEL_28;
  }
  for ( m = *v46; !*(_WORD *)(*v46 + 4); m = *v46 )
  {
    if ( (*(_BYTE *)(m + 30) & 1) == 0 )
      break;
    if ( (__int64 *)(v4 + 32 + v48) == ++v46 )
      goto LABEL_27;
  }
  v50 = *(unsigned int *)(v47 + 16);
  v51 = *(_DWORD *)(v47 + 24);
  v52 = *(_QWORD *)(v4 + 16);
  v53 = 2 * v50;
  if ( 3 * (int)v50 < (unsigned int)(4 * (v51 + *(_DWORD *)(v47 + 20))) )
  {
    v69 = v53;
    v92 = *a1;
    v89 = 2 * v50;
    v84 = 8LL * v53;
    v70 = (_QWORD *)sub_186B270(v84);
    v71 = v89;
    v55 = v84;
    v54 = v70;
    v47 = v92;
    if ( v89 )
    {
      v93 = v89;
      v90 = v84;
      v85 = v47;
      memset(v70, 0, 8 * v69);
      v47 = v85;
      v55 = v90;
      v71 = v93;
    }
    v72 = *(char **)(v47 + 8);
    v56 = v71 - 1;
    v57 = (_QWORD *)((char *)v54 + v55);
    v73 = &v72[8 * *(unsigned int *)(v47 + 16)];
    if ( v72 != v73 )
    {
      do
      {
        while ( *(_QWORD *)v72 <= 1u )
        {
          v72 += 8;
          if ( v73 == v72 )
            goto LABEL_126;
        }
        v74 = 8LL * (*(_DWORD *)(*(_QWORD *)v72 + 12LL) & v56);
        v75 = &v54[(unsigned __int64)v74 / 8];
        if ( v55 == v74 )
        {
LABEL_130:
          if ( v54 == v75 )
          {
LABEL_141:
            sub_1872CE0("");
            sub_1873130(114, 213);
          }
          v76 = v54;
          while ( *v76 )
          {
            if ( v75 == ++v76 )
              goto LABEL_141;
          }
        }
        else
        {
          v76 = &v54[(unsigned __int64)v74 / 8];
          while ( *v76 )
          {
            if ( v57 == ++v76 )
              goto LABEL_130;
          }
        }
        v77 = *(_QWORD *)v72;
        v72 += 8;
        *v76 = v77;
      }
      while ( v73 != v72 );
LABEL_126:
      v73 = *(char **)(v47 + 8);
    }
    if ( v73 )
    {
      v95 = v71;
      v94 = v55;
      v91 = v71 - 1;
      v86 = v47;
      sub_186B220(v73);
      v71 = v95;
      v55 = v94;
      v56 = v91;
      v47 = v86;
    }
    *(_QWORD *)(v47 + 8) = v54;
    v51 = 0;
    *(_DWORD *)(v47 + 16) = v71;
    *(_DWORD *)(v47 + 24) = 0;
  }
  else
  {
    v54 = *(_QWORD **)(v47 + 8);
    v55 = 8 * v50;
    v56 = v50 - 1;
    v57 = &v54[v50];
  }
  v58 = *(_DWORD *)(v52 + 12);
  v59 = 8LL * (v58 & v56);
  v60 = &v54[(unsigned __int64)v59 / 8];
  if ( v59 != v55 )
  {
    v10 = (unsigned __int64)&v54[(unsigned __int64)v59 / 8];
    v61 = nullptr;
    while ( 1 )
    {
      v62 = *(_QWORD *)v10;
      if ( *(_QWORD *)v10 > 1u )
      {
        if ( *(_DWORD *)(v62 + 12) == v58 && v52 == v62 )
        {
          *(_QWORD *)v10 = v52;
          p_ptr = v96;
          LODWORD(v10) = v97;
          goto LABEL_23;
        }
      }
      else
      {
        if ( !v62 )
        {
          if ( v61 )
            goto LABEL_136;
          v61 = (_QWORD *)v10;
          goto LABEL_137;
        }
        v61 = (_QWORD *)v10;
      }
      v10 += 8LL;
      if ( (_QWORD *)v10 == v57 )
        goto LABEL_96;
    }
  }
  v61 = nullptr;
  while ( 1 )
  {
LABEL_96:
    if ( v60 == v54 )
    {
      v24 = 405;
      sub_1872CE0("");
LABEL_26:
      sub_1873130(114, v24);
    }
    v63 = *v54;
    if ( *v54 <= 1u )
      break;
    if ( *(_DWORD *)(v63 + 12) == v58 && v52 == v63 )
    {
      LODWORD(v10) = v97;
      p_ptr = v96;
      *v54 = v52;
      goto LABEL_23;
    }
LABEL_95:
    ++v54;
  }
  if ( v63 )
  {
    v61 = v54;
    goto LABEL_95;
  }
  if ( v61 )
LABEL_136:
    *(_DWORD *)(v47 + 24) = v51 - 1;
  else
    v61 = v54;
LABEL_137:
  LODWORD(v10) = v97;
  p_ptr = v96;
  *v61 = v52;
  ++*(_DWORD *)(v47 + 20);
LABEL_23:
  if ( (_DWORD)v10 )
  {
LABEL_24:
    v10 = (unsigned int)(v10 - 1);
    v4 = p_ptr[2 * v10];
    goto LABEL_6;
  }
LABEL_28:
  result = (__int64)&ptr;
  if ( p_ptr != &ptr && p_ptr )
    return sub_186B220(p_ptr);
  return result;
}

