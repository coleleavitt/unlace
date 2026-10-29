/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_810F0
// Address: 0x00000000000810F0

//----- (00000000000810F0) ----------------------------------------------------
__int64 __fastcall sub_810F0(__int64 *a1, __int64 a2, int a3, _DWORD *a4)
{
  unsigned __int8 *v4; // x8
  unsigned __int8 **v5; // x20
  char v8; // w9
  __int64 v10; // x27
  pthread_mutex_t *v11; // x25
  unsigned __int8 *v12; // x9
  int v13; // w8
  int v14; // w10
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x10
  __int64 v18; // x11
  char *v19; // x8
  __int64 v20; // x10
  int v21; // w9
  unsigned __int8 *v22; // x8
  unsigned __int64 v23; // x26
  unsigned __int8 *v24; // x24
  int v25; // w8
  int v26; // w0
  __int64 v27; // x8
  __int64 v28; // x9
  _QWORD *v29; // x1
  _BYTE *v30; // x26
  _QWORD *v31; // x0
  int v32; // w24
  unsigned __int8 *v33; // x8
  int v34; // w9
  unsigned __int8 *v36; // x8
  int v37; // w0
  unsigned __int8 *v38; // x8
  char v39; // w8
  unsigned __int64 v40; // x9
  unsigned __int8 *v41; // x23
  int v42; // w8
  void *v43; // x1
  __int64 v44; // x8
  unsigned __int8 v45; // w24
  __int64 v46; // x23
  unsigned __int8 *v47; // x8
  char v48; // w0
  void *v49; // x1
  __int64 v50; // x8
  char v51; // w23
  __int64 v52; // x24
  void *v53; // x1
  __int64 v54; // x8
  __int64 v55; // x24
  unsigned int v56; // w0
  unsigned __int8 *v57; // x8
  int v58; // w0
  unsigned __int8 *v59; // x8
  int v60; // w0
  int v61; // w0
  unsigned __int8 *v62; // x29
  int v63; // w27
  int v64; // w24
  unsigned __int8 *v65; // x22
  _BYTE *v66; // x25
  int v67; // w23
  int v68; // w23
  bool v69; // zf
  __int64 v70; // x26
  __int16 v71; // w8
  unsigned __int8 *v72; // x8
  int v73; // w8
  char *v74; // x23
  int v75; // w24
  unsigned __int8 *v76; // x8
  int v77; // w8
  int v78; // w0
  char v79; // w0
  int v80; // w9
  __int64 v81; // x28
  unsigned __int8 *v82; // x25
  char v83; // w8
  __int64 v84; // x8
  int v85; // t1
  char v86; // w25
  bool v87; // w9
  char v88; // w28
  unsigned __int8 *v89; // x24
  int v90; // w8
  int v91; // w23
  int v92; // w19
  unsigned __int8 *v93; // x8
  const char *v94; // x1
  unsigned __int8 v95; // w8
  unsigned __int64 v96; // x9
  unsigned __int8 v97; // w20
  unsigned __int64 v98; // x1
  bool v99; // w29
  int v100; // w8
  unsigned __int8 *v101; // x19
  int v102; // w8
  __int16 v103; // w8
  char v104; // w8
  __int64 v105; // x8
  unsigned __int64 v106; // x9
  void **v107; // x23
  size_t v108; // x19
  unsigned __int64 v109; // x20
  void *v110; // x0
  _BYTE *v111; // [xsp+8h] [xbp-68h]

  v5 = (unsigned __int8 **)(a1 + 1);
  v4 = (unsigned __int8 *)a1[1];
  v8 = *((_BYTE *)a1 + 128);
  v10 = a3;
  v11 = (pthread_mutex_t *)(a1 + 7);
  while ( 1 )
  {
    a1[2] = (__int64)v4;
    a1[3] = 0;
    if ( v8 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v12 = v4;
          v13 = *v4;
          if ( v13 != 42 )
            break;
          v4 = v12 + 1;
          *v5 = v12 + 1;
          v14 = v12[1];
          if ( v14 == 41 )
          {
            if ( (*((_BYTE *)a1 + 676) & 2) != 0 )
              goto LABEL_14;
          }
          else if ( v14 == 47 && (*((_BYTE *)a1 + 676) & 1) != 0 )
          {
LABEL_14:
            a1[1] = (__int64)(v12 + 2);
            *((_BYTE *)a1 + 128) = 0;
            goto LABEL_19;
          }
        }
        if ( !v13 )
          break;
        v4 = v12 + 1;
        *v5 = v12 + 1;
      }
LABEL_15:
      v15 = a1[8];
      if ( v15 == v10 )
      {
        if ( !*(*v5 - 1) )
          --*v5;
        *(_WORD *)(a2 + 24) = 1;
        return 0;
      }
      v16 = a1[7];
      v17 = v15 - 1;
      v18 = v16 + 56 * (v15 - 1);
      *a1 = *(_QWORD *)(v18 + 24);
      a1[1] = *(_QWORD *)(v18 + 32);
      *((_DWORD *)a1 + 20) = *(_DWORD *)(v18 + 48);
      if ( v15 )
      {
        a1[8] = v17;
        sub_39570(v16 + 56 * v17);
      }
    }
    while ( 1 )
    {
      while ( 1 )
      {
LABEL_19:
        v22 = *v5;
        do
        {
          do
          {
            *v5 = ++v22;
            v23 = *(v22 - 1);
          }
          while ( (unsigned int)(v23 - 9) < 5 );
        }
        while ( (_DWORD)v23 == 32 );
        if ( a4 )
          *a4 = *((_DWORD *)a1 + 72);
        switch ( (_DWORD)v23 )
        {
          case 0:
            goto LABEL_15;
          case 0x2F:
            v24 = *v5;
            if ( **v5 == 47 && (*((_BYTE *)a1 + 676) & 4) != 0 )
              goto LABEL_15;
            goto LABEL_32;
          case 0x3B:
            if ( (*((_BYTE *)a1 + 676) & 8) != 0 )
              goto LABEL_15;
            v24 = *v5;
LABEL_32:
            a1[3] = (__int64)(v24 - 1);
            goto LABEL_33;
        }
        if ( (char)v23 > -2 )
          break;
        v27 = a1[8];
        if ( !v27 )
          goto LABEL_206;
        v28 = *((int *)a1 + 20);
        v29 = (_QWORD *)a1[7];
        if ( v29[7 * v28 + 1] > (v23 ^ 0x80) )
        {
          v30 = *(_BYTE **)(v29[7 * v28] + 24 * (v23 ^ 0x80));
          if ( v30 )
          {
            if ( *v30 )
            {
              if ( a1[9] < (unsigned __int64)(v27 + 1) )
              {
                v31 = qvector_reserve(v11, v29, v27 + 1, 0x38u);
                v27 = a1[8];
                v29 = v31;
                a1[7] = (__int64)v31;
              }
              v19 = (char *)&v29[7 * v27];
              *((_QWORD *)v19 + 1) = 0;
              *((_QWORD *)v19 + 2) = 0;
              *(_QWORD *)v19 = 0;
              v20 = *a1;
              ++a1[8];
              *((_QWORD *)v19 + 3) = v20;
              *((_QWORD *)v19 + 4) = a1[1];
              v21 = *((_DWORD *)a1 + 20);
              *((_QWORD *)v19 + 5) = 0;
              *((_DWORD *)v19 + 12) = v21;
              LODWORD(v19) = *(_DWORD *)(a1[7] + 56LL * *((int *)a1 + 20) + 48);
              *a1 = (__int64)v30;
              a1[1] = (__int64)v30;
              *((_DWORD *)a1 + 20) = (_DWORD)v19;
            }
          }
        }
      }
      v24 = (unsigned __int8 *)a1[1];
      a1[3] = (__int64)(v24 - 1);
      if ( (char)v23 < 0 )
      {
        v32 = 0;
        goto LABEL_52;
      }
LABEL_33:
      if ( !isalpha(v23) )
        break;
      if ( (_DWORD)v23 == 76 )
      {
        v25 = *v24;
        if ( v25 == 39 )
        {
          *v5 = v24 + 1;
          *(_BYTE *)(a2 + 40) = 1;
          goto LABEL_69;
        }
        if ( v25 == 34 )
        {
          *v5 = v24 + 1;
          v39 = 1;
LABEL_76:
          v40 = *(_QWORD *)(a2 + 16);
          *(_BYTE *)(a2 + 40) = v39;
          *(_WORD *)(a2 + 24) = 4;
          *(_QWORD *)(a2 + 8) = 0;
          if ( v40 <= 0x3FF )
            *(_QWORD *)a2 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, 0x400u, 1u);
          while ( 1 )
          {
            while ( 1 )
            {
              v41 = *v5;
              v42 = **v5;
              if ( v42 != 92 )
                break;
              v47 = v41 + 1;
              if ( (*((_BYTE *)a1 + 340) & 0x10) != 0 )
              {
                if ( !*v47 )
                {
LABEL_104:
                  v56 = 24;
                  return set_qerrno(v56);
                }
                v53 = *(void **)a2;
                v54 = *(_QWORD *)(a2 + 8);
                if ( v54 )
                  v55 = v54 - 1;
                else
                  v55 = 0;
                if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v55 + 3) )
                {
                  v53 = qvector_reserve((pthread_mutex_t *)a2, v53, v55 + 3, 1u);
                  *(_QWORD *)a2 = v53;
                }
                *(_QWORD *)(a2 + 8) = v55 + 3;
                *((_BYTE *)v53 + v55 + 2) = 0;
                *(_WORD *)(*(_QWORD *)a2 + v55) = *(_WORD *)v41;
                *v5 += 2;
              }
              else
              {
                *v5 = v47;
                v48 = back_char(v5);
                v49 = *(void **)a2;
                v50 = *(_QWORD *)(a2 + 8);
                v51 = v48;
                if ( v50 )
                  v52 = v50 - 1;
                else
                  v52 = 0;
                if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v52 + 2) )
                {
                  v49 = qvector_reserve((pthread_mutex_t *)a2, v49, v52 + 2, 1u);
                  *(_QWORD *)a2 = v49;
                }
                *(_QWORD *)(a2 + 8) = v52 + 2;
                *((_BYTE *)v49 + v52) = v51;
                *(_BYTE *)(*(_QWORD *)a2 + v52 + 1) = 0;
              }
            }
            if ( v42 == 34 )
              break;
            if ( !**v5 )
              goto LABEL_104;
            *v5 = v41 + 1;
            v43 = *(void **)a2;
            v44 = *(_QWORD *)(a2 + 8);
            v45 = *v41;
            if ( v44 )
              v46 = v44 - 1;
            else
              v46 = 0;
            if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v46 + 2) )
            {
              v43 = qvector_reserve((pthread_mutex_t *)a2, v43, v46 + 2, 1u);
              *(_QWORD *)a2 = v43;
            }
            *(_QWORD *)(a2 + 8) = v46 + 2;
            *((_BYTE *)v43 + v46) = v45;
            *(_BYTE *)(*(_QWORD *)a2 + v46 + 1) = 0;
          }
          v57 = v41 + 1;
          goto LABEL_141;
        }
      }
