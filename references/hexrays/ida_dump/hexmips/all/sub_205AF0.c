__int64 __fastcall sub_205AF0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 136;
  *(_QWORD *)(v2 - 136) = off_4BF678;
  *(_QWORD *)(v2 - 48) = &unk_4CBFD8;
  cleanup_argloc(v2);
  return j__qfree(a1);
}
