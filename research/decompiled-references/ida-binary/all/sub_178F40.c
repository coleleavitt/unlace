void __fastcall sub_178F40(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi

  v6 = a1[36];
  if ( v6 )
  {
    a1[37] = 0;
    qfree(v6, a2, a3, a4, a5);
  }
  v7 = a1[33];
  if ( v7 )
  {
    a1[34] = 0;
    qfree(v7, a2, a3, a4, a5);
  }
  v8 = a1[6];
  if ( v8 )
  {
    a1[7] = 0;
    qfree(v8, a2, a3, a4, a5);
  }
  v9 = a1[2];
  if ( v9 )
  {
    a1[3] = 0;
    qfree(v9, a2, a3, a4, a5);
  }
}
