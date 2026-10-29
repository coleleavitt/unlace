__int64 __fastcall sub_55FB80(__int64 a1, const void *a2, const void *a3, _QWORD *a4)
{
  void *v6; // rax
  void *v7; // r15
  _QWORD *v8; // rbp
  __int64 v9; // rbp
  const void *v10; // r12
  __int64 v11; // rdx
  const void *v12; // rbp
  __int64 (__fastcall ***v13)(_QWORD); // rdx
  _QWORD *v14; // rax
  void (__fastcall *v15)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  void *v16; // rbp
  _QWORD *v17; // r12
  __int64 v18; // r12
  const void *v19; // r15
  __int64 v20; // rdx
  const void *v21; // r12
  __int64 v22; // rdx
  _QWORD *v23; // rax
  _QWORD *v24; // rbp
  void *v25; // rax
  void *v26; // r12
  _QWORD *v27; // r15
  __int64 v28; // r13
  __int64 v29; // r14
  __int64 v30; // r15
  __int64 v31; // r13
  __int64 v32; // r15
  _QWORD *v33; // rax
  _QWORD *v34; // r12
  __int64 v36; // rax
  _QWORD *v37; // rdx
  void *v38; // rdi
  __int64 v39; // rax
  void *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  void *v43; // rdi
  __int64 v44; // rax
  void *v45; // rdi
  __int64 v46; // rax
  void *v47; // rdi
  __int64 v48; // rax
  void *v49; // rdi
  __int64 v50; // rax
  _QWORD *v51; // rdx
  void *v52; // rdi
  __int64 v53; // rax
  __int64 v54; // rdx
  void *v55; // rdi
  __int64 v56; // rax
  void *v57; // rdi
  _QWORD *ptr; // [rsp+8h] [rbp-80h]
  void *ptra; // [rsp+8h] [rbp-80h]
  _QWORD *ptrb; // [rsp+8h] [rbp-80h]
  __int64 v61; // [rsp+18h] [rbp-70h]
  __int64 v62; // [rsp+18h] [rbp-70h]
  _BYTE v63[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v64[16]; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v65[72]; // [rsp+40h] [rbp-48h] BYREF

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
         0);
  if ( !v6
    || (v7 = v6,
        (v8 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  if ( a4 )
    a4 = __dynamic_cast(
           a4,
           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
           0);
  v9 = v8[5];
  v10 = *(const void **)(v9 + 40);
  if ( !v10 )
  {
    v39 = (**(__int64 (__fastcall ***)(__int64))v9)(v9);
    v40 = *(void **)(v9 + 40);
    v10 = (const void *)v39;
    if ( (void *)v39 != v40 && v40 )
      sub_4D63E0(v40);
    *(_QWORD *)(v9 + 40) = v10;
  }
  v11 = *((_QWORD *)v7 + 5);
  v12 = *(const void **)(v11 + 40);
  if ( !v12 )
  {
    ptra = *((void **)v7 + 5);
    v36 = (**(__int64 (__fastcall ***)(void *))v11)(ptra);
    v37 = ptra;
    v12 = (const void *)v36;
    v38 = *((void **)ptra + 5);
    if ( v38 && (void *)v36 != v38 )
    {
      sub_4D63E0(v38);
      v37 = ptra;
    }
    v37[5] = v12;
  }
  if ( a4 )
  {
    v13 = (__int64 (__fastcall ***)(_QWORD))a4[5];
    a4 = v13[5];
    if ( !a4 )
    {
      ptrb = v13;
      v50 = (**v13)(v13);
      v51 = ptrb;
      a4 = (_QWORD *)v50;
      v52 = (void *)ptrb[5];
      if ( v52 && (void *)v50 != v52 )
      {
        sub_4D63E0(v52);
        v51 = ptrb;
      }
      v51[5] = a4;
    }
  }
  sub_644D80(v63, "union", 11);
  v14 = __dynamic_cast(
          *((const void **)v7 + 1),
          (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
          0);
  if ( !v14 )
    __cxa_bad_cast();
  ptr = sub_4C4B50(v14[3], (__int64)v12, (__int64)v10, (__int64)a4);
  v15 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*ptr + 16LL);
  if ( (char *)v15 != (char *)&sub_55FB80 )
  {
    v15(ptr, v12, v10, a4);
    goto LABEL_32;
  }
  v16 = __dynamic_cast(
          v12,
          (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
          0);
  if ( !v16 )
    __cxa_bad_cast();
  v17 = __dynamic_cast(
          v10,
          (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
          0);
  if ( !v17 )
    __cxa_bad_cast();
  if ( a4 )
    a4 = __dynamic_cast(
           a4,
           (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
           0);
  v18 = v17[5];
  v19 = *(const void **)(v18 + 40);
  if ( !v19 )
  {
    v44 = (**(__int64 (__fastcall ***)(__int64))v18)(v18);
    v45 = *(void **)(v18 + 40);
    v19 = (const void *)v44;
    if ( v45 && (void *)v44 != v45 )
      sub_4D63E0(v45);
    *(_QWORD *)(v18 + 40) = v19;
  }
  v20 = *((_QWORD *)v16 + 5);
  v21 = *(const void **)(v20 + 40);
  if ( !v21 )
  {
    v61 = *((_QWORD *)v16 + 5);
    v41 = (**(__int64 (__fastcall ***)(__int64))v20)(v20);
    v42 = v61;
    v21 = (const void *)v41;
    v43 = *(void **)(v61 + 40);
    if ( v43 && (void *)v41 != v43 )
    {
      sub_4D63E0(v43);
      v42 = v61;
    }
    *(_QWORD *)(v42 + 40) = v21;
  }
  if ( a4 )
  {
    v22 = a4[5];
    a4 = *(_QWORD **)(v22 + 40);
    if ( !a4 )
    {
      v62 = v22;
      v53 = (**(__int64 (__fastcall ***)(__int64))v22)(v22);
      v54 = v62;
      a4 = (_QWORD *)v53;
      v55 = *(void **)(v62 + 40);
      if ( v55 && (void *)v53 != v55 )
      {
        sub_4D63E0(v55);
        v54 = v62;
      }
      *(_QWORD *)(v54 + 40) = a4;
    }
  }
  sub_644D80(v64, "union", 11);
  v23 = __dynamic_cast(
          *((const void **)v16 + 1),
          (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
          (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
          0);
  if ( !v23 )
    __cxa_bad_cast();
  v24 = sub_4C4B50(v23[3], (__int64)v21, (__int64)v19, (__int64)a4);
  v25 = *(void **)(*v24 + 16LL);
  if ( v25 == &sub_55FB80 )
  {
    v26 = __dynamic_cast(
            v21,
            (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
            0);
    if ( !v26 )
      __cxa_bad_cast();
    v27 = __dynamic_cast(
            v19,
            (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
            0);
    if ( !v27 )
      __cxa_bad_cast();
    if ( a4 )
      a4 = __dynamic_cast(
             a4,
             (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table,
             0);
    v28 = v27[5];
    v29 = *(_QWORD *)(v28 + 40);
    if ( v29 )
    {
      v30 = *((_QWORD *)v26 + 5);
      v31 = *(_QWORD *)(v30 + 40);
      if ( v31 )
        goto LABEL_27;
    }
    else
    {
      v48 = (**(__int64 (__fastcall ***)(_QWORD))v28)(v27[5]);
      v49 = *(void **)(v28 + 40);
      v29 = v48;
      if ( v49 && (void *)v48 != v49 )
        sub_4D63E0(v49);
      v30 = *((_QWORD *)v26 + 5);
      *(_QWORD *)(v28 + 40) = v29;
      v31 = *(_QWORD *)(v30 + 40);
      if ( v31 )
      {
LABEL_27:
        if ( !a4 )
        {
LABEL_29:
          sub_644D80(v65, "union", 11);
          v33 = __dynamic_cast(
                  *((const void **)v26 + 1),
                  (const struct __class_type_info *)&`typeinfo for'datalog::table_plugin,
                  (const struct __class_type_info *)&`typeinfo for'datalog::lazy_table_plugin,
                  0);
          if ( !v33 )
            __cxa_bad_cast();
          v34 = sub_4C4B50(v33[3], v31, v29, (__int64)a4);
          (*(void (__fastcall **)(_QWORD *, __int64, __int64, _QWORD *))(*v34 + 16LL))(v34, v31, v29, a4);
          (*(void (__fastcall **)(_QWORD *))*v34)(v34);
          sub_186B220(v34);
          sub_644EE0(v65);
          goto LABEL_31;
        }
LABEL_28:
        v32 = a4[5];
        a4 = *(_QWORD **)(v32 + 40);
        if ( !a4 )
        {
          v56 = (**(__int64 (__fastcall ***)(__int64))v32)(v32);
          v57 = *(void **)(v32 + 40);
          a4 = (_QWORD *)v56;
          if ( v57 && (void *)v56 != v57 )
            sub_4D63E0(v57);
          *(_QWORD *)(v32 + 40) = a4;
        }
        goto LABEL_29;
      }
    }
    v46 = (**(__int64 (__fastcall ***)(__int64))v30)(v30);
    v47 = *(void **)(v30 + 40);
    v31 = v46;
    if ( v47 && (void *)v46 != v47 )
      sub_4D63E0(v47);
    *(_QWORD *)(v30 + 40) = v31;
    if ( !a4 )
      goto LABEL_29;
    goto LABEL_28;
  }
  ((void (__fastcall *)(_QWORD *, const void *, const void *, _QWORD *))v25)(v24, v21, v19, a4);
LABEL_31:
  (*(void (__fastcall **)(_QWORD *))*v24)(v24);
  sub_186B220(v24);
  sub_644EE0(v64);
LABEL_32:
  (*(void (__fastcall **)(_QWORD *))*ptr)(ptr);
  sub_186B220(ptr);
  return sub_644EE0(v63);
}

