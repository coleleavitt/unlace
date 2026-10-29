__int64 __fastcall sub_57DA60(__int64 a1, const void *a2)
{
  _QWORD *v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // r12
  unsigned int v6; // r15d
  __int64 result; // rax
  unsigned int *v8; // rdx
  __int64 v9; // rdi
  void (__noreturn *v10)(); // rax
  unsigned int v11; // ebp
  __int64 v12; // rdx

  v3 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::product_relation,
         0);
  if ( !v3 )
    __cxa_bad_cast();
  v4 = *(_QWORD *)(a1 + 16);
  v5 = v3;
  v6 = 0;
  if ( v4 )
  {
    while ( 1 )
    {
      result = *(_QWORD *)(a1 + 8);
      if ( v6 >= *(_DWORD *)(v4 - 4) )
        break;
      v8 = (unsigned int *)(v4 + 8LL * v6);
      v9 = *(_QWORD *)(result + 8LL * *v8);
      v10 = *(void (__noreturn **)())(*(_QWORD *)v9 + 32LL);
      if ( v10 == sub_4C9D30 )
      {
        sub_1872CE0("");
        sub_1873130(114, 225);
      }
      ++v6;
      ((void (__fastcall *)(__int64, _QWORD))v10)(v9, *(_QWORD *)(v5[4] + 8LL * v8[1]));
      v4 = *(_QWORD *)(a1 + 16);
      if ( !v4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    result = *(_QWORD *)(a1 + 8);
  }
  if ( result )
  {
    v11 = 0;
    do
    {
      if ( v11 >= *(_DWORD *)(result - 4) )
        break;
      v12 = v11++;
      (*(void (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(result + 8 * v12) + 16LL))(
        *(_QWORD *)(result + 8 * v12),
        *(_QWORD *)(v5[4] + 8 * v12));
      result = *(_QWORD *)(a1 + 8);
    }
    while ( result );
  }
  return result;
}

