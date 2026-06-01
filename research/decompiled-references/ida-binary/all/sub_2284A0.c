void __fastcall srcdbg_get_local_vars(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = &srcdbg_get_local_vars;
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x48u);
}
