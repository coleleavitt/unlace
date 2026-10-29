void *__fastcall sub_2FF930(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  const void *v5; // rdi
  _BYTE v7[32]; // [rsp+8h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 8);
  sub_180C5A0(v7, "weighted_maxsat");
  v2 = (unsigned int)sub_15D1320(v1 + 560, v7);
  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 80LL))(*(_QWORD *)(a1 + 16));
  if ( (_DWORD)v2 != -1
    && (v4 = *(_QWORD *)(v3 + 8672)) != 0
    && (unsigned int)v2 < *(_DWORD *)(v4 - 4)
    && (v5 = *(const void **)(v4 + 8 * v2)) != nullptr )
  {
    return __dynamic_cast(
             v5,
             (const struct __class_type_info *)&`typeinfo for'smt::theory,
             (const struct __class_type_info *)&`typeinfo for'smt::theory_wmaxsat,
             0);
  }
  else
  {
    return nullptr;
  }
}