LABEL_40:
      v26 = sub_80F5C(a1, 0, a2);
      if ( v26 != 1 )
      {
        if ( v26 != -1 )
          return 0;
        return get_qerrno();
      }
    }
    if ( (_DWORD)v23 == 36 || (_DWORD)v23 == 95 )
      goto LABEL_40;
    v32 = 1;
LABEL_52:
    if ( __strchr_chk("?(),.[\\]`{};~@", (unsigned int)v23, 15) )
      break;
    if ( !__strchr_chk("!%&*+-/<=>^|:", (unsigned int)v23, 14) )
    {
      if ( !(((unsigned int)(v23 - 48) > 9) | (v32 ^ 1) & 1) )
      {
        v62 = (unsigned __int8 *)a1[1];
        v63 = *((_DWORD *)a1 + 85);
        v66 = (char *)a1 + 340;
        v65 = v62 - 1;
        if ( (v63 & 1) == 0 )
          goto LABEL_132;
        goto LABEL_154;
      }
      if ( (_DWORD)v23 != 39 )
      {
        if ( (_DWORD)v23 == 35 )
        {
          v93 = *v5;
          if ( (char)**v5 > -2 )
            goto LABEL_206;
          if ( a1[8] )
          {
            *v5 = v93 + 1;
            v95 = *v93;
            v96 = *(_QWORD *)(a2 + 16);
            *(_WORD *)(a2 + 24) = 4;
            v97 = v95 ^ 0x80;
            *(_BYTE *)(a2 + 40) = 0;
            *(_QWORD *)(a2 + 8) = 0;
            if ( v96 <= 0x3FF )
              *(_QWORD *)a2 = qvector_reserve((pthread_mutex_t *)a2, *(void **)a2, 0x400u, 1u);
            sub_80E44(a1, a2, v97, *((_DWORD *)a1 + 20));
            return 0;
          }
          v94 = (const char *)**v5;
        }
        else
        {
          if ( (_DWORD)v23 == 34 )
          {
            v39 = 0;
            goto LABEL_76;
          }
LABEL_206:
          v94 = (const char *)v23;
        }
        set_error_data(nullptr, v94);
        v56 = 27;
        return set_qerrno(v56);
      }
LABEL_69:
      *(_WORD *)(a2 + 24) = 5;
      *(_QWORD *)(a2 + 32) = 0;
      v36 = *v5;
      if ( **v5 == 39 || !**v5 )
        goto LABEL_117;
      *v5 = v36 + 1;
      v37 = *v36;
      if ( v37 == 92 )
        LOBYTE(v37) = back_char(v5);
      *(_QWORD *)(a2 + 32) = (unsigned __int8)v37 | (*(_QWORD *)(a2 + 32) << 8);
      v38 = *v5;
      if ( !**v5 )
        goto LABEL_117;
      if ( **v5 == 39 )
      {
        *v5 = v38 + 1;
        *(_QWORD *)(a2 + 32) = *(unsigned __int8 *)(a2 + 32);
        return 0;
      }
      *v5 = v38 + 1;
      v58 = *v38;
      if ( v58 == 92 )
        LOBYTE(v58) = back_char(v5);
      *(_QWORD *)(a2 + 32) = (unsigned __int8)v58 | (*(_QWORD *)(a2 + 32) << 8);
      v59 = *v5;
      if ( !**v5 )
        goto LABEL_117;
      if ( **v5 != 39 )
      {
        *v5 = v59 + 1;
        v60 = *v59;
        if ( v60 == 92 )
          LOBYTE(v60) = back_char(v5);
        *(_QWORD *)(a2 + 32) = (unsigned __int8)v60 | (*(_QWORD *)(a2 + 32) << 8);
        v59 = *v5;
        if ( !**v5 )
          goto LABEL_117;
        if ( **v5 != 39 )
        {
          *v5 = v59 + 1;
          v61 = *v59;
          if ( v61 == 92 )
            LOBYTE(v61) = back_char(v5);
          *(_QWORD *)(a2 + 32) = (unsigned __int8)v61 | (*(_QWORD *)(a2 + 32) << 8);
          v59 = *v5;
          if ( **v5 != 39 )
          {
LABEL_117:
            v56 = 26;
            return set_qerrno(v56);
          }
        }
      }
      goto LABEL_140;
    }
    *(_WORD *)(a2 + 24) = v23;
    v33 = *v5;
    v34 = **v5;
    if ( v34 == 61 )
    {
      v71 = ((unsigned __int8)v23 << 8) | 0x3D;
      goto LABEL_139;
    }
    if ( (unsigned int)v23 <= 0x3E && ((1LL << v23) & 0x5400284000000000LL) != 0 || (_DWORD)v23 == 124 )
    {
      if ( v34 == (_DWORD)v23 )
      {
        *(_WORD *)(a2 + 24) = (unsigned __int8)v23 | ((unsigned __int8)v23 << 8);
        v72 = *v5 + 1;
        *v5 = v72;
        if ( ((unsigned int)v23 | 2) != 0x3E || *v72 != 61 )
          return 0;
        v71 = *(_WORD *)(a2 + 24) + 61;
      }
      else
      {
        if ( (_DWORD)v23 != 45 || v34 != 62 )
          return 0;
        v71 = 11582;
      }
LABEL_139:
      *(_WORD *)(a2 + 24) = v71;
      v59 = *v5;
LABEL_140:
      v57 = v59 + 1;
LABEL_141:
      *v5 = v57;
      return 0;
    }
    if ( (_DWORD)v23 != 47 || v34 != 42 || (*((_BYTE *)a1 + 676) & 1) == 0 )
      return 0;
