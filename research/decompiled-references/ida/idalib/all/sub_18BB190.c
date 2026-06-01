__int64 __fastcall sub_18BB190(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi

  v3 = *(_QWORD *)(a2 + 16);
  if ( v3 )
    *(_BYTE *)(a1 + 24) |= sub_B7D7F0(v3);
  return 1;
}
