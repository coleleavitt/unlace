void __fastcall sub_9A1080(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2B165D8;
  operator delete();
  v2 = (void *)a1[1];
  if ( v2 )
    operator delete(v2);
  nullsub_310();
  operator delete(a1, 0x38u);
}

