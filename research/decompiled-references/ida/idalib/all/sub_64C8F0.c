void __fastcall sub_64C8F0(_QWORD *a1)
{
  void *v2; // rdi
  void *v3; // rdi

  if ( a1 )
  {
    v2 = (void *)a1[6];
    if ( v2 )
    {
      a1[7] = 0;
      qfree(v2);
    }
    v3 = (void *)a1[1];
    if ( v3 )
    {
      a1[2] = 0;
      qfree(v3);
    }
    operator delete(a1, 0x50u);
  }
}
