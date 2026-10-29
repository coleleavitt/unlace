__int64 sub_120280()
{
  int data_elsize; // ebp
  int v2; // eax
  int v3; // esi
  int v4; // eax

  if ( (WORD4(xmmword_2528B0) & 0x600) != 0x400
    || (DWORD2(xmmword_2528B0) & 0xE0000000) != 0x80000000LL && (DWORD2(xmmword_2528B0) & 0xF0000000) != 0x40000000 )
  {
    return sub_11FA80(xmmword_2528A0);
  }
  data_elsize = get_data_elsize();
  v2 = nbits();
  v3 = v2 + 14;
  v4 = v2 + 7;
  if ( v4 >= 0 )
    v3 = v4;
  return sub_11A350(xmmword_2528A0, data_elsize * (v3 >> 3));
}

