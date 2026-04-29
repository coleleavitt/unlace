__int64 __fastcall sub_204FF0(_QWORD *a1)
{
  _QWORD *v2; // rdi
  __int64 v3; // rdi

  v2 = a1 + 21;
  *(v2 - 21) = off_4B2900;
  *(v2 - 17) = off_4B28D8;
  *(v2 - 6) = &unk_4BEF98;
  cleanup_argloc(v2);
  v3 = a1[1];
  *a1 = off_4AF4F8;
  return qfree(v3);
}
