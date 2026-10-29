void __fastcall sub_30A20(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = &off_796A0;
  v2 = (void *)a1[5];
  if ( v2 )
  {
    a1[6] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
}

