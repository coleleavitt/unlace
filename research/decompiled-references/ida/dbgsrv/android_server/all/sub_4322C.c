/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4322C
// Address: 0x000000000004322C

//----- (000000000004322C) ----------------------------------------------------
pthread_mutex_t *__fastcall sub_4322C(pthread_mutex_t *result, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v3; // x19
  _QWORD *v4; // x20
  unsigned __int64 v5; // x21
  unsigned __int64 v6; // x22
  _QWORD *v7; // x23
  __int64 v8; // x24
  char *v9; // x25
  __int64 v10; // x29
  __int64 v11; // x30
  const char *v12; // x0
  const char *v13; // x1
  pthread_mutex_t *v14; // x19
  int v15; // w20
  void *align; // x0
  void *v17; // x0
  unsigned int owner; // w21
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x0
  size_t v22; // x21
  void *v23; // x8
  FILE *v24; // x0
  const char *v25; // x22
  pthread_mutex_t *v26; // x21
  int *v27; // x0
  const char *v28; // x0
  unsigned int v29; // w19
  size_t v30; // x0
  unsigned __int64 v31; // x24
  size_t v32; // x23
  void *v33; // x0
  unsigned __int64 v34; // x23
  const void *v35; // x21
  void **v36; // x24
  void *v37; // x0
  struct __pthread_internal_list *v38; // x8
  struct __pthread_internal_list *next; // x8
  unsigned __int64 v40; // x22
  const char *v41; // x21
  _QWORD *v42; // x26
  __int64 v43; // x24
  int v44; // w27
  const char *v45; // x0
  pthread_mutex_t *v46; // x0
  _QWORD *v48; // x22
  __int64 v49; // x8
  struct __pthread_internal_list *v50; // x11
  __int64 v51; // x12
  __int64 v52; // x10
  unsigned __int64 v53; // x9
  __int64 v54; // x0
  __int64 v55; // x8
  __int64 v56; // x8
  struct __pthread_internal_list *v57; // x11
  __int64 v58; // x12
  __int64 v59; // x10
  unsigned __int64 v60; // x9
  __int64 v61; // x0
  __int64 v62; // x8
  const char *v63; // x0
  __int64 v64; // x20
  __int64 v65; // x21
  char *v66; // x1
  void *ptr; // [xsp+8h] [xbp-1348h] BYREF
  __int64 v68; // [xsp+10h] [xbp-1340h]
  __int64 v69; // [xsp+18h] [xbp-1338h]
  void *v70; // [xsp+20h] [xbp-1330h] BYREF
  __int64 v71; // [xsp+28h] [xbp-1328h]
  __int64 v72; // [xsp+30h] [xbp-1320h]
  char v73; // [xsp+3Ch] [xbp-1314h] BYREF
  __int64 v74; // [xsp+40h] [xbp-1310h] BYREF
  __int64 v75; // [xsp+48h] [xbp-1308h]
  char v76; // [xsp+50h] [xbp-1300h]
  _BYTE dest[52]; // [xsp+54h] [xbp-12FCh] BYREF
  pthread_mutex_t src[102]; // [xsp+88h] [xbp-12C8h] BYREF
  void *v79; // [xsp+1088h] [xbp-2C8h] BYREF
  unsigned __int64 v80; // [xsp+1090h] [xbp-2C0h]
  __int64 v81; // [xsp+1098h] [xbp-2B8h]
  __int64 v82; // [xsp+1188h] [xbp-1C8h]
  __int64 (__fastcall **v83)(); // [xsp+1198h] [xbp-1B8h] BYREF
  int v84; // [xsp+11A0h] [xbp-1B0h]
  void **v85; // [xsp+11A8h] [xbp-1A8h]
  __int64 v86; // [xsp+12A8h] [xbp-A8h]
  char *v87; // [xsp+12C8h] [xbp-88h]
  __int64 v88; // [xsp+12D0h] [xbp-80h]
  _QWORD *v89; // [xsp+12D8h] [xbp-78h]
  unsigned __int64 v90; // [xsp+12E0h] [xbp-70h]
  unsigned __int64 v91; // [xsp+12E8h] [xbp-68h]
  _QWORD *v92; // [xsp+12F0h] [xbp-60h]
  _QWORD *v93; // [xsp+12F8h] [xbp-58h]
  __int64 v94; // [xsp+1300h] [xbp-50h]
  __int64 v95; // [xsp+1308h] [xbp-48h]

  if ( *a2 > (unsigned __int64)a3 || (v3 = a3, v4 = (_QWORD *)(*a2 + 80LL * a2[1]), v4 <= a3) )
  {
    if ( !under_debugger )
      result = interr(30067);
    goto LABEL_21;
  }
  v5 = a3[1];
  if ( !v5 )
    return nullptr;
  v6 = *a3;
  v7 = a3 + 10;
  if ( a3 + 10 != v4 )
  {
    v8 = a3[3];
    v9 = &byte_F154B;
    do
    {
      if ( v8 )
        v12 = (const char *)v3[2];
      else
        v12 = &byte_F154B;
      if ( v7[3] )
        v13 = (const char *)v7[2];
      else
        v13 = &byte_F154B;
      if ( strcmp(v12, v13) )
        break;
      v5 = v7[1];
      v7 += 10;
    }
    while ( v4 != v7 );
  }
  result = (pthread_mutex_t *)(v5 - v6);
  if ( v5 <= v6 )
  {
    if ( !under_debugger )
    {
      interr(30068);
      return nullptr;
    }
LABEL_21:
    __break(1u);
    v87 = v9;
    v88 = v8;
    v89 = v7;
    v90 = v6;
    v91 = v5;
    v92 = v4;
    v93 = v3;
    v94 = v10;
    v95 = v11;
    v14 = result;
    v15 = (int)a3;
    v86 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
    align = (void *)result[44].__align;
    v14[13].__owner = (int)a2;
    if ( align )
    {
      *(&v14[44].__align + 1) = 0;
      qfree(align);
      LODWORD(a2) = v14[13].__owner;
      v14[44].__align = 0;
      *(&v14[44].__align + 2) = 0;
    }
    v14[46].__count = (unsigned int)a2;
    v14[46].__size[12] = 0;
    v14[48].__owner = 0;
    sub_3D2F8((__int64)v14, (int)a2);
    qwait_timed((int)&v73, v14[13].__owner);
    sub_99D18((__int64)v14, "process pid/tid: %d\n", v14[13].__owner);
    v14[48].__size[12] = 0;
    v74 = 0xFFFFFFFFLL;
    v75 = -1;
    v76 = 0;
    memset(dest, 0, sizeof(dest));
    set_debug_event_code((__int64)&v74, 1);
    if ( (*(_DWORD *)dest & 0xFFFFFFFu) > 0xB || ((1 << dest[0]) & 0x902) == 0 )
    {
      if ( under_debugger )
        goto LABEL_122;
      v17 = interr(3295);
      goto LABEL_116;
    }
    owner = v14[13].__owner;
    ptr = &v79;
    LODWORD(v74) = owner;
    HIDWORD(v74) = owner;
    v68 = 272;
    if ( dword_164020 < 0 )
    {
      v70 = &v83;
      v71 = 272;
      dword_164020 = ptrace(PTRACE_GETREGSET, owner, 1, &v70) == 0;
      if ( dword_164020 > 0 )
      {
LABEL_27:
        v19 = ptrace(PTRACE_GETREGSET, owner, 1, &ptr);
        v20 = v82;
        if ( v19 )
          v20 = -1;
LABEL_32:
        v75 = v20;
        v76 = 1;
        (*(void (__fastcall **)(pthread_mutex_t *, _QWORD, pthread_mutex_t *, __int64))(v14->__align + 656))(
          v14,
          (unsigned int)v14[13].__owner,
          src,
          4096);
        v21 = __strlen_chk(src, 4096);
        v22 = v21;
        if ( v21 )
        {
          v23 = *(void **)&dest[4];
          if ( *(_QWORD *)&dest[20] < (unsigned __int64)(v21 + 1) )
          {
            v23 = qvector_reserve((pthread_mutex_t *)&dest[4], *(void **)&dest[4], v21 + 1, 1u);
            *(_QWORD *)&dest[4] = v23;
          }
          *(_QWORD *)&dest[12] = v22 + 1;
          memmove(v23, src, v22);
          *(_BYTE *)(*(_QWORD *)&dest[4] + v22) = 0;
        }
        else
        {
          *(_QWORD *)&dest[12] = 0;
        }
        *(_QWORD *)&dest[44] = -1;
        *(_OWORD *)&dest[28] = xmmword_F1810;
        qsnprintf(src, 4096, "/proc/%u/maps", v14[13].__owner);
        v24 = fopenRT((const char *)src);
        v14[48].__align = (__int64)v24;
        if ( !v24 )
        {
          v27 = (int *)__errno(0);
          v28 = (const char *)winerr(*v27);
          sub_3A0D8((__int64)v14, "%s: %s\n", (const char *)src, v28);
          v29 = 0;
LABEL_113:
          free_debug_event((__int64)&v74);
          return (pthread_mutex_t *)v29;
        }
        if ( *(_QWORD *)&dest[12] )
        {
          v25 = *(const char **)&dest[4];
          v26 = v14 + 49;
          if ( !*(_QWORD *)&dest[4] )
            goto LABEL_46;
        }
        else
        {
          v26 = v14 + 49;
          v25 = &byte_F154B;
        }
        v30 = strlen(v25);
        if ( v30 )
        {
          v31 = v30 + 1;
          v32 = v30;
          if ( *(&v14[49].__align + 2) >= v30 + 1 )
          {
            v33 = (void *)v14[49].__align;
          }
          else
          {
            v33 = qvector_reserve(v26, (void *)v14[49].__align, v31, 1u);
            v14[49].__align = (__int64)v33;
          }
          *(&v14[49].__align + 1) = v31;
          memmove(v33, v25, v32);
          *(_BYTE *)(v14[49].__align + v32) = 0;
          if ( v14[18].__size[13] )
          {
LABEL_56:
            v81 = 0;
            v80 = 0;
            v79 = nullptr;
            if ( v14->__size[36] )
            {
              v38 = (struct __pthread_internal_list *)*(&v14->__align + 1);
              *((_DWORD *)&v14->__align + 8) = 4;
              v14->__list.__prev = v38;
            }
            v14[6].__count = 4;
            v17 = (void *)sub_3EC08((unsigned __int64)v14, (__int64)&v79, 0);
            if ( (int)v17 <= 0 )
              goto LABEL_120;
            sub_3E6A0(v14);
            sub_39BD8(v14);
            v17 = (void *)(*(__int64 (__fastcall **)(pthread_mutex_t *))(v14->__align + 592))(v14);
            if ( v14[16].__nusers != -1 && v14[16].__kind != -1 )
            {
              next = v14[13].__list.__next;
              if ( !next )
                LODWORD(next) = v14[16].__owner;
              if ( (int)next > 0 )
              {
                nullsub_1(1);
                v40 = v80;
                if ( *(_QWORD *)&dest[12] )
                  v41 = *(const char **)&dest[4];
                else
                  v41 = &byte_F154B;
                if ( !v80 )
                  goto LABEL_78;
                v42 = v79;
                v43 = 0;
                v44 = 1;
                while ( 1 )
                {
                  v45 = v42[10 * v43 + 3] ? (const char *)v42[10 * v43 + 2] : &byte_F154B;
                  v46 = (pthread_mutex_t *)strcmp(v45, v41);
                  if ( !(_DWORD)v46 )
                    break;
                  v43 = v44;
                  if ( v40 <= v44++ )
                    goto LABEL_78;
                }
                v48 = &v42[10 * v43];
                if ( v48 )
                {
                  *(_QWORD *)&dest[28] = *v48;
                  *(_QWORD *)&dest[36] = sub_4322C(v46, &v79, &v42[10 * v43]);
                  if ( !v14[18].__size[13] )
                    *(_QWORD *)&dest[44] = *v48;
                }
                else
                {
LABEL_78:
                  if ( !v14[18].__size[13] )
                    sub_3A0D8((__int64)v14, "%s: nowhere in the process memory?!\n", v41);
                }
                if ( (sub_42A74((unsigned __int64)v14, (__int64 *)&v79) & 1) == 0 )
                  sub_3A0D8((__int64)v14, "Could not set the shlib bpt, shared object events will not be handled\n");
                if ( (*(_DWORD *)dest & 0xFFFFFFF) != 0 )
                {
                  v49 = *(&v14[3].__align + 1);
                  v50 = v14[3].__list.__next;
                  v51 = v14[4].__align;
                  if ( *(&v14[3].__align + 2) == v49 )
                    v52 = 0;
                  else
                    v52 = 56 * ((*(&v14[3].__align + 2) - v49) >> 3) - 1;
                  v53 = (unsigned __int64)v50 + v51;
                  if ( (struct __pthread_internal_list *)v52 == (struct __pthread_internal_list *)((char *)v50 + v51) )
                  {
                    sub_4825C((__int64)&v14[3]);
                    v49 = *(&v14[3].__align + 1);
                    v53 = (unsigned __int64)v14[3].__list.__next + v14[4].__align;
                  }
                  v54 = *(_QWORD *)(v49 + 8 * (v53 / 0x38)) + 72 * (v53 % 0x38);
                  *(_QWORD *)v54 = 0xFFFFFFFFLL;
                  *(_QWORD *)(v54 + 8) = -1;
                  *(_BYTE *)(v54 + 16) = 0;
                  *(_DWORD *)(v54 + 20) = 0;
                  copy_debug_event(v54, (__int64)&v74);
                  v55 = v14[4].__align;
                  v14[48].__size[12] = 0;
                  v14[4].__align = v55 + 1;
                }
                if ( !v15 )
                  goto LABEL_110;
                set_debug_event_code((__int64)&v74, 11);
                if ( (*(_DWORD *)dest & 0xFFFFFFFu) <= 0xB && ((1 << dest[0]) & 0x902) != 0 )
                {
                  if ( (*(_DWORD *)dest & 0xFFFFFFF) != 0 )
                  {
                    v56 = *(&v14[3].__align + 1);
                    v57 = v14[3].__list.__next;
                    v58 = v14[4].__align;
                    if ( *(&v14[3].__align + 2) == v56 )
                      v59 = 0;
                    else
                      v59 = 56 * ((*(&v14[3].__align + 2) - v56) >> 3) - 1;
                    v60 = (unsigned __int64)v57 + v58;
                    if ( (struct __pthread_internal_list *)v59 == (struct __pthread_internal_list *)((char *)v57 + v58) )
                    {
                      sub_4825C((__int64)&v14[3]);
                      v56 = *(&v14[3].__align + 1);
                      v60 = (unsigned __int64)v14[3].__list.__next + v14[4].__align;
                    }
                    v61 = *(_QWORD *)(v56 + 8 * (v60 / 0x38)) + 72 * (v60 % 0x38);
                    *(_QWORD *)v61 = 0xFFFFFFFFLL;
                    *(_QWORD *)(v61 + 8) = -1;
                    *(_BYTE *)(v61 + 16) = 0;
                    *(_DWORD *)(v61 + 20) = 0;
                    copy_debug_event(v61, (__int64)&v74);
                    v62 = v14[4].__align;
                    v14[48].__size[12] = 0;
                    v14[4].__align = v62 + 1;
                  }
                  if ( (qgetenv("IDA_SKIP_SYMS", 0) & 1) == 0 )
                  {
                    if ( *(_QWORD *)&dest[12] )
                      v63 = *(const char **)&dest[4];
                    else
                      v63 = &byte_F154B;
                    v70 = nullptr;
                    v71 = 0;
                    v72 = 0;
                    v84 = 4;
                    v83 = off_156700;
                    v85 = &v70;
                    sub_5991C(v63, &v83, 0);
                    v64 = *(_QWORD *)&dest[28];
                    v65 = *(_QWORD *)&dest[36];
                    if ( *(_QWORD *)&dest[12] )
                      v66 = *(char **)&dest[4];
                    else
                      v66 = &byte_F154B;
                    sub_39140(&ptr, v66);
                    sub_41888(&v83, v64, v65, (__int64)&ptr, (__int64)&v70);
                    if ( ptr )
                    {
                      v68 = 0;
                      qfree(ptr);
                      ptr = nullptr;
                      v69 = 0;
                    }
                    sub_41A94((__int64)v14, (__int64)&v83);
                    sub_41960((__int64)&v83);
                    if ( v70 )
                    {
                      v71 = 0;
                      qfree(v70);
                      v70 = nullptr;
                      v72 = 0;
                    }
                  }
LABEL_110:
                  if ( v79 )
                  {
                    sub_3967C((__int64 *)&v79, 0);
                    qfree(v79);
                    v79 = nullptr;
                    v81 = 0;
                  }
                  v29 = 1;
                  goto LABEL_113;
                }
                if ( !under_debugger )
                {
                  v17 = interr(3295);
LABEL_120:
                  if ( !under_debugger )
                    v17 = interr(30065);
                }
LABEL_122:
                __break(1u);
                sub_39134(v17);
              }
            }
LABEL_116:
            if ( !under_debugger )
              interr(30016);
            goto LABEL_122;
          }
LABEL_47:
          v34 = *(&v26->__align + 1);
          if ( v34 < 2 )
          {
            *(&v14[12].__align + 1) = 0;
          }
          else
          {
            v35 = (const void *)v26->__align;
            v36 = (void **)&v14[12];
            if ( *(&v14[12].__align + 2) >= v34 )
            {
              v37 = *v36;
            }
            else
            {
              v37 = qvector_reserve(v14 + 12, *v36, v34, 1u);
              *v36 = v37;
            }
            *(&v14[12].__align + 1) = v34;
            memmove(v37, v35, v34 - 1);
            *(_BYTE *)(v14[12].__align + v34 - 1) = 0;
          }
          goto LABEL_56;
        }
LABEL_46:
        *(&v26->__align + 1) = 0;
        if ( v14[18].__size[13] )
          goto LABEL_56;
        goto LABEL_47;
      }
    }
    else if ( dword_164020 > 0 )
    {
      goto LABEL_27;
    }
    v20 = -1;
    goto LABEL_32;
  }
  return result;
}
// 43310: variable 'v9' is possibly undefined
// 43314: variable 'v8' is possibly undefined
// 43314: variable 'v7' is possibly undefined
// 43318: variable 'v6' is possibly undefined
// 43318: variable 'v5' is possibly undefined
// 4331C: variable 'v4' is possibly undefined
// 4331C: variable 'v3' is possibly undefined
// 43320: variable 'v10' is possibly undefined
// 43320: variable 'v11' is possibly undefined
// 43338: variable 'a3' is possibly undefined
// 43344: variable 'a2' is possibly undefined
// 43B3C: variable 'v17' is possibly undefined
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 37590: using guessed type __int64 __fastcall __strlen_chk(_QWORD, _QWORD);
// 9DA6C: using guessed type __int64 __fastcall nullsub_1(_QWORD);
// F154B: using guessed type char byte_F154B;
// F1810: using guessed type __int128 xmmword_F1810;
// 156700: using guessed type __int64 (__fastcall *off_156700[3])();
// 164020: using guessed type int dword_164020;
// 168DF0: using guessed type char under_debugger;
