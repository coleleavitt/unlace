__int64 __fastcall sub_6AC810(const __m128i *a1, void *a2, _QWORD *a3, __int64 a4, const char *a5, __int64 a6)
{
  int v7; // r13d
  int v9; // ebp
  __int64 i; // rax
  __int64 v11; // rbx
  char v12; // si
  unsigned int v13; // esi
  int v14; // ebp
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // r8
  void *v18; // rax
  __int64 v19; // rdi
  void *v20; // rsi
  __int64 v21; // rax
  size_t v22; // r8
  char *v23; // r10
  unsigned __int64 v24; // r9
  void *v25; // rsi
  char *v26; // rax
  __int64 v27; // rax
  size_t v28; // r9
  char *v29; // r13
  unsigned __int64 v30; // r8
  void *v31; // rsi
  char *v32; // rax
  char *v33; // rax
  char *v34; // rdx
  void **v35; // r15
  void **v36; // rbx
  bool v37; // bp
  int v38; // ebx
  __int64 v39; // rsi
  const char *v40; // rsi
  void *v41; // rsi
  void *v42; // r13
  void *v43; // r12
  void **v44; // rax
  void *v45; // r13
  void *v46; // r12
  int v47; // ebx
  char v48; // al
  int v49; // ebp
  unsigned __int8 v50; // dl
  int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 (__fastcall *v54)(__int64, _QWORD *, __int64, __int64, __int64); // rax
  int v55; // eax
  char v56; // al
  int v57; // eax
  int v58; // r12d
  __int64 v59; // rax
  int v60; // eax
  __int64 v61; // rax
  __int64 (*v62)(); // rdx
  int v63; // eax
  int v64; // edx
  char v65; // al
  char v66; // al
  void **v67; // r15
  _WORD *v68; // rsi
  char v69; // dl
  unsigned int v70; // eax
  __int64 v71; // rbp
  __int64 v72; // r15
  __int64 (__fastcall *v73)(__int64, _QWORD *, __int64, __int64, __int64); // rax
  __int64 v74; // rdx
  char has_stkframe_hole; // al
  int v76; // eax
  int v77; // edx
  void **v78; // rbx
  void **v79; // [rsp+0h] [rbp-168h]
  __int64 v80; // [rsp+8h] [rbp-160h]
  void **v81; // [rsp+10h] [rbp-158h]
  __int64 *v82; // [rsp+18h] [rbp-150h]
  char v83; // [rsp+27h] [rbp-141h]
  const __m128i *v84; // [rsp+28h] [rbp-140h]
  void *v85; // [rsp+30h] [rbp-138h]
  __int64 v86; // [rsp+38h] [rbp-130h]
  const char *v87; // [rsp+40h] [rbp-128h]
  _QWORD *v88; // [rsp+48h] [rbp-120h]
  size_t n; // [rsp+50h] [rbp-118h]
  char *v90; // [rsp+58h] [rbp-110h]
  __int64 v91; // [rsp+60h] [rbp-108h] BYREF
  __int64 v92; // [rsp+68h] [rbp-100h] BYREF
  void *v93; // [rsp+70h] [rbp-F8h] BYREF
  __int128 v94; // [rsp+78h] [rbp-F0h]
  void *ptr; // [rsp+90h] [rbp-D8h] BYREF
  __int128 v96; // [rsp+98h] [rbp-D0h]
  void *dest[3]; // [rsp+B0h] [rbp-B8h] BYREF
  int v98; // [rsp+C8h] [rbp-A0h]
  __int16 v99; // [rsp+CCh] [rbp-9Ch]
  void *v100[3]; // [rsp+D0h] [rbp-98h] BYREF
  void *v101[3]; // [rsp+E8h] [rbp-80h] BYREF
  __int128 v102; // [rsp+100h] [rbp-68h]
  __int64 v103; // [rsp+110h] [rbp-58h] BYREF
  int v104; // [rsp+118h] [rbp-50h]
  _BYTE src[5]; // [rsp+123h] [rbp-45h] BYREF
  _QWORD v106[8]; // [rsp+128h] [rbp-40h] BYREF

  v85 = a2;
  v84 = a1;
  v88 = a3;
  v87 = a5;
  v86 = a6;
  v106[0] = __readfsqword(0x28u);
  if ( !(unsigned __int8)get_tinfo_property(*(_QWORD *)(a4 + 32), 2)
    || (get_tinfo_property(*(_QWORD *)(a4 + 32), 2) & 0x2F) == 0xD && get_tinfo_size(0, *(_QWORD *)(a4 + 32), 0) == -1 )
  {
    return (unsigned int)-1;
  }
  v9 = 0;
  for ( i = 0; (unsigned __int64)v9 < *(_QWORD *)(a4 + 8); i = ++v9 )
  {
    v11 = *(_QWORD *)a4 + 80 * i;
    if ( !(unsigned __int8)get_tinfo_property(*(_QWORD *)(v11 + 64), 2)
      || (get_tinfo_property(*(_QWORD *)(v11 + 64), 2) & 0x2F) == 0xD
      && get_tinfo_size(0, *(_QWORD *)(v11 + 64), 0) == -1 )
    {
      return (unsigned int)-1;
    }
  }
  v12 = *(_BYTE *)(a4 + 88);
  v93 = nullptr;
  v94 = 0;
  LOBYTE(v13) = v12 & 0xF0;
  if ( (_BYTE)v13 != 0xC0 )
  {
    if ( (unsigned __int8)v13 > 0x10u )
    {
      v13 = (unsigned __int8)v13;
      goto LABEL_14;
    }
    goto LABEL_122;
  }
  v13 = *(_DWORD *)(a4 + 28);
  if ( v13 <= 0x10 )
LABEL_122:
    v13 = getinf(99);
  if ( v13 <= 0x1FF )
  {
    if ( v13 > 0xFF )
    {
LABEL_85:
      if ( v13 != 256 && v13 != 176 )
      {
        v83 = 1;
        v7 = 2 * (sub_3792E0(0x7DCu, &v93, a4) == 2);
        if ( !*(_QWORD *)(a4 + 8) )
          goto LABEL_88;
        goto LABEL_17;
      }
      goto LABEL_15;
    }
    if ( (v13 & 0xFFFFFF0F) == 0 )
    {
LABEL_14:
      if ( v13 - 208 <= 0x2F )
        goto LABEL_15;
      goto LABEL_85;
    }
  }
  sub_3DD980((__int64)v84);
  if ( !v61 )
  {
    v7 = -1;
    goto LABEL_114;
  }
  v62 = *(__int64 (**)())(*(_QWORD *)v61 + 72LL);
  if ( v62 != sub_3DB8B0 )
  {
    v7 = ((__int64 (__fastcall *)(__int64, __int64))v62)(v61, a4);
    if ( v7 < 0 )
      goto LABEL_114;
    if ( *(_QWORD *)(a4 + 8) )
    {
      v83 = 0;
      goto LABEL_17;
    }
LABEL_58:
    if ( v7 == 2 )
    {
      v63 = *(_DWORD *)(a4 + 24);
      v64 = v63;
      BYTE1(v64) = BYTE1(v63) & 0xFE;
      *(_DWORD *)(a4 + 24) = v64;
      if ( (v63 & 8) == 0 )
        goto LABEL_134;
      v38 = 2;
      v37 = 0;
LABEL_109:
      v57 = sub_6AB940(v84, (__int64)v85, (__int64 *)(a4 + 32), 0, 0);
      v7 = v57;
      if ( v57 < 0 )
        goto LABEL_114;
      v38 |= v57;
      if ( *(_QWORD *)(a4 + 8) )
      {
        v58 = 0;
        v59 = 0;
        do
        {
          v60 = sub_6AB940(
                  v84,
                  (__int64)v85,
                  (__int64 *)(*(_QWORD *)a4 + 80 * v59 + 64),
                  *(_QWORD *)(*(_QWORD *)a4 + 80 * v59 + 16),
                  0);
          v7 = v60;
          if ( v60 < 0 )
            goto LABEL_114;
          ++v58;
          v38 |= v60;
          v59 = v58;
        }
        while ( (unsigned __int64)v58 < *(_QWORD *)(a4 + 8) );
      }
      *(_DWORD *)(a4 + 24) &= ~8u;
      if ( !v37 )
      {
        v7 = v38;
        goto LABEL_114;
      }
LABEL_136:
      v48 = *(_BYTE *)(a4 + 88);
      v49 = *(_DWORD *)(a4 + 28);
      v50 = v48 & 0xF0;
      goto LABEL_137;
    }
    if ( (*(_BYTE *)(a4 + 24) & 8) == 0 )
      goto LABEL_114;
    if ( v7 )
    {
      v38 = v7;
      v37 = 0;
      goto LABEL_109;
    }
LABEL_61:
    v37 = 0;
    v38 = 1;
    goto LABEL_109;
  }
LABEL_15:
  if ( !*(_QWORD *)(a4 + 8) )
  {
    v7 = *(_DWORD *)(a4 + 24) & 8;
    if ( !v7 )
      goto LABEL_114;
    goto LABEL_61;
  }
  v83 = 0;
  v7 = 0;
LABEL_17:
  v14 = 0;
  v15 = 0;
  do
  {
    memset(v100, 0, sizeof(v100));
    v16 = *(_QWORD *)a4 + 80 * v15;
    v80 = v16 + 64;
    if ( (getinf(57) & 0xF) == 6
      && ((unsigned int)verify_tinfo(*(_QWORD *)(v16 + 64)) || !get_tinfo_size(0, *(_QWORD *)(v16 + 64), 0)) )
    {
      v39 = *(_QWORD *)(v16 + 64);
      if ( (v39 & 0x100) != 0 )
      {
        if ( get_tinfo_pdata(v100, v39, 0) )
        {
          v40 = haystack;
          if ( v100[1] )
            v40 = (const char *)v100[0];
          sub_6AB550(v85, v40);
        }
      }
    }
    if ( v100[0] )
    {
      v100[1] = nullptr;
      qfree(v100[0]);
    }
    if ( v83 || !(unsigned int)get_tinfo_property(*(_QWORD *)(v16 + 64), 12) )
    {
      v91 = 0;
      v82 = &v91;
      copy_tinfo_t(&v91);
      dest[0] = nullptr;
      dest[1] = nullptr;
      v79 = dest;
      if ( !(unsigned __int8)get_tinfo_details(*(_QWORD *)(v16 + 64), 11, dest) )
      {
        clear_tinfo_t(v79);
        v33 = (char *)v93;
        v34 = (char *)v93 + 4 * v94;
        if ( v93 == v34 )
          goto LABEL_53;
        while ( v14 != *(_DWORD *)v33 )
        {
          v33 += 4;
          if ( v34 == v33 )
            goto LABEL_53;
        }
        if ( v34 == v33 )
          goto LABEL_53;
        v35 = v79;
        ptr = nullptr;
        *(_OWORD *)v100 = 0;
        dest[0] = nullptr;
        copy_tinfo_t(&v100[1]);
        v100[2] = nullptr;
        v81 = &v100[2];
        copy_tinfo_t(&v100[2]);
        LODWORD(v101[0]) = 0;
        WORD2(v101[0]) = 0;
        clear_tinfo_t(v35);
        clear_tinfo_t(&ptr);
        copy_tinfo_t(v100);
        create_tinfo(v80, 10, 10, v100);
        clear_tinfo_t(v81);
        clear_tinfo_t(&v100[1]);
        clear_tinfo_t(v100);
        *(_DWORD *)(v16 + 72) |= 4u;
LABEL_52:
        v7 = 2;
LABEL_53:
        if ( (get_tinfo_property(*(_QWORD *)(v16 + 64), 2) & 0xF) == 0xC )
        {
          v36 = v79;
          ptr = nullptr;
          *(_OWORD *)v100 = 0;
          dest[0] = nullptr;
          copy_tinfo_t(&v100[1]);
          v100[2] = nullptr;
          v81 = &v100[2];
          copy_tinfo_t(&v100[2]);
          LODWORD(v101[0]) = 0;
          WORD2(v101[0]) = 0;
          clear_tinfo_t(v36);
          clear_tinfo_t(&ptr);
          copy_tinfo_t(v100);
          create_tinfo(v80, 10, 10, v100);
          clear_tinfo_t(v81);
          v7 = 2;
          clear_tinfo_t(&v100[1]);
          clear_tinfo_t(v100);
        }
        clear_tinfo_t(v82);
        goto LABEL_56;
      }
      ptr = nullptr;
      v92 = 0;
      *(_OWORD *)v100 = 0;
      copy_tinfo_t(&v100[1]);
      v100[2] = nullptr;
      v81 = &v100[2];
      copy_tinfo_t(&v100[2]);
      LODWORD(v101[0]) = 0;
      WORD2(v101[0]) = 0;
      clear_tinfo_t(&v92);
      clear_tinfo_t(&ptr);
      v18 = v100[0];
      v100[0] = dest[0];
      dest[0] = v18;
      create_tinfo(v80, 10, 10, v100);
      clear_tinfo_t(v81);
      clear_tinfo_t(&v100[1]);
      clear_tinfo_t(v100);
      clear_tinfo_t(v79);
      v19 = v91;
      *(_DWORD *)(v16 + 72) |= 8u;
      memset(v100, 0, sizeof(v100));
      memset(v101, 0, sizeof(v101));
      ptr = nullptr;
      v96 = 0;
      if ( (v19 & 0x100) != 0 )
      {
        if ( get_tinfo_pdata(&ptr, v19, 0) )
        {
          v41 = v100[0];
          if ( v100[2] <= &byte_9[4] )
          {
            v100[0] = (void *)qvector_reserve(v100, v100[0], 14, 1);
            v41 = v100[0];
          }
          v100[1] = byte_9 + 5;
          qmemcpy(v41, "__org_typedef", 13);
          *((_BYTE *)v100[0] + 13) = 0;
          if ( !(_QWORD)v96 || (memset(dest, 0, sizeof(dest)), v42 = ptr, v43 = (void *)(v96 - 1), (_QWORD)v96 == 1) )
          {
            v46 = nullptr;
            v45 = nullptr;
            v44 = nullptr;
          }
          else
          {
            dest[0] = (void *)qvector_reserve(v79, 0, v96 - 1, 1);
            memset((char *)dest[0] + (unsigned __int64)dest[1], 0, (size_t)v43 - (unsigned __int64)dest[1]);
            dest[1] = v43;
            memcpy(dest[0], v42, (size_t)v43);
            v44 = (void **)dest[0];
            v45 = dest[1];
            v46 = dest[2];
          }
          memset(dest, 0, sizeof(dest));
          if ( v101[0] )
          {
            v81 = v44;
            v101[1] = nullptr;
            qfree(v101[0]);
            v101[1] = v45;
            v101[2] = v46;
            v101[0] = v81;
            if ( dest[0] )
            {
              dest[1] = nullptr;
              qfree(dest[0]);
            }
          }
          else
          {
            v101[0] = v44;
            v101[1] = v45;
            v101[2] = v46;
          }
          goto LABEL_40;
        }
        v19 = v91;
      }
      dest[0] = nullptr;
      dest[1] = nullptr;
      get_tinfo_details(v19, 11, v79);
      v20 = v100[0];
      if ( v100[2] <= &byte_9[3] )
      {
        v100[0] = (void *)qvector_reserve(v100, v100[0], 13, 1);
        v20 = v100[0];
      }
      v100[1] = byte_9 + 4;
      qmemcpy(v20, "__org_arrdim", 12);
      *((_BYTE *)v100[0] + 12) = 0;
      v21 = pack_dd(src, v106, LODWORD(dest[1])) - (_QWORD)src;
      v22 = v21;
      if ( !v21 )
      {
LABEL_33:
        v27 = pack_dd(src, v106, HIDWORD(dest[1])) - (_QWORD)src;
        v28 = v27;
        if ( !v27 )
        {
LABEL_39:
          clear_tinfo_t(v79);
LABEL_40:
          set_tinfo_attr((unsigned __int64 *)(v16 + 64), (__int64)v100, 1);
          if ( ptr )
          {
            *(_QWORD *)&v96 = 0;
            qfree(ptr);
          }
          if ( v101[0] )
          {
            v101[1] = nullptr;
            qfree(v101[0]);
          }
          if ( v100[0] )
          {
            v100[1] = nullptr;
            qfree(v100[0]);
          }
          goto LABEL_52;
        }
        v29 = (char *)v101[1];
        v30 = (unsigned __int64)v101[1] + v27;
        if ( __CFADD__(v101[1], v27) )
        {
          if ( v101[1] > (void *)0x7FFFFFFFFFFFFFFELL )
          {
            if ( v101[1] != (void *)0x7FFFFFFFFFFFFFFFLL )
              v101[1] = (void *)0x7FFFFFFFFFFFFFFFLL;
            goto LABEL_38;
          }
          v30 = 0x7FFFFFFFFFFFFFFFLL;
        }
        v31 = v101[0];
        v32 = (char *)v101[1];
        if ( v101[2] < (void *)v30 )
        {
          n = v28;
          v81 = (void **)v30;
          v101[0] = (void *)qvector_reserve(v101, v101[0], v30, 1);
          v31 = v101[0];
          v28 = n;
          v32 = (char *)v101[1];
          v30 = (unsigned __int64)v81;
        }
        n = v28;
        v81 = (void **)v30;
        memset(&v32[(_QWORD)v31], 0, v30 - (_QWORD)v32);
        v28 = n;
        v101[1] = v81;
LABEL_38:
        memcpy(&v29[(unsigned __int64)v101[0]], src, v28);
        goto LABEL_39;
      }
      v23 = (char *)v101[1];
      v24 = (unsigned __int64)v101[1] + v21;
      if ( __CFADD__(v101[1], v21) )
      {
        if ( v101[1] > (void *)0x7FFFFFFFFFFFFFFELL )
        {
          if ( v101[1] != (void *)0x7FFFFFFFFFFFFFFFLL )
            v101[1] = (void *)0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_32;
        }
        v24 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v25 = v101[0];
      v26 = (char *)v101[1];
      if ( v101[2] < (void *)v24 )
      {
        v90 = (char *)v101[1];
        n = v22;
        v81 = (void **)v24;
        v101[0] = (void *)qvector_reserve(v101, v101[0], v24, 1);
        v25 = v101[0];
        v23 = v90;
        v26 = (char *)v101[1];
        v22 = n;
        v24 = (unsigned __int64)v81;
      }
      v90 = v23;
      n = v22;
      v81 = (void **)v24;
      memset(&v26[(_QWORD)v25], 0, v24 - (_QWORD)v26);
      v22 = n;
      v23 = v90;
      v101[1] = v81;
LABEL_32:
      memcpy(&v23[(unsigned __int64)v101[0]], src, v22);
      goto LABEL_33;
    }
LABEL_56:
    v15 = ++v14;
  }
  while ( (unsigned __int64)v14 < *(_QWORD *)(a4 + 8) );
  if ( !v83 )
    goto LABEL_58;
LABEL_88:
  if ( !(_QWORD)v94 || (v47 = *(_DWORD *)v93, *(int *)v93 >= 0) )
  {
    if ( v86 && (get_tinfo_property(*(_QWORD *)(a4 + 32), 2) & 0x2F) == 0xD )
    {
      v54 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)v86 + 16LL);
      if ( v54 == sub_60EA30 )
      {
        if ( (unsigned int)lexcompare_tinfo(*v88, **(_QWORD **)(v86 + 8), 0, v52, v53) )
          goto LABEL_101;
        has_stkframe_hole = func_has_stkframe_hole(*(_QWORD *)(v86 + 16), a4);
      }
      else
      {
        has_stkframe_hole = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64))v54)(v86, v88, a4);
      }
      v47 = -1;
      if ( has_stkframe_hole )
        goto LABEL_90;
    }
