__int64 __fastcall sub_529130(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  clear_tinfo_t(a1 + 8);
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3);
  }
  return cleanup_argloc(a1);
}

