__int64 __fastcall sub_82400(__int64 a1)
{
  cleanup_argloc();
  if ( *(_QWORD *)(a1 + 32) )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree();
  }
  clear_tinfo_t();
  return sub_11CDA0(a1);
}
