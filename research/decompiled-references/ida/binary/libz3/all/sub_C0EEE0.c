__int64 __fastcall sub_C0EEE0(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // r12
  __int64 v3; // rax
  __int64 result; // rax
  _QWORD v5[4]; // [rsp+0h] [rbp-20h] BYREF

  if ( *(_BYTE *)(a1 + 948) != a2 )
  {
    v2 = a1 + 16;
    v3 = *(_QWORD *)(a1 + 8);
    *(_BYTE *)(a1 + 948) = a2;
    if ( *(_BYTE *)(v3 + 48) )
      sub_1862300(a1 + 16, "pull_cheap_ite", 1);
    sub_1862300(v2, "elim_and", a2);
    sub_1862300(v2, "arith_ineq_lhs", 1);
    sub_1862300(v2, "sort_sums", 1);
    sub_1862300(v2, "rewrite_patterns", 1);
    sub_1862300(v2, "eq2ineq", *(unsigned __int8 *)(*(_QWORD *)(a1 + 8) + 248LL));
    sub_1862300(v2, "gcd_rounding", 1);
    sub_1862300(v2, "expand_select_store", 1);
    sub_1862300(v2, "bv_sort_ac", 1);
    sub_180C5A0(v5, "seq");
    sub_1862300(v2, "coalesce_chars", *(_QWORD *)(*(_QWORD *)(a1 + 8) + 752LL) != v5[0]);
    sub_1862300(v2, "som", 1);
    if ( *(_DWORD *)(*(_QWORD *)(a1 + 8) + 252LL) == 2 )
      sub_1862300(v2, "flat", 1);
    sub_14B5FE0(a1 + 24, v2);
    sub_14B6450(a1 + 24);
    return sub_14B64E0(a1 + 24, a1 + 40);
  }
  return result;
}

