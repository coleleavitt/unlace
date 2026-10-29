__int64 __fastcall sub_55CB90(__int64 a1, __int64 a2)
{
  int v3; // eax
  __int64 v4; // rdx
  _QWORD *v5; // rax
  _QWORD *v6; // rbp
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // r12
  __int64 v10; // r14
  __int64 v11; // rax
  unsigned int v12; // edx
  unsigned int *v13; // r8
  unsigned int v14; // ecx
  _QWORD *v15; // rbp
  __int64 v16; // rax
  void *v17; // rdi
  __int64 v18; // r13
  void (__fastcall **v19)(_QWORD *); // rax
  __int64 result; // rax
  __int64 (__fastcall ***v21)(void *); // rbp
  unsigned int *v22; // r12
  __int64 v23; // r14
  unsigned int v24; // r15d
  __int64 v25; // r13
  _QWORD *v26; // r13
  __int64 (__fastcall *v27)(_QWORD *); // r14
  __int64 v28; // rax
  void *v29; // rdi
  __int64 v30; // rbp
  void (__fastcall **v31)(_QWORD *); // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rbp
  __int64 v34; // r13
  unsigned int v35; // ecx
  __int64 v36; // rdi
  _QWORD *v37; // rbp
  __int64 v38; // rax
  void *v39; // rdi
  __int64 v40; // r13
  void (__fastcall **v41)(_QWORD *); // rax
  __int64 v42; // rbp
  __int64 v43; // r13
  unsigned int *v44; // rcx
  unsigned int v45; // edx
  void *v46; // rbp
  __int64 v47; // rax
  void *v48; // rdi
  __int64 v49; // r13
  __int64 v50; // rax
  void *v51; // rdi
  __int64 v52; // rax
  void *v53; // rdi
  __int64 v54; // rax
  __int64 (__fastcall **v55)(void *); // rdi
  __int64 v56; // rax
  void *v57; // rdi
  __int64 v58; // rax
  void *v59; // rdi
  __int64 v60; // rax
  __int64 (__fastcall **v61)(void *); // rdi
  __int64 v62; // [rsp-8h] [rbp-60h]
  __int64 v63; // [rsp+8h] [rbp-50h]
  __int64 v64; // [rsp+8h] [rbp-50h]
  __int64 v65; // [rsp+8h] [rbp-50h]
  __int64 v66[9]; // [rsp+10h] [rbp-48h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 56) + 24LL))(*(_QWORD *)(a1 + 56));
  if ( v3 != 5 )
  {
    if ( v3 != 6 )
    {
      if ( v3 != 1 )
        goto LABEL_16;
      v5 = __dynamic_cast(
             *(const void **)(a1 + 56),
             (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_ref,
             (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_join,
             0);
      v6 = v5;
      if ( v5 )
      {
        v7 = v5[8];
        v8 = *(_QWORD *)(v7 + 40);
        if ( !v8 )
        {
          v56 = (**(__int64 (__fastcall ***)(__int64))v7)(v7);
          v57 = *(void **)(v7 + 40);
          v8 = v56;
          if ( (void *)v56 != v57 && v57 )
            sub_4D63E0(v57);
          *(_QWORD *)(v7 + 40) = v8;
        }
        v9 = v6[9];
        v10 = *(_QWORD *)(v9 + 40);
        if ( !v10 )
        {
          v50 = (**(__int64 (__fastcall ***)(_QWORD))v9)(v6[9]);
          v51 = *(void **)(v9 + 40);
          v10 = v50;
          if ( v51 && (void *)v50 != v51 )
            sub_4D63E0(v51);
          *(_QWORD *)(v9 + 40) = v10;
        }
        v11 = *(_QWORD *)(a1 + 48);
        if ( v11 )
          v12 = *(_DWORD *)(v11 - 4);
        else
          v12 = 0;
        v13 = (unsigned int *)v6[6];
        if ( v13 )
          v14 = *(v13 - 1);
        else
          v14 = 0;
        a2 = v8;
        v15 = sub_4C9510(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL),
                v8,
                v10,
                v14,
                v13,
                (unsigned int *)v6[7],
                v12,
                *(unsigned int **)(a1 + 48));
        v4 = v62;
        if ( v15 )
        {
          sub_644D80(v66, "join_project", 11);
          a2 = v8;
          v16 = (*(__int64 (__fastcall **)(_QWORD *, __int64, __int64))(*v15 + 16LL))(v15, v8, v10);
          v17 = *(void **)(a1 + 40);
          v18 = v16;
          if ( v17 && v17 != (void *)v16 )
            sub_4D63E0(v17);
          v19 = (void (__fastcall **)(_QWORD *))*v15;
          *(_QWORD *)(a1 + 40) = v18;
          (*v19)(v15);
          sub_186B220(v15);
          sub_644EE0(v66);
        }
        goto LABEL_16;
      }
LABEL_72:
      __cxa_bad_cast();
    }
    v21 = (__int64 (__fastcall ***)(void *))__dynamic_cast(
                                              *(const void **)(a1 + 56),
                                              (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_ref,
                                              (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_filter_interpreted,
                                              0);
    if ( !v21 )
      goto LABEL_72;
    v22 = *(unsigned int **)(a1 + 48);
    v23 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
    if ( v22 )
      v24 = *(v22 - 1);
    else
      v24 = 0;
    a2 = (__int64)v21[5];
    v25 = (__int64)v21[6];
    if ( !a2 )
    {
      v54 = (**v21)(v21);
      v55 = v21[5];
      a2 = v54;
      if ( v55 && (__int64 (__fastcall **)(void *))v54 != v55 )
      {
        v64 = v54;
        sub_4D63E0(v55);
        a2 = v64;
      }
      v21[5] = (__int64 (__fastcall **)(void *))a2;
    }
    v26 = sub_4C9780(v23, a2, v25, v24, v22);
    if ( v26 )
    {
      sub_644D80(v66, "filter_interpreted_project", 11);
      a2 = (__int64)v21[5];
      v27 = *(__int64 (__fastcall **)(_QWORD *))(*v26 + 16LL);
      if ( !a2 )
      {
        v60 = (**v21)(v21);
        v61 = v21[5];
        a2 = v60;
        if ( v61 && (__int64 (__fastcall **)(void *))v60 != v61 )
        {
          v65 = v60;
          sub_4D63E0(v61);
          a2 = v65;
        }
        v21[5] = (__int64 (__fastcall **)(void *))a2;
      }
      v28 = v27(v26);
      v29 = *(void **)(a1 + 40);
      v30 = v28;
      if ( v29 && (void *)v28 != v29 )
        sub_4D63E0(v29);
      v31 = (void (__fastcall **)(_QWORD *))*v26;
      *(_QWORD *)(a1 + 40) = v30;
      (*v31)(v26);
      sub_186B220(v26);
      goto LABEL_35;
    }
LABEL_16:
    result = *(_QWORD *)(a1 + 40);
    if ( result )
      return result;
LABEL_36:
    v42 = *(_QWORD *)(a1 + 56);
    v43 = *(_QWORD *)(v42 + 40);
    if ( !v43 )
    {
      v58 = (**(__int64 (__fastcall ***)(_QWORD, __int64, __int64))v42)(*(_QWORD *)(a1 + 56), a2, v4);
      v59 = *(void **)(v42 + 40);
      v43 = v58;
      if ( v59 && (void *)v58 != v59 )
        sub_4D63E0(v59);
      *(_QWORD *)(v42 + 40) = v43;
    }
    sub_644D80(v66, "project", 11);
    v44 = *(unsigned int **)(a1 + 48);
    if ( v44 )
      v45 = *(v44 - 1);
    else
      v45 = 0;
    v46 = (void *)sub_4C5900(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL), v43, v45, v44);
    v47 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v46 + 16LL))(v46, v43);
    v48 = *(void **)(a1 + 40);
    v49 = v47;
    if ( v48 )
    {
      if ( (void *)v47 == v48 )
      {
LABEL_43:
        (**(void (__fastcall ***)(void *))v46)(v46);
        sub_186B220(v46);
        v63 = *(_QWORD *)(a1 + 40);
        sub_644EE0(v66);
        return v63;
      }
      sub_4D63E0(v48);
    }
    *(_QWORD *)(a1 + 40) = v49;
    goto LABEL_43;
  }
  v32 = __dynamic_cast(
          *(const void **)(a1 + 56),
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_ref,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_filter_equal,
          0);
  v33 = v32;
  if ( !v32 )
    goto LABEL_72;
  v34 = v32[5];
  if ( !v34 )
  {
    v52 = (*(__int64 (__fastcall **)(_QWORD *))*v32)(v32);
    v53 = (void *)v33[5];
    v34 = v52;
    if ( (void *)v52 != v53 && v53 )
      sub_4D63E0(v53);
    v33[5] = v34;
  }
  v35 = *((_DWORD *)v33 + 12);
  a2 = v34;
  v36 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 24LL);
  v66[0] = v33[7];
  v37 = sub_4C5A50(v36, v34, v66, v35);
  if ( !v37 )
    goto LABEL_16;
  sub_644D80(v66, "select_equal_project", 11);
  a2 = v34;
  v38 = (*(__int64 (__fastcall **)(_QWORD *, __int64))(*v37 + 16LL))(v37, v34);
  v39 = *(void **)(a1 + 40);
  v40 = v38;
  if ( v39 && (void *)v38 != v39 )
    sub_4D63E0(v39);
  v41 = (void (__fastcall **)(_QWORD *))*v37;
  *(_QWORD *)(a1 + 40) = v40;
  (*v41)(v37);
  sub_186B220(v37);
LABEL_35:
  sub_644EE0(v66);
  result = *(_QWORD *)(a1 + 40);
  if ( !result )
    goto LABEL_36;
  return result;
}

