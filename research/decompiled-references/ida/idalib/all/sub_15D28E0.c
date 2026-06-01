unsigned __int64 __fastcall sub_15D28E0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ecx
  unsigned __int64 result; // rax

  v2 = *(_DWORD *)(a2 + 248);
  result = 0;
  if ( v2 <= 0x33 )
    return (0xE064006006000uLL >> v2) & 1;
  return result;
}
