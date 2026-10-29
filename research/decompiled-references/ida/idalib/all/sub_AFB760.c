__int64 __fastcall sub_AFB760(__int64 a1, __int64 a2)
{
  size_t v2; // rax
  size_t v3; // rax

  if ( (*(_BYTE *)(a1 + 34) & 0xF0) == 0xF0 )
    sub_FA77D0(a1);
  v2 = j__strlen("[[msvc::constexpr");
  sub_9954E0(a2, "[[msvc::constexpr", v2);
  v3 = j__strlen("]]");
  return sub_9954E0(a2, "]]", v3);
}
