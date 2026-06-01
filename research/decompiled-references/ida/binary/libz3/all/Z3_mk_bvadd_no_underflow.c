__int64 __fastcall Z3_mk_bvadd_no_underflow(__int64 a1)
{
  __int64 sort; // rax
  __int64 v2; // rbp
  __int64 v3; // r12
  __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // r15
  __int64 v8; // [rsp+0h] [rbp-58h]
  __int64 v9; // [rsp+8h] [rbp-50h]

  *(_DWORD *)(a1 + 1520) = 0;
  sort = Z3_get_sort();
  v2 = Z3_mk_int(a1, 0, sort);
  Z3_inc_ref(a1, v2);
  v3 = Z3_mk_bvadd(a1);
  Z3_inc_ref(a1, v3);
  v4 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v4);
  v5 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v5);
  v8 = Z3_mk_and(a1);
  Z3_inc_ref(a1, v8);
  v6 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v6);
  v9 = Z3_mk_implies(a1);
  Z3_dec_ref(a1, v6);
  Z3_dec_ref(a1, v4);
  Z3_dec_ref(a1, v5);
  Z3_dec_ref(a1, v3);
  Z3_dec_ref(a1, v8);
  Z3_dec_ref(a1, v2);
  return v9;
}

