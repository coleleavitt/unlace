void __fastcall sub_3E180(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_162138;
  v2 = (void *)a1[6];
  if ( v2 )
  {
    a1[7] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x48u);
}

