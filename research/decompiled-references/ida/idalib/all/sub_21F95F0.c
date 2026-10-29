bool __fastcall sub_21F95F0(__int64 a1)
{
  bool result; // al
  int v2; // eax
  __int64 v3; // rdx

  result = (*(_BYTE *)(a1 + 20) & 6) != 0 && (*(_BYTE *)(a1 + 20) & 7) != 3;
  if ( result )
  {
    result = 0;
    if ( *(_DWORD *)(a1 + 16) == *(_DWORD *)(*(_QWORD *)a1 + 4LL) )
    {
      v2 = *(_DWORD *)(*(_QWORD *)a1 + 8LL);
      v3 = a1 + 8;
      if ( (unsigned int)(v2 + 64) > 0x7F )
        v3 = *(_QWORD *)(a1 + 8);
      return (unsigned int)sub_22097E0(v3, (unsigned int)(v2 - 1)) == 0;
    }
  }
  return result;
}
