void __fastcall sub_55C8E0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  *a1 = &off_2B2E650;
  invalidate_cache_for_tlc((__int64)a1);
  v2 = (void *)a1[17];
  a1[15] = 0;
  if ( v2 )
  {
    a1[18] = 0;
    qfree(v2);
  }
  clear_tinfo_t(a1 + 16);
  v3 = (void *)a1[11];
  *a1 = &unk_2BFB060;
  if ( v3 )
  {
    a1[12] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[8];
  if ( v4 )
  {
    a1[9] = 0;
    qfree(v4);
  }
  v5 = (void *)a1[4];
  if ( v5 )
  {
    a1[5] = 0;
    qfree(v5);
  }
  v6 = (void *)a1[1];
  if ( v6 )
  {
    a1[2] = 0;
    qfree(v6);
  }
  operator delete(a1, 0xA8u);
}
