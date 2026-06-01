void __fastcall base_dirtree_widget_t::copy_all(void *a1)
{
  volatile signed __int32 *v1; // rax

  *(_QWORD *)a1 = base_dirtree_widget_t::copy_all;
  v1 = *((volatile signed __int32 **)a1 + 4);
  if ( v1 && !_InterlockedSub(v1, 1u) )
  {
    free(*((void **)a1 + 4));
    operator delete(a1, 0x38u);
  }
  else
  {
    operator delete(a1, 0x38u);
  }
}
