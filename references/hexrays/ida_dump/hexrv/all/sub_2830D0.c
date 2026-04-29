__int64 __fastcall sub_2830D0(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  return sub_250450(a1);
}
