/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_491330
// Address: 0x0000000000491330

//----- (0000000000491330) ----------------------------------------------------
__int64 __fastcall sub_491330(
        __int64 a1,
        char *name,
        int a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  int v9; // w21
  const char *v12; // x1
  struct addrinfo *v13; // x0
  struct sockaddr *v14; // x1
  unsigned int v15; // w20
  __int64 v16; // x3
  int ai_family; // w1
  struct sockaddr *v19; // x1
  struct sockaddr *ai_addr; // x1
  __int64 v21; // x3
  struct addrinfo *ai; // [xsp+48h] [xbp-48h] BYREF
  struct addrinfo req; // [xsp+50h] [xbp-40h] BYREF
  char v24[8]; // [xsp+80h] [xbp-10h] BYREF

  v9 = (unsigned __int16)a3;
  if ( (unsigned __int16)a3 == 10 )
    a3 = 0;
  else
    a3 = (unsigned __int16)a3;
  memset(&req.ai_socktype, 0, 40);
  req.ai_flags = 2;
  req.ai_family = a3;
  v12 = nullptr;
  if ( a4 )
  {
    sub_49B748(v24, 8u, "%u", a4);
    v12 = v24;
  }
  ai = nullptr;
  if ( getaddrinfo(name, v12, &req, &ai) )
    return 0;
  v13 = ai;
  if ( !ai )
  {
    return 0;
  }
  else
  {
    if ( v9 == 10 )
    {
      ai_family = ai->ai_family;
      if ( ai_family == 10 )
      {
        ai_addr = ai->ai_addr;
        v15 = 1;
        v21 = *(_QWORD *)&ai_addr->sa_data[6];
        *(_QWORD *)a1 = *(_QWORD *)&ai_addr->sa_family;
        *(_QWORD *)(a1 + 8) = v21;
        *(_QWORD *)(a1 + 16) = *(_QWORD *)&ai_addr[1].sa_family;
        *(_DWORD *)(a1 + 24) = *(_DWORD *)&ai_addr[1].sa_data[6];
      }
      else
      {
        v15 = 0;
        if ( ai_family == 2 )
        {
          v19 = ai->ai_addr;
          *(_WORD *)(a1 + 18) = -1;
          v15 = 1;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)&v19->sa_data[2];
        }
      }
    }
    else
    {
      v14 = ai->ai_addr;
      v15 = 1;
      v16 = *(_QWORD *)&v14->sa_data[6];
      *(_QWORD *)a1 = *(_QWORD *)&v14->sa_family;
      *(_QWORD *)(a1 + 8) = v16;
    }
    freeaddrinfo(v13);
  }
  return v15;
}
