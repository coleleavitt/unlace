/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7808C
// Address: 0x0007808C

//----- (0007808C) --------------------------------------------------------
int __fastcall sub_7808C(int a1, char *name, int a3, char *service)
{
  int v4; // lr
  const char *v8; // r1
  int v9; // r8
  struct addrinfo *v10; // r7
  struct sockaddr *v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int ai_family; // r3
  struct sockaddr *v18; // r3
  struct sockaddr *ai_addr; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  _DWORD *v24; // r4
  int v25; // r1
  int v26; // r2
  struct addrinfo *ai; // [sp+0h] [bp-30h] BYREF
  struct addrinfo req; // [sp+4h] [bp-2Ch] BYREF
  _BYTE v29[8]; // [sp+24h] [bp-Ch] BYREF

  if ( a3 != 10 )
    v4 = a3;
  if ( a3 == 10 )
    v4 = 0;
  memset(&req.ai_socktype, 0, 24);
  v8 = service;
  req.ai_family = v4;
  req.ai_flags = 2;
  if ( service )
  {
    sub_7EBB4(v29, 8, "%u", service);
    v8 = v29;
  }
  v9 = 0;
  ai = nullptr;
  if ( !getaddrinfo(name, v8, &req, &ai) )
  {
    v10 = ai;
    v9 = (int)ai;
    if ( ai )
    {
      if ( a3 == 10 )
      {
        ai_family = ai->ai_family;
        if ( ai_family == 10 )
        {
          ai_addr = ai->ai_addr;
          v9 = 1;
          v20 = *(_DWORD *)&ai_addr->sa_family;
          v21 = *(_DWORD *)&ai_addr->sa_data[2];
          v22 = *(_DWORD *)&ai_addr->sa_data[6];
          v23 = *(_DWORD *)&ai_addr->sa_data[10];
          ++ai_addr;
          *(_DWORD *)a1 = v20;
          *(_DWORD *)(a1 + 4) = v21;
          *(_DWORD *)(a1 + 8) = v22;
          *(_DWORD *)(a1 + 12) = v23;
          v24 = (_DWORD *)(a1 + 16);
          v25 = *(_DWORD *)&ai_addr->sa_data[2];
          v26 = *(_DWORD *)&ai_addr->sa_data[6];
          *v24 = *(_DWORD *)&ai_addr->sa_family;
          v24[1] = v25;
          v24[2] = v26;
        }
        else if ( ai_family == 2 )
        {
          v18 = ai->ai_addr;
          *(_WORD *)(a1 + 18) = -1;
          v9 = 1;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)&v18->sa_data[2];
        }
        else
        {
          v9 = 0;
        }
      }
      else
      {
        v11 = ai->ai_addr;
        v9 = 1;
        v12 = *(_DWORD *)&v11->sa_family;
        v13 = *(_DWORD *)&v11->sa_data[2];
        v14 = *(_DWORD *)&v11->sa_data[6];
        v15 = *(_DWORD *)&v11->sa_data[10];
        *(_DWORD *)a1 = v12;
        *(_DWORD *)(a1 + 4) = v13;
        *(_DWORD *)(a1 + 8) = v14;
        *(_DWORD *)(a1 + 12) = v15;
      }
      freeaddrinfo(v10);
    }
  }
  return v9;
}
// 780C8: variable 'v4' is possibly undefined
