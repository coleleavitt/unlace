__int64 __fastcall sub_7960(__int64 a1, __int64 a2, unsigned int a3)
{
  char v3; // al

  v3 = *(_BYTE *)(a1 + 1);
  LOBYTE(a3) = v3 == 5;
  if ( v3 == 8 )
    LOBYTE(a3) = (((unsigned __int8)*(_WORD *)(a1 + 26) - 3) & 0xFD) == 0;
  return a3;
}
