__int64 __fastcall Z3_mk_bvsub_no_overflow(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r15
  __int64 sort; // r12
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // r12
  __int64 v9; // r12
  __int64 v10; // rbp
  __int64 v12; // [rsp+0h] [rbp-48h]
  __int64 v13; // [rsp+8h] [rbp-40h]

  *(_DWORD *)(a1 + 1520) = 0;
  v4 = Z3_mk_bvneg(a1);
  Z3_inc_ref(a1, v4);
  sort = Z3_get_sort(a1, a3);
  v6 = Z3_mk_bvmsb(a1, sort);
  Z3_inc_ref(a1, v6);
  v7 = Z3_mk_eq(a1);
  Z3_inc_ref(a1, v7);
  v8 = Z3_mk_int(a1, 0, sort);
  Z3_inc_ref(a1, v8);
  v12 = v8;
  v9 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v9);
  v10 = Z3_mk_bvadd_no_overflow(a1, a2, v4, 1);
  Z3_inc_ref(a1, v10);
  v13 = Z3_mk_ite(a1);
  sub_251FD0(a1, v13);
  Z3_dec_ref(a1, v4);
  Z3_dec_ref(a1, v6);
  Z3_dec_ref(a1, v7);
  Z3_dec_ref(a1, v9);
  Z3_dec_ref(a1, v10);
  Z3_dec_ref(a1, v12);
  return v13;
}

