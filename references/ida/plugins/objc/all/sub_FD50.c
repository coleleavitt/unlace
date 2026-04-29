__int64 __fastcall sub_FD50(__int64 a1, _DWORD *a2)
{
  int _32bit; // eax
  unsigned int v3; // edx

  _32bit = get_32bit();
  v3 = 0;
  if ( _32bit != -1 )
  {
    *a2 = _32bit;
    return 1;
  }
  return v3;
}
