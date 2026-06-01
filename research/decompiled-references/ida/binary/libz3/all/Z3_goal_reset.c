char __fastcall Z3_goal_reset(__int64 a1, __int64 a2)
{
  _DWORD *v2; // rbx
  char v3; // bp
  char result; // al

  v2 = (_DWORD *)a2;
  v3 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v3 )
    sub_29C5D0();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( a2 )
  {
    v2 = *(_DWORD **)(a2 + 24);
    if ( v2 )
      ++v2[8];
  }
  result = sub_ED2DA0(v2);
  if ( v2[8]-- != 1 )
  {
    if ( !v3 )
      return result;
LABEL_10:
    result = byte_1C7EBA0;
    byte_1C7EBA0 = 1;
    return result;
  }
  sub_ED44E0(v2);
  result = sub_186B220(v2);
  if ( v3 )
    goto LABEL_10;
  return result;
}

