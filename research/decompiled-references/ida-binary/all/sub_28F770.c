void __fastcall sub_28F770(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax

  v2 = a1[2];
  if ( v2 )
  {
    a1[3] = 0;
    qfree(v2, a2);
  }
}
