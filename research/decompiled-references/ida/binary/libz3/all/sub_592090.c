__int64 (__fastcall *__fastcall sub_592090(
        __int64 a1,
        const void *a2,
        const void *a3,
        const void *a4,
        __m128 a5))(__int64 a1, __int64 *a2)
{
  void *v7; // rax
  void *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 *v11; // rbp
  __int64 (__fastcall *v12)(__int64, __int64 *); // rax
  __int64 v13; // rdx
  void (__fastcall *v14)(_QWORD, _QWORD, _QWORD, _QWORD); // rax
  const void *v15; // r15
  __int64 *v16; // r14
  void *v17; // r8
  __int64 v18; // rax
  __int64 v19; // r15
  _QWORD *v20; // rax
  _QWORD *v21; // r13
  __int64 (__fastcall *v22)(__int64, __int64 *); // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  void (__fastcall *v25)(__int64, __int64, _QWORD, __int64); // rax
  __int64 v26; // rcx
  _QWORD *v27; // r9
  _QWORD *v28; // rcx
  __int64 (__fastcall *v29)(__int64, __int64 *); // rdx
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // r8
  bool v33; // zf
  _QWORD *v34; // rdx
  __int64 (__fastcall *v35)(__int64, __int64 *); // rcx
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdi
  _QWORD *v41; // r9
  _QWORD *v42; // r13
  __int64 (__fastcall *v43)(__int64, __int64 *); // rdx
  __int64 (__fastcall *result)(__int64, __int64 *); // rax
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdi
  _QWORD *v48; // rbx
  __int64 (__fastcall *v49)(__int64, __int64 *); // rdx
  __int64 v50; // rsi
  __int64 v51; // rdi
  __int64 v52; // rsi
  __int64 v53; // rdi
  _QWORD *v54; // [rsp+0h] [rbp-88h]
  void *lpsrc; // [rsp+8h] [rbp-80h]
  _QWORD **lpsrca; // [rsp+8h] [rbp-80h]
  _QWORD *lpsrcc; // [rsp+8h] [rbp-80h]
  _QWORD *lpsrcb; // [rsp+8h] [rbp-80h]
  __int64 v59; // [rsp+10h] [rbp-78h]
  _QWORD *v60; // [rsp+18h] [rbp-70h]
  __int64 v61; // [rsp+20h] [rbp-68h]
  void *v62; // [rsp+28h] [rbp-60h]
  __int64 v63; // [rsp+30h] [rbp-58h] BYREF
  __int64 v64; // [rsp+38h] [rbp-50h]
  __int64 v65; // [rsp+40h] [rbp-48h] BYREF
  __int64 v66; // [rsp+48h] [rbp-40h]

  v7 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
         0);
  if ( !v7
    || (v8 = v7,
        (v54 = __dynamic_cast(
                 a3,
                 (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                 (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                 0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v9 = *((_QWORD *)v8 + 7);
  v10 = *((_QWORD *)v8 + 6);
  v59 = v9;
  if ( !a4 )
  {
    if ( v10 )
      ++*(_DWORD *)(v10 + 8);
    v63 = 0;
    v64 = v9;
    goto LABEL_71;
  }
  v11 = (__int64 *)__dynamic_cast(
                     a4,
                     (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                     (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                     0);
  if ( v10 )
    ++*(_DWORD *)(v10 + 8);
  v63 = 0;
  v64 = v59;
  if ( !v11 )
  {
LABEL_71:
    lpsrc = nullptr;
    v11 = nullptr;
    v60 = *(_QWORD **)(a1 + 8);
    v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v60 + 16LL);
    goto LABEL_11;
  }
  v12 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v11 + 144);
  if ( v12 == sub_586990 )
  {
    v13 = v11[6];
    v60 = *(_QWORD **)(a1 + 8);
    v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v60 + 16LL);
    if ( v13 )
    {
      ++*(_DWORD *)(v13 + 8);
      v63 = v13;
    }
  }
  else
  {
    v12((__int64)v11, &v63);
    v60 = *(_QWORD **)(a1 + 8);
    v14 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*v60 + 16LL);
  }
  lpsrc = (void *)v11[5];
LABEL_11:
  v15 = (const void *)v54[5];
  if ( (char *)v14 != (char *)&sub_592090 )
  {
    v14(v60, *((_QWORD *)v8 + 5), v54[5], lpsrc);
    goto LABEL_45;
  }
  v16 = (__int64 *)__dynamic_cast(
                     *((const void **)v8 + 5),
                     (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                     (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
                     0);
  if ( !v16 )
    __cxa_bad_cast();
  v17 = __dynamic_cast(
          v15,
          (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
          (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
          0);
  if ( !v17 )
    __cxa_bad_cast();
  v18 = v16[7];
  v19 = v16[6];
  v61 = v18;
  if ( lpsrc )
  {
    v62 = v17;
    v20 = __dynamic_cast(
            lpsrc,
            (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::check_relation,
            0);
    v17 = v62;
    v21 = v20;
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v65 = 0;
    v66 = v61;
    if ( v20 )
    {
      v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v20 + 144LL);
      if ( v22 == sub_586990 )
      {
        v23 = v21[6];
        v24 = v60[1];
        v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 16LL);
        if ( v23 )
        {
          ++*(_DWORD *)(v23 + 8);
          v65 = v23;
        }
      }
      else
      {
        v22((__int64)v21, &v65);
        v17 = v62;
        v24 = v60[1];
        v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 16LL);
      }
      v26 = v21[5];
      goto LABEL_22;
    }
  }
  else
  {
    if ( v19 )
      ++*(_DWORD *)(v19 + 8);
    v65 = 0;
    v66 = v18;
  }
  v21 = nullptr;
  v26 = 0;
  v24 = v60[1];
  v25 = *(void (__fastcall **)(__int64, __int64, _QWORD, __int64))(*(_QWORD *)v24 + 16LL);
LABEL_22:
  lpsrca = (_QWORD **)v17;
  v25(v24, v16[5], *((_QWORD *)v17 + 5), v26);
  v27 = nullptr;
  if ( v21 )
    v27 = (_QWORD *)v21[5];
  sub_58F0B0(v16[1], v19, lpsrca[5], (_QWORD *)v16[5], v65, v27, a5);
  v28 = (_QWORD *)v16[5];
  v29 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v28 + 144LL);
  if ( v29 == sub_586990 )
  {
    v30 = v16[6];
    v31 = v28[6];
    if ( v30 != v31 )
    {
      if ( v30 )
      {
        v32 = v16[7];
        v33 = (*(_DWORD *)(v30 + 8))-- == 1;
        if ( v33 )
        {
          lpsrcb = v28;
          sub_15D7BC0(v32, v30);
          v31 = lpsrcb[6];
        }
      }
      v16[6] = v31;
      if ( v31 )
        ++*(_DWORD *)(v31 + 8);
    }
  }
  else
  {
    v29((__int64)v28, v16 + 6);
  }
  if ( v21 )
  {
    v34 = (_QWORD *)v21[5];
    v35 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v34 + 144LL);
    if ( v35 == sub_586990 )
    {
      v36 = v21[6];
      v37 = v34[6];
      if ( v36 != v37 )
      {
        if ( v36 )
        {
          v38 = v21[7];
          v33 = (*(_DWORD *)(v36 + 8))-- == 1;
          if ( v33 )
          {
            lpsrcc = v34;
            sub_15D7BC0(v38, v36);
            v37 = lpsrcc[6];
          }
        }
        v21[6] = v37;
        if ( v37 )
          ++*(_DWORD *)(v37 + 8);
      }
    }
    else
    {
      v35(v21[5], v21 + 6);
    }
  }
  v39 = v65;
  if ( v65 )
  {
    v40 = v66;
    v33 = (*(_DWORD *)(v65 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v40, v39);
  }
  if ( v19 )
  {
    v33 = (*(_DWORD *)(v19 + 8))-- == 1;
    if ( v33 )
      sub_15D7BC0(v61, v19);
  }
LABEL_45:
  v41 = nullptr;
  if ( v11 )
    v41 = (_QWORD *)v11[5];
  sub_58F0B0(*((_QWORD *)v8 + 1), v10, (_QWORD *)v54[5], *((_QWORD **)v8 + 5), v63, v41, a5);
  v42 = *((_QWORD **)v8 + 5);
  v43 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v42 + 144LL);
  result = sub_586990;
  if ( v43 == sub_586990 )
  {
    v45 = *((_QWORD *)v8 + 6);
    v46 = v42[6];
    if ( v45 != v46 )
    {
      if ( v45 )
      {
        v47 = *((_QWORD *)v8 + 7);
        v33 = (*(_DWORD *)(v45 + 8))-- == 1;
        if ( v33 )
        {
          sub_15D7BC0(v47, v45);
          v46 = v42[6];
          result = sub_586990;
        }
      }
      *((_QWORD *)v8 + 6) = v46;
      if ( v46 )
        ++*(_DWORD *)(v46 + 8);
    }
  }
  else
  {
    v43((__int64)v42, (__int64 *)v8 + 6);
    result = sub_586990;
  }
  if ( v11 )
  {
    v48 = (_QWORD *)v11[5];
    v49 = *(__int64 (__fastcall **)(__int64, __int64 *))(*v48 + 144LL);
    if ( v49 == sub_586990 )
    {
      v50 = v11[6];
      result = (__int64 (__fastcall *)(__int64, __int64 *))v48[6];
      if ( (__int64 (__fastcall *)(__int64, __int64 *))v50 != result )
      {
        if ( v50 )
        {
          v51 = v11[7];
          v33 = (*(_DWORD *)(v50 + 8))-- == 1;
          if ( v33 )
          {
            sub_15D7BC0(v51, v50);
            result = (__int64 (__fastcall *)(__int64, __int64 *))v48[6];
          }
        }
        v11[6] = (__int64)result;
        if ( result )
          ++*((_DWORD *)result + 2);
      }
    }
    else
    {
      result = (__int64 (__fastcall *)(__int64, __int64 *))v49(v11[5], v11 + 6);
    }
  }
  v52 = v63;
  if ( v63 )
  {
    v53 = v64;
    v33 = (*(_DWORD *)(v63 + 8))-- == 1;
    if ( v33 )
      result = (__int64 (__fastcall *)(__int64, __int64 *))sub_15D7BC0(v53, v52);
  }
  if ( v10 )
  {
    v33 = (*(_DWORD *)(v10 + 8))-- == 1;
    if ( v33 )
      return (__int64 (__fastcall *)(__int64, __int64 *))sub_15D7BC0(v59, v10);
  }
  return result;
}

