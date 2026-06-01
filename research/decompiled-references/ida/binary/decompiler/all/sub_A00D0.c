__int64 __fastcall sub_A00D0(__int64 a1, __int64 a2, char a3)
{
  if ( (a3 & 0x80) == 0 )
    *(_DWORD *)(a2 + 4) &= ~0x80u;
  return sub_11B190(a2, a1);
}
