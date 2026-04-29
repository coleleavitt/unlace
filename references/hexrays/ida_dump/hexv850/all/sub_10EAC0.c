char __fastcall sub_10EAC0(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rdi

  v2 = *(_BYTE *)(a1 + a2 + 56) == 0;
  v3 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  if ( v2 )
    return sub_10DAA0(v3);
  else
    return sub_10DBF0(v3);
}
