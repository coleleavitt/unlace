void __fastcall sub_9A1040(_QWORD *a1)
{
  void *v1; // rdi

  *a1 = &off_2B165D8;
  operator delete();
  v1 = (void *)a1[1];
  if ( v1 )
    operator delete(v1);
  nullsub_310();
}

