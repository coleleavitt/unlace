void __fastcall sub_44EB40(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_2AFF060;
  v2 = (void *)a1[11];
  if ( v2 )
  {
    a1[12] = 0;
    qfree(v2);
  }
  v3 = (void *)a1[7];
  *a1 = &unk_2BD0D80;
  sub_44E880(v3);
  operator delete(a1, 0x70u);
}

