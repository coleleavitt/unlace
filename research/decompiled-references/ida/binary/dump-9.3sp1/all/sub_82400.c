__int64 __fastcall sub_82400(__int64 a1)
{
  __int64 v2; // rdi

  cleanup_argloc();
  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  clear_tinfo_t();
  return sub_11CDA0(a1);
}
