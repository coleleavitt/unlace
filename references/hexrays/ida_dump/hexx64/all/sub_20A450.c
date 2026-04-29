__int64 __fastcall sub_20A450(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 48;
  *(_QWORD *)(v2 - 48) = &unk_4EC100;
  cleanup_argloc(v2);
  return j__qfree(a1);
}
