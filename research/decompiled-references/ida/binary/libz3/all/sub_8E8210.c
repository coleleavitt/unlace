__int64 __fastcall sub_8E8210(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  __int64 v4; // rdx
  const void *v5; // rdi
  void *v6; // rax
  _BYTE v7[48]; // [rsp+8h] [rbp-30h] BYREF

  v2 = *(_QWORD *)(a1 + 104);
  sub_180C5A0(v7, "specrels");
  result = sub_15D1320(v2 + 560, v7);
  if ( (_DWORD)result != -1 )
  {
    v4 = *(_QWORD *)(a1 + 8672);
    if ( v4 )
    {
      if ( (unsigned int)result < *(_DWORD *)(v4 - 4) )
      {
        result = (unsigned int)result;
        v5 = *(const void **)(v4 + 8LL * (unsigned int)result);
        if ( v5 )
        {
          v6 = __dynamic_cast(
                 v5,
                 (const struct __class_type_info *)&`typeinfo for'smt::theory,
                 (const struct __class_type_info *)&`typeinfo for'smt::theory_special_relations,
                 0);
          return sub_AEF880(v6, a2);
        }
      }
    }
  }
  return result;
}

