__int64 sub_375BA0()
{
  __int64 v0; // rdi

  invalidate_dbgmem_config();
  invalidate_dbgmem_contents(0xFFFFFFFFLL, 0xFFFFFFFFLL);
  v0 = *(_QWORD *)(qword_2CA1698 + 536);
  if ( v0 )
    sub_375AE0(v0, 14, 1, 0);
  is_mapped(0);
  return 0;
}

