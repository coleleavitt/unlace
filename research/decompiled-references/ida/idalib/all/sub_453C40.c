__int64 __fastcall sub_453C40(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdi

  v1 = (*(_BYTE *)(a1 + 940) & 1) == 0;
  v2 = *(_QWORD *)(a1 + 1672) + 2520LL;
  if ( v1 )
    return sub_5077D0(v2);
  else
    return sub_504B40(v2);
}
