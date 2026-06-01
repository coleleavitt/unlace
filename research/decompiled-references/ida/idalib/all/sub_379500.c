__int64 sub_379500()
{
  __int64 v0; // rdi

  invalidate_dbgmem_config();
  invalidate_dbgmem_contents(-1, -1);
  v0 = *(_QWORD *)(qword_2CCB598 + 624);
  if ( v0 )
    sub_379440(v0, 14, 1, 0);
  is_mapped(0);
  return 0;
}
