__int64 __fastcall sub_13F030(__int64 a1, unsigned int a2)
{
  unsigned int v2; // ebx
  char merge_state; // dl
  unsigned int v4; // eax

  v2 = a2;
  merge_state = get_merge_state();
  v4 = a2;
  if ( (merge_state & 3) != 0 )
  {
    BYTE1(v4) = BYTE1(a2) & 0xF8;
    return v4;
  }
  return v2;
}

