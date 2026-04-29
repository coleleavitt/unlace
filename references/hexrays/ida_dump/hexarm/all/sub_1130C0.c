char __fastcall sub_1130C0(__int64 a1, int a2)
{
  bool v2; // zf
  __int64 v3; // rdi

  v2 = *(_BYTE *)(a1 + a2 + 56) == 0;
  v3 = *(_QWORD *)(a1 + 8LL * a2 + 8);
  if ( v2 )
    return sub_1120A0(v3);
  else
    return sub_1121F0(v3);
}
