/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_938B8
// Address: 0x00000000000938B8

//----- (00000000000938B8) ----------------------------------------------------
__int64 __fastcall sub_938B8(__int64 *a1, __int64 a2, __int64 a3, int *a4)
{
  __int64 v4; // x23
  __int64 v5; // x29
  unsigned __int64 v9; // x8
  int v10; // w9
  bool v11; // cc
  pthread_mutex_t *v12; // x22
  __int64 v13; // x28
  const char *v14; // x0
  unsigned int v15; // w28
  _QWORD *v17; // x0
  void *v18; // x19
  unsigned int v19; // w0
  unsigned __int64 v20; // x26
  struct __pthread_internal_list *v21; // x0
  __int64 v22; // x25
  int v23; // w8
  __int64 v24; // x8
  unsigned __int64 (__fastcall *v25)(__int64, unsigned int, char, int, _QWORD *); // x10
  __int64 v26; // x9
  __int64 (__fastcall *v27)(__int64, unsigned int, char, __int64, _QWORD *); // x11
  __int64 (__fastcall *v28)(__int64, unsigned int, char, __int64, _QWORD *); // x8
  unsigned __int64 v29; // x0
  unsigned __int64 v30; // x26
  unsigned __int64 v31; // x25
  int v32; // w25
  const char *v33; // x1
  const char *v34; // x1
  void *align; // x0
  unsigned __int64 v36; // x8
  char *v37; // x0
  __int64 v38; // x25
  __int64 v39; // x28
  unsigned __int64 v40; // x26
  void *v41; // x0
  _BOOL4 v42; // w25
  unsigned __int64 v43; // x0
  unsigned __int64 v44; // x8
  __int64 v45; // x8
  int v46; // w23
  unsigned __int64 v47; // x29
  __int64 v48; // x26
  unsigned __int64 v49; // x25
  char *v50; // x8
  size_t v51; // x29
  __int64 v52; // x8
  size_t v53; // x9
  unsigned __int64 v54; // x29
  __int64 v55; // x0
  __int64 v56; // x23
  __int64 v57; // x8
  int v58; // w29
  int v59; // w8
  size_t v60; // x10
  bool v61; // zf
  size_t v62; // x8
  unsigned int v63; // w23
  int v64; // w8
  unsigned __int64 v65; // x8
  __int64 v66; // x9
  const char *v67; // x0
  __int64 v68; // x8
  unsigned __int64 v69; // x2
  _QWORD *v70; // x0
  const char *prev; // x3
  const char *v72; // x2
  int v73; // [xsp+Ch] [xbp-3C4h]
  void *dest; // [xsp+10h] [xbp-3C0h]
  unsigned __int64 *v75; // [xsp+18h] [xbp-3B8h]
  _QWORD *v76; // [xsp+20h] [xbp-3B0h]
  _BOOL4 v77; // [xsp+2Ch] [xbp-3A4h]
  unsigned int *v78; // [xsp+30h] [xbp-3A0h]
  __int64 *v79; // [xsp+38h] [xbp-398h]
  int v80; // [xsp+44h] [xbp-38Ch]
  size_t v81; // [xsp+48h] [xbp-388h]
  unsigned __int64 v82; // [xsp+50h] [xbp-380h]
  unsigned __int64 v83; // [xsp+58h] [xbp-378h]
  __int64 v84; // [xsp+58h] [xbp-378h]
  unsigned int *v85; // [xsp+60h] [xbp-370h]
  unsigned __int64 v86; // [xsp+68h] [xbp-368h]
  unsigned __int64 v87; // [xsp+68h] [xbp-368h]
  int v88; // [xsp+74h] [xbp-35Ch]
  _BOOL4 v89; // [xsp+78h] [xbp-358h]
  void (__fastcall *v90)(__int64, _QWORD, _QWORD, _QWORD, __int64); // [xsp+78h] [xbp-358h]
  int v91; // [xsp+78h] [xbp-358h]
  unsigned int v92; // [xsp+80h] [xbp-350h]
  unsigned __int64 v93; // [xsp+80h] [xbp-350h]
  _BYTE v94[12]; // [xsp+8Ch] [xbp-344h] BYREF
  unsigned __int64 v95; // [xsp+98h] [xbp-338h]
  unsigned __int64 v96; // [xsp+A0h] [xbp-330h]
  bool v97; // [xsp+ACh] [xbp-324h] BYREF
  char *src; // [xsp+B0h] [xbp-320h] BYREF
  char *v99; // [xsp+B8h] [xbp-318h] BYREF
  pthread_mutex_t ptr; // [xsp+C0h] [xbp-310h] BYREF
  __int128 v101; // [xsp+E8h] [xbp-2E8h]
  _QWORD v102[10]; // [xsp+F8h] [xbp-2D8h] BYREF
  pthread_mutex_t v103; // [xsp+148h] [xbp-288h] BYREF
  __int64 v104; // [xsp+170h] [xbp-260h]
  char v105; // [xsp+1F0h] [xbp-1E0h]
  __int64 v106; // [xsp+2D0h] [xbp-100h]
  __int64 v107; // [xsp+2D8h] [xbp-F8h]
  unsigned __int8 v108; // [xsp+2F4h] [xbp-DCh]
  unsigned __int8 v109; // [xsp+2F5h] [xbp-DBh]
  __int16 v110; // [xsp+300h] [xbp-D0h]
  unsigned __int16 v111; // [xsp+302h] [xbp-CEh]
  __int64 v112; // [xsp+368h] [xbp-68h]
  int8x16x2_t v113; // 0:q0.32

  v112 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
    sub_39FA0((__int64)"Relocating section %llu (%s).\n", a2, *(const char **)(a1[13] + 120 * (a2 - 1) + 16));
  v9 = a1[30];
  if ( v9 )
  {
    v4 = a1[29];
    v5 = 0;
    v10 = 1;
    do
    {
      if ( *(_QWORD *)(v4 + 72 * v5 + 64) == a2 )
        goto LABEL_10;
      v5 = v10;
      v11 = v9 > v10++;
    }
    while ( v11 );
  }
  do
  {
    if ( under_debugger )
      __break(1u);
    interr(721);
LABEL_10:
    v12 = (pthread_mutex_t *)(v4 + 72 * v5);
  }
  while ( !v12 );
  v13 = *a1;
  if ( !*a1 || *(_DWORD *)(v13 + 8) != 1 )
  {
    sub_39FA0((__int64)"Invalid input source.\n");
    return 1;
  }
  if ( *(_QWORD *)(v13 + 24) )
    v14 = *(const char **)(v13 + 16);
  else
    v14 = &byte_F154B;
  v17 = open_linput(v14, 0);
  if ( !v17 )
  {
    if ( *(_QWORD *)(v13 + 24) )
      v34 = *(const char **)(v13 + 16);
    else
      v34 = &byte_F154B;
    sub_39FA0((__int64)"Couldn't open file: %s.\n", v34);
    return 1;
  }
  v18 = v17;
  sub_4ECD4((__int64)v102, (__int64)v17, 0, v113);
  if ( !sub_4B3EC((__int64)v102) || (sub_4B520(v102) & 1) == 0 || (sub_4F984((__int64)v102) & 1) == 0 )
  {
    if ( *(_QWORD *)(v13 + 24) )
      v33 = *(const char **)(v13 + 16);
    else
      v33 = &byte_F154B;
    sub_39FA0((__int64)"Invalid ELF file: %s.\n", v33);
    goto LABEL_52;
  }
  if ( v105 && v104 && v110 == 1 )
  {
    v19 = sub_50318(&v103, 14);
    if ( v19 && (v20 = sub_4E97C((unsigned __int64)&v103, v19)) != 0 )
    {
      v21 = sub_55BA4(&v103, (__int128 *)(unsigned int)a2, &v97);
      if ( v21 )
      {
        *(_DWORD *)&v94[8] = 0;
        v95 = 0;
        v96 = 0;
        *(_QWORD *)v94 = v111;
        v88 = v108;
        v89 = v97;
        v22 = (__int64)v21;
        if ( v109 == 2 )
          v23 = 1;
        else
          v23 = 2;
        v92 = v23;
        qlseek(v106, (__int64)v21[1].__next + v107, 0);
        memset(&ptr, 0, 24);
        sub_511B8(&v103.__align, &ptr, v22);
        v24 = 16;
        v25 = sub_956E4;
        if ( v89 )
          v24 = 24;
        v26 = 12;
        if ( v89 )
          v25 = sub_9564C;
        else
          v26 = 8;
        v27 = sub_957B8;
        if ( v89 )
          v27 = sub_9575C;
        if ( v88 == 2 )
        {
          v26 = v24;
          v28 = (__int64 (__fastcall *)(__int64, unsigned int, char, __int64, _QWORD *))v25;
        }
        else
        {
          v28 = v27;
        }
        v90 = (void (__fastcall *)(__int64, _QWORD, _QWORD, _QWORD, __int64))v28;
        v85 = (unsigned int *)v22;
        if ( v26 != *(_QWORD *)(v22 + 56) )
        {
          *a4 = 216;
          v32 = 1;
          align = (void *)ptr.__align;
          if ( !ptr.__align )
            goto LABEL_79;
          goto LABEL_78;
        }
        v82 = v26;
        v83 = v20;
        v29 = sub_56328(&v103, v22);
        v30 = v29;
        if ( v29 )
        {
          v31 = v29 / v82;
          if ( v29 % v82 )
          {
            *a4 = 216;
            v32 = 1;
LABEL_76:
            v20 = v83;
            goto LABEL_77;
          }
          v36 = v95;
          v86 = v29 / v82;
          if ( v95 >= v31 )
          {
            if ( v95 != v31 )
            {
              v101 = 0u;
              *(_OWORD *)(&ptr.__align + 3) = 0u;
              sub_957FC((pthread_mutex_t *)&v94[4], v31, &ptr.__size[24]);
            }
          }
          else
          {
            if ( v96 >= v31 )
            {
              v37 = *(char **)&v94[4];
            }
            else
            {
              v37 = (char *)qvector_reserve((pthread_mutex_t *)&v94[4], *(void **)&v94[4], v31, 0x20u);
              v36 = v95;
              *(_QWORD *)&v94[4] = v37;
            }
            memset(&v37[32 * v36], 0, 32 * (v31 - v36));
            v95 = v31;
          }
          memset(*(void **)&v94[4], 0, 32 * v31);
          v32 = 0;
          v11 = v82 > v30;
          v20 = v83;
          if ( v11 )
          {
LABEL_77:
            align = (void *)ptr.__align;
            if ( !ptr.__align )
            {
LABEL_79:
              if ( v32 )
              {
LABEL_80:
                v15 = 1;
                goto LABEL_81;
              }
              if ( !*(_QWORD *)(v20 + 56) )
              {
                *a4 = 234;
                goto LABEL_80;
              }
              v42 = v97;
              v43 = sub_56328(&v103, v20);
              v44 = *(_QWORD *)(v20 + 56);
              v93 = v43 / v44;
              if ( v43 % v44 )
              {
                *a4 = 231;
                goto LABEL_80;
              }
              v77 = v42;
              v84 = v20;
              if ( !(_DWORD)v95 )
              {
                v15 = 0;
                v41 = *(void **)&v94[4];
                if ( !*(_QWORD *)&v94[4] )
                  goto LABEL_53;
                goto LABEL_82;
              }
              v45 = v4 + 72 * v5;
              v46 = *(_DWORD *)v94;
              v47 = (unsigned int)v95;
              v78 = (unsigned int *)(v45 + 48);
              v48 = 0;
              v49 = 0;
              v15 = 0;
              v76 = (_QWORD *)(v45 + 56);
              v91 = 0;
              v79 = (__int64 *)(v45 + 8);
              v75 = (unsigned __int64 *)(v45 + 16);
              v87 = (unsigned int)v95;
              while ( 1 )
              {
                v52 = *(_QWORD *)&v94[4] + v48;
                if ( *(_QWORD *)(*(_QWORD *)&v94[4] + v48 + 8) )
                  break;
LABEL_199:
                ++v49;
                v48 += 32;
                if ( v49 >= v47 )
                {
                  if ( v91 > 0 )
                  {
                    *(_OWORD *)(&ptr.__align + 3) = 0u;
                    *(_QWORD *)&v101 = 0;
                    sub_502E4(&v103.__align, (__int64)&ptr.__list, v85);
                    v72 = ptr.__list.__next ? (const char *)ptr.__list.__prev : &byte_F154B;
                    sub_39FA0(
                      (__int64)"DWARF: Skipped %d relocation entries in %s (debug-only, not affecting code/data).\n",
                      v91,
                      v72);
                    if ( ptr.__list.__prev )
                    {
                      ptr.__list.__next = nullptr;
                      qfree(ptr.__list.__prev);
                      ptr.__list.__prev = nullptr;
                      *(_QWORD *)&v101 = 0;
                      v41 = *(void **)&v94[4];
                      if ( !*(_QWORD *)&v94[4] )
                        goto LABEL_53;
LABEL_82:
                      v95 = 0;
                      qfree(v41);
                      *(_QWORD *)&v94[4] = 0;
                      v96 = 0;
                      goto LABEL_53;
                    }
                  }
LABEL_81:
                  v41 = *(void **)&v94[4];
                  if ( !*(_QWORD *)&v94[4] )
                    goto LABEL_53;
                  goto LABEL_82;
                }
              }
              if ( *(_QWORD *)(v52 + 16) >= v93 )
                goto LABEL_191;
              *(_OWORD *)(&ptr.__align + 3) = 0u;
              *(_QWORD *)&v101 = 0;
              v53 = *(_QWORD *)(*(_QWORD *)&v94[4] + v48);
              v99 = *(char **)(*(_QWORD *)&v94[4] + v48 + 24);
              v54 = *(unsigned int *)(v52 + 16);
              if ( v46 == 243 && (*(_DWORD *)(v52 + 8) | 1) == 0x3D )
              {
                ++v91;
LABEL_108:
                v47 = v87;
                goto LABEL_199;
              }
              v80 = *(_DWORD *)(v52 + 8);
              v81 = v53;
              v55 = qlseek(v106, 0, 1);
              v56 = v55 - v107;
              if ( v88 == 2 )
              {
                if ( v54 < sub_56328(&v103, v84) / 0x18 )
                {
                  v57 = 24 * v54;
LABEL_114:
                  qlseek(v106, *(_QWORD *)(v84 + 24) + v57 + v107, 0);
                  if ( (sub_4F2E0((__int64)v102, (__int64)&ptr.__list) & 0x80000000) == 0 )
                  {
                    v58 = 0;
                    goto LABEL_119;
                  }
                  v59 = 211;
LABEL_118:
                  v58 = 1;
                  *a4 = v59;
LABEL_119:
                  qlseek(v106, v107 + v56, 0);
                  v46 = *(_DWORD *)v94;
                  if ( v58 )
                    goto LABEL_190;
                  if ( *(int *)v94 <= 182 )
                  {
                    v60 = v81;
                    switch ( *(_DWORD *)v94 )
                    {
                      case 2:
                      case 0x12:
                        if ( v80 == 23 )
                          v51 = 4;
                        else
                          v51 = -1;
                        if ( v80 == 54 )
                          goto LABEL_167;
                        goto LABEL_154;
                      case 3:
                        if ( v80 == 1 )
                          goto LABEL_162;
                        v61 = v80 == 32;
                        goto LABEL_158;
                      case 8:
                        if ( v80 == 2 )
                          v51 = 4;
                        else
                          v51 = -1;
                        if ( v80 == 18 )
                          goto LABEL_167;
                        goto LABEL_154;
                      case 0x14:
                        if ( v80 == 1 )
                          goto LABEL_166;
                        goto LABEL_177;
                      case 0x15:
                        if ( v80 == 1 )
                          v51 = 4;
                        else
                          v51 = -1;
                        if ( v80 == 38 )
                          goto LABEL_167;
                        goto LABEL_154;
                      case 0x28:
                        if ( v80 != 2 )
                          goto LABEL_177;
                        goto LABEL_166;
                      case 0x2D:
                        goto LABEL_132;
                      case 0x32:
                        if ( v80 == 101 )
                          v51 = 4;
                        else
                          v51 = -1;
                        if ( v80 == 39 )
                          goto LABEL_167;
LABEL_154:
                        v46 = *(_DWORD *)v94;
                        v60 = v81;
                        if ( v51 == -1 )
                          goto LABEL_177;
                        goto LABEL_169;
                      case 0x3E:
                        if ( v80 == 1 )
                          goto LABEL_167;
                        v46 = *(_DWORD *)v94;
                        v60 = v81;
                        if ( v80 != 21 && v80 != 10 )
                          goto LABEL_177;
                        goto LABEL_166;
                      default:
                        goto LABEL_177;
                    }
                  }
                  if ( *(_DWORD *)v94 == 183 )
                  {
                    if ( v80 != 257 )
                    {
                      v46 = *(_DWORD *)v94;
                      v60 = v81;
                      if ( v80 != 283 && v80 != 258 )
                        goto LABEL_177;
LABEL_166:
                      v51 = 4;
                      goto LABEL_169;
                    }
LABEL_167:
                    v51 = 8;
                  }
                  else
                  {
                    v46 = *(_DWORD *)v94;
                    v60 = v81;
                    if ( *(_DWORD *)v94 != 195 )
                    {
                      if ( *(_DWORD *)v94 == 243 )
                      {
                        v51 = 8;
                        switch ( v80 )
                        {
                          case 1:
                          case 35:
                          case 39:
                          case 56:
                            goto LABEL_166;
                          case 2:
                          case 36:
                          case 40:
                            goto LABEL_169;
                          case 33:
                          case 37:
                          case 54:
                            v51 = 1;
                            goto LABEL_169;
                          case 34:
                          case 38:
                          case 55:
                            v51 = 2;
                            goto LABEL_169;
                          default:
                            break;
                        }
                      }
LABEL_177:
                      v64 = 211;
LABEL_189:
                      *a4 = v64;
LABEL_190:
                      v47 = v87;
LABEL_191:
                      *(_QWORD *)&v101 = 0;
                      memset(&ptr, 0, sizeof(ptr));
                      sub_502E4(&v103.__align, (__int64)&ptr.__list, v85);
                      if ( ptr.__list.__next )
                        prev = (const char *)ptr.__list.__prev;
                      else
                        prev = &byte_F154B;
                      sub_3C748(
                        (__int64)&ptr,
                        "The DWARF plugin couldn't apply all DWARF relocation entries (#%d in section %s)",
                        v49,
                        prev);
                      sub_57E7C((__int64)"%s", (const char *)ptr.__align);
                      if ( ptr.__align )
                      {
                        *(&ptr.__align + 1) = 0;
                        qfree((void *)ptr.__align);
                        ptr.__align = 0;
                        *(&ptr.__align + 2) = 0;
                      }
                      if ( ptr.__list.__prev )
                      {
                        ptr.__list.__next = nullptr;
                        qfree(ptr.__list.__prev);
                        ptr.__list.__prev = nullptr;
                        *(_QWORD *)&v101 = 0;
                      }
                      v15 = 1;
                      goto LABEL_199;
                    }
LABEL_132:
                    if ( v80 != 1 )
                    {
                      v61 = v80 == 4;
LABEL_158:
                      v46 = *(_DWORD *)v94;
                      v60 = v81;
                      v51 = 4;
                      if ( !v61 )
                        goto LABEL_177;
LABEL_169:
                      v62 = *v78;
                      if ( v60 >= v62 || v51 + v60 > v62 )
                        goto LABEL_177;
                      v73 = v109;
                      dest = (void *)(*v76 + v60);
                      if ( !v77 )
                      {
                        __memcpy_chk(&v99, dest, v51, 8);
                        if ( v73 == 2 )
                          swap_value((__int64 *)&v99, (__int64 *)&v99, v51);
                      }
                      src = nullptr;
                      v63 = ptr.__size[28] & 0xF;
                      if ( (ptr.__size[28] & 0xD | 2) == 3 )
                      {
                        if ( !*((_WORD *)&ptr.__align + 15) )
                          goto LABEL_185;
                      }
                      else if ( !*((_WORD *)&ptr.__align + 15) || (ptr.__size[28] & 0xF) != 0 )
                      {
                        goto LABEL_185;
                      }
                      v65 = (unsigned int)*((unsigned __int16 *)&ptr.__align + 15) - 1;
                      if ( a1[14] <= v65
                        || ((v66 = a1[13], !*(_QWORD *)(v66 + 120 * v65 + 24))
                          ? (v67 = &byte_F154B)
                          : (v67 = *(const char **)(v66 + 120 * v65 + 16)),
                            strncmp(v67, ".debug_", 7u)) )
                      {
LABEL_185:
                        v68 = *v79;
                        v69 = *v79 + 1;
                        if ( *v75 >= v69 )
                        {
                          v70 = (_QWORD *)v12->__align;
                        }
                        else
                        {
                          v70 = qvector_reserve(v12, (void *)v12->__align, v69, 8u);
                          v12->__align = (__int64)v70;
                          v68 = *v79;
                        }
                        v46 = *(_DWORD *)v94;
                        v70[v68] = v81;
                        ++*v79;
                        v64 = 212;
                        goto LABEL_189;
                      }
                      src = v99;
                      if ( v63 <= 1 )
                        src = (char *)ptr.__list.__next + (unsigned __int64)v99;
                      if ( *(_DWORD *)v94 != 243 )
                        goto LABEL_100;
                      ptr.__align = 0;
                      __memcpy_chk(&ptr, dest, v51, 8);
                      if ( (unsigned int)(v80 - 37) < 4 )
                      {
                        v50 = &src[-ptr.__align];
                      }
                      else
                      {
                        if ( (unsigned int)(v80 - 33) > 3 )
                        {
LABEL_100:
                          memcpy(dest, &src, v51);
                          if ( v73 == 2 )
                            swap_value((__int64 *)dest, (__int64 *)dest, v51);
                          v46 = *(_DWORD *)v94;
                          goto LABEL_108;
                        }
                        v50 = &src[ptr.__align];
                      }
                      src = v50;
                      goto LABEL_100;
                    }
LABEL_162:
                    v51 = 4;
                  }
                  v46 = *(_DWORD *)v94;
                  v60 = v81;
                  goto LABEL_169;
                }
              }
              else if ( v54 < sub_56328(&v103, v84) >> 4 )
              {
                v57 = 16 * v54;
                goto LABEL_114;
              }
              v59 = 213;
              goto LABEL_118;
            }
LABEL_78:
            *(&ptr.__align + 1) = 0;
            qfree(align);
            ptr.__align = 0;
            *(&ptr.__align + 2) = 0;
            goto LABEL_79;
          }
          v38 = ptr.__align;
          v39 = 0;
          v40 = 0;
          do
          {
            v90(v38, (unsigned int)v40++, v92, *(unsigned int *)v94, *(_QWORD *)&v94[4] + v39);
            v39 += 32;
          }
          while ( v40 < v86 );
        }
        v32 = 0;
        goto LABEL_76;
      }
      sub_39FA0((__int64)"No relsec section.\n");
    }
    else
    {
      sub_39FA0((__int64)"No symtab section.\n");
    }
    *a4 = 232;
LABEL_52:
    v15 = 1;
    goto LABEL_53;
  }
  if ( qword_166CB0 && *(_BYTE *)(qword_166CB0 + 184) )
    sub_39FA0((__int64)"File is not relocatable; skipping relocations.\n");
  v15 = 0;
LABEL_53:
  sub_4BE70(v102);
  close_linput(v18);
  return v15;
}
// 9397C: variable 'v4' is possibly undefined
// 9397C: variable 'v5' is possibly undefined
// 93A14: variable 'v113' is possibly undefined
// 37290: using guessed type __int64 __fastcall __memcpy_chk(_QWORD, _QWORD, _QWORD, _QWORD);
// F154B: using guessed type char byte_F154B;
// 166CB0: using guessed type __int64 qword_166CB0;
// 168DF0: using guessed type char under_debugger;
