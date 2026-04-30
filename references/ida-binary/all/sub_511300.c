__int64 __fastcall app_logger_t::do_vlog(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  *a1 = &app_logger_t::do_vlog;
  v3 = a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    qfree(v3, a2);
  }
  v4 = a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    qfree(v4, a2);
  }
  v5 = a1[2];
  *a1 = &off_86FF78;
  return qsem_free(v5);
}
