void __fastcall sub_13924F0(_QWORD *a1)
{
  void *v1; // rdi

  *a1 = &off_2BB2420;
  v1 = (void *)a1[1];
  if ( v1 )
    operator delete(v1);
  nullsub_455();
}
