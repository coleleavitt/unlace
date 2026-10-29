__int64 __fastcall sub_15D63A0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rax
  char v3; // dl

  result = 0;
  if ( a1 )
  {
    v2 = sub_B8DC30(a1, 1);
    if ( v2 && (v2 = sub_B8DC30(a1, 1), *(_BYTE *)(v2 + 16) == 26) )
    {
      return 1;
    }
    else
    {
      v3 = *(_BYTE *)(a1 + 28) & 0x7F;
      LOBYTE(v2) = v3 == 18;
      return (v3 == 8) | (unsigned int)v2;
    }
  }
  return result;
}
