__int64 __fastcall sub_1EEF040(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // ebx

  if ( !(_DWORD)a2 )
    return 0;
  if ( !HIDWORD(a2) )
    return 0;
  v3 = sub_1EEEDC0(a1, a2, 0);
  return (sub_1EEEDC0(a1, SHIDWORD(a2), 1) << 32) | v3;
}
