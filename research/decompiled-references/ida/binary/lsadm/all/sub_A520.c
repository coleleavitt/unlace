void __fastcall sub_A520(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_78CE8;
  v2 = (void *)a1[4];
  if ( v2 )
  {
    a1[5] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[1];
  if ( v3 )
  {
    a1[2] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x48u);
}

