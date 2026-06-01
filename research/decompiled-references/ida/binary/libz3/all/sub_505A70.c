_QWORD *__fastcall sub_505A70(__int64 a1, const void *a2)
{
  _QWORD *result; // rax
  __int64 v3; // rdx
  char v4; // cl
  __int64 v5; // rcx
  __int64 v6; // rdx

  result = __dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
             (const struct __class_type_info *)&`typeinfo for'datalog::vector_relation<datalog::uint_set2,datalog::bound_relation_helper>,
             0);
  if ( !result )
    __cxa_bad_cast();
  if ( result != (_QWORD *)a1 )
  {
    v3 = result[15];
    result[15] = *(_QWORD *)(a1 + 120);
    v4 = *(_BYTE *)(a1 + 56);
    *(_QWORD *)(a1 + 120) = v3;
    LOBYTE(v3) = *((_BYTE *)result + 56);
    *((_BYTE *)result + 56) = v4;
    v5 = *(_QWORD *)(a1 + 48);
    *(_BYTE *)(a1 + 56) = v3;
    v6 = result[6];
    result[6] = v5;
    *(_QWORD *)(a1 + 48) = v6;
  }
  return result;
}

