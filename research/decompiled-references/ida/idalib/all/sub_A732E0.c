__int64 __fastcall sub_A732E0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  char v3; // dl

  result = *(_QWORD *)(a2 + 8);
  v3 = (*(_BYTE *)(a2 + 1) >> 1) & 3;
  if ( v3 == 1 )
    return sub_A73030(a1, *(_QWORD *)(a2 + 8), 1u);
  if ( v3 )
  {
    if ( v3 == 2 )
      return sub_A72DD0(a1, result);
    else
      return sub_A73320();
  }
  return result;
}
