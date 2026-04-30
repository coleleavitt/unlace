void __fastcall filtered_widget_mixin_t::jump_match(void *a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = &filtered_widget_mixin_t::jump_match;
  v1 = *((volatile signed __int32 **)a1 + 13);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*((void **)a1 + 13));
    operator delete(a1, 0x90u);
  }
  else
  {
    operator delete(a1, 0x90u);
  }
}
