/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_694F8
// Address: 0x000694F8

//----- (000694F8) --------------------------------------------------------
int __fastcall sub_694F8(__int64 *a1, int a2, char a3)
{
  unsigned int v4; // r3
  int v5; // r7
  unsigned int *v7; // r4
  const char *v8; // r6
  unsigned int v9; // r10
  char *v10; // r8
  unsigned int v11; // r9
  char *v12; // r0
  unsigned int v13; // r2
  char *v14; // r7
  char *v15; // r5
  void **v16; // r4
  unsigned int v17; // r3
  void *v18; // r3
  int v19; // r8
  int v20; // r9
  void *v21; // r1
  unsigned int v22; // r3
  unsigned int v23; // r1
  unsigned int *v24; // r1
  unsigned int v25; // r3
  void **p_ptr; // r5
  void *v27; // r3
  const char *v28; // r6
  char *v29; // r0
  const void *v30; // r8
  unsigned int v31; // r6
  unsigned int v32; // r4
  unsigned int v33; // r3
  char *v34; // r2
  void *v35; // r3
  char *v36; // r2
  bool v37; // zf
  unsigned int v38; // r4
  char *v39; // r0
  unsigned int v40; // r6
  size_t v41; // r4
  __int64 v42; // kr00_8
  void *v43; // r3
  void *v44; // r0
  void *v45; // r0
  void *v46; // r0
  unsigned int v47; // r2
  unsigned int v48; // r9
  _DWORD *v49; // r10
  _DWORD *v50; // r1
  int v51; // r4
  char *v52; // r3
  int v53; // r5
  void *v54; // r0
  char *v55; // r3
  unsigned int v56; // r9
  int v57; // r5
  int v58; // r6
  void *v59; // r0
  unsigned int *v60; // r4
  unsigned int v61; // r2
  const char *v62; // r7
  unsigned int v63; // r5
  char *v64; // r0
  unsigned int v65; // r3
  unsigned int v66; // r2
  unsigned int v67; // r8
  size_t v68; // r8
  void **v69; // r5
  void *v70; // r3
  int v71; // r9
  size_t v72; // r10
  void *v73; // r1
  char *v74; // r4
  __int16 v75; // r0
  char *v76; // r3
  __int16 v77; // r7
  __int64 v78; // kr08_8
  int v79; // r3
  char *v80; // r3
  unsigned int v81; // r7
  int v82; // r4
  unsigned int v83; // r5
  void *v84; // r0
  char *v85; // r3
  unsigned int v86; // r4
  char *v87; // r0
  char *v88; // r0
  __int64 v89; // kr10_8
  int v90; // r2
  char *v91; // r2
  char *v92; // r1
  size_t n; // [sp+4h] [bp-48h]
  unsigned int v94; // [sp+8h] [bp-44h]
  unsigned int v95; // [sp+8h] [bp-44h]
  unsigned int v97; // [sp+Ch] [bp-40h]
  void **v98; // [sp+20h] [bp-2Ch] BYREF
  unsigned int v99; // [sp+24h] [bp-28h]
  unsigned int v100; // [sp+28h] [bp-24h]
  void *ptr; // [sp+2Ch] [bp-20h] BYREF
  unsigned int v102; // [sp+30h] [bp-1Ch]
  unsigned int v103; // [sp+34h] [bp-18h]
  char *endptr; // [sp+38h] [bp-14h] BYREF
  unsigned int v105; // [sp+3Ch] [bp-10h]
  unsigned int v106; // [sp+40h] [bp-Ch]

  if ( (a3 & 1) == 0 )
  {
    v44 = *(void **)a1;
    if ( v44 )
    {
      *((_DWORD *)a1 + 1) = 0;
      sub_77E08(v44);
      *(_DWORD *)a1 = 0;
      *((_DWORD *)a1 + 2) = 0;
    }
    v45 = *((void **)a1 + 4);
    *((_WORD *)a1 + 6) = 0;
    if ( v45 )
    {
      *((_DWORD *)a1 + 5) = 0;
      sub_77E08(v45);
      *((_DWORD *)a1 + 4) = 0;
      *((_DWORD *)a1 + 6) = 0;
    }
    v46 = *((void **)a1 + 7);
    if ( v46 )
    {
      *((_DWORD *)a1 + 8) = 0;
      sub_77E08(v46);
      *((_DWORD *)a1 + 7) = 0;
      *((_DWORD *)a1 + 9) = 0;
    }
  }
  v4 = *(_DWORD *)(a2 + 4);
  if ( v4 <= 1 )
    return 0;
  v7 = nullptr;
  v98 = nullptr;
  v99 = 0;
  v100 = 0;
  v8 = *(const char **)a2;
  v9 = *(_DWORD *)a2 + v4 - 1;
  if ( v9 <= *(_DWORD *)a2 )
  {
    if ( v8[v4 - 2] != 64 )
      goto LABEL_28;
    v22 = 0;
  }
  else
  {
    v10 = nullptr;
    v11 = 0;
    while ( 1 )
    {
      v12 = strchr(v8, 64);
      v13 = v11 + 1;
      if ( v12 )
        v14 = v12;
      else
        v14 = (char *)v9;
      v15 = v12;
      if ( v13 > (unsigned int)v7 )
      {
        v10 = (char *)sub_77EB0((int)&v98, v10, v13, 0xCu);
        v11 = v99;
        v98 = (void **)v10;
      }
      v16 = (void **)&v10[12 * v11];
      *v16 = nullptr;
      v16[1] = nullptr;
      v17 = v99;
      v16[2] = nullptr;
      v99 = v17 + 1;
      v18 = v16[1];
      v19 = (int)v18 - 1;
      v20 = (int)v18 + v14 - v8 - 1;
      if ( !v18 )
      {
        v20 = v14 - v8;
        v19 = 0;
      }
      v21 = *v16;
      v94 = v20 + 1;
      if ( v20 != -1 )
      {
        v21 = sub_77EB0((int)v16, v21, v94, 1u);
        *v16 = v21;
      }
      v16[1] = (void *)v94;
      *((_BYTE *)v21 + v20) = 0;
      memmove((char *)*v16 + v19, v8, v14 - v8);
      if ( !v15 )
        break;
      v11 = v99;
      v8 = v15 + 1;
      v10 = (char *)v98;
      v22 = v99;
      v7 = (unsigned int *)v98;
      if ( v9 <= (unsigned int)(v15 + 1) )
        goto LABEL_21;
      v7 = (unsigned int *)v100;
    }
    v7 = (unsigned int *)v98;
    v22 = v99;
LABEL_21:
    v23 = *(_DWORD *)(a2 + 4);
    if ( v23 < 2 || *(_BYTE *)(*(_DWORD *)a2 + v23 - 2) != 64 )
      goto LABEL_26;
  }
  if ( v22 + 1 > v100 )
  {
    v7 = (unsigned int *)sub_77EB0((int)&v98, v7, v22 + 1, 0xCu);
    v22 = v99;
    v98 = (void **)v7;
  }
  v24 = &v7[3 * v22];
  *v24 = 0;
  v24[1] = 0;
  v7 = (unsigned int *)v98;
  v25 = v99;
  v24[2] = 0;
  v22 = v25 + 1;
  v99 = v22;
LABEL_26:
  if ( v22 > 2 )
    goto LABEL_74;
  if ( v22 != 2 )
  {
LABEL_28:
    p_ptr = (void **)v7;
    goto LABEL_29;
  }
  if ( v7[1] <= 1 )
  {
LABEL_74:
    v5 = 0;
    goto LABEL_75;
  }
  endptr = nullptr;
  v105 = 0;
  v106 = 0;
  v61 = v7[1];
  if ( !v61 )
  {
    v49 = nullptr;
    goto LABEL_115;
  }
  v62 = (const char *)*v7;
  v97 = *v7 + v61 - 1;
  if ( *v7 >= v97 )
  {
    if ( v61 == 1 || v62[v61 - 2] != 58 )
    {
      v49 = nullptr;
      goto LABEL_115;
    }
    v48 = 0;
    v49 = nullptr;
    goto LABEL_62;
  }
  v49 = nullptr;
  v63 = 0;
  v48 = 0;
  while ( 1 )
  {
    v64 = strchr(v62, 58);
    v65 = v97;
    v66 = v48 + 1;
    n = (size_t)v64;
    if ( v64 )
      v65 = (unsigned int)v64;
    v67 = v65;
    if ( v66 > v63 )
    {
      v49 = sub_77EB0((int)&endptr, v49, v66, 0xCu);
      v48 = v105;
      endptr = (char *)v49;
    }
    v68 = v67 - (_DWORD)v62;
    v69 = (void **)&v49[3 * v48];
    *v69 = nullptr;
    v69[1] = nullptr;
    v69[2] = nullptr;
    ++v105;
    v70 = v69[1];
    v71 = (int)v70 - 1;
    v72 = (size_t)v70 + v68 - 1;
    if ( !v70 )
    {
      v71 = 0;
      v72 = v68;
    }
    v73 = *v69;
    v95 = v72 + 1;
    if ( v72 != -1 )
    {
      v73 = sub_77EB0((int)v69, v73, v95, 1u);
      *v69 = v73;
    }
    v69[1] = (void *)v95;
    *((_BYTE *)v73 + v72) = 0;
    memmove((char *)*v69 + v71, v62, v68);
    if ( !n )
    {
      v47 = v7[1];
      v49 = endptr;
      v48 = v105;
      goto LABEL_60;
    }
    v49 = endptr;
    v48 = v105;
    v62 = (const char *)(n + 1);
    if ( v97 <= n + 1 )
      break;
    v63 = v106;
  }
  v47 = v7[1];
LABEL_60:
  if ( v47 >= 2 && *(_BYTE *)(*v7 + v47 - 2) == 58 )
  {
LABEL_62:
    if ( v48 + 1 > v106 )
    {
      v49 = sub_77EB0((int)&endptr, v49, v48 + 1, 0xCu);
      v48 = v105;
      endptr = (char *)v49;
    }
    v50 = &v49[3 * v48];
    *v50 = 0;
    v50[1] = 0;
    v50[2] = 0;
    v49 = endptr;
    v48 = ++v105;
  }
  if ( v48 > 2 )
  {
    if ( v49 )
    {
      v51 = 0;
      v52 = (char *)v49;
      v53 = 0;
      while ( 1 )
      {
        v54 = *(void **)&v52[v51];
        v55 = &v52[v51];
        if ( v54 )
        {
          *((_DWORD *)v55 + 1) = 0;
          sub_77E08(v54);
        }
        ++v53;
        v51 += 12;
        if ( v53 == v48 )
          break;
        v52 = endptr;
      }
      v105 = 0;
      sub_77E08(endptr);
    }
    v7 = (unsigned int *)v98;
    goto LABEL_74;
  }
LABEL_115:
  v78 = a1[2];
  *((_DWORD *)a1 + 4) = *v49;
  v79 = *((_DWORD *)a1 + 6);
  *((_DWORD *)a1 + 5) = v49[1];
  *((_DWORD *)a1 + 6) = v49[2];
  *(_QWORD *)v49 = v78;
  v49[2] = v79;
  v80 = endptr;
  v81 = v105;
  if ( v105 == 2 )
  {
    v89 = *(__int64 *)((char *)a1 + 28);
    v90 = *((_DWORD *)a1 + 9);
    *((_DWORD *)a1 + 7) = *((_DWORD *)endptr + 3);
    *((_DWORD *)a1 + 8) = *((_DWORD *)v80 + 4);
    *((_DWORD *)a1 + 9) = *((_DWORD *)v80 + 5);
    *(_QWORD *)(v80 + 12) = v89;
    *((_DWORD *)v80 + 5) = v90;
    if ( !v80 )
      goto LABEL_123;
    goto LABEL_118;
  }
  if ( endptr )
  {
    if ( !v105 )
    {
LABEL_122:
      v105 = 0;
      sub_77E08(v80);
      goto LABEL_123;
    }
LABEL_118:
    v82 = 0;
    v83 = 0;
    do
    {
      v84 = *(void **)&v80[v82];
      v85 = &v80[v82];
      if ( v84 )
      {
        *((_DWORD *)v85 + 1) = 0;
        sub_77E08(v84);
      }
      ++v83;
      v82 += 12;
      v80 = endptr;
    }
    while ( v81 > v83 );
    goto LABEL_122;
  }
LABEL_123:
  v7 = (unsigned int *)v98;
  p_ptr = v98 + 3;
LABEL_29:
  v5 = 0;
  v102 = 0;
  v103 = 0;
  v27 = p_ptr[1];
  ptr = nullptr;
  if ( !v27 )
  {
    v28 = (const char *)&dword_8DA5C;
    goto LABEL_98;
  }
  v28 = (const char *)*p_ptr;
  if ( *(_BYTE *)*p_ptr != 91 )
  {
LABEL_98:
    if ( !strncasecmp(v28, "::ffff:", 7u) && strchr(v28, 46) )
      v28 += 7;
    v39 = strchr(v28, 58);
    if ( !v39 )
      goto LABEL_52;
    goto LABEL_102;
  }
  v29 = strchr((const char *)*p_ptr, 93);
  if ( v29 )
  {
    v30 = v28 + 1;
    if ( v28 + 1 != v29 )
    {
      v31 = v29 - v28;
      endptr = nullptr;
      v105 = 0;
      v32 = v31 - 1;
      v106 = 0;
      if ( v31 == 1 )
      {
        v33 = 0;
        v34 = nullptr;
      }
      else
      {
        v88 = (char *)v31;
        if ( v31 )
        {
          v88 = (char *)sub_77EB0((int)&endptr, nullptr, v31, 1u);
          endptr = v88;
        }
        v105 = v31;
        memmove(v88, v30, v31 - 1);
        endptr[v32] = 0;
        v33 = v106;
        v34 = endptr;
        v32 = v105;
      }
      v102 = v32;
      v103 = v33;
      v35 = p_ptr[1];
      ptr = v34;
      if ( !v35 )
        goto LABEL_50;
      v36 = (char *)*p_ptr;
      v37 = v35 == (void *)1;
      if ( v35 != (void *)1 )
        v37 = v31 == 0;
      v38 = (unsigned int)v35 - 1;
      v39 = (char *)*p_ptr;
      if ( !v37 )
      {
        if ( v31 < v38 )
        {
          v41 = v38 - v31;
          v92 = &v36[v31];
          v40 = v41 + 1;
          memmove(v39, v92, v41);
          v36 = (char *)*p_ptr;
        }
        else
        {
          v40 = 1;
          v41 = 0;
        }
        if ( v40 > (unsigned int)p_ptr[2] )
        {
          v36 = (char *)sub_77EB0((int)p_ptr, v36, v40, 1u);
          *p_ptr = v36;
        }
        p_ptr[1] = (void *)v40;
        v36[v41] = 0;
        if ( !p_ptr[1] )
          goto LABEL_49;
        v39 = (char *)*p_ptr;
      }
      if ( *v39 != 58 || !v39 )
      {
LABEL_49:
        v32 = v102;
LABEL_50:
        if ( v32 > 1 )
          p_ptr = &ptr;
LABEL_52:
        v5 = 1;
        v42 = *a1;
        *(_DWORD *)a1 = *p_ptr;
        v43 = *((void **)a1 + 2);
        *((_DWORD *)a1 + 1) = p_ptr[1];
        *((_DWORD *)a1 + 2) = p_ptr[2];
        *(_QWORD *)p_ptr = v42;
        p_ptr[2] = v43;
LABEL_108:
        if ( ptr )
          sub_77E08(ptr);
        v7 = (unsigned int *)v98;
        goto LABEL_75;
      }
      v28 = v39;
LABEL_102:
      v74 = v39 + 1;
      v75 = strtoul(v39 + 1, &endptr, 10);
      v76 = endptr;
      v77 = v75;
      if ( endptr == v74 )
        goto LABEL_107;
      while ( *v76 == 32 )
        endptr = ++v76;
      if ( *v76 )
      {
LABEL_107:
        v5 = 0;
        goto LABEL_108;
      }
      v86 = v74 - v28;
      v87 = (char *)*p_ptr;
      if ( v86 == 1 )
      {
        if ( v87 )
        {
          p_ptr[1] = nullptr;
          sub_77E08(v87);
          *p_ptr = nullptr;
          p_ptr[2] = nullptr;
        }
      }
      else
      {
        v91 = (char *)p_ptr[1];
        if ( v86 > (unsigned int)v91 )
        {
          if ( v86 > (unsigned int)p_ptr[2] )
          {
            v87 = (char *)sub_77EB0((int)p_ptr, *p_ptr, v86, 1u);
            v91 = (char *)p_ptr[1];
            *p_ptr = v87;
          }
          memset(&v91[(_DWORD)v87], 0, v86 - (_DWORD)v91);
          p_ptr[1] = (void *)v86;
          v87 = (char *)*p_ptr;
        }
        else if ( v86 < (unsigned int)v91 )
        {
          p_ptr[1] = (void *)v86;
        }
        v87[v86 - 1] = 0;
      }
      *((_WORD *)a1 + 6) = v77;
      goto LABEL_49;
    }
  }
  else
  {
    v5 = 0;
  }
LABEL_75:
  if ( v7 )
  {
    v56 = v99;
    if ( v99 )
    {
      v57 = 0;
      v58 = 0;
      do
      {
        v59 = (void *)v7[v57];
        v60 = &v7[v57];
        if ( v59 )
        {
          v60[1] = 0;
          sub_77E08(v59);
        }
        ++v58;
        v57 += 3;
        v7 = (unsigned int *)v98;
      }
      while ( v56 != v58 );
    }
    v99 = 0;
    sub_77E08(v7);
  }
  return v5;
}
// 8DA5C: using guessed type int dword_8DA5C;
