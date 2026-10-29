__int64 __fastcall sub_4EAB60(__int64 a1, const void *a2)
{
  _QWORD *v2; // rax
  unsigned int v3; // ebx
  __int64 result; // rax
  __int64 v5; // rdx
  _QWORD v6[4]; // [rsp+8h] [rbp-20h] BYREF

  v2 = __dynamic_cast(
         a2,
         (const struct __class_type_info *)&`typeinfo for'datalog::relation_base,
         (const struct __class_type_info *)&`typeinfo for'datalog::external_relation,
         0);
  if ( !v2 )
    __cxa_bad_cast();
  v3 = 0;
  v6[0] = v2[4];
  for ( result = *(_QWORD *)(a1 + 24); result; result = *(_QWORD *)(a1 + 24) )
  {
    if ( v3 >= *(_DWORD *)(result - 4) )
      break;
    v5 = v3++;
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD *, __int64, _QWORD *))(**(_QWORD **)(*(_QWORD *)(a1 + 8)
                                                                                               + 40LL)
                                                                                 + 32LL))(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL),
      *(_QWORD *)(result + 8 * v5),
      1,
      v6,
      1,
      v6);
  }
  return result;
}

