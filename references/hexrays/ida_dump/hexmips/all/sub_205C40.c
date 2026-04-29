void __fastcall sub_205C40(char *a1)
{
  char *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 168;
  *((_QWORD *)v2 - 21) = off_4BF6A0;
  *((_QWORD *)v2 - 17) = off_4BF678;
  *((_QWORD *)v2 - 6) = &unk_4CBFD8;
  cleanup_argloc(v2);
  v3 = *((_QWORD *)a1 + 1);
  *(_QWORD *)a1 = off_4BC298;
  qfree(v3);
  operator delete(a1, 0xF0u);
}
