void __fastcall sub_56290(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = qword_164720;
  a1[1] = 0;
  a1[2] = 0;
  v2 = (void *)a1[3];
  if ( v2 )
  {
    a1[4] = 0;
    j__free(v2);
  }
  operator delete(a1, 0xA0u);
}

