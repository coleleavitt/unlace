/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42A74
// Address: 0x0000000000042A74

//----- (0000000000042A74) ----------------------------------------------------
__int64 __fastcall sub_42A74(unsigned __int64 a1, __int64 *a2)
{
  unsigned int v2; // w19
  pthread_mutex_t *v5; // x20
  const char *v6; // x22
  const char *v7; // x0
  const char *v8; // x22
  size_t v9; // x0
  void *align; // x1
  unsigned __int64 v11; // x24
  size_t v12; // x23
  int v13; // w0
  char *v14; // x2
  __int128 v15; // q1
  __int64 v16; // x9
  __int64 v17; // x0
  size_t v18; // x22
  __int64 v19; // x23
  void *v20; // x0
  const char *v21; // x2
  const char *v22; // x3
  __int64 v23; // x23
  const char *v24; // x22
  unsigned __int64 v25; // x24
  __int64 v26; // x25
  __int64 v27; // x27
  int v28; // w28
  const char *v29; // x0
  pthread_mutex_t *v30; // x0
  bool v31; // cc
  const char **v32; // x22
  pthread_mutex_t *v33; // x0
  double v34; // d0
  char *v35; // x3
  const char *v36; // x2
  void *v37; // x0
  char *v39; // x4
  char *v40; // x1
  double v41; // d0
  __int64 v42; // x21
  __int64 v43; // x0
  _QWORD *v44; // x8
  __int64 v45; // x21
  unsigned __int64 v46; // x22
  __int64 v47; // x23
  int v48; // w24
  __int64 v49; // x22
  const char *v50; // x23
  unsigned int v51; // w20
  __pthread_list_t *p_list; // x23
  _DWORD *v53; // x21
  int v54; // w24
  __int64 v55; // x26
  int v56; // w28
  unsigned __int64 v57; // x0
  __int64 v58; // x9
  unsigned __int64 v59; // x10
  __int64 v60; // x20
  __int64 v61; // x22
  unsigned int v62; // w21
  __int64 v63; // x27
  const char *v64; // x20
  __int64 v65; // x23
  __int64 v67; // x23
  _QWORD *v68; // x8
  unsigned __int64 v69; // x24
  __int64 v70; // x25
  int v71; // w26
  const char *v72; // x24
  unsigned int v73; // w25
  __int64 (__fastcall **v74)(); // [xsp+18h] [xbp-10A8h] BYREF
  int v75; // [xsp+20h] [xbp-10A0h]
  void *ptr[2]; // [xsp+28h] [xbp-1098h]
  __int64 v77; // [xsp+38h] [xbp-1088h]
  pthread_mutex_t dest; // [xsp+40h] [xbp-1080h] BYREF
  int v79; // [xsp+68h] [xbp-1058h]
  __int64 v80; // [xsp+1058h] [xbp-68h]

  v80 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( !*(_QWORD *)(a1 + 1568) )
  {
    memset(&dest, 0, 24);
    v5 = (pthread_mutex_t *)(a1 + 1936);
    if ( *(_QWORD *)(a1 + 1944) > 1u )
    {
      v7 = qbasename(v5->__align);
      v8 = v7;
      if ( v7 && (v9 = strlen(v7)) != 0 )
      {
        align = (void *)dest.__align;
        v11 = v9 + 1;
        v12 = v9;
        if ( *(&dest.__align + 2) < v9 + 1 )
        {
          align = qvector_reserve(&dest, (void *)dest.__align, v11, 1u);
          dest.__align = (__int64)align;
        }
        *(&dest.__align + 1) = v11;
        memmove(align, v8, v12);
        *(_BYTE *)(dest.__align + v12) = 0;
      }
      else
      {
        *(&dest.__align + 1) = 0;
      }
    }
    else
    {
      v75 = 2;
      v74 = &off_156688;
      ptr[1] = nullptr;
      v77 = 0;
      ptr[0] = nullptr;
      if ( *(_QWORD *)(a1 + 1968) )
        v6 = *(const char **)(a1 + 1960);
      else
        v6 = &byte_F154B;
      v13 = sub_5991C(v6, &v74, 0);
      if ( v13 != 2 )
      {
        if ( v13 )
        {
          sub_40F34(a1, "%s: could not read symbols on remote computer", v6);
        }
        else if ( !*(_BYTE *)(a1 + 1584) )
        {
          *(_BYTE *)(a1 + 1584) = 1;
          sub_40F34(
            a1,
            "AUTOHIDE DATABASE\n"
            "%s:\n"
            "Could not find the elf interpreter name,\n"
            "shared object events will not be reported",
            v6);
        }
        v74 = &off_156688;
        if ( ptr[0] )
        {
          ptr[1] = nullptr;
          qfree(ptr[0]);
          ptr[0] = nullptr;
          v77 = 0;
        }
        goto LABEL_55;
      }
      if ( ptr[1] )
        v14 = (char *)ptr[0];
      else
        v14 = &byte_F154B;
      qmake_full_path((unsigned __int64)&dest.__list, 4096, v14);
      v15 = *(_OWORD *)&dest.__lock;
      v16 = *(&dest.__align + 2);
      *(_OWORD *)&dest.__lock = *(_OWORD *)ptr;
      *(&dest.__align + 2) = v77;
      *(_OWORD *)ptr = v15;
      v77 = v16;
      v17 = __strlen_chk(&dest.__align + 3, 4096);
      v18 = v17;
      if ( v17 )
      {
        v19 = v17 + 1;
        if ( *(_QWORD *)(a1 + 1952) >= (unsigned __int64)(v17 + 1) )
        {
          v20 = (void *)v5->__align;
        }
        else
        {
          v20 = qvector_reserve(v5, (void *)v5->__align, v17 + 1, 1u);
          v5->__align = (__int64)v20;
        }
        *(_QWORD *)(a1 + 1944) = v19;
        memmove(v20, &dest.__align + 3, v18);
        *(_BYTE *)(*(_QWORD *)(a1 + 1936) + v18) = 0;
      }
      else
      {
        *(_QWORD *)(a1 + 1944) = 0;
      }
      v74 = &off_156688;
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        v77 = 0;
      }
    }
    if ( *(_QWORD *)(a1 + 1944) )
      v21 = (const char *)v5->__align;
    else
      v21 = &byte_F154B;
    if ( *(&dest.__align + 1) )
      v22 = (const char *)dest.__align;
    else
      v22 = &byte_F154B;
    sub_99D18(a1, "INTERP: %s, SONAME: %s\n", v21, v22);
    v23 = *(_QWORD *)(a1 + 1944);
    if ( v23 )
    {
      v24 = (const char *)v5->__align;
      v25 = a2[1];
      if ( !v25 )
        goto LABEL_51;
    }
    else
    {
      v24 = &byte_F154B;
      v25 = a2[1];
      if ( !v25 )
      {
LABEL_51:
        if ( v23 )
          v36 = (const char *)v5->__align;
        else
          v36 = &byte_F154B;
        sub_40F34(a1, "%s: could not find in process memory", v36);
        goto LABEL_55;
      }
    }
    v26 = *a2;
    v27 = 0;
    v28 = 1;
    while ( 1 )
    {
      v29 = *(_QWORD *)(v26 + 80 * v27 + 24) ? *(const char **)(v26 + 80 * v27 + 16) : &byte_F154B;
      v30 = (pthread_mutex_t *)strcmp(v29, v24);
      if ( !(_DWORD)v30 )
        break;
      v27 = v28;
      v31 = v25 > v28++;
      if ( !v31 )
        goto LABEL_51;
    }
    v32 = (const char **)(v26 + 80 * v27);
    if ( !v32 )
      goto LABEL_51;
    v33 = sub_4322C(v30, a2, (_QWORD *)(v26 + 80 * v27));
    if ( *(_QWORD *)(a1 + 1944) )
      v35 = (char *)v5->__align;
    else
      v35 = &byte_F154B;
    if ( *(&dest.__align + 1) )
      v39 = (char *)dest.__align;
    else
      v39 = &byte_F154B;
    sub_412AC(a1, *v32, (__int64)v33, v35, v39, v34);
    if ( *(&dest.__align + 1) )
      v40 = (char *)dest.__align;
    else
      v40 = &byte_F154B;
    sub_3A868((_QWORD *)a1, v40);
    v42 = *(_DWORD *)(a1 + 1600) - 1;
    while ( (v42 & 0x80000000) == 0 )
    {
      v43 = strcmp(*(const char **)(*(_QWORD *)(a1 + 1616) + 8 * v42--), "_r_debug");
      if ( !(_DWORD)v43 )
      {
        v44 = (_QWORD *)(a1 + 1592);
        v45 = v42 + 1;
        goto LABEL_75;
      }
    }
    v46 = *(_QWORD *)(a1 + 1648);
    if ( v46 )
    {
      v47 = *(_QWORD *)(a1 + 1664);
      v45 = 0;
      v48 = 1;
      while ( 1 )
      {
        v43 = strcmp(*(const char **)(v47 + 8 * v45), "_r_debug");
        if ( !(_DWORD)v43 )
          break;
        v45 = v48;
        v31 = v46 > v48++;
        if ( !v31 )
          goto LABEL_77;
      }
      v44 = (_QWORD *)(a1 + 1640);
LABEL_75:
      v49 = *(_QWORD *)(*v44 + 8 * v45);
      if ( v49 != -1 && !*(_BYTE *)(a1 + 1853) )
      {
        v51 = *(_DWORD *)(a1 + 1844);
        if ( v51 != -1 )
        {
          p_list = &dest.__list;
          v53 = (_DWORD *)__errno(v43);
          v54 = 0;
          do
          {
            v55 = v49 & 7;
            if ( 8 - (int)v55 <= 32 - v54 )
              v56 = 8 - v55;
            else
              v56 = 32 - v54;
            *v53 = 0;
            v57 = ptrace(PTRACE_PEEKTEXT, v51, v49 - v55, 0);
            if ( *v53 )
              goto LABEL_77;
            if ( v56 == 8 )
            {
              p_list->__prev = (struct __pthread_internal_list *)v57;
            }
            else if ( v56 >= 1 )
            {
              v58 = 0;
              v59 = v57 >> (8 * ((unsigned __int8)v49 & 7u));
              do
              {
                *((_BYTE *)&p_list->__prev + v58++) = v59;
                v59 >>= 8;
              }
              while ( v58 < v56 );
            }
            v54 += v56;
            p_list = (__pthread_list_t *)((char *)p_list + v56);
            v49 += v56;
          }
          while ( v54 < 32 );
          if ( v54 == 32 )
          {
            v60 = v79;
            if ( v79 )
            {
              v61 = v79 - (v79 & 1LL);
              if ( (v79 & 1LL) != 0 )
                v62 = 2;
              else
                v62 = 4;
              if ( (unsigned int)sub_3E500(a1, 0xFFFFFFFF, v79 - (v79 & 1LL), (unsigned __int64 *)(a1 + 1576), v62, 0) == v62
                && (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 312LL))(
                     a1,
                     0,
                     4,
                     v60 - (v60 & 1),
                     v62) )
              {
                *(_QWORD *)(a1 + 1568) = v61;
                *(_BYTE *)(a1 + 1580) = v62;
                v50 = *(const char **)(a1 + 1568);
                if ( v50 )
                  goto LABEL_120;
                goto LABEL_99;
              }
              sub_99D18(a1, "%a: could not set shlib bpt\n", v41);
            }
          }
        }
      }
    }
