unsigned __int64 __fastcall sub_1286B70(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned int v2; // ecx

  result = 0;
  if ( *(_DWORD *)(a1 + 68) != 5 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    if ( v2 <= 0x26 )
      return 2 * ((0x480000000AuLL >> v2) & 1);
  }
  return result;
}
