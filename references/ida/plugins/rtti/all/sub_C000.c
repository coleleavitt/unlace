unsigned __int64 __fastcall sub_C000(_QWORD *a1, __int64 *a2, int a3)
{
  __int64 v4; // rbx
  _WORD *v5; // r8
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rbx
  __int64 v12; // r13
  unsigned __int64 v13; // rbx
  size_t v14; // r14
  __int64 v15; // r12
  size_t v16; // r15
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // r12
  unsigned __int64 v21; // r14
  __int64 v22; // rsi
  _DWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  _BYTE *v27; // r15
  __int64 v28; // r13
  __int64 v29; // rbx
  void *v30; // rax
  _DWORD *v31; // rsi
  unsigned __int64 v32; // r12
  __int64 v33; // rax
  __int64 v34; // rdx
  const char *v35; // rdi
  char *v36; // rax
  const char *v37; // rbx
  char v38; // al
  size_t v39; // rax
  size_t v40; // r13
  const char *v41; // rdx
  char *v42; // rbx
  char *v43; // r13
  __int64 v44; // r12
  char *v45; // r14
  __int64 v46; // rsi
  char *v47; // r10
  int v48; // r9d
  __int64 v49; // r8
  __int64 v50; // r9
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  _BYTE *v53; // rbx
  __int64 v54; // rdi
  __int64 v55; // r12
  unsigned __int64 v56; // r14
  __int64 v57; // rsi
  __int64 v58; // rbx
  __int64 v59; // r12
  unsigned __int64 v60; // r14
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rax
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rax
  __int64 v69; // rax
  void *v70; // rdi
  size_t v71; // r14
  _BYTE *v72; // [rsp+0h] [rbp-268h]
  signed __int64 n; // [rsp+8h] [rbp-260h]
  size_t na; // [rsp+8h] [rbp-260h]
  _QWORD *v75; // [rsp+10h] [rbp-258h]
  _QWORD *v76; // [rsp+18h] [rbp-250h]
  __int64 v77; // [rsp+18h] [rbp-250h]
  __int64 v78; // [rsp+20h] [rbp-248h]
  __int64 v79; // [rsp+20h] [rbp-248h]
  int v80; // [rsp+28h] [rbp-240h]
  int v81; // [rsp+2Ch] [rbp-23Ch]
  unsigned __int64 v82; // [rsp+30h] [rbp-238h]
  int v83; // [rsp+38h] [rbp-230h]
  _BYTE v84[12]; // [rsp+3Ch] [rbp-22Ch]
  __int128 v85; // [rsp+48h] [rbp-220h]
  int v86; // [rsp+58h] [rbp-210h]
  _BYTE *v87; // [rsp+60h] [rbp-208h] BYREF
  __int128 v88; // [rsp+68h] [rbp-200h]
  int v89; // [rsp+78h] [rbp-1F0h]
  void *dest; // [rsp+80h] [rbp-1E8h]
  __int128 v91; // [rsp+88h] [rbp-1E0h]
  int v92; // [rsp+98h] [rbp-1D0h]
  void *v93[3]; // [rsp+A0h] [rbp-1C8h] BYREF
  __int128 v94; // [rsp+B8h] [rbp-1B0h]
  __int64 v95; // [rsp+C8h] [rbp-1A0h]
  __int128 v96; // [rsp+D0h] [rbp-198h]
  int v97; // [rsp+E0h] [rbp-188h]
  __int64 v98; // [rsp+E8h] [rbp-180h]
  __int128 v99; // [rsp+F0h] [rbp-178h]
  __int64 v100; // [rsp+100h] [rbp-168h]
  __int128 v101; // [rsp+108h] [rbp-160h]
  void *v102; // [rsp+120h] [rbp-148h] BYREF
  __int128 v103; // [rsp+128h] [rbp-140h]
  __int64 v104; // [rsp+138h] [rbp-130h]
  int v105; // [rsp+140h] [rbp-128h]
  __int64 v106; // [rsp+148h] [rbp-120h]
  _BYTE v107[192]; // [rsp+150h] [rbp-118h] BYREF
  _BYTE v108[11]; // [rsp+210h] [rbp-58h] BYREF
  char needle[13]; // [rsp+21Bh] [rbp-4Dh] BYREF
  unsigned __int64 v110; // [rsp+228h] [rbp-40h]

  v75 = a1;
  v83 = a3;
  v110 = __readfsqword(0x28u);
  if ( !a1[3] )
    return v110 - __readfsqword(0x28u);
  if ( a3 )
  {
    *(_DWORD *)&v84[8] = 0;
    v85 = 0;
    *(_QWORD *)v84 = (unsigned int)(a3 + 1);
    v4 = 2 * (a3 + 1);
    if ( !(2 * (a3 + 1)) )
      goto LABEL_4;
    v32 = v4 + 1;
  }
  else
  {
    if ( a1[13] <= 1u && !(unsigned __int8)sub_FF50(a1[5], 0, a1[7]) )
      return v110 - __readfsqword(0x28u);
    v31 = (_DWORD *)*a2;
    if ( (unsigned __int64)a2[2] <= 7 )
    {
      v68 = qvector_reserve();
      *a2 = v68;
      v31 = (_DWORD *)v68;
    }
    a2[1] = 8;
    v4 = 2;
    v32 = 3;
    *v31 = 1818391920;
    *(_DWORD *)((char *)v31 + 3) = 543385964;
    *(_BYTE *)(*a2 + 7) = 0;
    v85 = 0;
  }
  v33 = qvector_reserve();
  v34 = v85;
  *(_QWORD *)&v84[4] = v33;
  if ( (unsigned __int64)v85 < v32 )
  {
    do
    {
      *(_BYTE *)(v33 + v34++) = 32;
      v33 = *(_QWORD *)&v84[4];
    }
    while ( v34 != v32 );
  }
  *(_QWORD *)&v85 = v32;
  *(_BYTE *)(v33 + v4) = 0;
LABEL_4:
  v87 = 0;
  dest = 0;
  v88 = 0;
  v91 = 0;
  if ( (unsigned __int8)sub_BD90(a1, (__int64 *)&v87) && v87 && *v87 )
  {
    memset(v93, 0, sizeof(v93));
    if ( (int)demangle_name() <= 0 )
      goto LABEL_71;
    v35 = &haystack;
    strcpy(needle, "typeinfo for");
    if ( v93[1] )
      v35 = (const char *)v93[0];
    v36 = strstr(v35, needle);
    v37 = v36;
    if ( !v36 )
      goto LABEL_71;
    if ( !v36[12] )
      goto LABEL_69;
    v38 = v36[13];
    if ( !v38 )
      goto LABEL_69;
    v37 += 13;
    if ( v38 == 32 )
    {
      do
      {
        ++v37;
LABEL_69:
        ;
      }
      while ( *v37 == 32 );
      if ( !*v37 )
      {
LABEL_71:
        if ( v93[0] )
        {
          v93[1] = 0;
          qfree();
        }
        goto LABEL_7;
      }
    }
    v39 = strlen(v37);
    v40 = v39;
    if ( v39 )
    {
      v70 = dest;
      v71 = v39 + 1;
      if ( *((_QWORD *)&v91 + 1) < v39 + 1 )
      {
        dest = (void *)qvector_reserve();
        v70 = dest;
      }
      *(_QWORD *)&v91 = v71;
      memmove(v70, v37, v40);
      *((_BYTE *)dest + v40) = 0;
      if ( !v93[0] )
      {
LABEL_57:
        memset(v93, 0, sizeof(v93));
        if ( (_QWORD)v91 )
        {
          v41 = (const char *)dest;
          goto LABEL_59;
        }
LABEL_120:
        v41 = &haystack;
LABEL_59:
        sub_107B0(v93, *v75, v41);
        v42 = (char *)v93[1];
        if ( v93[1] )
        {
          v43 = (char *)v93[1] - 1;
          if ( v93[1] != (char *)&dword_0 + 1 )
          {
            v44 = a2[1];
            v45 = (char *)v93[1] - 1;
            if ( v44 )
            {
              v45 = &v43[--v44];
              v42 = (char *)v93[1] + v44;
            }
            v46 = *a2;
            if ( a2[2] < (unsigned __int64)v42 )
            {
              v69 = qvector_reserve();
              *a2 = v69;
              v46 = v69;
            }
            a2[1] = (__int64)v42;
            v45[v46] = 0;
            memcpy((void *)(v44 + *a2), v93[0], (size_t)v43);
          }
        }
        if ( v93[0] )
        {
          v93[1] = 0;
          qfree();
        }
        goto LABEL_8;
      }
    }
    else
    {
      *(_QWORD *)&v91 = 0;
      if ( !v93[0] )
      {
        *(_OWORD *)&v93[1] = 0;
        goto LABEL_120;
      }
    }
    v93[1] = 0;
    qfree();
    goto LABEL_57;
  }
LABEL_7:
  sub_5520(a2);
LABEL_8:
  v82 = v75[10];
  if ( !v82 )
  {
    if ( dest )
    {
      *(_QWORD *)&v91 = 0;
      qfree();
    }
    if ( v87 )
    {
      *(_QWORD *)&v88 = 0;
      qfree();
    }
    if ( *(_QWORD *)&v84[4] )
      goto LABEL_14;
    return v110 - __readfsqword(0x28u);
  }
  v7 = a2[1];
  if ( v7 )
  {
    v8 = v7 + 2;
    v9 = v7 + 3;
    --v7;
  }
  else
  {
    v9 = 4;
    v8 = 3;
  }
  v10 = *a2;
  if ( a2[2] < v9 )
  {
    v66 = qvector_reserve();
    *a2 = v66;
    v10 = v66;
  }
  a2[1] = v9;
  *(_BYTE *)(v10 + v8) = 0;
  v11 = *a2 + v7;
  v12 = 0;
  *(_WORD *)v11 = 14880;
  *(_BYTE *)(v11 + 2) = 10;
  v81 = 0;
  do
  {
    v13 = v85;
    v76 = (_QWORD *)(v75[9] + 16 * v12);
    if ( (_QWORD)v85 )
    {
      v14 = v85 - 1;
      if ( (_QWORD)v85 != 1 )
      {
        v15 = a2[1];
        v16 = v85 - 1;
        if ( v15 )
        {
          --v15;
          v16 = v14 + v15;
          v13 = v85 + v15;
        }
        v17 = *a2;
        if ( a2[2] < v13 )
        {
          v67 = qvector_reserve();
          *a2 = v67;
          v17 = v67;
        }
        a2[1] = v13;
        *(_BYTE *)(v17 + v16) = 0;
        memcpy((void *)(v15 + *a2), *(const void **)&v84[4], v14);
      }
    }
    v18 = v76[1];
    if ( (v18 & 1) != 0 )
    {
      v58 = a2[1];
      if ( v58 )
      {
        v59 = v58 + 7;
        v60 = v58 + 8;
        v61 = *a2;
        --v58;
        if ( a2[2] >= v60 )
        {
LABEL_106:
          a2[1] = v60;
          *(_BYTE *)(v61 + v59) = 0;
          *(_QWORD *)(*a2 + v58) = 0x206C617574726976LL;
          v18 = v76[1];
          goto LABEL_29;
        }
      }
      else
      {
        v61 = *a2;
        v60 = 9;
        v59 = 8;
        if ( (unsigned __int64)a2[2] >= 9 )
          goto LABEL_106;
      }
      v65 = qvector_reserve();
      *a2 = v65;
      v61 = v65;
      goto LABEL_106;
    }
LABEL_29:
    v19 = a2[1];
    if ( (v18 & 2) != 0 )
    {
      if ( v19 )
      {
        v20 = v19 + 6;
        v21 = v19 + 7;
        v22 = *a2;
        --v19;
        if ( a2[2] >= v21 )
        {
LABEL_32:
          a2[1] = v21;
          *(_BYTE *)(v22 + v20) = 0;
          v23 = (_DWORD *)(*a2 + v19);
          *v23 = 1818391920;
          *(_DWORD *)((char *)v23 + 3) = 543385964;
          goto LABEL_33;
        }
      }
      else
      {
        v22 = *a2;
        v21 = 8;
        v20 = 7;
        if ( (unsigned __int64)a2[2] >= 8 )
          goto LABEL_32;
      }
      v64 = qvector_reserve();
      *a2 = v64;
      v22 = v64;
      goto LABEL_32;
    }
    if ( v19 )
    {
      v55 = v19 + 9;
      v56 = v19 + 10;
      v57 = *a2;
      --v19;
      if ( a2[2] < v56 )
        goto LABEL_108;
    }
    else
    {
      v57 = *a2;
      v56 = 11;
      v55 = 10;
      if ( (unsigned __int64)a2[2] < 0xB )
      {
LABEL_108:
        v62 = qvector_reserve();
        *a2 = v62;
        v57 = v62;
      }
    }
    a2[1] = v56;
    *(_BYTE *)(v57 + v55) = 0;
    qmemcpy((void *)(*a2 + v19), "protected ", 10);
LABEL_33:
    v97 = 0;
    v24 = v75[5];
    memset(v93, 0, sizeof(v93));
    v98 = 0;
    v95 = v24;
    v100 = 0;
    v94 = 0;
    v96 = -1;
    v99 = 0;
    v101 = 0;
    v25 = *(_QWORD *)(v24 + 128);
    v78 = v24;
    v102 = 0;
    v103 = 0;
    if ( v25 )
    {
      v102 = (void *)qalloc_or_throw();
      *((_QWORD *)&v103 + 1) = v25;
      memcpy(v102, *(const void **)(v78 + 120), 16 * v25);
      *(_QWORD *)&v103 = v25;
    }
    v104 = 0;
    v26 = 7;
    v105 = -1;
    v27 = v107;
    v28 = v78 + 168;
    v106 = *(_QWORD *)(v78 + 160);
    v72 = v108;
    do
    {
      *(_QWORD *)v27 = 0;
      *(_OWORD *)(v27 + 8) = 0;
      v29 = *(_QWORD *)(v28 + 8);
      if ( v29 )
      {
        v30 = (void *)qalloc_or_throw();
        *(_QWORD *)v27 = v30;
        *((_QWORD *)v27 + 2) = v29;
        memcpy(v30, *(const void **)v28, 8 * v29);
        *((_QWORD *)v27 + 1) = v29;
      }
      --v26;
      v27 += 24;
      v28 += 24;
    }
    while ( v108 != v27 );
    v47 = "";
    v108[0] = *(_BYTE *)(v78 + 360);
    n = v76[1];
    v48 = n >> 8;
    if ( v48 < 0 )
    {
      v48 = -v48;
      v47 = "-";
    }
    if ( v83 <= 16
      && (LODWORD(n) = v48,
          (unsigned __int8)sub_CC60(
                             (unsigned int)v93,
                             (unsigned int)&v102,
                             *v76,
                             0,
                             (_DWORD)v5,
                             v48,
                             (unsigned int)v108,
                             n,
                             (_DWORD)v75,
                             (_DWORD)v76,
                             (_DWORD)v47,
                             v80,
                             v82,
                             v83,
                             *(_DWORD *)&v84[4],
                             v85,
                             DWORD2(v85),
                             v86,
                             (_DWORD)v87,
                             v88,
                             *((__int64 *)&v88 + 1),
                             v89,
                             (_DWORD)dest,
                             v91,
                             *((__int64 *)&v91 + 1),
                             v92,
                             v93[0],
                             v93[1],
                             v93[2],
                             v94,
                             DWORD2(v94),
                             v95,
                             v96,
                             DWORD2(v96),
                             v97,
                             v98,
                             v99,
                             DWORD2(v99),
                             v100)) )
    {
      sub_5520(a2);
      sub_C000(v93, a2, *(unsigned int *)v84);
    }
    else
    {
      sub_5520(a2);
    }
    v12 = ++v81;
    if ( v81 < v82 )
    {
      v49 = a2[1];
      if ( v49 )
      {
        v50 = v49 + 1;
        v51 = v49 + 2;
        v52 = *a2;
        --v49;
        if ( a2[2] >= v51 )
        {
LABEL_81:
          a2[1] = v51;
          *(_BYTE *)(v52 + v50) = 0;
          v5 = (_WORD *)(*a2 + v49);
          *v5 = 2604;
          goto LABEL_82;
        }
      }
      else
      {
        v52 = *a2;
        v51 = 3;
        v50 = 2;
        if ( (unsigned __int64)a2[2] >= 3 )
          goto LABEL_81;
      }
      v79 = v50;
      v77 = v49;
      na = v51;
      v63 = qvector_reserve();
      *a2 = v63;
      v50 = v79;
      v52 = v63;
      v49 = v77;
      v51 = na;
      goto LABEL_81;
    }
LABEL_82:
    v53 = v72;
    do
    {
      v54 = *((_QWORD *)v53 - 3);
      v53 -= 24;
      if ( v54 )
      {
        *((_QWORD *)v53 + 1) = 0;
        qfree();
      }
    }
    while ( v53 != v107 );
    if ( v102 )
    {
      *(_QWORD *)&v103 = 0;
      qfree();
    }
    if ( v100 )
    {
      *(_QWORD *)&v101 = 0;
      qfree();
    }
    if ( v98 )
    {
      *(_QWORD *)&v99 = 0;
      qfree();
    }
    if ( v93[2] )
    {
      *(_QWORD *)&v94 = 0;
      qfree();
    }
  }
  while ( v81 < v82 );
  if ( dest )
  {
    *(_QWORD *)&v91 = 0;
    qfree();
  }
  if ( v87 )
  {
    *(_QWORD *)&v88 = 0;
    qfree();
  }
  if ( *(_QWORD *)&v84[4] )
LABEL_14:
    qfree();
  return v110 - __readfsqword(0x28u);
}
