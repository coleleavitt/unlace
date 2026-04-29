__int64 __fastcall sub_2066F0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 136;
  *(_QWORD *)(v2 - 136) = off_4CC058;
  *(_QWORD *)(v2 - 48) = &unk_4D8FE0;
  cleanup_argloc(v2);
  return j__qfree(a1);
}
