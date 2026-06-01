void __fastcall sub_36460(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi

  v2 = (void *)a1[9];
  if ( v2 )
  {
    a1[10] = 0;
    j__free(v2);
  }
  v3 = (void *)a1[6];
  if ( v3 )
  {
    a1[7] = 0;
    j__free(v3);
  }
  v4 = (void *)a1[3];
  if ( v4 )
  {
    a1[4] = 0;
    j__free(v4);
  }
}