LABEL_2:
    v8 = 1;
    v4 = v33 + 1;
    *((_BYTE *)a1 + 128) = 1;
    a1[1] = (__int64)v4;
  }
  *(_WORD *)(a2 + 24) = v23;
  if ( (_DWORD)v23 == 40 )
  {
    v33 = *v5;
    if ( **v5 != 42 || (*((_BYTE *)a1 + 676) & 2) == 0 )
      return 0;
    goto LABEL_2;
  }
  if ( (_DWORD)v23 != 46 )
    return 0;
  v62 = (unsigned __int8 *)a1[1];
  v63 = *((_DWORD *)a1 + 85);
  v64 = *v62;
  if ( (v63 & 1) == 0 )
    goto LABEL_128;
  if ( (char)v64 < 0 )
    return 0;
  if ( (unsigned int)(v64 - 48) > 9
    || (v65 = v62 - 1, v66 = (char *)a1 + 340, (unsigned __int64)(v62 - 1) > *a1)
    && ((v67 = *(v62 - 2), ((char)*(v62 - 2) & 0x80000000) == 0) && isalnum(v67) || v67 == 95 || v67 == 36) )
  {
LABEL_128:
    if ( v64 == 46 && v62[1] == 46 )
    {
      *v5 = v62 + 2;
      *(_WORD *)(a2 + 24) = 11868;
    }
    return 0;
  }
