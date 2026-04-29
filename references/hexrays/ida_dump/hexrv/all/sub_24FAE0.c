__int64 __fastcall sub_24FAE0(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi

  v2 = a1[10];
  *a1 = off_4B2898;
  while ( v2 )
  {
    sub_24EFB0(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  v4 = a1[5];
  *a1 = off_4AE778;
  if ( v4 )
  {
    a1[6] = 0;
    qfree(v4);
  }
  v5 = a1[2];
  if ( v5 )
  {
    a1[3] = 0;
    qfree(v5);
  }
  return j__qfree(a1);
}
