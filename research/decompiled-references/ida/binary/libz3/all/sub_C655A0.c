__int64 __fastcall sub_C655A0(_QWORD *a1, int a2, __int64 *a3, __int64 *a4)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  __int64 v8; // r13
  int v9; // edx
  _QWORD *v10; // r12
  __int64 v11; // rsi
  __int64 v12; // rdi
  bool v13; // zf
  _QWORD *v14; // r8
  __int64 v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rdi
  char *v18; // rbx
  char *v19; // rbp
  __int64 v20; // rsi
  char *v21; // rbx
  char *v22; // rbp
  __int64 v23; // rsi
  __int64 result; // rax
  _DWORD *v25; // rax
  bool v26; // r12
  int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  __int64 v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r12
  int v33; // edx
  _QWORD *v34; // r13
  __int64 v35; // rbp
  char *v36; // rax
  char *v37; // rdi
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // r12
  _DWORD *v41; // rax
  bool v42; // bl
  int v43; // ecx
  int v44; // r8d
  int v45; // r9d
  __int64 v46; // rdi
  void *v47; // r14
  __int64 v48; // rax
  __int64 v49; // rbp
  int v50; // ecx
  __int64 v51; // rax
  __int64 v52; // rbp
  char *v53; // rax
  char *v54; // rdi
  unsigned __int64 v55; // rax
  __int64 v56; // rcx
  char *v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  char *v63; // rbx
  char *v64; // rbp
  __int64 v65; // rsi
  char *v66; // rbx
  char *v67; // rbp
  __int64 v68; // rsi
  unsigned __int64 v69; // rax
  __int64 v70; // rsi
  __int64 v71; // rbx
  _QWORD *v72; // rax
  char *v73; // rdi
  unsigned __int64 v74; // rax
  __int64 v75; // rdx
  unsigned __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rax
  __int64 v79; // rsi
  unsigned __int64 v80; // rax
  __int64 v81; // rsi
  _QWORD *v82; // [rsp+8h] [rbp-1E0h]
  _QWORD *v83; // [rsp+8h] [rbp-1E0h]
  void *v85; // [rsp+18h] [rbp-1D0h]
  unsigned int v86; // [rsp+28h] [rbp-1C0h]
  int v88[2]; // [rsp+38h] [rbp-1B0h]
  __int64 v89; // [rsp+40h] [rbp-1A8h] BYREF
  __int64 v90; // [rsp+48h] [rbp-1A0h]
  __int64 v91; // [rsp+50h] [rbp-198h] BYREF
  __int64 v92; // [rsp+58h] [rbp-190h]
  __int64 v93; // [rsp+60h] [rbp-188h] BYREF
  __int64 v94; // [rsp+68h] [rbp-180h]
  __int64 v95; // [rsp+70h] [rbp-178h]
  void *v96; // [rsp+78h] [rbp-170h]
  __int64 v97; // [rsp+80h] [rbp-168h]
  _BYTE v98[136]; // [rsp+88h] [rbp-160h] BYREF
  __int64 v99; // [rsp+110h] [rbp-D8h]
  void *ptr; // [rsp+118h] [rbp-D0h]
  __int64 v101; // [rsp+120h] [rbp-C8h]
  _BYTE v102[192]; // [rsp+128h] [rbp-C0h] BYREF

  v6 = 0;
  v86 = a2 - 4;
  v95 = *a1;
  v96 = v98;
  v99 = v95;
  v90 = v95;
  v7 = *a3;
  ptr = v102;
  v97 = 0x1000000000LL;
  v101 = 0x1000000000LL;
  v89 = 0;
  v82 = a1 + 95;
  if ( !v7 )
    goto LABEL_15;
  while ( v6 < *(_DWORD *)(v7 - 4) )
  {
    sub_177C570(&v91, a3, v6);
    sub_1632F10(v82, &v91, 1, &v89);
    if ( v91 )
      sub_177F260(v92);
    v8 = v89;
    if ( (*(_BYTE *)(a3[1] + 4LL * v6) & 1) != 0 )
    {
      if ( v89 )
        ++*(_DWORD *)(v89 + 8);
      v9 = v101;
      if ( (unsigned int)v101 >= HIDWORD(v101) )
      {
        v35 = (unsigned int)(2 * HIDWORD(v101));
        v36 = (char *)sub_186B270(8 * v35);
        v9 = v101;
        v37 = (char *)ptr;
        v10 = v36;
        if ( (_DWORD)v101 )
        {
          if ( (unsigned int)(v101 - 1) <= 2 || v36 == (char *)ptr + 8 )
          {
            v69 = 0;
            v70 = 8LL * (unsigned int)v101;
            do
            {
              v10[v69 / 8] = *(_QWORD *)&v37[v69];
              v69 += 8LL;
            }
            while ( v70 != v69 );
          }
          else
          {
            v38 = 0;
            v39 = 16LL * ((unsigned int)v101 >> 1);
            do
            {
              *(__m128i *)&v10[v38 / 8] = _mm_loadu_si128((const __m128i *)&v37[v38]);
              v38 += 16LL;
            }
            while ( v38 != v39 );
            if ( (v9 & 1) != 0 )
              v10[v9 & 0xFFFFFFFE] = *(_QWORD *)&v37[8 * (v9 & 0xFFFFFFFE)];
          }
        }
        if ( v37 != v102 && v37 )
        {
          sub_186B220(v37);
          v9 = v101;
        }
        ptr = v10;
        HIDWORD(v101) = v35;
      }
      else
      {
        v10 = ptr;
      }
      v10[v9] = v8;
      LODWORD(v101) = v9 + 1;
      goto LABEL_11;
    }
    *(_QWORD *)v88 = *a1;
    v25 = *(_DWORD **)(sub_15D1F10(v89) + 24);
    v26 = 0;
    if ( v25 && *v25 == 5 )
      v26 = v25[1] == 1;
    v91 = 0;
    v92 = 0;
    v93 = 1;
    v94 = 0;
    sub_182CBA0(qword_1C7F2C0, &v93);
    v30 = a1[2];
    BYTE4(v93) &= ~1u;
    LODWORD(v93) = 1;
    if ( !v30 )
    {
      sub_16669E0(a1 + 1);
      v30 = a1[2];
    }
    sub_166A700(v30, (unsigned int)&v91, v26, v27, v28, v29);
    v85 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, &v91);
    sub_182CBA0(v85, &v93);
    v31 = sub_15E1B70(v88[0]);
    v32 = v31;
    if ( v86 <= 1 )
    {
      v51 = sub_15E1A70(*a1);
      v32 = v51;
      if ( v51 )
        ++*(_DWORD *)(v51 + 8);
      v33 = v97;
      if ( (unsigned int)v97 >= HIDWORD(v97) )
      {
        v52 = (unsigned int)(2 * HIDWORD(v97));
        v53 = (char *)sub_186B270(8 * v52);
        v33 = v97;
        v54 = (char *)v96;
        v34 = v53;
        if ( (_DWORD)v97 )
        {
          if ( (unsigned int)(v97 - 1) <= 2 || v53 == (char *)v96 + 8 )
          {
            v78 = 0;
            v79 = 8LL * (unsigned int)v97;
            do
            {
              v34[v78 / 8] = *(_QWORD *)&v54[v78];
              v78 += 8LL;
            }
            while ( v79 != v78 );
          }
          else
          {
            v55 = 0;
            v56 = 16LL * ((unsigned int)v97 >> 1);
            do
            {
              *(__m128i *)&v34[v55 / 8] = _mm_loadu_si128((const __m128i *)&v54[v55]);
              v55 += 16LL;
            }
            while ( v56 != v55 );
            if ( (v33 & 1) != 0 )
              v34[v33 & 0xFFFFFFFE] = *(_QWORD *)&v54[8 * (v33 & 0xFFFFFFFE)];
          }
        }
        if ( v54 && v54 != v98 )
        {
LABEL_104:
          sub_186B220(v54);
          v96 = v34;
          v33 = v97;
          HIDWORD(v97) = v52;
          goto LABEL_54;
        }
        goto LABEL_94;
      }
    }
    else
    {
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
      v33 = v97;
      if ( (unsigned int)v97 >= HIDWORD(v97) )
      {
        v52 = (unsigned int)(2 * HIDWORD(v97));
        v57 = (char *)sub_186B270(8 * v52);
        v33 = v97;
        v54 = (char *)v96;
        v34 = v57;
        if ( (_DWORD)v97 )
        {
          if ( (unsigned int)(v97 - 1) <= 2 || v57 == (char *)v96 + 8 )
          {
            v76 = 0;
            v77 = 8LL * (unsigned int)v97;
            do
            {
              v34[v76 / 8] = *(_QWORD *)&v54[v76];
              v76 += 8LL;
            }
            while ( v76 != v77 );
          }
          else
          {
            v58 = 0;
            v59 = 16LL * ((unsigned int)v97 >> 1);
            do
            {
              *(__m128i *)&v34[v58 / 8] = _mm_loadu_si128((const __m128i *)&v54[v58]);
              v58 += 16LL;
            }
            while ( v58 != v59 );
            if ( (v33 & 1) != 0 )
              v34[v33 & 0xFFFFFFFE] = *(_QWORD *)&v54[8 * (v33 & 0xFFFFFFFE)];
          }
        }
        if ( v54 != v98 && v54 )
          goto LABEL_104;
LABEL_94:
        v96 = v34;
        HIDWORD(v97) = v52;
        goto LABEL_54;
      }
    }
    v34 = v96;
