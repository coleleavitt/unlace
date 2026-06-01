void __fastcall sub_8CC0B0(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &unk_2BD2820;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    qfree(v2);
  }
  operator delete(a1, 0xA0u);
}

