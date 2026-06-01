_QWORD *__fastcall sub_515650(__int64 a1, const void *a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = __dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::vector_relation<old_interval,datalog::vector_relation_helper<old_interval>>,
             0);
  if ( !result )
    __cxa_bad_cast();
  if ( result != (_QWORD *)a1 )
  {
    v3 = result[27];
    result[27] = *(_QWORD *)(a1 + 216);
    v4 = *(_BYTE *)(a1 + 152);
    *(_QWORD *)(a1 + 216) = v3;
    LOBYTE(v3) = *((_BYTE *)result + 152);
    *((_BYTE *)result + 152) = v4;
    v5 = *(_QWORD *)(a1 + 144);
    *(_BYTE *)(a1 + 152) = v3;
    v6 = result[18];
    result[18] = v5;
    *(_QWORD *)(a1 + 144) = v6;
  }
  return result;
}

