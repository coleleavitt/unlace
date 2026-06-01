void __fastcall worklists_dirspec_t__::vfunc_1(_QWORD *a1, const char *a2)
{
  __int64 v3; // rdi

  *a1 = &unk_8725A0;
  v3 = a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    qfree(v3, a2);
  }
  operator delete(a1, 0x30u);
}
