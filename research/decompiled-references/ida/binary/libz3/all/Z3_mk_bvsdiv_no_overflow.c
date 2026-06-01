__int64 __fastcall Z3_mk_bvsdiv_no_overflow(__int64 a1)
{
  __int64 sort; // rbp
  __int64 v2; // r15
  __int64 v3; // r14
  __int64 v4; // r13
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v8; // [rsp+8h] [rbp-50h]

  *(_DWORD *)(a1 + 1520) = 0;
  sort = Z3_get_sort();
  v2 = Z3_mk_bvmsb(a1, sort);
  Z3_inc_ref(a1, v2);
  v3 = Z3_mk_eq(a1);
  Z3_inc_ref(a1, v3);
  v4 = Z3_mk_int(a1, 0xFFFFFFFFLL, sort);
  Z3_inc_ref(a1, v4);
  v5 = Z3_mk_eq(a1);
  Z3_inc_ref(a1, v5);
  v6 = Z3_mk_and(a1);
  Z3_inc_ref(a1, v6);
  v8 = Z3_mk_not(a1);
  Z3_dec_ref(a1, v2);
  Z3_dec_ref(a1, v3);
  Z3_dec_ref(a1, v4);
  Z3_dec_ref(a1, v5);
  Z3_dec_ref(a1, v6);
  return v8;
}

