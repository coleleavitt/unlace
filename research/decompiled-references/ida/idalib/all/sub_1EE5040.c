__int64 __fastcall sub_1EE5040(__int64 a1, int a2, __m128i a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rdi

  if ( !a2 )
    return 0;
  v5 = a1 - 48;
  LOBYTE(v3) = (unsigned int)(-2 - a2) >= *(_DWORD *)(a1 + 9260) || a2 > 0;
  if ( !(_BYTE)v3 )
    return sub_1EE47C0(v5, a2, a3);
  sub_1EAD680(v5, "source location entry ID out-of-range for AST file", 50);
  return v3;
}
