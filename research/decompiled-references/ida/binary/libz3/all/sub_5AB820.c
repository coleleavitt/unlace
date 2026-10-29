__int64 __fastcall sub_5AB820(__int64 a1, _QWORD *a2, __m128i a3)
{
  __int64 v5; // rax
  _DWORD *v6; // rax
  _DWORD *v7; // rdx
  __int64 result; // rax
  _DWORD *v10; // rax
  _DWORD *v11; // rdx
  int v13; // r9d
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r12
  __int64 v19; // r8
  int v20; // ecx
  __int64 v21; // rax
  void (***v22)(void); // rdi
  __int64 v23; // rsi
  __int64 v24; // rdi
  bool v25; // zf
  void (***v26)(void); // rdi
  void *v27; // rbx
  __int64 (__fastcall *v28)(__int64, __m128i); // rax
  void *v29; // r14
  __int64 *v30; // r13
  void *v31; // rax
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // r13d
  void *v37; // r14
  __int64 (__fastcall *v38)(__int64, __int64); // rdx
  char v39; // al
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r14
  __int64 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // rsi
  __int64 v49; // rax
  __int64 v50; // rsi
  int v51; // ecx
  int v52; // ecx
  int v53; // r8d
  int v54; // r9d
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  void *v59; // r14
  __int64 v60; // rax
  void (***v61)(void); // r15
  unsigned int v62; // edx
  __int64 v63; // rcx
  int v64; // edx
  _QWORD *v65; // rax
  __int64 v66; // rax
  unsigned int v67; // edx
  __int64 v68; // rsi
  __int64 v69; // rdi
  __int64 (__fastcall *v70)(void (__fastcall ***)(_QWORD)); // rdx
  unsigned int v71; // ecx
  size_t v72; // rsi
  unsigned int *v73; // rax
  _DWORD *v74; // rdi
  __int64 v75; // rax
  int v76; // edx
  _QWORD *v77; // rax
  __int64 v78; // rdx
  unsigned int i; // r12d
  __int64 v80; // rax
  void (***v81)(void); // r12
  void (***v82)(void); // rax
  void (***v83)(void); // r13
  char **v84; // rbx
  char **exception; // rbx
  __int64 v86; // [rsp+0h] [rbp-108h]
  void *v87; // [rsp+0h] [rbp-108h]
  int *v88; // [rsp+8h] [rbp-100h]
  __int64 *v89; // [rsp+8h] [rbp-100h]
  int v90; // [rsp+10h] [rbp-F8h]
  int v91[2]; // [rsp+10h] [rbp-F8h]
  int v92[2]; // [rsp+18h] [rbp-F0h]
  int v93; // [rsp+20h] [rbp-E8h]
  int *v94; // [rsp+20h] [rbp-E8h]
  _QWORD *v95; // [rsp+20h] [rbp-E8h]
  unsigned int v96; // [rsp+20h] [rbp-E8h]
  int v97; // [rsp+28h] [rbp-E0h]
  __int64 v98; // [rsp+28h] [rbp-E0h]
  __int64 v99; // [rsp+30h] [rbp-D8h]
  __int64 *v100; // [rsp+30h] [rbp-D8h]
  void *v101; // [rsp+38h] [rbp-D0h]
  void *v102; // [rsp+38h] [rbp-D0h]
  __int64 v103; // [rsp+38h] [rbp-D0h]
  void *ptr; // [rsp+40h] [rbp-C8h]
  __int64 v105; // [rsp+48h] [rbp-C0h]
  unsigned int v106; // [rsp+50h] [rbp-B8h]
  int v107; // [rsp+54h] [rbp-B4h]
  void *v108; // [rsp+58h] [rbp-B0h]
  __int64 v109; // [rsp+68h] [rbp-A0h] BYREF
  void *v110; // [rsp+70h] [rbp-98h] BYREF
  void *v111; // [rsp+78h] [rbp-90h] BYREF
  __int64 v112; // [rsp+80h] [rbp-88h] BYREF
  int v113; // [rsp+88h] [rbp-80h]
  __int64 v114; // [rsp+90h] [rbp-78h] BYREF
  __int64 v115; // [rsp+98h] [rbp-70h]
  unsigned int v116[4]; // [rsp+A0h] [rbp-68h] BYREF
  int v117[2]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v118; // [rsp+B8h] [rbp-50h]

  v105 = a2[13];
  v5 = a2[2];
  if ( v5 )
    v107 = *(_DWORD *)(v5 - 4);
  else
    v107 = 0;
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v105);
  v7 = &v6[*(v6 - 1)];
  do
  {
    if ( v7 == v6 )
      return (*(__int64 (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 16LL))(*(_QWORD *)(a1 + 24), v105);
  }
  while ( !*v6++ );
  v86 = *(_QWORD *)(a2[1] + 24LL);
  v10 = *(_DWORD **)(a1 + 56);
  if ( !v10 )
  {
LABEL_12:
    sub_5A3680((__int64)a2, 0, a3);
    result = a2[14];
    if ( result )
    {
      v14 = *(unsigned int *)(result - 4);
      if ( (_DWORD)v14 )
      {
        v15 = 8 * v14;
        v16 = 0;
        v88 = v117;
        while ( 1 )
        {
          v17 = *(_QWORD *)(result + v16);
          if ( v17 )
          {
            v18 = *(_QWORD *)(a1 + 32);
            if ( !v18 )
            {
              v19 = *(_QWORD *)(a1 + 120);
              if ( v19 )
                v20 = *(_DWORD *)(v19 - 4);
              else
                v20 = 0;
              sub_157BE40(
                (int)v88,
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 40),
                v20,
                v19,
                v13,
                v86,
                (__int64)v88,
                v90,
                v92[0],
                v93,
                v97,
                v99,
                v101);
              v21 = sub_4C4AD0(v86, v17);
              v22 = *(void (****)(void))(a1 + 32);
              v18 = v21;
              if ( v22 != (void (***)(void))v21 )
              {
                sub_4CF1F0(v22);
                *(_QWORD *)(a1 + 32) = v18;
              }
              v23 = *(_QWORD *)v117;
              if ( *(_QWORD *)v117 )
              {
                v24 = v118;
                v25 = (*(_DWORD *)(*(_QWORD *)v117 + 8LL))-- == 1;
                if ( v25 )
                {
                  sub_15D7BC0(v24, v23);
                  v18 = *(_QWORD *)(a1 + 32);
                }
              }
            }
            result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 16LL))(v18, v17);
          }
          v16 += 8;
          if ( v16 == v15 )
            break;
          result = a2[14];
        }
      }
    }
    return result;
  }
  v11 = &v10[*(v10 - 1)];
  do
  {
    if ( v11 == v10 )
      goto LABEL_12;
  }
  while ( !*v10++ );
  v29 = (void *)a2[13];
  v30 = *(__int64 **)(v105 + 8);
  v31 = *(void **)(a1 + 88);
  v108 = v31;
  if ( v31 )
  {
    v108 = (void *)(*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v31 + 16LL))(v31, v105);
    v29 = v108;
  }
  v32 = *((_QWORD *)v29 + 2);
  if ( v32 )
  {
    v33 = *(_DWORD *)(v32 - 4);
    v112 = 0;
    v106 = v33 - 1;
    sub_577180(&v112, (_QWORD *)v29 + 2);
  }
  else
  {
    v106 = -1;
    v112 = 0;
  }
  v113 = *((_DWORD *)v29 + 6);
  sub_5A2120(&v112, &qword_18BDFE8);
  v34 = *v30;
  v113 = 1;
  ptr = (void *)(*(__int64 (__fastcall **)(__int64 *, __int64 *))(v34 + 40))(v30, &v112);
  v35 = *(_QWORD *)(a1 + 120);
  v109 = 0;
  if ( v35 )
    v36 = *(_DWORD *)(v35 - 4) - 1;
  else
    v36 = -1;
  (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v29 + 200LL))(&v110, v29);
  (*(void (__fastcall **)(void **, void *))(*(_QWORD *)v29 + 208LL))(&v111, v29);
  v98 = 0;
  *(_QWORD *)v91 = 4LL * v106;
  v100 = &v109;
  v89 = (__int64 *)v117;
  while ( 1 )
  {
    v37 = v111;
    v38 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v110 + 40LL);
    if ( v38 == sub_4C9890 )
    {
      if ( !(*(unsigned __int8 (**)(void))(*(_QWORD *)v110 + 16LL))() )
        goto LABEL_54;
      v39 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v37 + 16LL))(v37);
    }
    else
    {
      v39 = v38((__int64)v110, (__int64)v111);
    }
    if ( v39 )
      break;
