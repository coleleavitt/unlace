__int64 __fastcall sub_591510(_QWORD *a1, const void *a2, const void *a3)
{
  __int64 *v4; // rax
  __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 (__fastcall *v7)(__int64, __int64 *); // rax
  __int64 v8; // rax
  const void *v9; // rdi
  void (__fastcall *v10)(__int64 *, const void *, _QWORD); // rax
  __int64 *v11; // rbp
  __int64 v12; // rax
  __int64 (__fastcall *v13)(__int64, __int64 *); // rax
  __int64 v14; // rax
  const void *v15; // rdi
  void (__fastcall *v16)(__int64 *, const void *, _QWORD); // rax
  __int64 *v17; // r13
  __int64 v18; // rax
  __int64 (__fastcall *v19)(__int64, __int64 *); // rax
  __int64 v20; // rax
  const void *v21; // rdi
  void (__fastcall *v22)(__int64, const void *, _QWORD); // rax
  __int64 *v23; // r15
  _QWORD *v24; // r14
  __int64 v25; // rax
  __int64 (__fastcall *v26)(__int64, __int64 *); // rax
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rax
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdi
  bool v33; // zf
  __int64 v34; // rsi
  __int64 v35; // rdi
  _QWORD *v36; // rdx
  __int64 (__fastcall *v37)(__int64, __int64 *); // rax
  __int64 v38; // rsi
  __int64 v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rdi
  _QWORD *v43; // rdx
  __int64 (__fastcall *v44)(__int64, __int64 *); // rax
  __int64 v45; // rsi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rdi
  _QWORD *v50; // rdx
  __int64 (__fastcall *v51)(__int64, __int64 *); // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  __int64 v54; // rdi
  __int64 result; // rax
  __int64 v56; // rsi
  __int64 v57; // rdi
  _QWORD *v58; // [rsp+0h] [rbp-D8h]
  __int64 *v60; // [rsp+10h] [rbp-C8h]
  _QWORD *v61; // [rsp+10h] [rbp-C8h]
  void *lpsrc; // [rsp+18h] [rbp-C0h]
  _QWORD *lpsrca; // [rsp+18h] [rbp-C0h]
  __int64 *v64; // [rsp+20h] [rbp-B8h]
  _QWORD *v65; // [rsp+20h] [rbp-B8h]
  __int64 v66; // [rsp+28h] [rbp-B0h]
  void *v67; // [rsp+30h] [rbp-A8h]
  _QWORD *v68; // [rsp+30h] [rbp-A8h]
  __int64 v69; // [rsp+38h] [rbp-A0h]
  _QWORD *v70; // [rsp+38h] [rbp-A0h]
  __int64 v71; // [rsp+40h] [rbp-98h]
  __int64 v72; // [rsp+48h] [rbp-90h]
  void *v73; // [rsp+50h] [rbp-88h]
  _QWORD *v74; // [rsp+50h] [rbp-88h]
  _QWORD *v75; // [rsp+58h] [rbp-80h]
  __int64 v76; // [rsp+60h] [rbp-78h] BYREF
  __int64 v77; // [rsp+68h] [rbp-70h]
  __int64 v78; // [rsp+70h] [rbp-68h] BYREF
  __int64 v79; // [rsp+78h] [rbp-60h]
  __int64 v80; // [rsp+80h] [rbp-58h] BYREF
  __int64 v81; // [rsp+88h] [rbp-50h]
  __int64 v82; // [rsp+90h] [rbp-48h] BYREF
  __int64 v83; // [rsp+98h] [rbp-40h]

  v4 = (__int64 *)__dynamic_cast(
                    a2,
                    (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                    (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                    0);
  if ( !v4
    || (v5 = v4,
        (v58 = __dynamic_cast(
                 a3,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v66 = v5[1];
  v6 = sub_4D6490(*(_QWORD *)(v66 + 24));
  v76 = 0;
  v77 = v6;
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v5 + 144);
  if ( v7 == sub_586990 )
  {
    v8 = v5[6];
    if ( v8 )
    {
      ++*(_DWORD *)(v8 + 8);
      v76 = v8;
    }
  }
  else
  {
    v7((__int64)v5, &v76);
  }
  v9 = (const void *)v5[5];
  v60 = (__int64 *)a1[1];
  v10 = *(void (__fastcall **)(__int64 *, const void *, _QWORD))(*v60 + 16);
  if ( (char *)v10 == (char *)&sub_591510 )
  {
    lpsrc = (void *)v58[5];
    v11 = (__int64 *)__dynamic_cast(
                       v9,
                       (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                       (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                       0);
    if ( !v11 )
      __cxa_bad_cast();
    lpsrca = __dynamic_cast(
               lpsrc,
               (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
               (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
               0);
    if ( !lpsrca )
      __cxa_bad_cast();
    v71 = v11[1];
    v79 = sub_4D6490(*(_QWORD *)(v71 + 24));
    v12 = *v11;
    v78 = 0;
    v13 = *(__int64 (__fastcall **)(__int64, __int64 *))(v12 + 144);
    if ( v13 == sub_586990 )
    {
      v14 = v11[6];
      if ( v14 )
      {
        ++*(_DWORD *)(v14 + 8);
        v78 = v14;
      }
    }
    else
    {
      v13((__int64)v11, &v78);
    }
    v15 = (const void *)v11[5];
    v64 = (__int64 *)v60[1];
    v16 = *(void (__fastcall **)(__int64 *, const void *, _QWORD))(*v64 + 16);
    if ( (char *)v16 == (char *)&sub_591510 )
    {
      v67 = (void *)lpsrca[5];
      v17 = (__int64 *)__dynamic_cast(
                         v15,
                         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                         0);
      if ( !v17 )
        __cxa_bad_cast();
      v68 = __dynamic_cast(
              v67,
              (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
              (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
              0);
      if ( !v68 )
        __cxa_bad_cast();
      v72 = v17[1];
      v81 = sub_4D6490(*(_QWORD *)(v72 + 24));
      v18 = *v17;
      v80 = 0;
      v19 = *(__int64 (__fastcall **)(__int64, __int64 *))(v18 + 144);
      if ( v19 == sub_586990 )
      {
        v20 = v17[6];
        if ( v20 )
        {
          ++*(_DWORD *)(v20 + 8);
          v80 = v20;
        }
      }
      else
      {
        v19((__int64)v17, &v80);
      }
      v21 = (const void *)v17[5];
      v69 = v64[1];
      v22 = *(void (__fastcall **)(__int64, const void *, _QWORD))(*(_QWORD *)v69 + 16LL);
      if ( (char *)v22 == (char *)&sub_591510 )
      {
        v73 = (void *)v68[5];
        v23 = (__int64 *)__dynamic_cast(
                           v21,
                           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                           (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                           0);
        if ( !v23 )
          __cxa_bad_cast();
        v24 = __dynamic_cast(
                v73,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                0);
        if ( !v24 )
          __cxa_bad_cast();
        v74 = (_QWORD *)v23[1];
        v83 = sub_4D6490(v74[3]);
        v25 = *v23;
        v82 = 0;
        v26 = *(__int64 (__fastcall **)(__int64, __int64 *))(v25 + 144);
        if ( v26 == sub_586990 )
        {
          v27 = v23[6];
          if ( v27 )
          {
            ++*(_DWORD *)(v27 + 8);
            v82 = v27;
          }
        }
        else
        {
          v26((__int64)v23, &v82);
        }
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(v69 + 8) + 16LL))(
          *(_QWORD *)(v69 + 8),
          v23[5],
          v24[5]);
        v28 = (_QWORD *)v23[5];
        v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v28 + 144LL);
        if ( v29 == sub_586990 )
        {
          v30 = v23[6];
          v31 = v28[6];
          if ( v30 != v31 )
          {
            if ( v30 )
            {
              v32 = v23[7];
              v33 = (*(_DWORD *)(v30 + 8))-- == 1;
              if ( v33 )
              {
                v75 = v28;
                sub_15D7BC0(v32, v30);
                v31 = v75[6];
                v28 = (_QWORD *)v23[5];
              }
            }
            v23[6] = v31;
            if ( v31 )
              ++*(_DWORD *)(v31 + 8);
          }
        }
        else
        {
          v29(v23[5], v23 + 6);
          v28 = (_QWORD *)v23[5];
        }
        sub_58D170((__int64)v74, v82, v28, (_QWORD *)v24[5], (__int64 *)(v69 + 16), (_QWORD *)(v69 + 24));
        v34 = v82;
        if ( v82 )
        {
          v35 = v83;
          v33 = (*(_DWORD *)(v82 + 8))-- == 1;
          if ( v33 )
            sub_15D7BC0(v35, v34);
        }
      }
      else
      {
        v22(v69, v21, v68[5]);
      }
      v36 = (_QWORD *)v17[5];
      v37 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v36 + 144LL);
      if ( v37 == sub_586990 )
      {
        v38 = v17[6];
        v39 = v36[6];
        if ( v38 != v39 )
        {
          if ( v38 )
          {
            v40 = v17[7];
            v33 = (*(_DWORD *)(v38 + 8))-- == 1;
            if ( v33 )
            {
              v70 = v36;
              sub_15D7BC0(v40, v38);
              v39 = v70[6];
              v36 = (_QWORD *)v17[5];
            }
          }
          v17[6] = v39;
          if ( v39 )
            ++*(_DWORD *)(v39 + 8);
        }
      }
      else
      {
        v37(v17[5], v17 + 6);
        v36 = (_QWORD *)v17[5];
      }
      sub_58D170(v72, v80, v36, (_QWORD *)v68[5], v64 + 2, v64 + 3);
      v41 = v80;
      if ( v80 )
      {
        v42 = v81;
        v33 = (*(_DWORD *)(v80 + 8))-- == 1;
        if ( v33 )
          sub_15D7BC0(v42, v41);
      }
    }
    else
    {
      v16(v64, v15, lpsrca[5]);
    }
    v43 = (_QWORD *)v11[5];
    v44 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v43 + 144LL);
    if ( v44 == sub_586990 )
    {
      v45 = v11[6];
      v46 = v43[6];
      if ( v45 != v46 )
      {
        if ( v45 )
        {
          v47 = v11[7];
          v33 = (*(_DWORD *)(v45 + 8))-- == 1;
          if ( v33 )
          {
            v65 = v43;
            sub_15D7BC0(v47, v45);
            v46 = v65[6];
            v43 = (_QWORD *)v11[5];
          }
        }
        v11[6] = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
      }
    }
    else
    {
      v44(v11[5], v11 + 6);
      v43 = (_QWORD *)v11[5];
    }
    sub_58D170(v71, v78, v43, (_QWORD *)lpsrca[5], v60 + 2, v60 + 3);
    v48 = v78;
    if ( v78 )
    {
      v49 = v79;
      v33 = (*(_DWORD *)(v78 + 8))-- == 1;
      if ( v33 )
        sub_15D7BC0(v49, v48);
    }
  }
  else
  {
    v10(v60, v9, v58[5]);
  }
  v50 = (_QWORD *)v5[5];
  v51 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v50 + 144LL);
  if ( v51 == sub_586990 )
  {
    v52 = v5[6];
    v53 = v50[6];
    if ( v52 != v53 )
    {
      if ( v52 )
      {
        v54 = v5[7];
        v33 = (*(_DWORD *)(v52 + 8))-- == 1;
        if ( v33 )
        {
          v61 = v50;
          sub_15D7BC0(v54, v52);
          v53 = v61[6];
          v50 = (_QWORD *)v5[5];
        }
      }
      v5[6] = v53;
      if ( v53 )
        ++*(_DWORD *)(v53 + 8);
    }
  }
  else
  {
    v51(v5[5], v5 + 6);
    v50 = (_QWORD *)v5[5];
  }
  result = sub_58D170(v66, v76, v50, (_QWORD *)v58[5], a1 + 2, a1 + 3);
  v56 = v76;
  if ( v76 )
  {
    v57 = v77;
    v33 = (*(_DWORD *)(v76 + 8))-- == 1;
    if ( v33 )
      return sub_15D7BC0(v57, v56);
  }
  return result;
}

