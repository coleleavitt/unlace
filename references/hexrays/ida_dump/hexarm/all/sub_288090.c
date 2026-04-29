__int64 __fastcall sub_288090(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(a1 + 32);
  if ( v2 )
  {
    *(_QWORD *)(a1 + 40) = 0;
    qfree(v2);
  }
  return sub_255410(a1);
}
