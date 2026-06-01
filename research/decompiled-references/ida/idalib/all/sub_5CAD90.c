__int64 __fastcall sub_5CAD90(__int64 a1)
{
  __int64 v2; // rdi

  v2 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  if ( !*(_BYTE *)(v2 + 56) )
  {
    sub_5CA3A0(v2);
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1616LL);
  }
  return *(_QWORD *)(v2 + 32);
}
