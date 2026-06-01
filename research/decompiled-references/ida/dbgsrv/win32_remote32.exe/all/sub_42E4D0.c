/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42E4D0
// Address: 0x0042E4D0

//----- (0042E4D0) --------------------------------------------------------
int __thiscall sub_42E4D0(_DWORD *this)
{
  int v2; // eax
  int result; // eax

  sub_42EDD0(this + 15, 0);
  sub_42EDD0(this + 18, 0);
  v2 = *(this + 26);
  if ( v2 && *(_DWORD *)(v2 + 4) )
  {
    if ( *(this + 22) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(262);
    }
    if ( *(this + 32) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(263);
    }
    if ( *(this + 35) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(264);
    }
    if ( *(this + 38) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(265);
    }
    if ( *(this + 41) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(266);
    }
    if ( *(this + 44) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(267);
    }
    if ( *(this + 47) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(268);
    }
    if ( *(this + 50) )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(269);
    }
  }
  result = *(this + 25);
  if ( result )
  {
    if ( *(_DWORD *)(result + 68) != -1 )
    {
      if ( byte_4B70F0 )
        __debugbreak();
      sub_4533F0(485);
    }
    *(_DWORD *)(result + 68) = 0;
    *(this + 25) = 0;
  }
  *(this + 26) = 0;
  *(this + 27) = -1;
  *(this + 55) = 0;
  return result;
}
// 4B70F0: using guessed type char byte_4B70F0;
