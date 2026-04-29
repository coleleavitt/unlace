__int64 __fastcall sub_3EDA20(_QWORD *a1)
{
  __int64 v2; // rbx
  void *v3; // rdi
  __int64 v4; // rbx
  void *v5; // rdi
  __int64 v6; // rdi

  v2 = a1[18];
  *a1 = off_4E9A58;
  while ( v2 )
  {
    sub_3ED510(*(_QWORD **)(v2 + 24));
    v3 = (void *)v2;
    v2 = *(_QWORD *)(v2 + 16);
    operator delete(v3, 0x28u);
  }
  if ( a1[13] )
  {
    a1[14] = 0;
    qfree();
  }
  v4 = a1[9];
  while ( v4 )
  {
    sub_3ED1D0(*(_QWORD **)(v4 + 24));
    v5 = (void *)v4;
    v4 = *(_QWORD *)(v4 + 16);
    operator delete(v5, 0x28u);
  }
  v6 = a1[4];
  *a1 = &off_4DBD38;
  if ( v6 )
  {
    a1[5] = 0;
    qfree();
  }
  if ( a1[1] )
  {
    a1[2] = 0;
    qfree();
  }
  return j__qfree();
}
