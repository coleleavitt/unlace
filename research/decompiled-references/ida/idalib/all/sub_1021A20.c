__int64 __fastcall sub_1021A20(__int64 a1, int a2, bool *a3)
{
  __int64 v5; // rax

  if ( a3 )
    *a3 = a2 == 0;
  if ( !a2 )
    return 0;
  v5 = sub_1021920(a1, a2);
  return sub_1020110(a1, v5, HIDWORD(v5), a3);
}
