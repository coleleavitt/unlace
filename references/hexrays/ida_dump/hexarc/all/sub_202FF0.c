__int64 __fastcall sub_202FF0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 136;
  *(_QWORD *)(v2 - 136) = off_4AB738;
  *(_QWORD *)(v2 - 48) = &unk_4B7F40;
  cleanup_argloc(v2);
  return j__qfree(a1);
}
