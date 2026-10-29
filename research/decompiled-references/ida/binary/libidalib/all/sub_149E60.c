__int64 sub_149E60()
{
  int v0; // eax
  unsigned int v1; // ebx

  v0 = *(_DWORD *)(get_ph() + 8);
  v1 = v0 & 1;
  if ( (v0 & 1) != 0 )
    sub_149680(0, 0, "Segment Registers");
  return v1;
}

