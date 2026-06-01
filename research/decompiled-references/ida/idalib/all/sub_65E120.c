void __fastcall sub_65E120(void *a1)
{
  __int64 *v1; // rbx
  void *v2; // rdi

  v1 = &qword_2CCC380;
  do
  {
    v2 = (void *)*(v1 - 3);
    v1 -= 3;
    if ( v2 )
    {
      v1[1] = 0;
      qfree(v2);
    }
  }
  while ( v1 != &qword_2CCC380 - 12 );
}
