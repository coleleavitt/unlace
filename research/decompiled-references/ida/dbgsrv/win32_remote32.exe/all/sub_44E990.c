/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E990
// Address: 0x0044E990

//----- (0044E990) --------------------------------------------------------
int __thiscall sub_44E990(SOCKET *this, char *buf, int len)
{
  int result; // eax
  int v5; // esi

  result = recvfrom(*(this + 7), buf, len, 0, nullptr, nullptr);
  v5 = result;
  if ( result )
  {
    if ( result < 0 )
    {
      *(this + 11) = (SOCKET)"recv";
      *(this + 12) = WSAGetLastError();
      return v5;
    }
  }
  else if ( len )
  {
    *(this + 12) = 0;
    *(this + 11) = (SOCKET)"connection_closed_by_peer";
    return -1;
  }
  return result;
}
