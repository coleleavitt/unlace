/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400694F0
// Address: 0x00000001400694F0

//----- (00000001400694F0) ----------------------------------------------------
PADDRINFOA __fastcall sub_1400694F0(__int64 a1, const CHAR *a2, unsigned __int16 a3, unsigned __int16 a4)
{
  PADDRINFOA result; // rax
  struct addrinfo *v7; // rdx
  unsigned __int8 v8; // di
  int ai_family; // eax
  struct sockaddr *ai_addr; // rax
  struct sockaddr *v11; // rax

  result = sub_1400693A0(a2, a3, a4);
  v7 = result;
  if ( result )
  {
    v8 = 1;
    if ( a3 == 23 )
    {
      ai_family = result->ai_family;
      if ( ai_family == 23 )
      {
        ai_addr = v7->ai_addr;
        *(struct sockaddr *)a1 = *ai_addr;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&ai_addr[1].sa_family;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)&ai_addr[1].sa_data[6];
      }
      else if ( ai_family == 2 )
      {
        v11 = v7->ai_addr;
        *(_WORD *)(a1 + 18) = -1;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)&v11->sa_data[2];
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      *(struct sockaddr *)a1 = *result->ai_addr;
    }
    freeaddrinfo(v7);
    return (PADDRINFOA)v8;
  }
  return result;
}
