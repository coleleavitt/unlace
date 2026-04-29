__int64 __fastcall sub_9DDC0(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v3; // eax

  result = 0;
  if ( (*(_DWORD *)(a2 + 4) & 0x40010) == 0 && (*(_BYTE *)(a2 + 65) & 2) == 0 )
  {
    LOBYTE(v3) = sub_9DA90(a1, a2);
    return v3 ^ 1u;
  }
  return result;
}
