void __fastcall sub_5E9F40(_QWORD *a1)
{
  void *v2; // rdi
  void **v3; // rbx
  void **v4; // rbp
  void *v5; // rdi

  *a1 = &off_2B085A8;
  v2 = (void *)a1[23];
  if ( v2 )
  {
    a1[24] = 0;
    qfree(v2);
  }
  v3 = (void **)(a1 + 19);
  v4 = (void **)(a1 + 7);
  *(v4 - 7) = &unk_2BD1228;
  do
  {
    v5 = *v3;
    if ( *v3 )
    {
      v3[1] = nullptr;
      qfree(v5);
    }
    v3 -= 3;
  }
  while ( v3 != v4 );
}

