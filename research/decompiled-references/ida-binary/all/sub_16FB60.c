unsigned __int64 __fastcall sub_16FB60(
        __int64 a1,
        unsigned __int8 *a2,
        void **a3,
        char a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // r11d
  char v17; // r13
  int v18; // eax
  char v19; // r15
  int v20; // eax
  int v21; // r11d
  unsigned __int8 v22; // r15
  unsigned __int8 v23; // r14
  int v24; // eax
  __m128 v25; // xmm0
  __int64 v26; // rdx
  const char *v27; // rcx
  const char *v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __m128 v33; // xmm4
  __m128 v34; // xmm5
  char *v35; // rdi
  const char *path; // rax
  size_t v37; // rax
  size_t v38; // r13
  size_t v39; // r12
  const char *v40; // r13
  time_t v41; // rax
  size_t v42; // r12
  size_t v43; // rax
  __int64 v44; // r12
  size_t v45; // r9
  size_t v46; // r8
  void *v47; // rdx
  const char *v48; // rdx
  char *v49; // rsi
  size_t v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  size_t v54; // r12
  const char *v55; // rdi
  char v56; // r12
  const char *v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // r8
  __int64 v60; // r9
  __m128 v61; // xmm4
  __m128 v62; // xmm5
  __int64 v63; // rdx
  const char *v64; // rsi
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __m128 v69; // xmm4
  __m128 v70; // xmm5
  __int64 v71; // rdx
  const char *v72; // rcx
  const char *v73; // r8
  __int64 v74; // rdx
  const char *v75; // rcx
  const char *v76; // r8
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  __m128 v80; // xmm4
  __m128 v81; // xmm5
  const char *v82; // rdi
  char *v83; // r10
  const char *v84; // rsi
  __int64 v85; // rcx
  __int64 v86; // r8
  int v87; // ecx
  int v88; // edx
  int v89; // eax
  void *v90; // rdi
  size_t v91; // r13
  __int64 v92; // [rsp-8h] [rbp-528h]
  char *v93; // [rsp+0h] [rbp-520h]
  int v94; // [rsp+Ch] [rbp-514h]
  int v95; // [rsp+Ch] [rbp-514h]
  __int64 license_manager; // [rsp+10h] [rbp-510h]
  size_t v97; // [rsp+10h] [rbp-510h]
  char v98; // [rsp+10h] [rbp-510h]
  const char *v99; // [rsp+20h] [rbp-500h]
  size_t v101; // [rsp+28h] [rbp-4F8h]
  int v102; // [rsp+30h] [rbp-4F0h]
  void *v103; // [rsp+30h] [rbp-4F0h]
  void *src; // [rsp+38h] [rbp-4E8h]
  void *srca; // [rsp+38h] [rbp-4E8h]
  __int64 v106; // [rsp+48h] [rbp-4D8h] BYREF
  void *v107; // [rsp+50h] [rbp-4D0h] BYREF
  __int128 v108; // [rsp+58h] [rbp-4C8h]
  void *dest; // [rsp+70h] [rbp-4B0h] BYREF
  __int128 v110; // [rsp+78h] [rbp-4A8h]
  char *v111; // [rsp+90h] [rbp-490h] BYREF
  __int128 v112; // [rsp+98h] [rbp-488h]
  char v113[48]; // [rsp+B0h] [rbp-470h] BYREF
  char v114[1032]; // [rsp+E0h] [rbp-440h] BYREF
  unsigned __int64 v115; // [rsp+4E8h] [rbp-38h]

  v115 = __readfsqword(0x28u);
  v14 = sub_55C580();
  v15 = *((_QWORD *)a2 + 13);
  if ( a3 )
  {
    src = *a3;
    v99 = " borrow period";
  }
  else
  {
    src = *((void **)a2 + 14);
    v99 = (const char *)&unk_5C2F25;
  }
  if ( v14 >= v15 || (v16 = 0, v15 == -1) )
  {
    v16 = 1;
    if ( src )
    {
      if ( v14 >= (__int64)src - 2592000 )
      {
        v16 = 2;
        if ( v14 >= (__int64)src - 1296000 )
        {
          v16 = 3;
          if ( v14 >= (__int64)src )
          {
            v16 = 4;
            if ( v14 >= (__int64)src + 1296000 )
              v16 = (v14 >= (__int64)&loc_278D00 + (__int64)src) + 5;
          }
        }
      }
    }
  }
  v17 = *(_BYTE *)(a1 + 12);
  if ( v17 )
  {
    v17 = 0;
    v19 = 0;
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 16);
    v19 = 1;
    if ( v18 != v16 )
    {
      if ( v18 == 6 )
        goto LABEL_15;
      goto LABEL_14;
    }
    v19 = a4 ^ *(_BYTE *)(a1 + 20);
    if ( v18 != 6 )
LABEL_14:
      v17 = (a4 | (v16 == 6)) & (*(_BYTE *)(a1 + 20) ^ 1);
  }
