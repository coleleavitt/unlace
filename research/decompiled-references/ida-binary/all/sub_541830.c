void __fastcall _base_app_mixin_t::clear_long_op_cancellation(_QWORD *a1)
{
  *a1 = &off_86FF78;
  qsem_free(a1[2]);
  operator delete(a1, 0x18u);
}
