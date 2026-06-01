void __fastcall sub_46A5E0(int *a1)
{
  unsigned __int64 v1; // rbp

  v1 = *a1;
  if ( (_DWORD)v1 != -1 && v1 < get_dbctx_qty() )
  {
    if ( (unsigned __int8)sub_3FB5F0() )
      switch_dbctx(*a1);
  }
}
