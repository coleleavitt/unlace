unsigned __int64 __fastcall sub_15D27C0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 248);
  result = 0;
  if ( v2 <= 0x26 )
    return (0x7818138086uLL >> v2) & 1;
  return result;
}
