__int64 __fastcall sub_440060(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rdi

  v1 = (*(_BYTE *)(a1 + 772) & 1) == 0;
  v2 = *(_QWORD *)(a1 + 1480) + 2408LL;
  if ( v1 )
    return sub_4F01F0(v2);
  else
    return sub_4ED600(v2);
}