LABEL_101:
    v55 = *(_DWORD *)(a4 + 24);
    if ( v7 != 2 )
    {
      if ( (v55 & 8) == 0 )
        goto LABEL_114;
      v37 = 0;
LABEL_104:
      v38 = 1;
      if ( v7 )
        v38 = v7;
      if ( !v87 )
        goto LABEL_109;
      goto LABEL_107;
    }
    BYTE1(v55) &= ~1u;
    *(_DWORD *)(a4 + 24) = v55;
    if ( (v55 & 8) != 0 )
    {
      v37 = 0;
      v38 = 2;
      if ( !v87 )
        goto LABEL_109;
      goto LABEL_107;
    }
LABEL_134:
    v7 = 2;
    goto LABEL_114;
  }
LABEL_90:
  v48 = *(_BYTE *)(a4 + 88);
  v49 = *(_DWORD *)(a4 + 28);
  v50 = v48 & 0xF0;
  v51 = v48 & 0xF0;
  if ( (v48 & 0xF0) == 0xC0 )
    v51 = *(_DWORD *)(a4 + 28);
  if ( (unsigned int)(v51 - 208) > 0x2F )
  {
    if ( *(int *)(a4 + 8) > 254 )
      goto LABEL_114;
    LODWORD(v100[0]) = 0;
    v100[1] = nullptr;
    v100[2] = nullptr;
    v103 = 0;
    v104 = 0;
    v80 = a4 + 32;
    v92 = 0;
    ptr = nullptr;
    memset(v101, 0, sizeof(v101));
    v102 = 0;
    *(_OWORD *)dest = 0;
    copy_tinfo_t(&dest[1]);
    dest[2] = nullptr;
    v81 = &dest[2];
    copy_tinfo_t(&dest[2]);
    v98 = 0;
    v99 = 0;
    clear_tinfo_t(&ptr);
    clear_tinfo_t(&v92);
    v79 = dest;
    copy_tinfo_t(dest);
    v67 = v79;
    create_tinfo(&v103, 10, 10, v79);
    clear_tinfo_t(v81);
    clear_tinfo_t(&dest[1]);
    clear_tinfo_t(v67);
    v68 = v100[2];
    if ( v101[1] <= &byte_6 )
    {
      v100[2] = (void *)qvector_reserve(&v100[2], v100[2], 7, 1);
      v68 = v100[2];
    }
    v101[0] = &byte_7;
    *(_DWORD *)v68 = 1937007986;
    v68[2] = 29300;
    *((_BYTE *)v100[2] + 6) = 0;
    v104 = 6;
    if ( v47 == -2 )
    {
      sub_6116C0((__int64 *)a4, (__int64)v100);
    }
    else
    {
      v69 = *(_BYTE *)(a4 + 88);
      v70 = v69 & 0xF0;
      if ( (v69 & 0xF0) == 0xC0 )
        v70 = *(_DWORD *)(a4 + 28);
      if ( v70 <= 0x10 )
        v70 = getinf(99);
      v71 = *(_QWORD *)a4;
      if ( v70 == 128 && *(_QWORD *)(a4 + 8) && *(_QWORD *)(v71 + 24) )
        v71 += strcmp(*(const char **)(v71 + 16), "this") == 0 ? 0x50 : 0;
      sub_6A9040((__int64 *)a4, (char *)v71, (__int64)v100);
    }
    *(_QWORD *)(a4 + 56) += get_tinfo_size(0, v103, 0);
    if ( v47 == -3 )
    {
      v78 = v79;
      dest[0] = &dword_0 + 1;
      copy_tinfo_t(v80);
      clear_tinfo_t(v78);
    }
    else
    {
      copy_tinfo_t(v80);
    }
    clear_tinfo_t(&v103);
    if ( v101[2] )
    {
      *(_QWORD *)&v102 = 0;
      qfree(v101[2]);
    }
    if ( v100[2] )
    {
      v101[0] = nullptr;
      qfree(v100[2]);
    }
    cleanup_argloc(v100);
    if ( (v7 & 0xFFFFFFFD) != 0 )
    {
      v38 = v7 | 2;
      if ( (*(_BYTE *)(a4 + 24) & 8) == 0 )
        goto LABEL_136;
      v37 = v87 != nullptr;
LABEL_171:
      if ( !v37 )
      {
        v37 = 1;
        goto LABEL_109;
      }
LABEL_107:
      v56 = sub_6AB150((__int64)v84, (__int64)v85, a4, v87);
      if ( v56 )
      {
        v38 |= 2u;
        v37 = v56;
      }
      goto LABEL_109;
    }
LABEL_183:
    v76 = *(_DWORD *)(a4 + 24);
    v77 = v76;
    BYTE1(v77) = BYTE1(v76) & 0xFE;
    *(_DWORD *)(a4 + 24) = v77;
    if ( (v76 & 8) == 0 )
    {
      v48 = *(_BYTE *)(a4 + 88);
      v49 = *(_DWORD *)(a4 + 28);
      v38 = 2;
      v50 = v48 & 0xF0;
      goto LABEL_137;
    }
    v38 = 2;
    v37 = v87 != nullptr;
    goto LABEL_171;
  }
  if ( !*(_DWORD *)(a4 + 40) )
    goto LABEL_114;
  if ( v7 == 2 )
    goto LABEL_183;
  v38 = v7;
  if ( (*(_BYTE *)(a4 + 24) & 8) != 0 )
  {
    v37 = 1;
    goto LABEL_104;
  }