LABEL_54:
    v40 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)v110 + 24LL))(v110);
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v40 + 24LL))(v40, v100);
    v42 = 0x7FFFFFFF8LL;
    v43 = v109;
    if ( v109 )
      v42 = 8LL * (unsigned int)(*(_DWORD *)(v109 - 4) - 1);
    v102 = *(void **)(a2[14] + 8LL * *(unsigned int *)(v109 + v42));
    if ( v106 )
    {
      v44 = 0;
      LODWORD(v94) = (_DWORD)v89;
      while ( 1 )
      {
        v45 = *(unsigned int *)(*(_QWORD *)(a1 + 96) + v44);
        sub_4C4170(v86, (_QWORD *)(a2[2] + 8 * v45), (_QWORD *)(v43 + 2 * v44), v89);
        v46 = *(_QWORD *)v117;
        if ( *(_QWORD *)v117 )
          ++*(_DWORD *)(*(_QWORD *)v117 + 8LL);
        v47 = *(_QWORD *)(a1 + 120);
        v48 = *(_QWORD *)(v47 + 8LL * (unsigned int)(v36 - v45));
        if ( v48 && (v41 = *(_QWORD *)(a1 + 112), v25 = *(_DWORD *)(v48 + 8) == 1, --*(_DWORD *)(v48 + 8), v25) )
        {
          *(_QWORD *)v92 = v46;
          sub_15D7BC0(v41, v48);
          v47 = *(_QWORD *)(a1 + 120);
          v44 += 4;
          *(_QWORD *)(v47 + 8LL * (unsigned int)(v36 - v45)) = *(_QWORD *)v92;
          if ( *(_QWORD *)v91 == v44 )
            goto LABEL_65;
        }
        else
        {
          *(_QWORD *)(v47 + 8LL * (unsigned int)(v36 - v45)) = v46;
          v44 += 4;
          if ( *(_QWORD *)v91 == v44 )
            goto LABEL_65;
        }
        v43 = v109;
      }
    }
    v47 = *(_QWORD *)(a1 + 120);
    v94 = v117;
