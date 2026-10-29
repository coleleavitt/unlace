/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_945AC
// Address: 0x00000000000945AC

//----- (00000000000945AC) ----------------------------------------------------
__int64 __fastcall sub_945AC(__int64 a1)
{
  __int64 v1; // x8
  char *v3; // x27
  const char *v4; // x21
  char v5; // w25
  _QWORD *v7; // x0
  void *v8; // x24
  unsigned int v9; // w25
  __int64 v10; // x19
  _QWORD *v11; // x0
  _QWORD *align; // x24
  _QWORD *v13; // x21
  const char **v14; // x29
  unsigned __int64 v15; // x28
  int *v16; // x21
  size_t v17; // x0
  __int64 v18; // x8
  size_t v19; // x8
  int v20; // w23
  const char *v21; // x1
  char *v22; // x9
  __int64 v23; // x0
  char *v24; // x26
  __int64 v25; // x27
  char *v26; // x23
  __int64 *v27; // x23
  __int64 v28; // t1
  unsigned __int64 v29; // x9
  unsigned __int64 v30; // x28
  __int64 v31; // x19
  const char *v32; // x8
  __int64 v33; // x9
  void *v34; // x1
  __int64 v35; // x28
  char *v36; // x9
  __int64 v37; // x0
  size_t v38; // x0
  __int64 v39; // x8
  size_t v40; // x8
  const char *v41; // x8
  const char *v42; // x0
  const char *v43; // x0
  unsigned int v44; // w24
  const char *v45; // x2
  unsigned __int64 v46; // x0
  void *v47; // x0
  unsigned __int64 v48; // x8
  __int64 v49; // x0
  __int64 v50; // x19
  unsigned int v51; // w21
  __int64 v52; // x9
  __int128 v53; // kr00_16
  _BYTE *v54; // x0
  __int64 v55; // x19
  unsigned __int64 v56; // x29
  int v57; // w24
  void *v58; // x0
  __int64 *v59; // x8
  __int128 v60; // q0
  __int64 v61; // x10
  bool v62; // w8
  bool v63; // w10
  char *v64; // x0
  unsigned __int64 v65; // x19
  __int64 v66; // x20
  unsigned __int64 v67; // x21
  void *v68; // x8
  char *v69; // x23
  __int64 v70; // [xsp+8h] [xbp-358h]
  void *v71; // [xsp+18h] [xbp-348h]
  pthread_mutex_t *v72; // [xsp+28h] [xbp-338h]
  char v73; // [xsp+34h] [xbp-32Ch]
  pthread_mutex_t *v74; // [xsp+38h] [xbp-328h]
  void *v75; // [xsp+48h] [xbp-318h] BYREF
  unsigned __int64 v76; // [xsp+50h] [xbp-310h]
  __int64 v77; // [xsp+58h] [xbp-308h]
  pthread_mutex_t ptr[2]; // [xsp+60h] [xbp-300h] BYREF
  __int64 v79[36]; // [xsp+C8h] [xbp-298h] BYREF
  __int64 v80; // [xsp+250h] [xbp-110h]
  __int64 v81; // [xsp+258h] [xbp-108h]
  __int64 v82; // [xsp+260h] [xbp-100h]
  char v83; // [xsp+274h] [xbp-ECh]
  char v84; // [xsp+275h] [xbp-EBh]
  unsigned int v85; // [xsp+2B0h] [xbp-B0h]
  char v86; // [xsp+2E0h] [xbp-80h]
  char v87[4]; // [xsp+2E8h] [xbp-78h] BYREF
  _DWORD v88[5]; // [xsp+2ECh] [xbp-74h] BYREF
  int8x16x2_t v89; // 0:q0.32

  *(_QWORD *)&v88[3] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v1 = *(_QWORD *)a1;
  if ( !*(_QWORD *)a1 || *(_DWORD *)(v1 + 8) != 1 )
  {
    sub_39FA0((__int64)"Input source is not local file.\n");
LABEL_6:
    v5 = 0;
    return v5 & 1;
  }
  v3 = &byte_F154B;
  if ( *(_QWORD *)(v1 + 24) )
    v4 = *(const char **)(v1 + 16);
  else
    v4 = &byte_F154B;
  v7 = open_linput(v4, 0);
  if ( !v7 )
  {
    sub_39FA0((__int64)"Cannot open file: %s.\n", v4);
    goto LABEL_6;
  }
  v8 = v7;
  sub_4ECD4((__int64)&ptr[0].__list, (__int64)v7, 0, v89);
  sub_4B3A8((__int64)&ptr[0].__list, nullptr);
  if ( !sub_4B3EC((__int64)&ptr[0].__list) || (sub_4B520((_WORD *)&ptr[0].__align + 12) & 1) == 0 )
  {
    sub_39FA0((__int64)"Failed to read ELF ident/header from: %s\n", v4);
LABEL_99:
    v5 = 0;
    goto LABEL_100;
  }
  if ( (sub_4F984((__int64)&ptr[0].__list) & 1) == 0 )
  {
    sub_39FA0((__int64)"Failed to read ELF sections from: %s\n", v4);
    goto LABEL_99;
  }
  v75 = nullptr;
  v76 = 0;
  v77 = 0;
  if ( v85 <= 1 )
  {
    v5 = 0;
    v62 = 1;
    goto LABEL_104;
  }
  v74 = (pthread_mutex_t *)(a1 + 104);
  v72 = (pthread_mutex_t *)(a1 + 192);
  v71 = v8;
  v9 = 1;
  v73 = 0;
  do
  {
    v10 = *(_QWORD *)(a1 + 112);
    if ( *(_QWORD *)(a1 + 120) >= (unsigned __int64)(v10 + 1) )
    {
      align = (_QWORD *)v74->__align;
    }
    else
    {
      v11 = qvector_reserve(v74, (void *)v74->__align, v10 + 1, 0x78u);
      v10 = *(_QWORD *)(a1 + 112);
      align = v11;
      *(_QWORD *)(a1 + 104) = v11;
    }
    v13 = &align[15 * v10];
    v13[3] = 0;
    v13[4] = 0;
    v13[13] = 0;
    v13[14] = 0;
    v13[11] = 0;
    v13[12] = 0;
    v13[9] = 0;
    v13[10] = 0;
    v13[7] = 0;
    v13[8] = 0;
    v13[5] = 0;
    v13[6] = 0;
    v13[2] = 0;
    v14 = (const char **)(v13 + 2);
    *v13 = 0;
    v13[1] = 0;
    ++*(_QWORD *)(a1 + 112);
    v15 = sub_4E97C((unsigned __int64)v79, v9);
    *v13 = *(_QWORD *)(v15 + 16);
    *((_DWORD *)v13 + 2) = *(_QWORD *)(v15 + 32);
    v16 = (int *)(v13 + 1);
    v16[8] = *(_DWORD *)(v15 + 40);
    v16[9] = *(_QWORD *)(v15 + 56);
    *((_QWORD *)v16 + 5) = *(_QWORD *)(v15 + 24);
    *((_QWORD *)v16 + 6) = *(unsigned int *)(v15 + 4);
    *((_QWORD *)v16 + 7) = *(unsigned int *)(v15 + 44);
    sub_502E4(v79, (__int64)v14, (unsigned int *)v15);
    v17 = __strlen_chk(".zdebug_", 9);
    if ( !v17
      || ((v18 = align[15 * v10 + 3]) != 0 ? (v19 = v18 - 1) : (v19 = 0), v19 >= v17 && !strncmp(*v14, ".zdebug_", v17)) )
    {
      v20 = 1;
    }
    else
    {
      if ( (*(_BYTE *)(v15 + 9) & 8) == 0 )
        goto LABEL_52;
      v20 = 0;
    }
    if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
    {
      if ( align[15 * v10 + 3] )
        v21 = *v14;
      else
        v21 = v3;
      sub_39FA0((__int64)"Section '%s' is compressed.\n", v21);
    }
    v22 = (char *)&align[15 * v10];
    *((_QWORD *)v22 + 9) = *(_QWORD *)(v15 + 8) | 0x800LL;
    *((_QWORD *)v22 + 11) = (unsigned int)*v16;
    memset(ptr, 0, 24);
    v23 = qlseek(v80, 0, 1);
    v24 = v3;
    v25 = v23 - v81;
    if ( qlseek(v80, *(_QWORD *)(v15 + 24) + v81, 0) == -1 )
    {
LABEL_46:
      sub_39FA0((__int64)"Truncated file.\n");
      qlseek(v80, v81 + v25, 0);
      v31 = align[15 * v10 + 3];
      v3 = v24;
      if ( v31 )
        goto LABEL_47;
      goto LABEL_64;
    }
    if ( v20 )
    {
      if ( (unsigned int)sub_4EF58((__int64)&ptr[0].__list, v87, 0xCu, 0) )
        goto LABEL_46;
      if ( !v86 )
        memrev((char *)v88, 8);
      ptr[0].__lock = 1;
      v26 = (char *)&align[15 * v10];
      *(&ptr[0].__align + 1) = *(_QWORD *)v88;
      *(&ptr[0].__align + 2) = 1;
      v28 = *((_QWORD *)v26 + 3);
      v27 = (__int64 *)(v26 + 24);
      v29 = v28 - 1;
      if ( v28 )
        v30 = v29;
      else
        v30 = 0;
      if ( v30 >= 2 )
      {
        if ( v30 == 2 )
        {
          v33 = 1;
        }
        else
        {
          memmove((void *)(*v14 + 1), *v14 + 2, v30 - 2);
          v33 = v30 - 1;
        }
        v34 = (void *)*v14;
        v35 = v33 + 1;
        if ( align[15 * v10 + 4] < (unsigned __int64)(v33 + 1) )
        {
          v70 = v33;
          v34 = qvector_reserve((pthread_mutex_t *)v14, v34, v33 + 1, 1u);
          v33 = v70;
          *v14 = (const char *)v34;
        }
        *v27 = v35;
        *((_BYTE *)v34 + v33) = 0;
      }
    }
    else if ( !sub_4F844((__int64)&ptr[0].__list, (__int64)ptr) )
    {
      goto LABEL_46;
    }
    v36 = (char *)&align[15 * v10];
    *((_QWORD *)v36 + 10) = (unsigned int)ptr[0].__lock;
    *((_QWORD *)v36 + 12) = *(&ptr[0].__align + 2);
    v37 = qlseek(v80, 0, 1);
    align[15 * v10 + 13] = v37 - v81;
    *v16 = ptr[0].__owner;
    qlseek(v80, v81 + v25, 0);
    v3 = v24;
LABEL_52:
    v38 = __strlen_chk(".rel.debug_", 12);
    if ( !v38
      || ((v39 = align[15 * v10 + 3]) != 0 ? (v40 = v39 - 1) : (v40 = 0),
          v40 >= v38 && !strncmp(*v14, ".rel.debug_", v38)) )
    {
      sub_95A90((__int128 *)v14, ".rel.debug_", ".rela.debug_");
      if ( *((_QWORD *)v16 + 6) == 9 )
        *((_QWORD *)v16 + 6) = 4;
    }
    v41 = (const char *)align[15 * v10 + 2];
    v31 = align[15 * v10 + 3];
    if ( v31 )
      v42 = v41;
    else
      v42 = v3;
    v73 |= strncmp(v42, ".debug_", 7u) == 0;
    if ( v31 )
    {
LABEL_47:
      v32 = *v14;
      goto LABEL_65;
    }
LABEL_64:
    v32 = v3;
LABEL_65:
    if ( !strcmp(v32, ".note.iar") )
    {
      v44 = *v16;
      if ( v31 )
        v45 = *v14;
      else
        v45 = v3;
      sub_39FA0((__int64)"Spotted %u bytes-long section: '%s'.\n", v44, v45);
      v49 = qlseek(v80, 0, 1);
      v50 = v49 - v81;
      if ( qlseek(v80, *((_QWORD *)v16 + 5) + v81, 0) == -1 )
      {
        sub_39FA0((__int64)"Truncated file.\n");
        qlseek(v80, v81 + v50, 0);
        goto LABEL_96;
      }
      v51 = v44 / 0x14;
      if ( v44 % 0x14 )
      {
        sub_39FA0((__int64)"Section is odd-sized. Ignoring.\n");
LABEL_95:
        qlseek(v80, v81 + v50, 0);
        goto LABEL_96;
      }
      if ( v44 < 0x14 )
        goto LABEL_95;
      v57 = 0;
      while ( 1 )
      {
        memset(ptr, 0, 24);
        ptr[0].__align = (__int64)qvector_reserve(ptr, nullptr, 0x14u, 1u);
        memset((void *)(ptr[0].__align + *(&ptr[0].__align + 1)), 0, 20 - *(&ptr[0].__align + 1));
        *(&ptr[0].__align + 1) = 20;
        if ( (unsigned int)sub_4EF58((__int64)&ptr[0].__list, (void *)ptr[0].__align, 0x14u, 1) )
          break;
        sub_95C64((__int64)&v75, v76 + 1);
        v59 = (__int64 *)((char *)v75 + 24 * v76);
        v59[1] = 0;
        v59[2] = 0;
        *v59 = 0;
        ++v76;
        v60 = *(_OWORD *)v59;
        *v59 = ptr[0].__align;
        v61 = v59[2];
        v58 = (void *)v60;
        *(_OWORD *)(v59 + 1) = *(_OWORD *)(&ptr[0].__align + 1);
        *(_OWORD *)&ptr[0].__lock = v60;
        *(&ptr[0].__align + 2) = v61;
        if ( (_QWORD)v60 )
          goto LABEL_93;
LABEL_94:
        if ( ++v57 >= v51 )
          goto LABEL_95;
      }
      v58 = (void *)ptr[0].__align;
      if ( !ptr[0].__align )
        goto LABEL_94;
LABEL_93:
      *(&ptr[0].__align + 1) = 0;
      qfree(v58);
      ptr[0].__align = 0;
      *(&ptr[0].__align + 2) = 0;
      goto LABEL_94;
    }
    if ( v31 )
      v43 = *v14;
    else
      v43 = v3;
    if ( !strcmp(v43, ".gnu_debugaltlink") )
    {
      v46 = sub_4E97C((unsigned __int64)v79, v9);
      memset(ptr, 0, 24);
      sub_511B8(v79, ptr, v46);
      v47 = (void *)v72->__align;
      if ( v72->__align )
      {
        *(_QWORD *)(a1 + 200) = 0;
        qfree(v47);
        v48 = 0;
        *(_QWORD *)(a1 + 192) = 0;
        *(_QWORD *)(a1 + 208) = 0;
      }
      else
      {
        v48 = *(_QWORD *)(a1 + 208);
      }
      v52 = *(_QWORD *)(a1 + 200);
      v53 = *(_OWORD *)&ptr[0].__lock;
      v54 = nullptr;
      if ( v52 )
        v55 = v52 - 1;
      else
        v55 = 0;
      v56 = v55 + *(&ptr[0].__align + 1) + 1;
      if ( v48 < v56 )
      {
        v54 = qvector_reserve(v72, nullptr, v55 + *(&ptr[0].__align + 1) + 1, 1u);
        v72->__align = (__int64)v54;
      }
      *(_QWORD *)(a1 + 200) = v56;
      v54[v55 + *((_QWORD *)&v53 + 1)] = 0;
      memmove((void *)(*(_QWORD *)(a1 + 192) + v55), (const void *)v53, *((size_t *)&v53 + 1));
      if ( ptr[0].__align )
      {
        *(&ptr[0].__align + 1) = 0;
        qfree((void *)ptr[0].__align);
        ptr[0].__align = 0;
        *(&ptr[0].__align + 2) = 0;
      }
    }
LABEL_96:
    ++v9;
  }
  while ( v9 < v85 );
  v8 = v71;
  v5 = v73;
  v62 = v76 == 0;
LABEL_104:
  v63 = v84 == 2;
  *(_BYTE *)(a1 + 168) = v83 == 2;
  *(_BYTE *)(a1 + 169) = v63;
  if ( !v62 )
    sub_95970(a1, (__int64 *)&v75);
  *(_QWORD *)(a1 + 184) = v82 - v81;
  v64 = (char *)v75;
  if ( v75 )
  {
    v65 = v76;
    if ( v76 )
    {
      v66 = 0;
      v67 = 1;
      v68 = *(void **)v75;
      if ( !*(_QWORD *)v75 )
        goto LABEL_111;
      while ( 1 )
      {
        v69 = &v64[v66];
        *(_QWORD *)&v64[v66 + 8] = 0;
        qfree(v68);
        *(_QWORD *)v69 = 0;
        *((_QWORD *)v69 + 2) = 0;
        if ( v67 >= v65 )
          break;
        while ( 1 )
        {
          v64 = (char *)v75;
          ++v67;
          v66 += 24;
          v68 = *(void **)((char *)v75 + v66);
          if ( v68 )
            break;
LABEL_111:
          if ( v67 >= v65 )
            goto LABEL_112;
        }
      }
LABEL_112:
      v64 = (char *)v75;
    }
    v76 = 0;
    qfree(v64);
    v75 = nullptr;
    v77 = 0;
  }
LABEL_100:
  sub_4BE70(&ptr[0].__list.__prev);
  close_linput(v8);
  return v5 & 1;
}
// 9466C: variable 'v89' is possibly undefined
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 166CB0: using guessed type __int64 qword_166CB0;
