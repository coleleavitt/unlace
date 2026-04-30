void __fastcall base_dirtree_widget_t::copy_all(__int64 a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = base_dirtree_widget_t::copy_all;
  v1 = *(volatile signed __int32 **)(a1 + 32);
  if ( v1 )
  {
    if ( !_InterlockedSub(v1, 1u) )
      free(*(void **)(a1 + 32));
  }
}
