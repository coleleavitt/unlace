/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44E9F0
// Address: 0x0044E9F0

//----- (0044E9F0) --------------------------------------------------------
int __thiscall sub_44E9F0(SOCKET *this, char *buf, int len)
{
  int result; // eax
  int v5; // esi

  result = sendto(*(this + 7), buf, len, 0, nullptr, 0);
  v5 = result;
  if ( result < 0 )
  {
    *(this + 11) = (SOCKET)"send";
    *(this + 12) = WSAGetLastError();
    return v5;
  }
  return result;
}