LABEL_54:
    v34[v33] = v32;
    LODWORD(v97) = v33 + 1;
LABEL_11:
    v7 = *a3;
    ++v6;
    if ( !*a3 )
      break;
  }
  v11 = v89;
  v12 = v90;
  if ( v89 )
  {
    v13 = (*(_DWORD *)(v89 + 8))-- == 1;
    if ( v13 )
    {
      sub_15D7BC0(v12, v11);
      if ( (_DWORD)v101 )
        goto LABEL_66;
LABEL_15:
      if ( a2 == 4 )
      {
        v60 = *(_QWORD *)(*a1 + 864LL);
        if ( v60 )
LABEL_106:
          ++*(_DWORD *)(v60 + 8);
      }
      else
      {
        if ( a2 != 3 )
        {
          v14 = v96;
          if ( (_DWORD)v97 == 1 )
            goto LABEL_78;
LABEL_18:
          v15 = sub_15E1AF0(*a1);
          if ( v15 )
            goto LABEL_19;
          goto LABEL_20;
        }
        v60 = *(_QWORD *)(*a1 + 856LL);
        if ( v60 )
          goto LABEL_106;
      }
      v61 = *a4;
      if ( *a4 )
      {
        v62 = a4[1];
        v13 = (*(_DWORD *)(v61 + 8))-- == 1;
        if ( v13 )
          sub_15D7BC0(v62, v61);
      }
      *a4 = v60;
      v63 = (char *)ptr;
      v64 = (char *)ptr + 8 * (unsigned int)v101;
      if ( ptr < v64 )
      {
        do
        {
          while ( 1 )
          {
            v65 = *(_QWORD *)v63;
            if ( *(_QWORD *)v63 )
            {
              v13 = (*(_DWORD *)(v65 + 8))-- == 1;
              if ( v13 )
                break;
            }
            v63 += 8;
            if ( v63 >= v64 )
              goto LABEL_116;
          }
          sub_15D7BC0(v99, v65);
          v63 += 8;
        }
        while ( v63 < v64 );
LABEL_116:
        v63 = (char *)ptr;
      }
      if ( v63 != v102 && v63 )
        sub_186B220(v63);
      v66 = (char *)v96;
      result = (unsigned int)v97;
      v67 = (char *)v96 + 8 * (unsigned int)v97;
      if ( v96 < v67 )
      {
        do
        {
          while ( 1 )
          {
            v68 = *(_QWORD *)v66;
            if ( *(_QWORD *)v66 )
            {
              v13 = (*(_DWORD *)(v68 + 8))-- == 1;
              if ( v13 )
                break;
            }
            v66 += 8;
            if ( v66 >= v67 )
              goto LABEL_126;
          }
          result = sub_15D7BC0(v95, v68);
          v66 += 8;
        }
        while ( v66 < v67 );
LABEL_126:
        v66 = (char *)v96;
      }
      if ( v66 )
      {
        result = (__int64)v98;
        if ( v66 != v98 )
          return sub_186B220(v66);
      }
      return result;
    }
  }
  if ( !(_DWORD)v101 )
    goto LABEL_15;
