__int64 __fastcall sub_7BD40(__int64 a1)
{
  __int64 v2; // rdi

  cleanup_argloc(a1 + 56);
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  clear_tinfo_t(a1 + 24);
  return sub_1166E0(a1);
}
