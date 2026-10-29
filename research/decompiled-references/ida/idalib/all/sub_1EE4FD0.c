__int64 __fastcall sub_1EE4FD0(__int64 a1, int a2, __m128i a3)
{
  unsigned int v3; // ebx
  size_t v4; // rax

  if ( !a2 )
    return 0;
  LOBYTE(v3) = (unsigned int)(-2 - a2) >= *(_DWORD *)(a1 + 9308) || a2 > 0;
  if ( !(_BYTE)v3 )
    return sub_1EE47C0(a1, a2, a3);
  v4 = j__strlen("source location entry ID out-of-range for AST file");
  sub_1EAD680(a1, "source location entry ID out-of-range for AST file", v4);
  return v3;
}
