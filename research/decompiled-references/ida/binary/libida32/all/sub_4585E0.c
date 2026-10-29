void __fastcall sub_4585E0(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // rbx
  void *v4; // rdi
  void *v5; // rdi

  v2 = (void *)a1[37];
  if ( v2 )
  {
    a1[38] = 0;
    qfree(v2);
  }
  v3 = (void **)(a1 + 26);
  do
  {
    v4 = *v3;
    if ( *v3 )
    {
      v3[1] = nullptr;
      qfree(v4);
    }
    v3 -= 3;
  }
  while ( v3 != a1 + 2 );
  v5 = (void *)a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
}