LABEL_154:
  v73 = 0;
  v74 = (char *)v65;
  while ( 1 )
  {
    while ( 1 )
    {
      v75 = v73;
      v76 = (unsigned __int8 *)(v74 + 1);
      do
      {
        v74 = (char *)v76;
        v77 = (char)*(v76 - 1);
        v78 = (unsigned __int8)v77;
        if ( v77 < 0 )
          goto LABEL_162;
        v76 = (unsigned __int8 *)(v74 + 1);
      }
      while ( (unsigned int)(v78 - 48) < 0xA );
      if ( v78 != 46 )
        break;
      v73 = v75 | (v75 == 0);
      if ( v75 )
        goto LABEL_200;
    }
LABEL_162:
    v79 = toupper(v78);
    if ( v79 != 69 )
      break;
    if ( (v75 & 2) != 0 )
      goto LABEL_200;
    v80 = (unsigned __int8)*v74;
    v73 = v75 | 2;
    if ( v80 == 43 || v80 == 45 )
      ++v74;
  }
  if ( v75 )
  {
    if ( (v79 == 76 || v79 == 70)
      && ((v90 = *v74, v91 = (unsigned __int8)*v74, (v90 & 0x80000000) == 0) && isalnum(v91)
       || (unsigned int)(v91 - 36) <= 0x3B && ((1LL << ((unsigned __int8)v91 - 36)) & 0x800000000000401LL) != 0) )
    {
LABEL_200:
      while ( 1 )
      {
        *v5 = v65;
        v92 = *v65;
        if ( ((char)*v65 < 0 || !isalnum(v92))
          && ((unsigned int)(v92 - 36) > 0x3B || ((1LL << ((unsigned __int8)v92 - 36)) & 0x800000000000401LL) == 0) )
        {
          break;
        }
        ++v65;
      }
      v56 = 21;
    }
    else
    {
      *v5 = v65;
      if ( (unsigned int)asctoreal((char **)v5, a2 + 48) == 1 )
      {
        *(_WORD *)(a2 + 24) = 7;
        v101 = *v5;
        v111 = v66;
        LOBYTE(v68) = **v5;
        v102 = (unsigned __int8)toupper((unsigned __int8)v68);
        if ( v102 == 76 || v102 == 70 )
        {
          *v5 = v101 + 1;
          LOBYTE(v68) = v101[1];
        }
        goto LABEL_251;
      }
      v56 = 22;
    }
    return set_qerrno(v56);
  }
