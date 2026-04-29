_QWORD *__fastcall sub_14B9B0(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        _QWORD *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _QWORD *v9; // r12
  __int64 v10; // rbp
  bool v12; // zf
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // r9d
  __int64 *v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdi
  __int64 v23; // rax
  const void *v24; // r14
  size_t v25; // rax
  size_t v26; // rbx
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // rsi
  const char *v29; // r14
  const char *v30; // r15
  __int64 fchunk; // rax
  int v32; // edx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rdi
  int v37; // eax
  char v38; // r15
  int v39; // eax
  int v40; // r14d
  __int64 v41; // rdx
  int v42; // eax
  int v43; // eax
  __m128i *v44; // rdi
  char v45; // r8
  __int64 v46; // rsi
  const char *v47; // r14
  __int64 v48; // rdx
  __int64 v49; // rbp
  __int64 i; // rbx
  __int64 *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rbp
  __int64 j; // rbx
  __int64 *v57; // rax
  __int64 v58; // rdi
  __int64 v59; // r8
  __int64 v60; // r9
  const char *v61; // r14
  const char *v62; // rdx
  const char *v63; // r15
  __int64 v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rax
  _DWORD *v67; // rax
  unsigned __int64 *v68; // rax
  unsigned __int64 *v69; // r14
  unsigned __int64 v70; // rax
  void *v71; // rdi
  size_t v72; // r15
  __int64 v73; // r14
  unsigned __int64 *v74; // rax
  __int64 v75; // rdi
  __int64 v76; // rax
  __int64 v77; // rsi
  __int64 v78; // rax
  __int64 v79; // rax
  unsigned __int64 v80; // rax
  const char *v81; // rdx
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  int v84; // [rsp+0h] [rbp-128h]
  __int64 v85; // [rsp+0h] [rbp-128h]
  _QWORD *v86; // [rsp+8h] [rbp-120h]
  __int64 v87; // [rsp+8h] [rbp-120h]
  __int64 v88; // [rsp+10h] [rbp-118h]
  __int64 v89; // [rsp+10h] [rbp-118h]
  const char **v90; // [rsp+18h] [rbp-110h]
  __int64 *v91; // [rsp+18h] [rbp-110h]
  void *exception; // [rsp+20h] [rbp-108h]
  const char *v93; // [rsp+20h] [rbp-108h]
  int v94; // [rsp+30h] [rbp-F8h]
  int v95; // [rsp+30h] [rbp-F8h]
  void *v96; // [rsp+38h] [rbp-F0h]
  const char **v97; // [rsp+38h] [rbp-F0h]
  bool v98; // [rsp+41h] [rbp-E7h]
  char v99; // [rsp+42h] [rbp-E6h]
  char v100; // [rsp+43h] [rbp-E5h]
  __int64 v101; // [rsp+48h] [rbp-E0h]
  const char *v102; // [rsp+50h] [rbp-D8h] BYREF
  _DWORD *v103; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 v104; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v105; // [rsp+68h] [rbp-C0h] BYREF
  const char *v106; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v107; // [rsp+78h] [rbp-B0h]
  _QWORD v108[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v109; // [rsp+A0h] [rbp-88h]
  __int128 v110; // [rsp+A8h] [rbp-80h]
  const char *v111; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v112; // [rsp+C8h] [rbp-60h]
  __int64 v113; // [rsp+D8h] [rbp-50h]
  __int64 v114; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v115; // [rsp+E8h] [rbp-40h]

  v9 = a4;
  v10 = (__int64)a3;
  v12 = *(_BYTE *)(a2 + 715) == 0;
  v86 = a5;
  v115 = __readfsqword(0x28u);
  v13 = a7;
  if ( v12 )
    v13 = a7 | 1;
  *(_DWORD *)(a2 + 452) = v13;
  if ( !*a3 && !a3[2] )
  {
    if ( a4 )
      *a4 = -30;
    goto LABEL_24;
  }
  if ( (unsigned __int8)sub_33F5C0(a2, 0)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          100,
                          "LicenseManagerAutoSwitchDecompiler",
                          0,
                          0,
                          &callui,
                          v16)
    && (unsigned __int8)sub_33F5C0(a2, 0) )
  {
    v17 = *(_DWORD *)(a2 + 452);
    v108[0] = 0;
    v108[1] = -1;
    v18 = *(__int64 **)v10;
    v109 = 0;
    v110 = 0;
    if ( (v17 & 2) == 0 && (int)a8 > 7 && (v98 = v86 == nullptr && v18 != nullptr) )
    {
      v68 = sub_13D680(*(_QWORD ***)(a2 + 792), (unsigned __int64 **)v10);
      v69 = v68;
      if ( v68 )
      {
        v70 = *v68;
        if ( !v9 || v70 )
        {
          *a1 = v70;
          if ( v70 )
            ++*(_DWORD *)(v70 + 104);
          return a1;
        }
        *(_DWORD *)v9 = *((_DWORD *)v69 + 2);
        v9[1] = v69[2];
        sub_135FE0((__int64)(v9 + 2), (__int64)(v69 + 3));
        v83 = *v69;
        v21 = v109;
        *a1 = *v69;
        if ( v83 )
          ++*(_DWORD *)(v83 + 104);
LABEL_18:
        if ( v21 )
        {
          *(_QWORD *)&v110 = 0;
          qfree(v21);
        }
        return a1;
      }
      if ( !v9 )
        v9 = v108;
    }
    else
    {
      if ( !v18 )
        v18 = *(__int64 **)(v10 + 8);
      v98 = 0;
    }
    v19 = v17 & 0x200;
    v88 = *v18;
    if ( !(_DWORD)v19 )
      sub_813A0(a2, *v18);
    v102 = nullptr;
    v20 = *(_DWORD *)(a2 + 1416);
    if ( (v20 & 0x40) != 0 )
    {
      if ( v9 )
      {
        *(_DWORD *)v9 = -26;
        v9[1] = v88;
        if ( !v98 )
        {
LABEL_16:
          *a1 = 0;
LABEL_17:
          v21 = v109;
          goto LABEL_18;
        }
      }
      else if ( !v98 )
      {
        goto LABEL_16;
      }
      v44 = *(__m128i **)(a2 + 792);
      v45 = 0;
      v91 = (__int64 *)&v111;
      goto LABEL_63;
    }
    v111 = nullptr;
    *(_DWORD *)(a2 + 1416) = v20 | 0x40;
    v28 = *(unsigned __int64 **)v10;
    v114 = 0xFFFFFFFFLL;
    v90 = &v111;
    v113 = 0;
    v112 = 0;
    get_func_ranges(&v111, v28, v14, v15, v18, v19);
    v29 = &v111[16 * v112];
    if ( v111 != v29 )
    {
      v30 = v111;
      do
      {
        fchunk = get_fchunk(*(_QWORD *)v30);
        v28 = (_QWORD *)&byte_1;
        lock_func_range(fchunk, 1);
        v30 += 16;
      }
      while ( v29 != v30 );
    }
    v99 = 0;
    if ( (*(_BYTE *)(a2 + 452) & 1) == 0 && (*(_BYTE *)(a2 + 1416) & 2) == 0 )
    {
      sub_136CA0((__int64)"Decompiling...");
      v99 = 1;
    }
    v94 = time(nullptr);
    v100 = 0;
    v103 = nullptr;
    *(_OWORD *)(a2 + 976) = 0;
    *(_OWORD *)(a2 + 992) = 0;
    sub_3747C0(a2);
    v35 = *(unsigned int *)(a2 + 452);
    if ( (v35 & 0x200) == 0 )
    {
      v36 = (__int64)v103;
      if ( v103 )
      {
        v37 = *v103;
        v38 = v98;
        goto LABEL_42;
      }
      if ( !v98 )
        goto LABEL_108;
      goto LABEL_115;
    }
    BYTE1(v35) &= ~2u;
    v28 = (unsigned __int64 *)v10;
    *(_DWORD *)(a2 + 452) = v35;
    v67 = (_DWORD *)sub_81390(a2, v10);
    v103 = v67;
    v36 = (__int64)v67;
    if ( v67 )
    {
      v37 = *v67;
      v38 = v98;
      if ( (v37 & 0x200) != 0 )
        goto LABEL_42;
      v38 = v98;
      v40 = sub_137D20(v36);
      if ( v103 )
        goto LABEL_104;
      if ( v98 )
      {
LABEL_116:
        v28 = (unsigned __int64 *)v10;
        v103 = (_DWORD *)sub_146D00((_QWORD *)a2, (unsigned __int64 **)v10);
        v38 = 1;
        if ( v103 )
          goto LABEL_104;
      }
    }
    else if ( v98 )
    {
LABEL_115:
      v40 = 0;
      goto LABEL_116;
    }
    LODWORD(v35) = *(_DWORD *)(a2 + 452);
LABEL_108:
    v28 = (unsigned __int64 *)&v103;
    v40 = sub_13D090((_QWORD *)a2, (__int64 *)&v103, v10, v35, a8, 0x10u);
    v38 = 0;
LABEL_104:
    if ( v40 )
      goto LABEL_49;
    v36 = (__int64)v103;
    v37 = *v103;
LABEL_42:
    if ( (v37 & 0x10000) == 0 )
    {
      v28 = nullptr;
      sub_143B70((__int64 *)v36, nullptr, 0, v35, v33, v34);
      v36 = (__int64)v103;
    }
    if ( *(int *)(v36 + 312) > 4 )
      goto LABEL_45;
    v28 = (_QWORD *)&byte_5;
    v40 = sub_33E5A0(a2, 5, v36, v35, v33, v34, v84);
    if ( !v40 )
    {
      v36 = (__int64)v103;
LABEL_45:
      if ( (*(_BYTE *)(v36 + 2) & 1) == 0 )
        goto LABEL_52;
      if ( *(int *)(v36 + 312) > 6 )
        goto LABEL_54;
LABEL_47:
      v28 = (_QWORD *)&byte_7;
      v39 = sub_33E5A0(a2, 7, v36, v35, v33, v34, v84);
      v40 = v39;
      if ( v39 )
      {
        if ( v39 == -36 )
          goto LABEL_55;
        goto LABEL_49;
      }
      LODWORD(v36) = (_DWORD)v103;
LABEL_54:
      while ( 1 )
      {
        sub_322290(v36, 1, v32, v35, v33, v34, v84, (_DWORD)v86, v88, (__int64)v90);
        v28 = (_QWORD *)&byte_7;
        v42 = sub_331240(v103, 7);
        v40 = v42;
        if ( v42 != -36 )
          break;
LABEL_55:
        v36 = (__int64)v103;
        v43 = *v103;
        while ( 1 )
        {
          *(_DWORD *)v36 = v43 & 0xFFEAF7FF;
          v36 = (__int64)v103;
          v43 = *v103;
          if ( (*v103 & 0x10000) == 0 )
            break;
          if ( (int)v103[78] <= 6 )
            goto LABEL_47;
        }
LABEL_52:
        v40 = sub_14B2F0(v36, (__int64)v28);
        if ( v40 )
          goto LABEL_49;
        LODWORD(v36) = (_DWORD)v103;
        if ( (int)v103[78] <= 6 )
          goto LABEL_47;
      }
      if ( v42 )
        goto LABEL_49;
      if ( (*((_BYTE *)v103 + 2) & 8) == 0 )
      {
        sub_1FB0F0();
        if ( v86 )
        {
LABEL_85:
          v46 = (__int64)v103;
          *v86 = v103;
          goto LABEL_86;
        }
      }
      if ( !v38 )
        goto LABEL_139;
      v73 = (__int64)v103;
      v74 = *((unsigned __int64 **)v103 + 1);
      if ( !v74 )
        goto LABEL_139;
      v75 = *((_QWORD *)v103 + 187);
      v104 = *v74;
      v97 = &v106;
      v101 = sub_2B6570(v75, v104, 0);
      v106 = nullptr;
      v107 = 0;
      if ( netnode_qgetblob(v101, &v106, 1, 0, 70) <= 0 )
      {
        if ( v106 )
        {
LABEL_138:
          *(_QWORD *)&v107 = 0;
          qfree(v106);
        }
      }
      else
      {
        v76 = sub_862C0(v73, (__int64)v106, v107);
        v93 = (const char *)v76;
        if ( v76 && *(int *)(v76 + 56) > 7 )
        {
          v77 = v104;
          *(_QWORD *)(*(_QWORD *)(v73 + 1496) + 1352LL) = v76;
          sub_6CAE0((__int64)"%a: restored pseudocode from idb\n", 0.0);
          if ( v106 )
          {
            *(_QWORD *)&v107 = 0;
            qfree(v106);
          }
          if ( v86 )
            goto LABEL_135;
          v100 = v38;
          goto LABEL_142;
        }
        netnode_delblob(v101, 0, 70);
        v79 = *(_QWORD *)(v73 + 1496);
        v105 = &v104;
        v80 = sub_145EC0((__m128i *)(*(_QWORD *)(v79 + 792) + 16LL), &v104, &v105);
        *(_DWORD *)(v80 + 32) |= 2u;
        v81 = "incomplete";
        if ( !v93 )
          v81 = "stale";
        sub_6CAE0((__int64)"%a: deleted %s pseudocode from idb\n", v104, v81);
        if ( v106 )
          goto LABEL_138;
      }
LABEL_139:
      v78 = j__qalloc_or_throw(224);
      v77 = (__int64)v103;
      v93 = (const char *)v78;
      sub_257380(v78, v103);
      sub_252780(v93);
      if ( v86 )
      {
        if ( !v93 )
          goto LABEL_85;
LABEL_135:
        if ( !under_debugger )
          sub_3835A0(51678);
        goto LABEL_171;
      }
      if ( !v93 )
      {
        v46 = (__int64)v103;
        goto LABEL_86;
      }
      v97 = &v106;
LABEL_142:
      v106 = v93;
      sub_13FB80(&v102, v77);
      v102 = v106;
      if ( v106 )
        ++*((_DWORD *)v106 + 26);
      sub_13FB80(&v106, v77);
      if ( *(_BYTE *)(a2 + 716) )
        *((_DWORD *)v102 + 27) |= 4u;
      if ( *(char *)(a2 + 452) < 0 )
        sub_3B5860(a2, v102);
      if ( (*(_BYTE *)(a2 + 607) & 4) != 0 )
        sub_3ADE50(a2, v102);
      v46 = (__int64)v103;
LABEL_86:
      sub_3748A0(
        a2,
        v46,
        v32,
        v35,
        v33,
        v34,
        v84,
        (_DWORD)v86,
        v88,
        (_DWORD)v90,
        (_DWORD)v93,
        a2 + 976,
        v94,
        (__int64)v97);
      *(_DWORD *)(a2 + 1416) &= ~0x40u;
      *(_DWORD *)(a2 + 996) = v95;
      *(_DWORD *)(a2 + 1004) = time(nullptr);
      if ( v99 )
      {
        if ( (*(_BYTE *)(a2 + 452) & 0x20) != 0 )
        {
          *(_DWORD *)(a2 + 1416) |= 2u;
        }
        else
        {
          v46 = 10;
          callui(24, 10, 0, &callui, v59, v60, v85, v87, v89, v91);
        }
      }
      if ( v103 && (*(_BYTE *)(a2 + 452) & 8) != 0 )
        sub_331920();
      v61 = v111;
      v62 = &v111[16 * v112];
      if ( v111 != v62 )
      {
        v63 = &v111[16 * v112];
        do
        {
          v64 = *(_QWORD *)v61;
          v61 += 16;
          v65 = get_fchunk(v64);
          v46 = 0;
          lock_func_range(v65, 0);
        }
        while ( v63 != v61 );
        v62 = v111;
      }
      if ( v62 )
      {
        *(_QWORD *)&v112 = 0;
        qfree(v62);
      }
      v47 = v102;
      if ( !v98 )
        goto LABEL_65;
      v45 = v100;
      v44 = *(__m128i **)(a2 + 792);
      if ( v102 )
      {
        v66 = *((_QWORD *)v102 + 1);
        v111 = v102;
        ++*((_DWORD *)v102 + 26);
        v10 = v66 + 8;
        goto LABEL_64;
      }
LABEL_63:
      v111 = nullptr;
LABEL_64:
      v46 = v10;
      sub_146410(v44, (unsigned __int64 **)v10, (__int64)v9, v91, v45);
      sub_13FB80(v91, v10);
      v47 = v102;
LABEL_65:
      *a1 = v47;
      if ( v47 && !*((_DWORD *)v47 + 26) )
      {
        sub_258D30(v47, v46);
        v48 = *((_QWORD *)v47 + 23);
        if ( v48 )
        {
          v49 = *((_QWORD *)v47 + 24);
          if ( v49 )
          {
            for ( i = 0; i != v49; ++i )
            {
              v51 = (__int64 *)(v48 + 24 * i);
              v52 = *v51;
              if ( *v51 )
              {
                v51[1] = 0;
                qfree(v52);
                v48 = *((_QWORD *)v47 + 23);
              }
            }
          }
          *((_QWORD *)v47 + 24) = 0;
          qfree(v48);
        }
        v53 = *((_QWORD *)v47 + 20);
        if ( v53 )
        {
          *((_QWORD *)v47 + 21) = 0;
          qfree(v53);
        }
        v54 = *((_QWORD *)v47 + 16);
        if ( v54 )
        {
          v55 = *((_QWORD *)v47 + 17);
          if ( v55 )
          {
            for ( j = 0; j != v55; ++j )
            {
              v57 = (__int64 *)(v54 + 32 * j);
              v58 = *v57;
              if ( *v57 )
              {
                v57[1] = 0;
                qfree(v58);
                v54 = *((_QWORD *)v47 + 16);
              }
            }
          }
          *((_QWORD *)v47 + 17) = 0;
          qfree(v54);
        }
        sub_255410(v47 + 16);
        j__qfree(v47);
      }
      goto LABEL_17;
    }
LABEL_49:
    if ( v40 != -33 )
    {
      v41 = sub_331360(&v106, v103);
      if ( v41 == -1 )
        v41 = v88;
      v96 = (void *)v41;
      exception = __cxa_allocate_exception(0x30u);
      sub_136D70((__int64)exception, v40, (__int64)v96, v106);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_79F00);
    }
    if ( v86 )
      goto LABEL_85;
    if ( !under_debugger )
      sub_3835A0(51800);
LABEL_171:
    BUG();
  }
  if ( !v9 )
  {
LABEL_24:
    *a1 = 0;
    return a1;
  }
  *(_DWORD *)v9 = -23;
  v23 = *(_QWORD *)(a2 + 112);
  v24 = *(const void **)(v23 + 24);
  if ( v24 && (v25 = strlen(*(const char **)(v23 + 24)), (v26 = v25) != 0) )
  {
    v71 = (void *)v9[2];
    v72 = v25 + 1;
    if ( v9[4] < v25 + 1 )
    {
      v82 = qvector_reserve(v9 + 2, v9[2], v72, 1);
      v9[2] = v82;
      v71 = (void *)v82;
    }
    v9[3] = v72;
    memmove(v71, v24, v26);
    *(_BYTE *)(v9[2] + v26) = 0;
  }
  else
  {
    v9[3] = 0;
  }
  v27 = *(unsigned __int64 **)v10;
  if ( !*(_QWORD *)v10 )
    v27 = *(unsigned __int64 **)(v10 + 8);
  v9[1] = *v27;
  *a1 = 0;
  return a1;
}
