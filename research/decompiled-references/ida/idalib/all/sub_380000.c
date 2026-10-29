__int64 __fastcall sub_380000(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  void *v7; // rdi

  *a1 = &off_2BF9800;
  v7 = (void *)a1[73];
  if ( v7 )
  {
    a1[74] = 0;
    qfree(v7);
  }
  return sub_571590(a1, a2, a3, a4, a5, a6);
}
