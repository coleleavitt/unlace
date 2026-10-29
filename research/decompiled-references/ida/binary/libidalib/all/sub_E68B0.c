__int64 __fastcall sub_E68B0(__int64 a1, __int64 a2)
{
  if ( (*(_BYTE *)(dbg + 37LL) & 0x20) != 0 && (unsigned __int8)sub_E63E0(0) )
  {
    *(_QWORD *)(a2 + 8) = (int)sub_C15F0();
    return 0;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = -1;
    return 0;
  }
}