LABEL_66:
  v40 = *a1;
  v41 = *(_DWORD **)(sub_15D1F10(*(_QWORD *)ptr) + 24);
  v42 = 0;
  if ( v41 && *v41 == 5 )
    v42 = v41[1] == 1;
  v91 = 0;
  v92 = 0;
  v93 = 1;
  v94 = 0;
  sub_182CBA0(qword_1C7F2C0, &v93);
  v46 = a1[2];
  BYTE4(v93) &= ~1u;
  LODWORD(v93) = 1;
  if ( !v46 )
  {
    sub_16669E0(a1 + 1);
    v46 = a1[2];
  }
  sub_166A700(v46, (unsigned int)&v91, v42, v43, v44, v45);
  v47 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v91);
  sub_182CBA0(v47, &v93);
  if ( (_DWORD)v101 != 1 )
    sub_15E1AF0(a1[1]);
  v48 = sub_15E1B70(v40);
  v49 = v48;
  if ( v48 )
    ++*(_DWORD *)(v48 + 8);
  v50 = v97;
  if ( (unsigned int)v97 >= HIDWORD(v97) )
  {
    v71 = (unsigned int)(2 * HIDWORD(v97));
    v72 = (_QWORD *)sub_186B270(8 * v71);
    v50 = v97;
    v73 = (char *)v96;
    v14 = v72;
    if ( (_DWORD)v97 )
    {
      if ( (unsigned int)(v97 - 1) <= 2 || v72 == (_QWORD *)((char *)v96 + 8) )
      {
        v80 = 0;
        v81 = 8LL * (unsigned int)v97;
        do
        {
          v14[v80 / 8] = *(_QWORD *)&v73[v80];
          v80 += 8LL;
        }
        while ( v80 != v81 );
      }
      else
      {
        v74 = 0;
        v75 = 16LL * ((unsigned int)v97 >> 1);
        do
        {
          *(__m128i *)&v14[v74 / 8] = _mm_loadu_si128((const __m128i *)&v73[v74]);
          v74 += 16LL;
        }
        while ( v74 != v75 );
        if ( (v50 & 1) != 0 )
          v14[v50 & 0xFFFFFFFE] = *(_QWORD *)&v73[8 * (v50 & 0xFFFFFFFE)];
      }
    }
    if ( v73 && v73 != v98 )
    {
      v83 = v14;
      sub_186B220(v73);
      v50 = v97;
      v14 = v83;
    }
    v96 = v14;
    HIDWORD(v97) = v71;
  }
  else
  {
    v14 = v96;
  }
  v14[v50] = v49;
  LODWORD(v97) = v50 + 1;
  if ( v50 )
    goto LABEL_18;
