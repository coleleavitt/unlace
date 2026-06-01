__int64 __fastcall Z3_mk_bvadd_no_overflow(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 sort; // rax
  __int64 v5; // r12
  __int64 v6; // r15
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rbp
  __int64 v12; // rax
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // [rsp+8h] [rbp-50h]

  *(_DWORD *)(a1 + 1520) = 0;
  if ( a4 )
  {
    sort = Z3_get_sort();
    v5 = Z3_mk_int(a1, 0, sort);
    Z3_inc_ref(a1, v5);
    v6 = Z3_mk_bvadd(a1);
    Z3_inc_ref(a1, v6);
    v7 = Z3_mk_bvslt(a1);
    Z3_inc_ref(a1, v7);
    v8 = Z3_mk_bvslt(a1);
    Z3_inc_ref(a1, v8);
    v9 = Z3_mk_and(a1);
    Z3_inc_ref(a1, v9);
    Z3_mk_bvslt(a1);
    v17 = v9;
    v10 = Z3_mk_implies(a1);
    Z3_dec_ref(a1, v6);
    Z3_dec_ref(a1, v7);
    Z3_dec_ref(a1, v8);
    Z3_dec_ref(a1, v17);
  }
  else
  {
    v12 = Z3_get_sort();
    Z3_get_bv_sort_size(a1, v12);
    v13 = Z3_mk_zero_ext(a1);
    Z3_inc_ref(a1, v13);
    v14 = Z3_mk_zero_ext(a1);
    Z3_inc_ref(a1, v14);
    v5 = Z3_mk_bvadd(a1);
    Z3_inc_ref(a1, v5);
    v15 = Z3_mk_extract(a1);
    Z3_inc_ref(a1, v15);
    v16 = Z3_mk_bv_sort(a1, 1);
    Z3_mk_int(a1, 0, v16);
    v10 = Z3_mk_eq(a1);
    Z3_dec_ref(a1, v13);
    Z3_dec_ref(a1, v14);
    Z3_dec_ref(a1, v15);
  }
  Z3_dec_ref(a1, v5);
  return v10;
}

