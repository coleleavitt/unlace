__int64 __fastcall Z3_mk_bvneg_no_overflow(__int64 a1)
{
  __int64 sort; // rax

  *(_DWORD *)(a1 + 1520) = 0;
  sort = Z3_get_sort();
  Z3_mk_bvmsb(a1, sort);
  if ( (unsigned int)Z3_get_error_code(a1) )
    return 0;
  Z3_mk_eq(a1);
  if ( (unsigned int)Z3_get_error_code(a1) )
    return 0;
  else
    return Z3_mk_not(a1);
}

