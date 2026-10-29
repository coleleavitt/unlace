unsigned __int64 __fastcall sub_456260(int a1, __int64 a2)
{
  int dbctx_id; // r12d
  unsigned __int64 v4; // [rsp+18h] [rbp-30h]

  v4 = __readfsqword(0x28u);
  if ( get_dbctx_qty() )
  {
    dbctx_id = get_dbctx_id();
    switch_dbctx(a1);
    sub_3D0F10(a2);
    if ( dbctx_id != -1 && dbctx_id < (unsigned __int64)get_dbctx_qty() && (unsigned __int8)sub_3E8690() )
      switch_dbctx(dbctx_id);
  }
  else
  {
    switch_dbctx(a1);
    sub_3D0F10(a2);
  }
  return v4 - __readfsqword(0x28u);
}

