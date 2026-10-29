void __fastcall sub_63D8D0(__int64 a1)
{
  _QWORD *v1; // rbx
  void *v2; // rdi

  v1 = *(_QWORD **)(a1 + 1688);
  v2 = (void *)v1[2];
  if ( v2 )
  {
    v1[3] = 0;
    qfree(v2);
    v1[2] = 0;
    v1[4] = 0;
  }
  v1[1] = -1;
}
