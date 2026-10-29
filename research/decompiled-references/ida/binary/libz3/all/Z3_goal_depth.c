__int64 __fastcall Z3_goal_depth(__int64 a1, __int64 a2)
{
  char v2; // bp
  _DWORD *v3; // rbx
  unsigned int v4; // r12d

  v2 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v2 )
    sub_29C590();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( !a2 || (v3 = *(_DWORD **)(a2 + 24)) == nullptr )
    BUG();
  v4 = v3[30] & 0x3FFFFFF;
  if ( v3[8] )
  {
    if ( !v2 )
      return v4;
  }
  else
  {
    sub_ED44E0(v3);
    sub_186B220(v3);
    if ( !v2 )
      return v4;
  }
  byte_1C7EBA0 = 1;
  return v4;
}

