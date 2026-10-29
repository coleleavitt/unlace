void __fastcall sub_6CFB00(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_2BD19D8;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2);
  }
  nullsub_649(a1);
  operator delete(a1, 0x28u);
}