LABEL_132:
  v68 = *v62;
  v69 = (_DWORD)v23 == 48;
  v70 = v23 - 48;
  if ( !v69 )
  {
    v81 = 10;
    goto LABEL_167;
  }
  v81 = 8;
  if ( *v62 > 0x61u )
  {
    if ( v68 != 98 )
    {
      if ( v68 != 120 )
        goto LABEL_167;
      goto LABEL_211;
    }
LABEL_218:
    *v5 = v62 + 1;
    LOBYTE(v68) = v62[1];
    if ( (v68 & 0xFE) != 0x30 )
    {
      v98 = v62[1];
      goto LABEL_232;
    }
    v81 = 2;
    ++v62;
LABEL_167:
    v111 = v66;
    if ( ((char)v68 & 0x80000000) == 0 )
      goto LABEL_168;
    goto LABEL_180;
  }
  if ( v68 == 66 )
    goto LABEL_218;
  if ( v68 != 88 )
    goto LABEL_167;
LABEL_211:
  *v5 = v62 + 1;
  v68 = (char)v62[1];
  if ( v68 < 0 || !isxdigit(v62[1]) )
  {
    set_error_data(nullptr, (const char *)(unsigned __int8)v68);
    v56 = 20;
    ++*v5;
    return set_qerrno(v56);
  }
  v111 = v66;
  v81 = 16;
  ++v62;
