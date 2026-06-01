__int64 sub_46AA70()
{
  _DWORD *ph; // rax
  int v1; // edx

  ph = (_DWORD *)get_ph();
  v1 = ph[1];
  switch ( v1 )
  {
    case 13:
      return (unsigned int)ph[17];
    case 12:
      return (unsigned int)(ph[18] - 1);
    case 15:
      return (unsigned int)ph[17];
  }
  return 0xFFFFFFFFLL;
}
