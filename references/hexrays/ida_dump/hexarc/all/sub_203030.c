__int64 __fastcall sub_203030(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4AB760;
  *(v2 - 17) = off_4AB738;
  *(v2 - 6) = &unk_4B7F40;
  cleanup_argloc(v2);
  v3 = a1[1];
  *a1 = off_4A8358;
  return qfree(v3);
}