LABEL_65:
    v49 = *(_QWORD *)(a1 + 8);
    v50 = *(_QWORD *)(a1 + 16);
    v114 = 0;
    v115 = v49;
    if ( v47 )
      v51 = *(_DWORD *)(v47 - 4);
    else
      v51 = 0;
    sub_157BE40(
      (int)v94,
      v50,
      *(_QWORD *)(a1 + 40),
      v51,
      v47,
      v41,
      v86,
      (__int64)v89,
      v91[0],
      v92[0],
      (int)v94,
      v98,
      (__int64)v100,
      v102);
    v55 = v114;
    v56 = *(_QWORD *)v117;
    *(_QWORD *)v117 = v114;
    v114 = v56;
    if ( *(_QWORD *)v117 )
    {
      v57 = v118;
      v25 = (*(_DWORD *)(v55 + 8))-- == 1;
      if ( v25 )
        sub_15D7BC0(v57, v55);
    }
    v58 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)v117 = 0;
    sub_14B7810((int)v116, v58, (int)v95, v52, v53, v54, v87);
    sub_18572D0(v95);
    sub_14B9B80(v116, &v114);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 864LL) == v114 )
      goto LABEL_85;
    v59 = (void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v103 + 72LL))(v103);
    v60 = sub_4C4AD0(v86, (__int64)v59);
    v61 = (void (***)(void))v60;
    if ( !v60 )
    {
      exception = (char **)__cxa_allocate_exception(0x28u);
      sub_24ABB0(v95, "rules do not belong to supported finite domain fragment");
      *exception = (char *)off_1C63128;
      sub_2333C0(exception + 1, v95);
      sub_233E40((__int64)v95);
      __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
    }
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v60 + 16LL))(v60, v59);
    if ( (*(unsigned __int8 (__fastcall **)(void *))(*(_QWORD *)v59 + 24LL))(v59) )
    {
      v70 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v59 + 16LL);
      if ( v70 == sub_4C9C10 )
      {
        (**(void (__fastcall ***)(void *))v59)(v59);
        sub_186B220(v59);
      }
      else
      {
        v70((void (__fastcall ***)(_QWORD))v59);
      }
      sub_4CF1F0(v61);
