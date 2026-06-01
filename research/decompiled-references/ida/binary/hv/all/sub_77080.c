void __fastcall sub_77080(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  *a1 = qword_164AF8;
  v2 = (void *)a1[1];
  if ( v2 )
  {
    dlclose(v2);
    a1[1] = 0;
  }
  v3 = (void *)a1[2];
  if ( v3 )
  {
    a1[3] = 0;
    j__free(v3);
  }
  operator delete(a1, 0x68u);
}