LABEL_137:
  if ( v50 != 0xC0 )
    v49 = v50;
  if ( v49 == 32 )
    goto LABEL_148;
  if ( v49 == 80 || v49 == 224 )
  {
    if ( v86 )
    {
      v72 = v86;
      v73 = *(__int64 (__fastcall **)(__int64, _QWORD *, __int64, __int64, __int64))(*(_QWORD *)v86 + 24LL);
      if ( v73 == sub_605A50 )
      {
        if ( (unsigned int)lexcompare_tinfo(*v88, **(_QWORD **)(v86 + 8), 0, v50, v17) )
          v74 = -1;
        else
          v74 = *(int *)(v72 + 24);
      }
      else
      {
        v74 = ((int (__fastcall *)(__int64, _QWORD *, __int64))v73)(v86, v88, a4);
      }
      v48 = *(_BYTE *)(a4 + 88);
      if ( v74 != *(_QWORD *)(a4 + 56) )
        goto LABEL_148;
    }
    else if ( *(_QWORD *)(a4 + 56) != -1 )
    {
LABEL_148:
      v65 = v48 & 0xF;
      LOBYTE(v49) = 16;
      goto LABEL_149;
    }
    v65 = v48 & 0xF;
    goto LABEL_149;
  }
  v65 = v48 & 0xF;
  if ( (v49 & 0xFFFFFF0F) != 0 || v49 == 192 )
  {
    v66 = v65 | 0xC0;
  }
  else
  {
LABEL_149:
    v66 = v49 | v65;
    v49 = 0;
  }
  *(_BYTE *)(a4 + 88) = v66;
  v7 = v38;
  *(_DWORD *)(a4 + 28) = v49;
LABEL_114:
  if ( v93 )
  {
    *(_QWORD *)&v94 = 0;
    qfree(v93);
  }
  return (unsigned int)v7;
}
