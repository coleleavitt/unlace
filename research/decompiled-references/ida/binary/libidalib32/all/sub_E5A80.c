__int64 __fastcall sub_E5A80(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(dbg + 37LL) & 0x20) != 0 && (unsigned __int8)sub_E55C0(0) )
  {
    *(_DWORD *)(a2 + 8) = sub_C0450();
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = -1;
    return 0;
  }
}

