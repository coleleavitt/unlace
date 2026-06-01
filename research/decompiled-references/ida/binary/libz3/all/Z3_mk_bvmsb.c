__int64 __fastcall Z3_mk_bvmsb(__int64 a1, __int64 a2)
{
  int bv_sort_size; // r13d
  __int64 v3; // r12
  __int64 v4; // rbp
  __int64 v5; // r13

  *(_DWORD *)(a1 + 1520) = 0;
  bv_sort_size = Z3_get_bv_sort_size();
  if ( bv_sort_size )
  {
    v3 = Z3_mk_int64(a1, 1, a2);
    Z3_inc_ref(a1, v3);
    v4 = Z3_mk_int64(a1, (unsigned int)(bv_sort_size - 1), a2);
    Z3_inc_ref(a1, v4);
    v5 = Z3_mk_bvshl(a1);
    Z3_dec_ref(a1, v3);
    Z3_dec_ref(a1, v4);
    return v5;
  }
  else
  {
    sub_24EA30(a1, 3u, "zero length bit-vector supplied");
    return 0;
  }
}

