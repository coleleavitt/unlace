__int64 __fastcall sub_384A30(__int64 a1)
{
  __int64 v2; // rdi

  v2 = a1 + 48;
  *(_QWORD *)(v2 - 48) = &off_4E1238;
  clear_tinfo_t(v2);
  return clear_tinfo_t(a1 + 40);
}
