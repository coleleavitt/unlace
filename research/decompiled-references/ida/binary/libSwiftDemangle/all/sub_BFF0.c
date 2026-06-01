__int64 __fastcall sub_BFF0(__int64 a1)
{
  char v1; // al
  __int64 v2; // r8

  v1 = *(_BYTE *)(a1 + 18);
  v2 = 2;
  if ( v1 == 4 )
    return v2;
  if ( v1 != 5 )
    return v1 == 3;
  return *(unsigned int *)(a1 + 8);
}

