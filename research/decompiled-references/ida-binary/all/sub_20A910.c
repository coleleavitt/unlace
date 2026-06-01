void __fastcall sub_20A910(_QWORD *a1, const char *a2)
{
  __int64 v2; // rax

  v2 = a1[1];
  if ( v2 )
  {
    a1[2] = 0;
    qfree(v2, a2);
  }
}
