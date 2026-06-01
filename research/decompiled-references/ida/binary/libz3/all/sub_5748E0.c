void *__fastcall sub_5748E0(_QWORD *a1, const void *a2, const void *a3, __m128 a4)
{
  void *v6; // rax
  __int64 v7; // rbp
  _DWORD *v8; // r13
  void *v9; // rax
  void *v10; // rbx
  unsigned int *v11; // rcx
  unsigned int v12; // esi
  unsigned int v13; // edi
  _DWORD *v14; // r9
  unsigned int *v15; // rax
  unsigned int v16; // edx

  v6 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
         0);
  if ( !v6
    || (v7 = (__int64)v6,
        (v8 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  v9 = (void *)(*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(v7 + 8) + 40LL))(*(_QWORD *)(v7 + 8), a1 + 1);
  v10 = v9;
  if ( v9 )
    v10 = __dynamic_cast(
            v9,
            (const struct __class_type_info *)&`typeinfo for'datalog::table_base,
            (const struct __class_type_info *)&`typeinfo for'datalog::sparse_table,
            0);
  v11 = (unsigned int *)a1[3];
  v12 = *(_DWORD *)(v7 + 140);
  v13 = v8[35];
  v14 = (_DWORD *)a1[5];
  v15 = (unsigned int *)a1[4];
  if ( !v11 )
  {
    v16 = 0;
    if ( v13 >= v12 )
      goto LABEL_8;
    goto LABEL_11;
  }
  v16 = *(v11 - 1);
  if ( v16 )
  {
    if ( v13 < v12 )
      goto LABEL_8;
LABEL_11:
    sub_56C7D0(v7, (__int64)v8, v16, (__int64)v11, v15, v14, a4, 0, (__int64)v10);
    return v10;
  }
  if ( v13 < v12 )
    goto LABEL_11;
LABEL_8:
  sub_56C7D0((__int64)v8, v7, v16, (__int64)v15, v11, v14, a4, 1, (__int64)v10);
  return v10;
}

