void __fastcall sub_226F640(_QWORD *a1, size_t a2, unsigned __int8 a3)
{
  __int64 v5; // rdi

  v5 = a1[1];
  if ( a2 + v5 > a1[2] )
  {
    sub_2236E10((__int64)a1, a1 + 3, a2 + v5, 1);
    v5 = a1[1];
  }
  if ( a2 )
  {
    memset((void *)(*a1 + v5), a3, a2);
    a1[1] += a2;
  }
  else
  {
    a1[1] = v5;
  }
}
