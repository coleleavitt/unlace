__int64 __fastcall sub_586630(__int64 a1, const void *a2, const void *a3, void *a4)
{
  void *v7; // rax
  __int64 v8; // r12
  _DWORD *v9; // rbx
  unsigned int **v10; // r14
  _QWORD *v11; // rdi
  void (__fastcall ***v12)(_QWORD); // r14
  __int64 result; // rax
  _QWORD *v14; // r15
  void *ptr; // [rsp+8h] [rbp-40h]

  v7 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
         0);
  if ( !v7
    || (v8 = (__int64)v7,
        (v9 = __dynamic_cast(
                a3,
                (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
                (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
                0)) == nullptr) )
  {
    __cxa_bad_cast();
  }
  if ( a4 )
  {
    v10 = (unsigned int **)(a1 + 16);
    a4 = __dynamic_cast(
           a4,
           (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
           (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
           0);
    sub_57CD70(v8, (unsigned int **)(a1 + 16));
    if ( a4 )
      sub_57CD70((__int64)a4, (unsigned int **)(a1 + 16));
  }
  else
  {
    v10 = (unsigned int **)(a1 + 16);
    sub_57CD70(v8, (unsigned int **)(a1 + 16));
  }
  if ( v9[6] == *(_DWORD *)(v8 + 24) )
  {
    v11 = *(_QWORD **)(a1 + 24);
    v12 = nullptr;
    if ( v11 )
      goto LABEL_8;
  }
  else
  {
    v9 = (_DWORD *)(*(__int64 (__fastcall **)(_DWORD *))(*(_QWORD *)v9 + 72LL))(v9);
    sub_57CD70((__int64)v9, v10);
    v11 = *(_QWORD **)(a1 + 24);
    v12 = (void (__fastcall ***)(_QWORD))v9;
    if ( v11 )
      goto LABEL_8;
  }
  v14 = (_QWORD *)sub_186B270(0x28u);
  sub_57E7C0(v14, v8, (__int64)v9, (__int64)a4, *(_BYTE *)(a1 + 8));
  v11 = *(_QWORD **)(a1 + 24);
  if ( v14 != v11 )
  {
    if ( v11 )
    {
      ptr = *(void **)(a1 + 24);
      (*(void (**)(void))*v11)();
      sub_186B220(ptr);
    }
    *(_QWORD *)(a1 + 24) = v14;
    v11 = v14;
  }
LABEL_8:
  result = (*(__int64 (__fastcall **)(_QWORD *, __int64, _DWORD *, void *))(*v11 + 16LL))(v11, v8, v9, a4);
  if ( v12 )
  {
    (**v12)(v12);
    return sub_186B220(v12);
  }
  return result;
}

