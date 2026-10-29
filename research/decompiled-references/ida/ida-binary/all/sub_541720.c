__int64 __fastcall _base_app_mixin_t::hide_wait_dialog(_QWORD *a1)
{
  *a1 = &off_86FF78;
  return qsem_free(a1[2]);
}
