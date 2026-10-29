__int64 __fastcall sub_17A0330(__int64 a1)
{
  __int64 result; // rax
  int v2; // eax

  if ( (*(_BYTE *)(a1 + 96) & 7) == 2
    || (result = 0, (*(_BYTE *)(a1 + 96) & 7) == 0) && ((*(_BYTE *)(a1 + 96) >> 3) & 3) == 2 )
  {
    LOBYTE(v2) = sub_A5EB90(a1);
    return v2 ^ 1u;
  }
  return result;
}
