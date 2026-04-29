__int64 __fastcall sub_DFF20(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 48;
  *(_QWORD *)(v2 - 48) = off_4C9F40;
  clear_tinfo_t(v2);
  return j__qfree(a1);
}
