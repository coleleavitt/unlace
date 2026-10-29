__int64 __fastcall sub_879FD0(_QWORD *a1, unsigned int *a2, __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r12
  __int64 v9; // rax
  void *v10; // rdi
  __int64 result; // rax
  __int64 v12; // rsi
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int8 v17; // [rsp+Fh] [rbp-39h]
  char v18; // [rsp+1Fh] [rbp-29h] BYREF
  __int64 v19; // [rsp+20h] [rbp-28h] BYREF
  __int64 v20; // [rsp+28h] [rbp-20h]

  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 1720LL);
  if ( !v6 || (v7 = *a2, (unsigned int)v7 >= *(_DWORD *)(v6 - 4)) )
  {
    v15 = a1[1];
    v8 = a1[4];
    v19 = 0;
    v20 = v15;
    if ( v8 )
      return 0;
    v16 = *(_QWORD *)(v5 + 2400);
    if ( !v16 )
      return 0;
    if ( *(_DWORD *)(v16 - 4) <= 5u )
      return 0;
LABEL_15:
    v10 = *(void **)(v16 + 40);
    if ( v10 )
      v10 = __dynamic_cast(
              v10,
              (const struct __class_type_info *)&`typeinfo for'euf::th_solver,
              (const struct __class_type_info *)&`typeinfo for'arith::solver,
              0);
    goto LABEL_17;
  }
  v8 = *(_QWORD *)(v6 + 8 * v7);
  v9 = a1[1];
  v19 = 0;
  v10 = (void *)a1[4];
  v20 = v9;
  if ( v10 )
    goto LABEL_4;
  v16 = *(_QWORD *)(v5 + 2400);
  if ( v16 && *(_DWORD *)(v16 - 4) > 5u )
    goto LABEL_15;
LABEL_17:
  a1[4] = v10;
LABEL_4:
  if ( !v8 )
    return 0;
  result = sub_833B60((__int64)v10, v8, &v19);
  if ( (_BYTE)result )
    result = sub_1666AE0(a1 + 2, v19, a3, &v18);
  v12 = v19;
  v13 = v20;
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 8))-- == 1 )
    {
      v17 = result;
      sub_15D7BC0(v13, v12);
      return v17;
    }
  }
  return result;
}