LABEL_15:
  *(_DWORD *)(a1 + 16) = v16;
  *(_BYTE *)(a1 + 20) = a4;
  v102 = v16;
  v20 = reg_int_op("LicensePrevWarnTime", 0, 0, 0);
  v21 = v102;
  v22 = (v20 + (__int64)*(int *)(a1 + 8) <= v14) | v19;
  if ( v22 )
  {
    reg_int_op("LicensePrevWarnTime", 1, (unsigned int)v14, 0);
    v21 = v102;
  }
  v23 = *(_BYTE *)(a1 + 12);
  v24 = debug & 0x200;
  if ( v23 )
  {
    *(_BYTE *)(a1 + 12) = 0;
    if ( !v24 )
      goto LABEL_19;
  }
  else if ( (debug & 0x200) == 0 )
  {
    goto LABEL_56;
  }
  v94 = v21;
  license_manager = get_license_manager();
  (*(void (__fastcall **)(__int64, char *, __int64, __int64, __int64))(*(_QWORD *)license_manager + 112LL))(
    license_manager,
    v113,
    25,
    v14,
    1);
  (*(void (__fastcall **)(__int64, char *, __int64, void *, __int64))(*(_QWORD *)license_manager + 112LL))(
    license_manager,
    v114,
    25,
    src,
    1);
  v21 = v94;
  if ( (*(&debug + 1) & 2) != 0 )
  {
    switch ( v94 )
    {
      case 1:
        v83 = "valid";
        break;
      case 2:
        v83 = "starting to expire";
        break;
      case 3:
        v83 = "close to expiration";
        break;
      case 4:
        v83 = "within the grace period";
        break;
      case 5:
        v83 = "reaching the end of the grace period";
        break;
      case 6:
        v83 = "beyond the grace period";
        break;
      default:
        v83 = "not started yet";
        break;
    }
    v98 = 0;
    v84 = "<empty>";
    if ( *((_DWORD *)a2 + 2) )
    {
      v87 = a2[1];
      v88 = *a2;
      a5 = 0;
      v89 = a2[5];
      v93 = v83;
      v111 = nullptr;
      v112 = 0;
      sub_169A50((__int64 *)&v111, (__int64)"%02X-%02X%02X-%02X%02X-%02X", v88, v87, a2[2], a2[3], a2[4], v89);
      v84 = &s1;
      v21 = v94;
      v98 = 1;
      v83 = v93;
      if ( (_QWORD)v112 )
        v84 = v111;
    }
    v95 = v21;
    sub_16B860(
      (int)"Checking license %s: %s - (\"now\": %lu (%s UTC), \"end_time\": %lu (%s UTC)) \n",
      (__int64)v84,
      (__int64)v83,
      v14,
      (__int64)v113,
      (__int64)src,
      a5,
      a6,
      a7,
      a8,
      v69,
      v70,
      a11,
      a12,
      (char)v114);
    v21 = v95;
    if ( v98 && v111 )
    {
      *(_QWORD *)&v112 = 0;
      qfree(v111, v84, v92, v85, v86);
      v21 = v95;
    }
  }
LABEL_56:
  if ( !v22 && !v23 )
    return v115 - __readfsqword(0x28u);
