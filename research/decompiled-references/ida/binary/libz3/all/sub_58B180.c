_QWORD *__fastcall sub_58B180(__int64 a1, _QWORD *a2, _QWORD *a3, unsigned int a4, int *a5, int *a6)
{
  char **v6; // r12
  char **exception; // rbp
  char **v8; // r12
  char **v9; // r12
  __int64 v11; // r14
  __int64 v14; // rbp
  __int64 (__fastcall *v15)(__int64, _QWORD, __int64, _QWORD, int *, int *); // rbx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rbp
  int *v19; // rbx
  _DWORD *v20; // rax
  _DWORD *v21; // rdx
  int v22; // esi
  int v23; // r9d
  __int64 v24; // rax
  unsigned int v25; // edi
  unsigned int v26; // r10d
  size_t v27; // rsi
  unsigned int *v28; // rax
  __int64 v29; // rax
  _DWORD *v30; // rax
  int *v31; // r15
  _DWORD *v32; // rdx
  int v33; // esi
  int v34; // r8d
  __int64 v35; // rax
  unsigned int v36; // edi
  unsigned int v37; // r14d
  size_t v38; // rsi
  unsigned int *v39; // rax
  __int64 v40; // rax
  _QWORD *v41; // r14
  __int64 v42; // r8
  __int64 v43; // r15
  _QWORD *v44; // rax
  _QWORD *v45; // rax
  __int64 v46; // rbx
  unsigned int v47; // ecx
  _QWORD *v48; // rdx
  __int64 v49; // rax
  unsigned int v50; // r9d
  size_t v51; // rsi
  unsigned int *v52; // rax
  __int64 v53; // rax
  int v54; // ecx
  _QWORD *v55; // r12
  __int64 v56; // r14
  __int64 v57; // r14
  __int64 i; // rbx
  __int64 v59; // rcx
  int v60; // eax
  unsigned int *v61; // rsi
  unsigned int v62; // eax
  unsigned int v63; // ecx
  size_t v64; // rsi
  unsigned int v65; // r15d
  unsigned int *v66; // rax
  __int64 v67; // rcx
  __int64 v69; // rax
  _QWORD *v70; // rax
  unsigned int v72; // [rsp+8h] [rbp-80h]
  __int64 v73; // [rsp+10h] [rbp-78h]
  __int64 v74; // [rsp+10h] [rbp-78h]
  __int64 v75; // [rsp+18h] [rbp-70h]
  __int64 v76[11]; // [rsp+30h] [rbp-58h] BYREF

  v11 = a4;
  v14 = *(_QWORD *)(a1 + 48);
  v15 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, int *, int *))(*(_QWORD *)v14 + 80LL);
  v16 = __dynamic_cast(
          a3,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v16
    || (v73 = v16[5],
        (v17 = __dynamic_cast(
                 a2,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v74 = v15(v14, v17[5], v73, (unsigned int)v11, a5, a6);
  if ( !v74 )
    return nullptr;
  v18 = (_QWORD *)sub_186B270(0x28u);
  *v18 = qword_1C666F0;
  v18[1] = 0;
  v18[2] = 0;
  if ( (_DWORD)v11 )
  {
    v75 = v11;
    v19 = &a5[v11];
    v20 = (_DWORD *)(sub_186B270(0x10u) + 8);
    *((_QWORD *)v20 - 1) = 2;
    v21 = v20;
    v18[2] = v20;
    while ( 1 )
    {
      v22 = *a5++;
      *v20 = v22;
      v23 = *(v21 - 1);
      v24 = (unsigned int)(v23 + 1);
      *(v21 - 1) = v24;
      if ( a5 == v19 )
        break;
      v25 = *(v21 - 2);
      if ( v25 == (_DWORD)v24 )
      {
        v26 = (3 * v25 + 1) >> 1;
        v27 = 4 * v26 + 8;
        if ( 4 * v23 + 12 >= (unsigned int)v27 || v25 >= v26 )
        {
          exception = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *exception = (char *)off_1C63128;
          sub_2333C0(exception + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v28 = (unsigned int *)sub_186B300(v21 - 2, v27);
        v21 = v28 + 2;
        *v28 = (3 * v25 + 1) >> 1;
        v29 = v28[1];
        v18[2] = v21;
        v20 = &v21[v29];
      }
      else
      {
        v20 = &v21[v24];
      }
    }
    v18[3] = 0;
    v30 = (_DWORD *)(sub_186B270(0x10u) + 8);
    v31 = a6;
    *((_QWORD *)v30 - 1) = 2;
    v32 = v30;
    v18[3] = v30;
    while ( 1 )
    {
      v33 = *v31++;
      *v30 = v33;
      v34 = *(v32 - 1);
      v35 = (unsigned int)(v34 + 1);
      *(v32 - 1) = v35;
      if ( v31 == &a6[v75] )
        break;
      v36 = *(v32 - 2);
      if ( v36 == (_DWORD)v35 )
      {
        v37 = (3 * v36 + 1) >> 1;
        v38 = 4 * v37 + 8;
        if ( 4 * v34 + 12 >= (unsigned int)v38 || v36 >= v37 )
        {
          v6 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v6 = (char *)off_1C63128;
          sub_2333C0(v6 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v6, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v39 = (unsigned int *)sub_186B300(v32 - 2, v38);
        v32 = v39 + 2;
        *v39 = v37;
        v40 = v39[1];
        v18[3] = v32;
        v30 = &v32[v40];
      }
      else
      {
        v30 = &v32[v35];
      }
    }
  }
  else
  {
    v18[3] = 0;
  }
  v41 = (_QWORD *)a2[2];
  if ( v41 && (v42 = *((unsigned int *)v41 - 1), (_DWORD)v42) )
  {
    v43 = 8 * v42;
    v44 = (_QWORD *)sub_186B270(0x18u);
    *v44 = 2;
    v45 = v44 + 1;
    v46 = 0;
    v47 = 1;
    v18[1] = v45;
    v48 = v45;
    while ( 1 )
    {
      v46 += 8;
      *v45 = *v41;
      *((_DWORD *)v48 - 1) = v47;
      if ( v46 == v43 )
        break;
      v41 = (_QWORD *)(v46 + a2[2]);
      if ( *((_DWORD *)v48 - 2) == v47 )
      {
        v50 = (3 * v47 + 1) >> 1;
        v51 = 8 * v50 + 8;
        if ( 8 * v47 + 8 >= (unsigned int)v51 || v47 >= v50 )
        {
          v8 = (char **)__cxa_allocate_exception(0x28u);
          sub_24ABB0(v76, "Overflow encountered when expanding vector");
          *v8 = (char *)off_1C63128;
          sub_2333C0(v8 + 1, v76);
          sub_233E40((__int64)v76);
          __cxa_throw(v8, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
        }
        v72 = (3 * v47 + 1) >> 1;
        v52 = (unsigned int *)sub_186B300(v48 - 1, v51);
        v48 = v52 + 2;
        v18[1] = v52 + 2;
        *v52 = v72;
        v53 = v52[1];
        v54 = v53;
        v45 = &v48[v53];
        v47 = v54 + 1;
      }
      else
      {
        v49 = v47++;
        v45 = &v48[v49];
      }
    }
    v55 = (_QWORD *)a3[2];
    if ( v55 )
    {
      v56 = *((unsigned int *)v55 - 1);
      if ( (_DWORD)v56 )
      {
        v57 = 8 * v56;
        for ( i = 0; ; v55 = (_QWORD *)(i + a3[2]) )
        {
          v62 = *((_DWORD *)v48 - 1);
          if ( v62 == *((_DWORD *)v48 - 2) )
          {
            v63 = (3 * v62 + 1) >> 1;
            v64 = 8 * v63 + 8;
            v65 = v63;
            if ( 8 * v62 + 8 >= (unsigned int)v64 || v62 >= v63 )
            {
              v9 = (char **)__cxa_allocate_exception(0x28u);
              sub_24ABB0(v76, "Overflow encountered when expanding vector");
              *v9 = (char *)off_1C63128;
              sub_2333C0(v9 + 1, v76);
              sub_233E40((__int64)v76);
              __cxa_throw(v9, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
            }
            v66 = (unsigned int *)sub_186B300(v48 - 1, v64);
            v67 = v66[1];
            v48 = v66 + 2;
            *v66 = v65;
            v18[1] = v66 + 2;
            v61 = &v66[2 * v67 + 2];
            v60 = v67 + 1;
          }
          else
          {
            v59 = v62;
            v60 = v62 + 1;
            v61 = (unsigned int *)&v48[v59];
          }
LABEL_33:
          i += 8;
          *(_QWORD *)v61 = *v55;
          *((_DWORD *)v48 - 1) = v60;
          if ( i == v57 )
            break;
        }
      }
    }
  }
  else
  {
    v55 = (_QWORD *)a3[2];
    if ( v55 )
    {
      v69 = *((unsigned int *)v55 - 1);
      if ( (_DWORD)v69 )
      {
        v57 = 8 * v69;
        v70 = (_QWORD *)sub_186B270(0x18u);
        v48 = v70 + 1;
        *v70 = 2;
        i = 0;
        v60 = 1;
        v18[1] = v48;
        v61 = (unsigned int *)v48;
        goto LABEL_33;
      }
    }
  }
  *v18 = &off_1C518C8;
  v18[4] = v74;
  return v18;
}

