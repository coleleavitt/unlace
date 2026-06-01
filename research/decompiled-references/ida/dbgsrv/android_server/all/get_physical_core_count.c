/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: get_physical_core_count
// Address: 0x00000000000BF414

//----- (00000000000BF414) ----------------------------------------------------
__int64 get_physical_core_count()
{
  FILE *v0; // x0
  FILE *v1; // x20
  void *v2; // x0
  __int128 v3; // kr00_16
  unsigned __int64 v4; // x22
  __int64 *align; // x0
  __int64 v6; // x8
  _QWORD *v7; // x9
  unsigned int v8; // w20
  unsigned __int64 v9; // x11
  unsigned __int64 v10; // x13
  __int128 *v11; // x12
  _OWORD *v12; // x13
  unsigned __int64 v13; // x14
  __int128 v14; // q0
  __int128 v15; // q1
  __int64 v16; // t1
  unsigned __int64 v17; // x23
  const char *v18; // x23
  char *v19; // x0
  __int64 v20; // x27
  signed __int64 v21; // x10
  char *v22; // x11
  int v23; // w11
  signed __int64 v24; // x11
  bool v25; // cc
  signed __int64 v26; // x10
  __int64 v27; // x8
  __int64 v28; // x28
  void *v29; // x0
  __int128 v30; // kr20_16
  __int64 *v31; // x0
  __int64 v32; // x8
  _QWORD *v33; // x9
  char *v34; // x8
  const char *v35; // x23
  int v36; // w0
  int v37; // w0
  unsigned __int64 v38; // x11
  unsigned __int64 v39; // x13
  __int128 *v40; // x12
  _OWORD *v41; // x13
  unsigned __int64 v42; // x14
  __int128 v43; // q0
  __int128 v44; // q1
  __int64 v45; // t1
  __int64 v46; // x20
  int v47; // w1
  int v48; // w3
  int v49; // w7
  unsigned __int64 v50; // x10
  unsigned int v51; // w11
  void *v52; // x0
  unsigned __int64 v53; // x12
  __int64 v54; // x14
  __int64 v55; // x15
  int v56; // w13
  int *v57; // x16
  int v58; // w0
  __int64 v59; // x6
  __int64 v60; // x2
  int v61; // w5
  int v62; // w4
  int v63; // w1
  int v64; // w3
  _BOOL4 v65; // w2
  int v66; // w0
  signed int v67; // w11
  void *v69; // [xsp+8h] [xbp-98h] BYREF
  __int64 v70; // [xsp+10h] [xbp-90h]
  __int64 v71; // [xsp+18h] [xbp-88h]
  pthread_mutex_t ptr; // [xsp+20h] [xbp-80h] BYREF

  ptr.__list.__prev = *(struct __pthread_internal_list **)(_ReadStatusReg(TPIDR_EL0) + 40);
  v0 = qfopen("/proc/cpuinfo", "r");
  if ( !v0 )
    return (unsigned int)-1;
  v1 = v0;
  memset(&ptr, 0, 24);
  v2 = qvector_reserve(&ptr, nullptr, 1u, 8u);
  v3 = *(_OWORD *)(&ptr.__align + 1);
  v4 = (unsigned __int64)v2;
  align = (__int64 *)ptr.__align;
  *(&ptr.__align + 2) = 0;
  v6 = *(&ptr.__align + 1) - 1;
  if ( *(&ptr.__align + 1) - 1 >= 0 )
  {
    if ( *(&ptr.__align + 1) >= 4uLL )
    {
      if ( v4 >= ptr.__align + 8 * *(&ptr.__align + 1)
        || (v7 = (_QWORD *)v4, v4 + 8 * *(&ptr.__align + 1) <= ptr.__align) )
      {
        v9 = *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        v10 = 8 * (*(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL);
        v11 = (__int128 *)(ptr.__align + 16);
        v6 -= *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        v7 = (_QWORD *)(v4 + v10);
        align = (__int64 *)(ptr.__align + v10);
        v12 = (_OWORD *)(v4 + 16);
        v13 = *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        do
        {
          v14 = *(v11 - 1);
          v15 = *v11;
          v11 += 2;
          v13 -= 4LL;
          *(v12 - 1) = v14;
          *v12 = v15;
          v12 += 2;
        }
        while ( v13 );
        if ( (_QWORD)v3 == v9 )
          goto LABEL_12;
      }
    }
    else
    {
      v7 = (_QWORD *)v4;
    }
    do
    {
      v16 = *align++;
      --v6;
      *v7++ = v16;
    }
    while ( v6 >= 0 );
LABEL_12:
    align = (__int64 *)ptr.__align;
  }
  qfree(align);
  ptr.__align = v4;
  *(&ptr.__align + 2) = *((_QWORD *)&v3 + 1);
  *(_QWORD *)(v4 + 8 * *(&ptr.__align + 1)) = -1;
  v69 = nullptr;
  v70 = 0;
  v71 = 0;
  ++*(&ptr.__align + 1);
  while ( (qgetline((__int64)&v69, v1) & 0x8000000000000000LL) == 0 )
  {
    if ( v70 )
      v18 = (const char *)v69;
    else
      v18 = &byte_F154B;
    v19 = strchr(v18, 58);
    if ( !v19 || (v20 = v19 - v18, v19 - v18 == -1) )
    {
      v28 = *(&ptr.__align + 2);
      v27 = *(&ptr.__align + 1);
      if ( *(&ptr.__align + 2) >= (unsigned __int64)(*(&ptr.__align + 1) + 1) )
      {
        v17 = ptr.__align;
        goto LABEL_14;
      }
      v29 = qvector_reserve(&ptr, nullptr, *(&ptr.__align + 1) + 1, 8u);
      v30 = *(_OWORD *)(&ptr.__align + 1);
      v17 = (unsigned __int64)v29;
      v31 = (__int64 *)ptr.__align;
      *(&ptr.__align + 2) = v28;
      v32 = *(&ptr.__align + 1) - 1;
      if ( *(&ptr.__align + 1) - 1 >= 0 )
      {
        if ( *(&ptr.__align + 1) < 4uLL )
        {
          v33 = (_QWORD *)v17;
          goto LABEL_53;
        }
        if ( v17 < ptr.__align + 8 * *(&ptr.__align + 1) )
        {
          v33 = (_QWORD *)v17;
          if ( v17 + 8 * *(&ptr.__align + 1) > ptr.__align )
            goto LABEL_98;
        }
        v38 = *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        v39 = 8 * (*(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL);
        v40 = (__int128 *)(ptr.__align + 16);
        v32 -= *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        v33 = (_QWORD *)(v17 + v39);
        v31 = (__int64 *)(ptr.__align + v39);
        v41 = (_OWORD *)(v17 + 16);
        v42 = *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFCLL;
        do
        {
          v43 = *(v40 - 1);
          v44 = *v40;
          v40 += 2;
          v42 -= 4LL;
          *(v41 - 1) = v43;
          *v41 = v44;
          v41 += 2;
        }
        while ( v42 );
        if ( (_QWORD)v30 != v38 )
        {
LABEL_98:
          do
          {
LABEL_53:
            v45 = *v31++;
            --v32;
            *v33++ = v45;
          }
          while ( v32 >= 0 );
        }
        v31 = (__int64 *)ptr.__align;
      }
      qfree(v31);
      v27 = *(&ptr.__align + 1);
      ptr.__align = v17;
      *(&ptr.__align + 2) = *((_QWORD *)&v30 + 1);
LABEL_14:
      *(_QWORD *)(v17 + 8 * v27) = -1;
      ++*(&ptr.__align + 1);
    }
    else
    {
      if ( v20 < 1 )
      {
        v26 = v19 - v18;
      }
      else
      {
        v21 = v19 - 1 - v18;
        while ( 1 )
        {
          v22 = v70 | v21 ? (char *)v69 + v21 : &byte_166A39;
          v23 = (unsigned __int8)*v22;
          if ( v23 != 32 && v23 != 9 )
            break;
          v24 = v21 - 1;
          v25 = v21-- + 1 <= 1;
          if ( v25 )
          {
            v26 = v24 + 1;
            goto LABEL_38;
          }
        }
        v26 = v21 + 1;
      }
LABEL_38:
      if ( v70 | v26 )
        v34 = (char *)v69 + v26;
      else
        v34 = &byte_166A39;
      *v34 = 0;
      if ( v70 )
        v35 = (const char *)v69;
      else
        v35 = &byte_F154B;
      if ( !strcmp(v35, "processor") )
      {
        v37 = atoi(&v35[v20 + 1]);
        *(_DWORD *)(ptr.__align + 8 * *(&ptr.__align + 1) - 8) = v37;
      }
      else if ( !strcmp(v35, "core id") )
      {
        v36 = atoi(&v35[v20 + 1]);
        *(_DWORD *)(ptr.__align + 8 * *(&ptr.__align + 1) - 4) = v36;
      }
    }
  }
  qfclose(v1);
  v46 = *(&ptr.__align + 1);
  if ( *(&ptr.__align + 1) && *(_DWORD *)(ptr.__align + 8 * (*(&ptr.__align + 1) - 1)) == -1 )
    v46 = --*(&ptr.__align + 1);
  sub_BFBDC(ptr.__align, (char *)(ptr.__align + 8 * v46));
  if ( *(&ptr.__align + 1) )
  {
    if ( *(&ptr.__align + 1) == 1 )
    {
      v50 = 0;
      v51 = 0;
      v8 = 0;
      goto LABEL_85;
    }
    v51 = 0;
    v50 = 0;
    if ( ptr.__owner - 2 < -1 || ptr.__owner < 1 )
    {
      v8 = 0;
    }
    else
    {
      v53 = (unsigned __int64)(*(&ptr.__align + 1) - 1) >> 31;
      v8 = 0;
      if ( !v53 )
      {
        v50 = *(&ptr.__align + 1) & 0xFFFFFFFFFFFFFFFELL;
        v54 = 0;
        v55 = 0;
        v56 = 0;
        v57 = (int *)(ptr.__align + 8);
        v51 = ptr.__owner & 0xFFFFFFFE;
        while ( 1 )
        {
          if ( (_DWORD)v55 )
            v47 = *(v57 - 2);
          v58 = *v57;
          v59 = (v54 - 0x100000000LL) >> 32;
          v60 = v54 >> 32;
          if ( (_DWORD)v55 )
            v48 = *(_DWORD *)(ptr.__align + 8 * v59);
          v61 = v55 != 0;
          v62 = *(_DWORD *)(ptr.__align + 8 * v60);
          v63 = v47 == v48;
          v64 = v63 & v61;
          if ( (v63 & v61) == 1 )
            v63 = *(v57 - 1);
          if ( v58 == v62 )
          {
            v61 = v57[1];
            if ( v64 )
              goto LABEL_78;
          }
          else if ( v64 )
          {
LABEL_78:
            v59 = ptr.__align + 8 * v59;
            v49 = *(_DWORD *)(v59 + 4);
          }
          if ( v58 == v62 )
            LODWORD(v59) = *(_DWORD *)(ptr.__align + 8 * v60 + 4);
          v65 = v58 != v62;
          v66 = v64 ^ 1;
          v47 = v63 != v49;
          v48 = v61 != v59;
          v55 += 2;
          LODWORD(v53) = v53 + (v47 | v66);
          v54 += 0x200000000LL;
          v56 += v48 | v65;
          v57 += 4;
          if ( v50 == v55 )
          {
            v8 = v56 + v53;
            if ( *(&ptr.__align + 1) == v50 )
              goto LABEL_91;
            break;
          }
        }
      }
    }
LABEL_85:
    v67 = v51 + 1;
    do
    {
      if ( v67 == 1
        || *(_DWORD *)(ptr.__align + 8 * v50) != *(_DWORD *)(ptr.__align + 8LL * (v67 - 2))
        || *(_DWORD *)(ptr.__align + 8 * v50 + 4) != *(_DWORD *)(ptr.__align + 8LL * (v67 - 2) + 4) )
      {
        ++v8;
      }
      v50 = v67;
      v25 = *(&ptr.__align + 1) > (unsigned __int64)v67++;
    }
    while ( v25 );
LABEL_91:
    v52 = v69;
    if ( !v69 )
      goto LABEL_93;
    goto LABEL_92;
  }
  v8 = 0;
  v52 = v69;
  if ( v69 )
  {
LABEL_92:
    v70 = 0;
    qfree(v52);
    v69 = nullptr;
    v71 = 0;
  }
LABEL_93:
  if ( ptr.__align )
  {
    *(&ptr.__align + 1) = 0;
    qfree((void *)ptr.__align);
    ptr.__align = 0;
    *(&ptr.__align + 2) = 0;
  }
  return v8;
}
// BF864: variable 'v47' is possibly undefined
// BF864: variable 'v48' is possibly undefined
// BF8B8: variable 'v49' is possibly undefined
// F154B: using guessed type char byte_F154B;
// 166A39: using guessed type char byte_166A39;