LABEL_168:
  v82 = v62 + 1;
  while ( isxdigit((unsigned __int8)v68) )
  {
    *v5 = v82;
    if ( (_DWORD)v81 == 10 && (unsigned __int8)v68 > 0x39u
      || (_DWORD)v81 == 8 && (unsigned __int8)v68 > 0x37u
      || (_DWORD)v81 == 2 && (unsigned __int8)v68 > 0x31u )
    {
      v98 = (unsigned __int8)v68;
LABEL_232:
      set_error_data(nullptr, (const char *)v98);
      v56 = 20;
      return set_qerrno(v56);
    }
    if ( (unsigned __int8)v68 >= 0x3Au )
    {
      if ( (unsigned __int8)v68 <= 0x60u )
        v83 = v68;
      else
        v83 = v68 - 32;
      LOBYTE(v68) = v83 - 7;
    }
    v84 = v70 * v81 + (unsigned __int8)v68;
    v85 = (char)*v82++;
    LOBYTE(v68) = v85;
    v70 = v84 - 48;
    if ( v85 < 0 )
      break;
  }
  v62 = v82 - 1;
LABEL_180:
  v86 = 0;
  v87 = (_DWORD)v81 != 10;
  v88 = 1;
  while ( 2 )
  {
    while ( 2 )
    {
      v89 = v62;
      if ( (unsigned __int8)v68 <= 0x6Bu )
      {
        if ( (unsigned __int8)v68 != 76 )
        {
          if ( (unsigned __int8)v68 != 85 )
            goto LABEL_221;
          goto LABEL_190;
        }
        goto LABEL_186;
      }
      if ( (unsigned __int8)v68 == 108 )
      {
LABEL_186:
        if ( (v86 & 1) != 0 )
          goto LABEL_258;
        ++v62;
        *v5 = v89 + 1;
        v68 = v89[1];
        v86 = 0;
        if ( (v68 | 0x20) == 0x6C )
        {
          v62 = v89 + 2;
          *v5 = v89 + 2;
          LOBYTE(v68) = v89[2];
          v86 = 1;
        }
        continue;
      }
      break;
    }
    if ( (unsigned __int8)v68 == 117 )
    {
LABEL_190:
      ++v62;
      *v5 = v89 + 1;
      LOBYTE(v68) = v89[1];
      v88 = 0;
      v87 = 1;
      continue;
    }
    break;
  }
