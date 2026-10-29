_BOOL8 __fastcall Z3_goal_inconsistent(__int64 a1, __int64 a2)
{
  char v2; // bp
  __int64 v3; // r12
  _BOOL4 v4; // ebx

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C550();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || (v3 = *(_QWORD *)(a2 + 24)) == 0 )
    BUG();
  v4 = (*(_BYTE *)(v3 + 123) & 0x20) != 0;
  if ( *(_DWORD *)(v3 + 32) )
  {
    if ( !v2 )
      return v4;
  }
  else
  {
    sub_ED44E0(v3);
    sub_186B220((void *)v3);
    if ( !v2 )
      return v4;
  }
  byte_1C7EBA0 = 1;
  return v4;
}

