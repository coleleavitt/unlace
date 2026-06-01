void __fastcall sub_1392590(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2BB2420;
  v2 = (void *)a1[1];
  if ( v2 )
    operator delete(v2);
  nullsub_455();
  operator delete(a1, 0x20u);
}
