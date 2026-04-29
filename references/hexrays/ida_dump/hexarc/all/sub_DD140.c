__int64 __fastcall sub_DD140(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 48;
  *(_QWORD *)(v1 - 48) = off_4A9620;
  return clear_tinfo_t(v1);
}
