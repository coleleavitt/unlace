__int64 __fastcall Z3_mk_bvsub_no_underflow(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v4; // rbp
  __int64 sort; // rax
  __int64 v7; // r14
  __int64 v8; // r13
  __int64 v9; // r15
  __int64 v10; // r12

  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a4 )
    return Z3_mk_bvule(a1);
  sort = Z3_get_sort();
  v7 = Z3_mk_int(a1, 0, sort);
  Z3_inc_ref(a1, v7);
  v8 = Z3_mk_bvneg(a1);
  Z3_inc_ref(a1, v8);
  v9 = Z3_mk_bvslt(a1);
  Z3_inc_ref(a1, v9);
  v10 = Z3_mk_bvadd_no_underflow(a1, a2, v8);
  Z3_inc_ref(a1, v10);
  v4 = Z3_mk_implies(a1);
  Z3_dec_ref(a1, v7);
  Z3_dec_ref(a1, v8);
  Z3_dec_ref(a1, v9);
  Z3_dec_ref(a1, v10);
  return v4;
}