LABEL_19:
  *(_BYTE *)(a1 + 12) = 0;
  if ( v21 <= 3 )
  {
    if ( v21 > 1 )
    {
      v25 = 0;
      v111 = nullptr;
      v112 = 0;
      v71 = ((__int64)src - v14) / 86400;
      if ( v71 )
      {
        v72 = (const char *)&unk_5C2F25;
        if ( v71 != 1 )
          v72 = "s";
        sub_169A50((__int64 *)&v111, (__int64)"in %d day%s", v71, v72);
      }
      else
      {
        v111 = (char *)qvector_reserve(&v111, 0, 9, 1);
        *(_QWORD *)&v112 = 9;
        strcpy(v111, "tomorrow");
      }
      v73 = &s1;
      if ( (_QWORD)v112 )
        v73 = v111;
      qsnprintf(
        v114,
        1024,
        "This is a reminder that your license%s will expire %s\nTo continue using IDA, make sure you renew on time.",
        v99,
        v73);
      v35 = v111;
      if ( !v111 )
        goto LABEL_30;
    }
    else
    {
      if ( v21 )
      {
LABEL_31:
        if ( !v17 )
          return v115 - __readfsqword(0x28u);
        v107 = nullptr;
        v108 = 0;
        sub_169A50(
          (__int64 *)&v107,
          (__int64)"The current license%s has expired, and we are now past the grace period.\n"
                   "IDA is now working in read-only mode.",
          " check-out grace period");
        v99 = " check-out grace period";
        goto LABEL_33;
      }
      v25 = 0;
      v111 = nullptr;
      v112 = 0;
      v26 = (*((_QWORD *)a2 + 13) - v14) / 86400;
      if ( v26 )
      {
        v27 = (const char *)&unk_5C2F25;
        if ( v26 != 1 )
          v27 = "s";
        sub_169A50((__int64 *)&v111, (__int64)"in %d day%s", v26, v27);
      }
      else
      {
        v111 = (char *)qvector_reserve(&v111, 0, 9, 1);
        *(_QWORD *)&v112 = 9;
        strcpy(v111, "tomorrow");
      }
      v28 = &s1;
      if ( (_QWORD)v112 )
        v28 = v111;
      qsnprintf(
        v114,
        1024,
        "The current license cannot be used yet, it will start %s\nPlease select a different license.",
        v28);
      v35 = v111;
      if ( !v111 )
      {
LABEL_30:
        sub_16BAB0(v114, v22, v23, v30, v31, v32, v25, a6, a7, a8, v33, v34, a11, a12);
        goto LABEL_31;
      }
    }
LABEL_29:
    *(_QWORD *)&v112 = 0;
    qfree(v35, 1024, v29, v30, v31);
    goto LABEL_30;
  }
  if ( v21 != 6 )
  {
    v25 = 0;
    v111 = nullptr;
    v112 = 0;
    v74 = ((__int64)&loc_278D00 + (__int64)src - v14) / 86400;
    if ( v74 )
    {
      v75 = (const char *)&unk_5C2F25;
      if ( v74 != 1 )
        v75 = "s";
      sub_169A50((__int64 *)&v111, (__int64)"%d day%s", v74, v75);
    }
    else
    {
      v111 = (char *)qvector_reserve(&v111, 0, 15, 1);
      *(_QWORD *)&v112 = 15;
      strcpy(v111, "until tomorrow");
    }
    v76 = &s1;
    if ( (_QWORD)v112 )
      v76 = v111;
    qsnprintf(
      v114,
      1024,
      "This is to inform you that your license%s has expired.\n"
      "You still have %s to renew your license%s, after which IDA will switch to read-only mode.",
      v99,
      v76,
      v99);
    v35 = v111;
    if ( !v111 )
      goto LABEL_30;
    goto LABEL_29;
  }
  v107 = nullptr;
  v108 = 0;
  sub_169A50(
    (__int64 *)&v107,
    (__int64)"The current license%s has expired, and we are now past the grace period.\n"
             "IDA is now working in read-only mode.",
    v99);
  if ( !v17 )
  {
    v64 = (const char *)v22;
    v82 = &s1;
    if ( (_QWORD)v108 )
      v82 = (const char *)v107;
    sub_16BAB0(v82, v22, v23, v77, v78, v79, (__m128)0LL, a6, a7, a8, v80, v81, a11, a12);
    goto LABEL_85;
  }
