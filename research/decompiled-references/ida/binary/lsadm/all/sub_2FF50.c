void __fastcall sub_2FF50(_QWORD *a1)
{
  void *v2; // rdi

  *a1 = &off_797F0;
  v2 = (void *)a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    j__free(v2);
  }
  operator delete(a1, 0x28u);
}

