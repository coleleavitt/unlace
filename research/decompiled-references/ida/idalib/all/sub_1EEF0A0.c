__int64 __fastcall sub_1EEF0A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  unsigned int v3; // ebx

  v2 = 0;
  v3 = a2;
  if ( (_DWORD)a2 )
  {
    v3 = 0;
    v2 = HIDWORD(a2);
    if ( HIDWORD(a2) )
    {
      v3 = sub_1EEEDC0(a1 - 8, a2, 0);
      v2 = (unsigned int)sub_1EEEDC0(a1 - 8, SHIDWORD(a2), 1);
    }
  }
  return (v2 << 32) | v3;
}
