__int64 __fastcall sub_283450(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  return sub_2507D0(a1);
}
