/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x00000000000AD638

//----- (00000000000AD638) ----------------------------------------------------
char *__fastcall parse_command_line(char **a1, pthread_mutex_t *a2, char *a3, unsigned int a4)
{
  unsigned __int64 StatusReg; // x25
  char *v6; // x20
  char *v9; // x0
  int v10; // w26
  char *v11; // x23
  unsigned __int8 v12; // w27
  int v13; // w24
  char *v14; // x19
  unsigned int v15; // w24
  int v16; // w26
  char *v17; // x0
  char *v18; // x0
  char *v19; // x8
  __int128 v20; // q0
  __int64 v21; // x10
  char *v22; // x22
  char *v23; // x8
  int v24; // w9
  unsigned __int64 v25; // x20
  char *v26; // x0
  int v27; // w29
  unsigned __int8 *v28; // x23
  char *v29; // x26
  int v30; // w0
  int v31; // t1
  __int128 v32; // kr00_16
  unsigned __int64 v33; // x9
  unsigned __int8 *v34; // x24
  int v35; // w26
  int v36; // t1
  void *v37; // x1
  char *v38; // x25
  unsigned __int8 *v39; // x23
  char *v40; // x23
  void *v41; // x0
  char *v42; // x0
  __int128 v43; // q0
  unsigned __int64 v44; // x9
  char *v45; // x24
  int v46; // w23
  int v47; // w0
  char *v48; // x8
  char *v49; // x0
  __int64 align; // x1
  __int64 v51; // x28
  char *v52; // x8
  __int64 v53; // x1
  __int64 v54; // x28
  unsigned __int64 v55; // x28
  int v56; // w8
  char *v57; // x8
  __int128 v58; // q0
  __int64 v59; // x10
  void *v60; // x0
  char *v61; // x8
  char **v62; // x20
  char *v63; // x0
  void **v64; // x8
  __int64 v65; // x10
  __int64 v66; // x11
  unsigned int v68; // [xsp+ACh] [xbp-E4h]
  char *v69; // [xsp+B0h] [xbp-E0h]
  int v70; // [xsp+BCh] [xbp-D4h]
  pthread_mutex_t v71; // [xsp+C0h] [xbp-D0h] BYREF
  unsigned __int64 v72; // [xsp+E8h] [xbp-A8h]
  void *v73[2]; // [xsp+F0h] [xbp-A0h] BYREF
  unsigned __int64 v74; // [xsp+100h] [xbp-90h]
  __int128 v75; // [xsp+110h] [xbp-80h]
  unsigned __int64 v76; // [xsp+120h] [xbp-70h]
  __int64 v77; // [xsp+128h] [xbp-68h]

  StatusReg = _ReadStatusReg(TPIDR_EL0);
  v77 = *(_QWORD *)(StatusReg + 40);
  if ( !a3 )
    return nullptr;
  v6 = a3;
  memset(&v71, 0, 24);
  v9 = skip_spaces(a3);
  LOBYTE(v10) = *v9;
  v11 = v9;
  if ( !*v9 )
    goto LABEL_105;
  v12 = 0;
  v13 = (a4 >> 2) & 1;
  do
  {
    v22 = v11 + 1;
    if ( (unsigned __int8)v10 == 39 || (unsigned __int8)v10 == 34 )
    {
      if ( v12 == (unsigned __int8)v10 && v12 )
      {
        if ( (*v22 & 0x80000000) == 0 )
        {
          v46 = (unsigned __int8)*v22;
          v47 = isspace(v46);
          if ( !v46 || v47 )
          {
            v48 = a1[1];
            if ( a1[2] >= v48 + 1 )
            {
              v49 = *a1;
            }
            else
            {
              v49 = (char *)qvector_reserve((pthread_mutex_t *)a1, *a1, (unsigned __int64)(v48 + 1), 0x18u);
              v48 = a1[1];
              *a1 = v49;
            }
            v57 = &v49[24 * (_QWORD)v48];
            *((_QWORD *)v57 + 1) = 0;
            *((_QWORD *)v57 + 2) = 0;
            *(_QWORD *)v57 = 0;
            LOBYTE(v13) = 0;
            ++a1[1];
            v58 = *(_OWORD *)v57;
            v59 = *((_QWORD *)v57 + 2);
            *(_OWORD *)v57 = *(_OWORD *)&v71.__lock;
            *((_QWORD *)v57 + 2) = *(&v71.__align + 2);
            *(_OWORD *)&v71.__lock = v58;
            *(&v71.__align + 2) = v59;
          }
        }
        v22 = skip_spaces(v22);
        v12 = 0;
        goto LABEL_104;
      }
      if ( !v12 )
      {
        v12 = v10;
        goto LABEL_104;
      }
    }
    else
    {
      if ( v12 )
        goto LABEL_69;
      if ( ((char)v10 & 0x80000000) == 0 )
      {
        if ( isspace((unsigned __int8)v10) )
        {
          v52 = a1[1];
          if ( a1[2] >= v52 + 1 )
          {
            v18 = *a1;
          }
          else
          {
            v18 = (char *)qvector_reserve((pthread_mutex_t *)a1, *a1, (unsigned __int64)(v52 + 1), 0x18u);
            v52 = a1[1];
            *a1 = v18;
          }
          v19 = &v18[24 * (_QWORD)v52];
          *((_QWORD *)v19 + 1) = 0;
          *((_QWORD *)v19 + 2) = 0;
          *(_QWORD *)v19 = 0;
          ++a1[1];
          v20 = *(_OWORD *)v19;
          v21 = *((_QWORD *)v19 + 2);
          *(_OWORD *)v19 = *(_OWORD *)&v71.__lock;
          *((_QWORD *)v19 + 2) = *(&v71.__align + 2);
          *(_OWORD *)&v71.__lock = v20;
          *(&v71.__align + 2) = v21;
          v22 = skip_spaces(v11 + 1);
          v12 = 0;
          LOBYTE(v13) = 0;
          goto LABEL_104;
        }
LABEL_69:
        if ( v12 != 39 && (unsigned __int8)v10 == 92 )
        {
          v10 = (unsigned __int8)v11[1];
          v22 = v11 + 2;
          if ( v10 != 34 && v10 != 92 )
          {
            align = v71.__align;
            if ( *(&v71.__align + 1) )
              v51 = *(&v71.__align + 1) - 1;
            else
              v51 = 0;
            if ( *(&v71.__align + 2) < (unsigned __int64)(v51 + 2) )
            {
              align = (__int64)qvector_reserve(&v71, (void *)v71.__align, v51 + 2, 1u);
              v71.__align = align;
            }
            *(&v71.__align + 1) = v51 + 2;
            *(_BYTE *)(align + v51) = 92;
            *(_BYTE *)(v71.__align + v51 + 1) = 0;
            if ( !v10 )
              break;
          }
        }
      }
    }
    v53 = v71.__align;
    if ( *(&v71.__align + 1) )
      v54 = *(&v71.__align + 1) - 1;
    else
      v54 = 0;
    if ( *(&v71.__align + 2) < (unsigned __int64)(v54 + 2) )
    {
      v53 = (__int64)qvector_reserve(&v71, (void *)v71.__align, v54 + 2, 1u);
      v71.__align = v53;
    }
    *(&v71.__align + 1) = v54 + 2;
    *(_BYTE *)(v53 + v54) = v10;
    *(_BYTE *)(v71.__align + v54 + 1) = 0;
    if ( v13 & 1 | (v12 != 0 || ((unsigned __int8)v10 | 2) != 62) )
      goto LABEL_104;
    LOBYTE(v13) = 0;
    v55 = *(&v71.__align + 1) ? *(&v71.__align + 1) - 1 : 0LL;
    if ( !a2 || v55 > 2 )
      goto LABEL_104;
    if ( *(&v71.__align + 1) < 2uLL )
    {
LABEL_96:
      LOBYTE(v13) = 0;
      goto LABEL_104;
    }
    v56 = *(unsigned __int8 *)(v71.__align + *(&v71.__align + 1) - 2);
    if ( v56 == 62 )
    {
      if ( (_DWORD)v55 == 2 )
      {
        if ( *(char *)v71.__align < 0 )
          goto LABEL_96;
        v15 = *(unsigned __int8 *)v71.__align - 48;
        if ( v15 >= 0xA )
          goto LABEL_96;
        v69 = v6;
        v23 = v22 + 1;
        v24 = (unsigned __int8)*v22;
      }
      else
      {
        if ( (_DWORD)v55 != 1 )
          goto LABEL_96;
        v69 = v6;
        v23 = v22 + 1;
        v24 = (unsigned __int8)*v22;
        v15 = 1;
      }
      if ( v24 == 62 )
        v16 = 6;
      else
        v16 = 2;
      if ( v24 == 62 )
        v17 = v23;
      else
        v17 = v22;
    }
    else
    {
      if ( (_DWORD)v55 != 1 || v56 != 60 )
        goto LABEL_96;
      v69 = v6;
      v15 = 0;
      v16 = 1;
      v17 = v22;
    }
    v25 = StatusReg;
    v73[0] = nullptr;
    v73[1] = nullptr;
    v74 = 0;
    v26 = skip_spaces(v17);
    v27 = (unsigned __int8)*v26;
    v28 = (unsigned __int8 *)v26;
    v68 = v15;
    v70 = v16;
    if ( !*v26 )
    {
      v29 = v26;
      goto LABEL_48;
    }
    if ( v27 == 39 || v27 == 34 )
    {
      while ( 1 )
      {
        v34 = v28 + 1;
        v35 = v28[1];
        if ( v35 == 92 )
        {
          v36 = v28[2];
          v39 = v28 + 2;
          LOBYTE(v35) = v36;
          v34 = v39;
          if ( !v36 )
            goto LABEL_45;
        }
        else
        {
          if ( !v28[1] )
          {
            v39 = v28 + 1;
LABEL_45:
            v73[1] = nullptr;
LABEL_47:
            v29 = (char *)v39;
            v70 |= 8u;
LABEL_48:
            StatusReg = v25;
            v6 = v69;
            goto LABEL_49;
          }
          if ( v35 == v27 )
          {
            v39 = v28 + 2;
            goto LABEL_47;
          }
        }
        v37 = v73[0];
        if ( v73[1] )
          v38 = (char *)v73[1] - 1;
        else
          v38 = nullptr;
        if ( v74 < (unsigned __int64)(v38 + 2) )
        {
          v37 = qvector_reserve((pthread_mutex_t *)v73, v73[0], (unsigned __int64)(v38 + 2), 1u);
          v73[0] = v37;
        }
        v73[1] = v38 + 2;
        v38[(_QWORD)v37] = v35;
        v28 = v34;
        *((_BYTE *)v73[0] + (unsigned __int64)v38 + 1) = 0;
      }
    }
    v29 = v26;
    do
    {
      if ( (char)v27 < 0 )
      {
        if ( ((unsigned __int8)v27 | 2) == 0x3E )
          break;
        goto LABEL_28;
      }
      v30 = isspace((unsigned __int8)v27);
      if ( ((unsigned __int8)v27 | 2) == 0x3E || v30 )
        break;
LABEL_28:
      v31 = (unsigned __int8)*++v29;
      LOBYTE(v27) = v31;
    }
    while ( v31 );
    if ( v29 <= (char *)v28 )
      goto LABEL_48;
    sub_4968C((pthread_mutex_t *)(&v71.__align + 3), v28, v29 - (char *)v28);
    v32 = *(_OWORD *)(&v71.__align + 3);
    v33 = v72;
    v6 = v69;
    *(_OWORD *)(&v71.__align + 3) = 0u;
    v75 = v32;
    v76 = v72;
    v72 = 0;
    if ( v73[0] )
    {
      v73[1] = nullptr;
      qfree(v73[0]);
      *(_OWORD *)v73 = v75;
      v74 = v76;
      if ( v71.__list.__prev )
      {
        v71.__list.__next = nullptr;
        qfree(v71.__list.__prev);
        v71.__list.__prev = nullptr;
        v72 = 0;
      }
    }
    else
    {
      *(_OWORD *)v73 = v32;
      v74 = v33;
    }
LABEL_49:
    if ( v73[1] >= (char *)&dword_0 + 2 )
    {
      v42 = sub_AF940(a2);
      v43 = *(_OWORD *)(v42 + 8);
      v44 = *((_QWORD *)v42 + 3);
      v45 = v42;
      *((void **)v42 + 1) = v73[0];
      *((void **)v42 + 2) = v73[1];
      *((_QWORD *)v42 + 3) = v74;
      *(_OWORD *)v73 = v43;
      v74 = v44;
      *((_DWORD *)v42 + 8) = v70;
      *(_DWORD *)v42 = v68;
      v40 = skip_spaces(v29);
      *((_DWORD *)v45 + 9) = (_DWORD)v22 - v55 - (_DWORD)v6;
      *((_DWORD *)v45 + 10) = (_DWORD)v40 - ((_DWORD)v22 - v55);
      v41 = v73[0];
      if ( v73[0] )
        goto LABEL_53;
    }
    else
    {
      v40 = nullptr;
      v41 = v73[0];
      if ( !v73[0] )
        goto LABEL_54;
LABEL_53:
      v73[1] = nullptr;
      qfree(v41);
      v73[0] = nullptr;
      v74 = 0;
    }
LABEL_54:
    LOBYTE(v13) = 0;
    if ( v40 )
    {
      v22 = v40;
      *(&v71.__align + 1) = 0;
    }
LABEL_104:
    LOBYTE(v10) = *v22;
    v11 = v22;
  }
  while ( *v22 );
LABEL_105:
  if ( *(&v71.__align + 1) > 1uLL )
  {
    v62 = a1 + 1;
    v61 = a1[1];
    if ( a1[2] >= v61 + 1 )
    {
      v63 = *a1;
    }
    else
    {
      v63 = (char *)qvector_reserve((pthread_mutex_t *)a1, *a1, (unsigned __int64)(v61 + 1), 0x18u);
      v61 = a1[1];
      *a1 = v63;
    }
    v64 = (void **)&v63[24 * (_QWORD)v61];
    v64[1] = nullptr;
    v64[2] = nullptr;
    *v64 = nullptr;
    ++*v62;
    v60 = *v64;
    v65 = (__int64)v64[1];
    v66 = (__int64)v64[2];
    *(_OWORD *)v64 = *(_OWORD *)&v71.__lock;
    v64[2] = (void *)*(&v71.__align + 2);
    v71.__align = (__int64)v60;
    *(&v71.__align + 1) = v65;
    *(&v71.__align + 2) = v66;
    v14 = *v62;
    if ( v60 )
      goto LABEL_112;
  }
  else
  {
    v60 = (void *)v71.__align;
    v14 = a1[1];
    if ( !v71.__align )
      return v14;
LABEL_112:
    *(&v71.__align + 1) = 0;
    qfree(v60);
    v71.__align = 0;
    *(&v71.__align + 2) = 0;
  }
  return v14;
}
// AD8D0: conditional instruction was optimized away because w29.4 is in (==22|==27)
// 0: using guessed type int dword_0;