LABEL_33:
  path = (const char *)get_path(1);
  srca = (void *)path;
  v111 = nullptr;
  v112 = 0;
  if ( path )
  {
    v37 = strlen(path);
    v38 = v37 + 1;
    v39 = v37;
    v111 = (char *)qvector_reserve(&v111, 0, v37 + 1, 1);
    *(_QWORD *)&v112 = v38;
    memmove(v111, srca, v39);
    v111[v39] = 0;
    srca = v111;
  }
  v40 = (const char *)qsplitfile(srca, 0, &v106);
  v41 = time(nullptr);
  qstrftime(v113, 40, "_%Y%m%d%H%M%S", v41);
  dest = nullptr;
  v110 = 0;
  if ( !v40 )
  {
    v44 = 0;
    v45 = strlen(v113);
    v47 = (void *)(v45 + 1);
    v46 = v45;
LABEL_88:
    v97 = v45;
    v101 = v46;
    v103 = v47;
    dest = (void *)qvector_reserve(&dest, v40, v47, 1);
    v45 = v97;
    v40 = (const char *)dest;
    v46 = v101;
    v47 = v103;
    goto LABEL_39;
  }
  v42 = strlen(v40);
  dest = (void *)qvector_reserve(&dest, 0, v42 + 1, 1);
  *(_QWORD *)&v110 = v42 + 1;
  memmove(dest, v40, v42);
  *((_BYTE *)dest + v42) = 0;
  v43 = strlen(v113);
  v44 = v110;
  v40 = (const char *)dest;
  v45 = v43;
  v46 = v43;
  if ( (_QWORD)v110 )
  {
    v44 = v110 - 1;
    v46 = v43 + v110 - 1;
  }
  v47 = (void *)(v46 + 1);
  if ( *((_QWORD *)&v110 + 1) < v46 + 1 )
    goto LABEL_88;
LABEL_39:
  *(_QWORD *)&v110 = v47;
  v40[v46] = 0;
  memmove((char *)dest + v44, v113, v45);
  v48 = &s1;
  if ( (_QWORD)v110 )
    v48 = (const char *)dest;
  v49 = (_BYTE *)(elf_gnu_hash_bucket + 168);
  set_file_ext(v114, 1024, v48, v106);
  v50 = strlen(v114);
  v54 = v50;
  if ( v50 )
  {
    v90 = dest;
    v91 = v50 + 1;
    if ( *((_QWORD *)&v110 + 1) < v50 + 1 )
    {
      dest = (void *)qvector_reserve(&dest, dest, v50 + 1, 1);
      v90 = dest;
    }
    v49 = v114;
    *(_QWORD *)&v110 = v91;
    memmove(v90, v114, v54);
    *((_BYTE *)dest + v54) = 0;
  }
  else
  {
    *(_QWORD *)&v110 = 0;
  }
  if ( v111 )
  {
    *(_QWORD *)&v112 = 0;
    qfree(v111, v49, v51, v52, v53);
  }
  v55 = &s1;
  if ( (_QWORD)v110 )
    v55 = (const char *)dest;
  v56 = sub_31BCA0(v55);
  if ( v56 )
  {
    v57 = &s1;
    if ( (_QWORD)v110 )
      v57 = (const char *)dest;
    sub_16FAA0((__int64 *)&v107, (__int64)"\n\nIDA has saved your database to:\n%s", v57);
    v63 = v23;
    v64 = (const char *)v22;
    if ( !(_QWORD)v108 )
    {
      sub_16BAB0(&s1, v22, v23, v58, v59, v60, (__m128)0LL, a6, a7, a8, v61, v62, a11, a12);
      goto LABEL_52;
    }
LABEL_99:
    sub_16BAB0((const char *)v107, (char)v64, v63, v58, v59, v60, (__m128)0LL, a6, a7, a8, v61, v62, a11, a12);
    if ( v56 )
      goto LABEL_52;
    goto LABEL_102;
  }
  sub_16FAA0(
    (__int64 *)&v107,
    (__int64)"\n"
             "\n"
             "IDA failed to save your database automatically.\n"
             "Please save the database in a suitable location.\n"
             "If you refuse, you will not be able to save\n"
             "the database until you renew your license%s.",
    v99);
  v63 = v23;
  v64 = (const char *)v22;
  if ( (_QWORD)v108 )
    goto LABEL_99;
  sub_16BAB0(&s1, v22, v23, v58, v59, v60, (__m128)0LL, a6, a7, a8, v61, v62, a11, a12);
  do
  {
LABEL_102:
    if ( (unsigned __int8)sub_31BCA0(0) )
      break;
    v64 = "HIDECANCEL\nYour database is not saved.\nDo you want to save your database?";
  }
  while ( (unsigned int)sub_1698A0(
                          1,
                          (int)"HIDECANCEL\nYour database is not saved.\nDo you want to save your database?") == 1 );
LABEL_52:
  if ( dest )
  {
    *(_QWORD *)&v110 = 0;
    qfree(dest, v64, v65, v66, v67);
  }
LABEL_85:
  if ( v107 )
  {
    *(_QWORD *)&v108 = 0;
    qfree(v107, v64, v65, v66, v67);
  }
  return v115 - __readfsqword(0x28u);
}
