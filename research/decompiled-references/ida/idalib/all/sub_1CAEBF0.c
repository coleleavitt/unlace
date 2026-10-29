__int64 __fastcall sub_1CAEBF0(__int64 a1, __int64 a2, int *a3)
{
  __int64 result; // rax
  int v4; // eax

  result = 1;
  if ( *(_DWORD *)(a1 + 12) <= (*(_WORD *)(a2 + 20) & 0x7FFFu) )
  {
    v4 = *a3;
    *(_BYTE *)(a1 + 17) = 1;
    *(_DWORD *)(a1 + 20) = v4;
    return 0;
  }
  return result;
}
