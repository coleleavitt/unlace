void __fastcall sub_634D30(__int64 a1)
{
  char v1; // al
  __int64 view_options; // rax

  if ( *(_BYTE *)(a1 + 129) )
  {
    switch_dbctx(*(int *)(a1 + 8));
    v1 = getinf_flag(2, 128);
    if ( v1 == *(_BYTE *)(a1 + 128) )
    {
      view_options = get_view_options(v1);
      dto_copy_to_inf(view_options);
    }
  }
}
