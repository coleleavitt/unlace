void *__fastcall sub_BE4AC0(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 v4; // r12
  const void *v5; // r13
  const void *v6; // rdi
  void *result; // rax

  v2 = *(_QWORD *)(a2 + 8672);
  *(_QWORD *)a1 = a2;
  v4 = *(unsigned int *)(a1 + 32);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 - 4) <= 5u || (v5 = *(const void **)(v2 + 40)) == nullptr )
    {
      *(_QWORD *)(a1 + 72) = 0;
      *(_OWORD *)(a1 + 56) = 0;
      if ( (_DWORD)v4 == -1 )
      {
        result = nullptr;
        goto LABEL_10;
      }
      goto LABEL_5;
    }
    *(_QWORD *)(a1 + 56) = __dynamic_cast(
                             *(const void **)(v2 + 40),
                             (const struct __class_type_info *)&`typeinfo for'smt::theory,
                             (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::mi_ext>,
                             0);
    *(_QWORD *)(a1 + 64) = __dynamic_cast(
                             v5,
                             (const struct __class_type_info *)&`typeinfo for'smt::theory,
                             (const struct __class_type_info *)&`typeinfo for'smt::theory_arith<smt::i_ext>,
                             0);
    *(_QWORD *)(a1 + 72) = __dynamic_cast(
                             v5,
                             (const struct __class_type_info *)&`typeinfo for'smt::theory,
                             (const struct __class_type_info *)&`typeinfo for'smt::theory_lra,
                             0);
    if ( (_DWORD)v4 != -1 )
    {
LABEL_5:
      if ( (unsigned int)v4 < *(_DWORD *)(v2 - 4) )
      {
        v6 = *(const void **)(v2 + 8 * v4);
        if ( v6 )
        {
          result = __dynamic_cast(
                     v6,
                     (const struct __class_type_info *)&`typeinfo for'smt::theory,
                     (const struct __class_type_info *)&`typeinfo for'smt::theory_bv,
                     0);
          *(_QWORD *)(a1 + 80) = result;
          return result;
        }
      }
    }
  }
  else
  {
    *(_QWORD *)(a1 + 72) = 0;
    *(_OWORD *)(a1 + 56) = 0;
  }
  result = nullptr;
LABEL_10:
  *(_QWORD *)(a1 + 80) = 0;
  return result;
}

