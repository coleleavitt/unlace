__int64 __fastcall sub_205B30(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4BF6A0;
  *(v2 - 17) = off_4BF678;
  *(v2 - 6) = &unk_4CBFD8;
  cleanup_argloc(v2);
  v3 = a1[1];
  *a1 = off_4BC298;
  return qfree(v3);
}
