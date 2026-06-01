void __fastcall perform_external_merge(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdi

  *a1 = perform_external_merge;
  v3 = a1[4];
  if ( v3 )
  {
    a1[5] = 0;
    qfree(v3, a2);
  }
  v4 = a1[2];
  *a1 = &off_86FF78;
  qsem_free(v4);
  operator delete(a1, 0x38u);
}