LABEL_78:
  v15 = *v14;
  if ( !*v14 )
    goto LABEL_20;
LABEL_19:
  ++*(_DWORD *)(v15 + 8);
LABEL_20:
  v16 = *a4;
  if ( *a4 )
  {
    v17 = a4[1];
    v13 = (*(_DWORD *)(v16 + 8))-- == 1;
    if ( v13 )
      sub_15D7BC0(v17, v16);
  }
  *a4 = v15;
  v18 = (char *)ptr;
  v19 = (char *)ptr + 8 * (unsigned int)v101;
  if ( ptr < v19 )
  {
    do
    {
      while ( 1 )
      {
        v20 = *(_QWORD *)v18;
        if ( *(_QWORD *)v18 )
        {
          v13 = (*(_DWORD *)(v20 + 8))-- == 1;
          if ( v13 )
            break;
        }
        v18 += 8;
        if ( v18 >= v19 )
          goto LABEL_29;
      }
      sub_15D7BC0(v99, v20);
      v18 += 8;
    }
    while ( v18 < v19 );
LABEL_29:
    v18 = (char *)ptr;
  }
  if ( v18 != v102 && v18 )
    sub_186B220(v18);
  v21 = (char *)v96;
  v22 = (char *)v96 + 8 * (unsigned int)v97;
  if ( v96 < v22 )
  {
    do
    {
      while ( 1 )
      {
        v23 = *(_QWORD *)v21;
        if ( *(_QWORD *)v21 )
        {
          v13 = (*(_DWORD *)(v23 + 8))-- == 1;
          if ( v13 )
            break;
        }
        v21 += 8;
        if ( v21 >= v22 )
          goto LABEL_39;
      }
      sub_15D7BC0(v95, v23);
      v21 += 8;
    }
    while ( v21 < v22 );
LABEL_39:
    v21 = (char *)v96;
  }
  result = (__int64)v98;
  if ( v21 != v98 )
  {
    if ( v21 )
      return sub_186B220(v21);
  }
  return result;
}

