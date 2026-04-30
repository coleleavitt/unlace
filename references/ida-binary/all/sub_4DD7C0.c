void __fastcall filtered_widget_mixin_t::jump_match(__int64 a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = &filtered_widget_mixin_t::jump_match;
  v1 = *(volatile signed __int32 **)(a1 + 104);
  if ( v1 )
  {
    if ( !_InterlockedSub(v1, 1u) )
      free(*(void **)(a1 + 104));
  }
}