LABEL_85:
      sub_14B63F0(v116);
      v68 = v114;
      if ( v114 )
      {
        v69 = v115;
        v25 = (*(_DWORD *)(v114 + 8))-- == 1;
        if ( v25 )
          goto LABEL_80;
      }
      goto LABEL_81;
    }
    if ( v98 )
    {
      v62 = *(_DWORD *)(v98 - 4);
      if ( v62 == *(_DWORD *)(v98 - 8) )
      {
        v71 = (3 * v62 + 1) >> 1;
        v72 = 8 * v71 + 8;
        if ( 8 * v62 + 8 >= (unsigned int)v72 || v62 >= v71 )
        {
          v84 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v95, "Overflow encountered when expanding vector");
          *v84 = (char *)off_1C63128;
          sub_2333C0(v84 + 1, v95);
          sub_233E40((__int64)v95);
          __cxa_throw(v84, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v96 = (3 * v62 + 1) >> 1;
        v92[0] = *(_DWORD *)(v98 - 4);
        v73 = (unsigned int *)sub_186B300((void *)(v98 - 8), v72);
        v74 = v73 + 2;
        v98 = (__int64)(v73 + 2);
        *v73 = v96;
        v75 = v73[1];
        v63 = (unsigned int)v92[0];
        v76 = v75;
        v65 = &v74[2 * v75];
        v64 = v76 + 1;
      }
      else
      {
        v63 = v62;
        v64 = v62 + 1;
        v65 = (_QWORD *)(v98 + 8 * v63);
      }
    }
    else
    {
      v77 = (_QWORD *)sub_186B270(0x18u);
      *v77 = 2;
      v65 = v77 + 1;
      v64 = 1;
      v63 = 0;
      v98 = (__int64)v65;
    }
    *v65 = v59;
    *(_DWORD *)(v98 - 4) = v64;
    v66 = v109;
    if ( !v109 || (v67 = *(_DWORD *)(v109 - 4), v67 == *(_DWORD *)(v109 - 8)) )
    {
      *(_QWORD *)v92 = v63;
      sub_5A7FF0((unsigned int **)v100);
      v66 = v109;
      v63 = *(_QWORD *)v92;
      v67 = *(_DWORD *)(v109 - 4);
    }
    *(_QWORD *)(v66 + 8LL * v67) = v63;
    *(_DWORD *)(v66 - 4) = v67 + 1;
    (*(void (__fastcall **)(void *, __int64 *))(*(_QWORD *)ptr + 40LL))(ptr, v100);
    sub_4CF1F0(v61);
    sub_14B63F0(v116);
    v68 = v114;
    if ( v114 )
    {
      v69 = v115;
      v25 = (*(_DWORD *)(v114 + 8))-- == 1;
      if ( v25 )
LABEL_80:
        sub_15D7BC0(v69, v68);
    }
LABEL_81:
    (*(void (__fastcall **)(void *))(*(_QWORD *)v110 + 32LL))(v110);
  }
  v26 = *(void (****)(void))(a1 + 104);
  if ( !v26 )
  {
    v116[0] = 0;
    if ( v107 )
    {
      v78 = *(_QWORD *)(a1 + 72);
      for ( i = 0; i != v107; v116[0] = i )
      {
        v80 = i >> 5;
        if ( !v78 )
          break;
        while ( (unsigned int)v80 < *(_DWORD *)(v78 - 4) )
        {
          if ( (*(_DWORD *)(v78 + 4 * v80) & (1 << i)) != 0 )
          {
            *(_QWORD *)v117 = v26;
            sub_5A21E0((unsigned int **)v117, v116);
            v26 = *(void (****)(void))v117;
          }
          v116[0] = ++i;
          if ( i != v107 )
          {
            v78 = *(_QWORD *)(a1 + 72);
            v80 = i >> 5;
            if ( v78 )
              continue;
          }
          goto LABEL_106;
        }
        ++i;
      }
LABEL_106:
      v81 = v26;
    }
    else
    {
      v81 = nullptr;
    }
    *(_QWORD *)v117 = v81;
    v82 = (void (***)(void))sub_5A2270(v105, (__int64)ptr, (unsigned int **)v117);
    v26 = *(void (****)(void))(a1 + 104);
    v83 = v82;
    if ( v82 != v26 )
    {
      sub_568110(v26);
      *(_QWORD *)(a1 + 104) = v83;
      v26 = v83;
    }
    if ( v81 )
    {
      sub_186B220(v81 - 1);
      v26 = *(void (****)(void))(a1 + 104);
    }
  }
  v27 = (void *)((__int64 (__fastcall *)(void (***)(void), __int64, void *))(*v26)[2])(v26, v105, ptr);
  v28 = *(__int64 (__fastcall **)(__int64, __m128i))(*a2 + 64LL);
  if ( v28 == sub_5AAD40 )
  {
    *(double *)a3.m128i_i64 = (*(double (__fastcall **)(_QWORD))(*(_QWORD *)a2[13] + 64LL))(a2[13]);
    sub_5A3680((__int64)a2, 0, a3);
  }
  else
  {
    ((void (__fastcall *)(_QWORD *))v28)(a2);
  }
  *(_QWORD *)v116 = v98;
  sub_5A3D20((__int64)a2, (__int64)v27, v116, 1, a3);
  if ( v27 )
    sub_4D63E0(v27);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v111);
  sub_59FDF0((void (__fastcall ***)(_QWORD))v110);
  if ( v109 )
    sub_186B220((void *)(v109 - 8));
  if ( ptr )
    sub_4D63E0(ptr);
  if ( v98 )
    sub_186B220((void *)(v98 - 8));
  result = v112;
  if ( v112 )
    result = sub_186B220((void *)(v112 - 8));
  if ( v108 )
    return sub_4D63E0(v108);
  return result;
}