LABEL_221:
  v99 = v87;
  if ( tolower((unsigned __int8)v68) == 105 )
  {
    v100 = v89[1];
    if ( v100 == 54 )
    {
      if ( v89[2] == 52 )
      {
        v86 = 1;
LABEL_237:
        *v5 = v89 + 3;
        LOBYTE(v68) = v89[3];
      }
    }
    else if ( v100 == 51 && v89[2] == 50 )
    {
      v86 = 0;
      goto LABEL_237;
    }
  }
  if ( (v63 & 8) != 0 )
  {
    if ( (v86 & 1) != 0 )
    {
LABEL_242:
      *(_BYTE *)(a2 + 40) = v70 < 0 || (v88 & 1) == 0;
      goto LABEL_243;
    }
    if ( (((unsigned __int64)v70 >> 31 == 0) & (unsigned __int8)v88) != 0 )
    {
      v104 = 0;
    }
    else
    {
      if ( HIDWORD(v70) != 0 || !v99 )
        goto LABEL_242;
      v104 = 1;
    }
    *(_BYTE *)(a2 + 40) = v104;
    goto LABEL_249;
  }
  *(_BYTE *)(a2 + 40) = 0;
  if ( (v86 & 1) != 0 )
  {
LABEL_243:
    v103 = 8;
    *(_QWORD *)(a2 + 48) = v70;
    goto LABEL_250;
  }
LABEL_249:
  *(_QWORD *)(a2 + 32) = v70;
  v103 = 3;
LABEL_250:
  *(_WORD *)(a2 + 24) = v103;
LABEL_251:
  if ( (*v111 & 2) != 0
    && (((char)v68 & 0x80000000) == 0 && isalnum((unsigned __int8)v68)
     || (unsigned int)(unsigned __int8)v68 - 34 <= 0x3D
     && ((1LL << ((unsigned __int8)v68 - 34)) & 0x2000000000001025LL) != 0) )
  {
LABEL_258:
    v56 = 23;
    return set_qerrno(v56);
  }
  v105 = a1[1];
  v106 = a1[6];
  v107 = (void **)(a1 + 4);
  a1[5] = 0;
  v108 = v105 - (_QWORD)v65;
  v109 = v105 - (_QWORD)v65 + 1;
  if ( v106 >= v109 )
  {
    v110 = *v107;
  }
  else
  {
    v110 = qvector_reserve((pthread_mutex_t *)(a1 + 4), *v107, v105 - (_QWORD)v65 + 1, 1u);
    *v107 = v110;
  }
  a1[5] = v109;
  *((_BYTE *)v110 + v108) = 0;
  memmove((void *)a1[4], v65, v108);
  return 0;
}
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
