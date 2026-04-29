void __fastcall sub_2B030(char *a1)
{
  char *v1; // rbp
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v1 = a1 + 8;
  *(_QWORD *)a1 = &off_C7980;
  clear_tinfo_t(a1 + 8);
  v3 = *((_QWORD *)a1 + 2);
  if ( v3 )
  {
    *((_QWORD *)a1 + 3) = 0;
    qfree(v3);
    *((_QWORD *)a1 + 2) = 0;
    *((_QWORD *)a1 + 4) = 0;
  }
  v4 = *((_QWORD *)a1 + 5);
  if ( v4 )
  {
    *((_QWORD *)a1 + 6) = 0;
    qfree(v4);
  }
  v5 = *((_QWORD *)a1 + 2);
  if ( v5 )
  {
    *((_QWORD *)a1 + 3) = 0;
    qfree(v5);
  }
  clear_tinfo_t(v1);
  operator delete(a1, 0x98u);
}
