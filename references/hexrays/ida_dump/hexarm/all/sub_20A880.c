void __fastcall sub_20A880(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4D9620;
  *((_QWORD *)v2 - 17) = off_4D95F8;
  *((_QWORD *)v2 - 6) = &unk_4E7FE0;
  cleanup_argloc(v2);
  v3 = *((_QWORD *)a1 + 1);
  *(_QWORD *)a1 = off_4D61D8;
  qfree(v3);
  operator delete(a1, 0xF0u);
}