LABEL_77:
    v50 = *(const char **)(a1 + 1568);
    if ( v50 )
      goto LABEL_120;
LABEL_99:
    v63 = 0;
    while ( 2 )
    {
      v64 = (const char *)*(&off_156540 + v63);
      if ( v63 != 5 )
      {
        v65 = *(_DWORD *)(a1 + 1600) - 1;
        while ( (v65 & 0x80000000) == 0 )
        {
          if ( !strcmp(*(const char **)(*(_QWORD *)(a1 + 1616) + 8 * v65--), v64) )
          {
            v67 = v65 + 1;
            v68 = (_QWORD *)(a1 + 1592);
            goto LABEL_111;
          }
        }
        v69 = *(_QWORD *)(a1 + 1648);
        if ( v69 )
        {
          v70 = *(_QWORD *)(a1 + 1664);
          v67 = 0;
          v71 = 1;
          while ( strcmp(*(const char **)(v70 + 8 * v67), v64) )
          {
            v67 = v71;
            v31 = v69 > v71++;
            if ( !v31 )
              goto LABEL_118;
          }
          v68 = (_QWORD *)(a1 + 1640);
LABEL_111:
          v72 = *(const char **)(*v68 + 8 * v67);
          if ( (unsigned __int64)(v72 + 1) >= 2 )
          {
            v50 = (const char *)(*(_QWORD *)(*v68 + 8 * v67) - (*(_QWORD *)(*v68 + 8 * v67) & 1LL));
            if ( ((unsigned __int8)v72 & 1) != 0 )
              v73 = 2;
            else
              v73 = 4;
            if ( (unsigned int)sub_3E500(
                                 a1,
                                 0xFFFFFFFF,
                                 (__int64)&v72[-((unsigned __int8)v72 & 1)],
                                 (unsigned __int64 *)(a1 + 1576),
                                 v73,
                                 0) == v73
              && (*(unsigned int (__fastcall **)(unsigned __int64, _QWORD, __int64, const char *, _QWORD))(*(_QWORD *)a1 + 312LL))(
                   a1,
                   0,
                   4,
                   &v72[-((unsigned __int8)v72 & 1)],
                   v73) )
            {
              *(_QWORD *)(a1 + 1568) = v50;
              *(_BYTE *)(a1 + 1580) = v73;
              if ( v50 )
                goto LABEL_120;
LABEL_55:
              v2 = 0;
              v37 = (void *)dest.__align;
              if ( !dest.__align )
                return v2;
LABEL_56:
              *(&dest.__align + 1) = 0;
              qfree(v37);
              dest.__align = 0;
              *(&dest.__align + 2) = 0;
              return v2;
            }
            sub_99D18(a1, "%a: could not set shlib bpt (name=%s)\n", v41, v72);
          }
        }
LABEL_118:
        if ( (unsigned __int64)++v63 < 6 )
          continue;
      }
      break;
    }
    v50 = *(const char **)(a1 + 1568);
    if ( !v50 )
      goto LABEL_55;
LABEL_120:
    sub_99D18(a1, "%a: added shlib bpt (%s)\n", v41, v50);
    v2 = 1;
    v37 = (void *)dest.__align;
    if ( !dest.__align )
      return v2;
    goto LABEL_56;
  }
  return 1;
}
// 42E2C: variable 'v34' is possibly undefined
// 43134: variable 'v41' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 156540: using guessed type _UNKNOWN *off_156540;
// 156688: using guessed type __int64 (__fastcall *off_156688)();
