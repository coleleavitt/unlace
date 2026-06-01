__int64 __fastcall sub_541E80(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 32;
  *(_QWORD *)(v2 - 32) = off_2B2E130;
  clear_tinfo_t(v2);
  return clear_tinfo_t(a1 + 16);
}
