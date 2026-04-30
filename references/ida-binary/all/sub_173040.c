void __fastcall sub_173040(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax

  v5 = a1[1];
  if ( v5 )
  {
    a1[2] = 0;
    qfree(v5, a2, a3, a4, a5);
  }
}
