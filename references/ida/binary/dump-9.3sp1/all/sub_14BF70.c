__int64 *__fastcall sub_14BF70(
        __int64 *a1,
        __int64 a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 a6,
        int a7,
        __int64 a8)
{
  _QWORD *v9; // r12
  __int64 v10; // rbp
  bool v12; // zf
  int v13; // eax
  __int64 v14; // r9
  int v15; // r9d
  __int64 *v16; // r8
  int v17; // eax
  __int64 v18; // rdi
  __int64 v20; // rax
  const void *v21; // r14
  size_t v22; // rax
  size_t v23; // rbx
  unsigned __int64 *v24; // rax
  unsigned __int64 *v25; // rsi
  const char *v26; // r14
  const char *v27; // r15
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // rdi
  int v33; // eax
  char v34; // r15
  int v35; // eax
  int v36; // r14d
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  __m128i *v40; // rdi
  char v41; // r8
  __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // rdx
  __int64 v45; // rbp
  __int64 i; // rbx
  __int64 *v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // rbp
  __int64 j; // rbx
  __int64 *v53; // rax
  __int64 v54; // rdi
  __int64 v55; // r8
  __int64 v56; // r9
  const char *v57; // r14
  __int64 v58; // rdx
  const char *v59; // r15
  __int64 v60; // rax
  int *v61; // rax
  unsigned __int64 *v62; // rax
  unsigned __int64 *v63; // r14
  unsigned __int64 v64; // rax
  void *v65; // rdi
  __int64 v66; // r15
  __int64 v67; // r14
  unsigned __int64 *v68; // rax
  __int64 v69; // rdi
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // rax
  unsigned __int64 v75; // rax
  const char *v76; // rdx
  __int64 v77; // rax
  unsigned __int64 v78; // rax
  int v79; // [rsp+0h] [rbp-128h]
  __int64 v80; // [rsp+0h] [rbp-128h]
  __int64 *v81; // [rsp+8h] [rbp-120h]
  __int64 v82; // [rsp+8h] [rbp-120h]
  __int64 v83; // [rsp+10h] [rbp-118h]
  __int64 v84; // [rsp+10h] [rbp-118h]
  const char **v85; // [rsp+18h] [rbp-110h]
  __int64 *v86; // [rsp+18h] [rbp-110h]
  void *exception; // [rsp+20h] [rbp-108h]
  const char *v88; // [rsp+20h] [rbp-108h]
  int v89; // [rsp+30h] [rbp-F8h]
  int v90; // [rsp+30h] [rbp-F8h]
  void *v91; // [rsp+38h] [rbp-F0h]
  const char **v92; // [rsp+38h] [rbp-F0h]
  bool v93; // [rsp+41h] [rbp-E7h]
  char v94; // [rsp+42h] [rbp-E6h]
  char v95; // [rsp+43h] [rbp-E5h]
  const char *v96; // [rsp+50h] [rbp-D8h] BYREF
  __int64 v97; // [rsp+58h] [rbp-D0h] BYREF
  unsigned __int64 *v98; // [rsp+60h] [rbp-C8h] BYREF
  unsigned __int64 *v99; // [rsp+68h] [rbp-C0h] BYREF
  char *v100; // [rsp+70h] [rbp-B8h] BYREF
  __int128 v101; // [rsp+78h] [rbp-B0h]
  _QWORD v102[2]; // [rsp+90h] [rbp-98h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-88h]
  __int128 v104; // [rsp+A8h] [rbp-80h]
  const char *v105; // [rsp+C0h] [rbp-68h] BYREF
  __int128 v106; // [rsp+C8h] [rbp-60h]
  __int64 v107; // [rsp+D8h] [rbp-50h]
  __int64 v108; // [rsp+E0h] [rbp-48h]
  unsigned __int64 v109; // [rsp+E8h] [rbp-40h]

  v9 = a4;
  v10 = (__int64)a3;
  v12 = *(_BYTE *)(a2 + 715) == 0;
  v81 = a5;
  v109 = __readfsqword(0x28u);
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
  if ( (unsigned __int8)sub_33F080(a2, 0)
    || (unsigned __int8)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))callui)(
                          100,
                          "LicenseManagerAutoSwitchDecompiler",
                          0,
                          0,
                          &callui,
                          v14)
    && (unsigned __int8)sub_33F080(a2, 0) )
  {
    v15 = *(_DWORD *)(a2 + 452);
    v102[0] = 0;
    v102[1] = -1;
    v16 = *(__int64 **)v10;
    v103 = 0;
    v104 = 0;
    if ( (v15 & 2) == 0 && (int)a8 > 7 && (v93 = v81 == nullptr && v16 != nullptr) )
    {
      v62 = sub_13DC40(*(_QWORD ***)(a2 + 792), (unsigned __int64 **)v10);
      v63 = v62;
      if ( v62 )
      {
        v64 = *v62;
        if ( !v9 || v64 )
        {
          *a1 = v64;
          if ( v64 )
            ++*(_DWORD *)(v64 + 104);
          return a1;
        }
        *(_DWORD *)v9 = *((_DWORD *)v63 + 2);
        v9[1] = v63[2];
        sub_1365A0((__int64)(v9 + 2), (__int64)(v63 + 3));
        v78 = *v63;
        v18 = v103;
        *a1 = *v63;
        if ( v78 )
          ++*(_DWORD *)(v78 + 104);
LABEL_18:
        if ( v18 )
        {
          *(_QWORD *)&v104 = 0;
          qfree(v18);
        }
        return a1;
      }
      if ( !v9 )
        v9 = v102;
    }
    else
    {
      if ( !v16 )
        v16 = *(__int64 **)(v10 + 8);
      v93 = 0;
    }
    v83 = *v16;
    if ( (v15 & 0x200) == 0 )
      sub_81960(a2, *v16);
    v96 = nullptr;
    v17 = *(_DWORD *)(a2 + 1416);
    if ( (v17 & 0x40) != 0 )
    {
      if ( v9 )
      {
        *(_DWORD *)v9 = -26;
        v9[1] = v83;
        if ( !v93 )
        {
LABEL_16:
          *a1 = 0;
LABEL_17:
          v18 = v103;
          goto LABEL_18;
        }
      }
      else if ( !v93 )
      {
        goto LABEL_16;
      }
      v40 = *(__m128i **)(a2 + 792);
      v41 = 0;
      v86 = (__int64 *)&v105;
      goto LABEL_63;
    }
    v105 = nullptr;
    *(_DWORD *)(a2 + 1416) = v17 | 0x40;
    v25 = *(unsigned __int64 **)v10;
    v108 = 0xFFFFFFFFLL;
    v85 = &v105;
    v107 = 0;
    v106 = 0;
    get_func_ranges();
    v26 = &v105[16 * v106];
    if ( v105 != v26 )
    {
      v27 = v105;
      do
      {
        get_fchunk();
        v25 = (_QWORD *)&byte_1;
        lock_func_range();
        v27 += 16;
      }
      while ( v26 != v27 );
    }
    v94 = 0;
    if ( (*(_BYTE *)(a2 + 452) & 1) == 0 && (*(_BYTE *)(a2 + 1416) & 2) == 0 )
    {
      sub_137260((__int64)"Decompiling...", v25);
      v94 = 1;
    }
    v89 = time(nullptr);
    v95 = 0;
    v97 = 0;
    *(_OWORD *)(a2 + 976) = 0;
    *(_OWORD *)(a2 + 992) = 0;
    sub_374280(a2, v25);
    v31 = *(unsigned int *)(a2 + 452);
    if ( (v31 & 0x200) != 0 )
    {
      BYTE1(v31) &= ~2u;
      v25 = (unsigned __int64 *)v10;
      *(_DWORD *)(a2 + 452) = v31;
      v61 = (int *)sub_81950(a2, v10);
      v97 = (__int64)v61;
      v32 = (__int64)v61;
      if ( v61 )
      {
        v33 = *v61;
        v34 = v93;
        if ( (v33 & 0x200) != 0 )
          goto LABEL_42;
        v34 = v93;
        v36 = sub_1382E0(v32);
        if ( v97 )
          goto LABEL_104;
        if ( v93 )
        {
LABEL_115:
          v25 = (unsigned __int64 *)v10;
          v97 = sub_1472C0((_QWORD *)a2, (unsigned __int64 **)v10);
          v34 = 1;
          if ( v97 )
            goto LABEL_104;
        }
      }
      else if ( v93 )
      {
LABEL_114:
        v36 = 0;
        goto LABEL_115;
      }
    }
    else
    {
      v32 = v97;
      if ( v97 )
      {
        v33 = *(_DWORD *)v97;
        v34 = v93;
        goto LABEL_42;
      }
      if ( v93 )
        goto LABEL_114;
    }
    v25 = (unsigned __int64 *)&v97;
    v36 = sub_13D650((_QWORD *)a2, (__int64)&v97, (_QWORD *)v10);
    v34 = 0;
LABEL_104:
    if ( v36 )
      goto LABEL_49;
    v32 = v97;
    v33 = *(_DWORD *)v97;
LABEL_42:
    if ( (v33 & 0x10000) == 0 )
    {
      v25 = nullptr;
      sub_144130((__int64 *)v32, nullptr, 0, v31, v29, v30);
      v32 = v97;
    }
    if ( *(int *)(v32 + 312) > 4 )
      goto LABEL_45;
    v25 = (_QWORD *)&byte_5;
    v36 = sub_33E140(a2, 5, v32, v31, v29, v30);
    if ( !v36 )
    {
      v32 = v97;
LABEL_45:
      if ( (*(_BYTE *)(v32 + 2) & 1) == 0 )
        goto LABEL_52;
      if ( *(int *)(v32 + 312) > 6 )
        goto LABEL_54;
LABEL_47:
      v25 = (_QWORD *)&byte_7;
      v35 = sub_33E140(a2, 7, v32, v31, v29, v30);
      v36 = v35;
      if ( v35 )
      {
        if ( v35 == -36 )
          goto LABEL_55;
        goto LABEL_49;
      }
      LODWORD(v32) = v97;
LABEL_54:
      while ( 1 )
      {
        sub_321ED0(v32, 1, v28, v31, v29, v30, v79, (_DWORD)v81, v83, (__int64)v85);
        v25 = (_QWORD *)&byte_7;
        v38 = sub_330F20(v97, 7);
        v36 = v38;
        if ( v38 != -36 )
          break;
LABEL_55:
        v32 = v97;
        v39 = *(_DWORD *)v97;
        while ( 1 )
        {
          *(_DWORD *)v32 = v39 & 0xFFEAF7FF;
          v32 = v97;
          v39 = *(_DWORD *)v97;
          if ( (*(_DWORD *)v97 & 0x10000) == 0 )
            break;
          if ( *(int *)(v97 + 312) <= 6 )
            goto LABEL_47;
        }
LABEL_52:
        v36 = sub_14B8B0(v32, (__int64)v25);
        if ( v36 )
          goto LABEL_49;
        LODWORD(v32) = v97;
        if ( *(int *)(v97 + 312) <= 6 )
          goto LABEL_47;
      }
      if ( v38 )
        goto LABEL_49;
      if ( (*(_BYTE *)(v97 + 2) & 8) == 0 )
      {
        sub_1FAD30();
        if ( v81 )
        {
LABEL_85:
          v42 = v97;
          *v81 = v97;
          goto LABEL_86;
        }
      }
      if ( !v34 )
        goto LABEL_138;
      v67 = v97;
      v68 = *(unsigned __int64 **)(v97 + 8);
      if ( !v68 )
        goto LABEL_138;
      v69 = *(_QWORD *)(v97 + 1496);
      v98 = (unsigned __int64 *)*v68;
      v92 = (const char **)&v100;
      sub_2B61B0(v69, v98, 0);
      v100 = nullptr;
      v101 = 0;
      v70 = netnode_qgetblob();
      v25 = (unsigned __int64 *)v100;
      if ( v70 <= 0 )
      {
        if ( v100 )
        {
LABEL_137:
          *(_QWORD *)&v101 = 0;
          qfree((__int64)v100);
        }
      }
      else
      {
        v71 = sub_86880(v67, (__int64)v100, v101, v31);
        v88 = (const char *)v71;
        if ( v71 && *(int *)(v71 + 56) > 7 )
        {
          v72 = (__int64)v98;
          *(_QWORD *)(*(_QWORD *)(v67 + 1496) + 1352LL) = v71;
          sub_6D0A0((__int64)"%a: restored pseudocode from idb\n", 0.0);
          if ( v100 )
          {
            *(_QWORD *)&v101 = 0;
            qfree((__int64)v100);
          }
          if ( v81 )
            goto LABEL_134;
          v95 = v34;
          goto LABEL_141;
        }
        netnode_delblob();
        v74 = *(_QWORD *)(v67 + 1496);
        v99 = (unsigned __int64 *)&v98;
        v75 = sub_146480((__m128i *)(*(_QWORD *)(v74 + 792) + 16LL), (unsigned __int64 *)&v98, &v99);
        *(_DWORD *)(v75 + 32) |= 2u;
        v76 = "incomplete";
        v25 = v98;
        if ( !v88 )
          v76 = "stale";
        sub_6D0A0((__int64)"%a: deleted %s pseudocode from idb\n", v98, v76);
        if ( v100 )
          goto LABEL_137;
      }
LABEL_138:
      v73 = j__qalloc_or_throw(224, (__int64)v25, v28, v31);
      v72 = v97;
      v88 = (const char *)v73;
      sub_256FC0(v73, v97);
      sub_2523C0(v88);
      if ( v81 )
      {
        if ( !v88 )
          goto LABEL_85;
LABEL_134:
        if ( !under_debugger )
          sub_383060(51678);
        goto LABEL_170;
      }
      if ( !v88 )
      {
        v42 = v97;
        goto LABEL_86;
      }
      v92 = (const char **)&v100;
LABEL_141:
      v100 = (char *)v88;
      sub_140140(&v96, v72);
      v96 = v100;
      if ( v100 )
        ++*((_DWORD *)v100 + 26);
      sub_140140(&v100, v72);
      if ( *(_BYTE *)(a2 + 716) )
        *((_DWORD *)v96 + 27) |= 4u;
      if ( *(char *)(a2 + 452) < 0 )
        sub_3B5320(a2, v96);
      if ( (*(_BYTE *)(a2 + 607) & 4) != 0 )
        sub_3AD910(a2, v96);
      v42 = v97;
LABEL_86:
      sub_374360(
        a2,
        v42,
        v28,
        v31,
        v29,
        v30,
        v79,
        (_DWORD)v81,
        v83,
        (_DWORD)v85,
        (_DWORD)v88,
        a2 + 976,
        v89,
        (__int64)v92);
      *(_DWORD *)(a2 + 1416) &= ~0x40u;
      *(_DWORD *)(a2 + 996) = v90;
      *(_DWORD *)(a2 + 1004) = time(nullptr);
      if ( v94 )
      {
        if ( (*(_BYTE *)(a2 + 452) & 0x20) != 0 )
        {
          *(_DWORD *)(a2 + 1416) |= 2u;
        }
        else
        {
          v42 = 10;
          callui(24, 10, 0, &callui, v55, v56, v80, v82, v84, v86);
        }
      }
      if ( v97 && (*(_BYTE *)(a2 + 452) & 8) != 0 )
        sub_331600();
      v57 = v105;
      v58 = (__int64)&v105[16 * v106];
      if ( v105 != (const char *)v58 )
      {
        v59 = &v105[16 * v106];
        do
        {
          v57 += 16;
          get_fchunk();
          v42 = 0;
          lock_func_range();
        }
        while ( v59 != v57 );
        v58 = (__int64)v105;
      }
      if ( v58 )
      {
        *(_QWORD *)&v106 = 0;
        qfree(v58);
      }
      v43 = (__int64)v96;
      if ( !v93 )
        goto LABEL_65;
      v41 = v95;
      v40 = *(__m128i **)(a2 + 792);
      if ( v96 )
      {
        v60 = *((_QWORD *)v96 + 1);
        v105 = v96;
        ++*((_DWORD *)v96 + 26);
        v10 = v60 + 8;
        goto LABEL_64;
      }
LABEL_63:
      v105 = nullptr;
LABEL_64:
      v42 = v10;
      sub_1469D0(v40, (unsigned __int64 **)v10, (__int64)v9, v86, v41);
      sub_140140(v86, v10);
      v43 = (__int64)v96;
LABEL_65:
      *a1 = v43;
      if ( v43 && !*(_DWORD *)(v43 + 104) )
      {
        sub_258970(v43, v42);
        v44 = *(_QWORD *)(v43 + 184);
        if ( v44 )
        {
          v45 = *(_QWORD *)(v43 + 192);
          if ( v45 )
          {
            for ( i = 0; i != v45; ++i )
            {
              v47 = (__int64 *)(v44 + 24 * i);
              v48 = *v47;
              if ( *v47 )
              {
                v47[1] = 0;
                qfree(v48);
                v44 = *(_QWORD *)(v43 + 184);
              }
            }
          }
          *(_QWORD *)(v43 + 192) = 0;
          qfree(v44);
        }
        v49 = *(_QWORD *)(v43 + 160);
        if ( v49 )
        {
          *(_QWORD *)(v43 + 168) = 0;
          qfree(v49);
        }
        v50 = *(_QWORD *)(v43 + 128);
        if ( v50 )
        {
          v51 = *(_QWORD *)(v43 + 136);
          if ( v51 )
          {
            for ( j = 0; j != v51; ++j )
            {
              v53 = (__int64 *)(v50 + 32 * j);
              v54 = *v53;
              if ( *v53 )
              {
                v53[1] = 0;
                qfree(v54);
                v50 = *(_QWORD *)(v43 + 128);
              }
            }
          }
          *(_QWORD *)(v43 + 136) = 0;
          qfree(v50);
        }
        sub_255050(v43 + 16);
        j__qfree(v43);
      }
      goto LABEL_17;
    }
LABEL_49:
    if ( v36 != -33 )
    {
      v37 = sub_331040(&v100, v97);
      if ( v37 == -1 )
        v37 = v83;
      v91 = (void *)v37;
      exception = __cxa_allocate_exception(0x30u);
      sub_137330((__int64)exception, v36, (__int64)v91, v100);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'vd_failure_t, (void (*)(void *))sub_7A4C0);
    }
    if ( v81 )
      goto LABEL_85;
    if ( !under_debugger )
      sub_383060(51800);
LABEL_170:
    BUG();
  }
  if ( !v9 )
  {
LABEL_24:
    *a1 = 0;
    return a1;
  }
  *(_DWORD *)v9 = -23;
  v20 = *(_QWORD *)(a2 + 112);
  v21 = *(const void **)(v20 + 24);
  if ( v21 && (v22 = strlen(*(const char **)(v20 + 24)), (v23 = v22) != 0) )
  {
    v65 = (void *)v9[2];
    v66 = v22 + 1;
    if ( v9[4] < v22 + 1 )
    {
      v77 = qvector_reserve((__int64)(v9 + 2), v9[2], v66, 1);
      v9[2] = v77;
      v65 = (void *)v77;
    }
    v9[3] = v66;
    memmove(v65, v21, v23);
    *(_BYTE *)(v9[2] + v23) = 0;
  }
  else
  {
    v9[3] = 0;
  }
  v24 = *(unsigned __int64 **)v10;
  if ( !*(_QWORD *)v10 )
    v24 = *(unsigned __int64 **)(v10 + 8);
  v9[1] = *v24;
  *a1 = 0;
  return a1;
}
