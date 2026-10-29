__int64 __fastcall sub_CFE8D0(__int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // rdx

  v1 = *(_QWORD *)(a1 + 80);
  if ( !v1 )
    return 0;
  v2 = v1 & 0xFFFFFFFFFFFFFFFCLL;
  if ( (v1 & 2) == 0 )
  {
    if ( v2 && (*(_BYTE *)(v2 + 28) & 0x7Fu) - 26 <= 0x1A )
      return *(_QWORD *)(v2 + 48);
    return 0;
  }
  if ( !v2 )
    return 0;
  return *(_QWORD *)(v2 + 8);
}
