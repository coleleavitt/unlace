void __fastcall sub_F18E0(int *a1)
{
  unsigned __int64 v1; // rbp

  v1 = *a1;
  if ( (_DWORD)v1 != -1 && v1 < get_dbctx_qty() )
    switch_dbctx();
}

