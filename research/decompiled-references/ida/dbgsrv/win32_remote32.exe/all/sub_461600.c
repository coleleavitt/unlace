/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_461600
// Address: 0x00461600

//----- (00461600) --------------------------------------------------------
char __stdcall sub_461600(int a1, PCSTR pNodeName, unsigned __int16 a3, unsigned __int16 a4)
{
  PADDRINFOA v4; // eax
  struct addrinfo *v5; // edx
  int ai_family; // eax
  struct sockaddr *ai_addr; // eax
  struct sockaddr *v9; // eax

  v4 = sub_4614B0(pNodeName, a3, a4);
  v5 = v4;
  if ( !v4 )
    return 0;
  if ( a3 == 23 )
  {
    ai_family = v4->ai_family;
    if ( ai_family == 23 )
    {
      ai_addr = v5->ai_addr;
      *(struct sockaddr *)a1 = *ai_addr;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)&ai_addr[1].sa_family;
      *(_DWORD *)(a1 + 24) = *(_DWORD *)&ai_addr[1].sa_data[6];
      freeaddrinfo(v5);
      return 1;
    }
    else if ( ai_family == 2 )
    {
      v9 = v5->ai_addr;
      *(_WORD *)(a1 + 18) = -1;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)&v9->sa_data[2];
      freeaddrinfo(v5);
      return 1;
    }
    else
    {
      freeaddrinfo(v5);
      return 0;
    }
  }
  else
  {
    *(struct sockaddr *)a1 = *v4->ai_addr;
    freeaddrinfo(v4);
    return 1;
  }
}
