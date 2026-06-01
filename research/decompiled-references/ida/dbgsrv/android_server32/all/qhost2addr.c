/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x0007EA7C

//----- (0007EA7C) --------------------------------------------------------
int __fastcall qhost2addr_(int a1, char *name, int a3, int a4)
{
  int v6; // r5
  int v7; // r0
  const char *v8; // r4
  struct addrinfo *v9; // r0
  int ai_family; // r1
  char *v11; // r1
  int v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r3
  int v16; // r4
  int v17; // r5
  char *v18; // r1
  char *ai_canonname; // r1
  struct addrinfo *pai; // [sp+10h] [bp-30h] BYREF
  struct addrinfo req; // [sp+14h] [bp-2Ch] BYREF
  _BYTE v24[8]; // [sp+34h] [bp-Ch] BYREF

  v6 = 0;
  memset(&req.ai_socktype, 0, 24);
  v7 = 0;
  if ( a3 != 10 )
    v7 = a3;
  req.ai_family = v7;
  req.ai_flags = 2;
  v8 = nullptr;
  if ( a4 )
  {
    v8 = v24;
    qsnprintf(v24, 8, "%u");
  }
  pai = nullptr;
  if ( !getaddrinfo(name, v8, &req, &pai) )
  {
    v9 = pai;
    if ( pai )
    {
      if ( a3 == 10 )
      {
        ai_family = pai->ai_family;
        v6 = 0;
        if ( ai_family == 2 )
        {
          ai_canonname = pai->ai_canonname;
          *(_WORD *)(a1 + 18) = -1;
          *(_BYTE *)(a1 + 23) = ai_canonname[7];
          *(_BYTE *)(a1 + 22) = ai_canonname[6];
          *(_BYTE *)(a1 + 21) = ai_canonname[5];
          *(_BYTE *)(a1 + 20) = ai_canonname[4];
        }
        else
        {
          if ( ai_family != 10 )
          {
LABEL_14:
            freeaddrinfo(v9);
            return v6;
          }
          v11 = pai->ai_canonname;
          v12 = *(_DWORD *)v11;
          v13 = *((_DWORD *)v11 + 1);
          v14 = *((_DWORD *)v11 + 2);
          v11 += 12;
          *(_DWORD *)a1 = v12;
          *(_DWORD *)(a1 + 4) = v13;
          *(_DWORD *)(a1 + 8) = v14;
          v15 = *((_DWORD *)v11 + 1);
          v16 = *((_DWORD *)v11 + 2);
          v17 = *((_DWORD *)v11 + 3);
          *(_DWORD *)(a1 + 12) = *(_DWORD *)v11;
          *(_DWORD *)(a1 + 16) = v15;
          *(_DWORD *)(a1 + 20) = v16;
          *(_DWORD *)(a1 + 24) = v17;
        }
      }
      else
      {
        v18 = pai->ai_canonname;
        *(_DWORD *)(a1 + 12) = *((_DWORD *)v18 + 3);
        *(_DWORD *)(a1 + 8) = *((_DWORD *)v18 + 2);
        *(_DWORD *)(a1 + 4) = *((_DWORD *)v18 + 1);
        *(_DWORD *)a1 = *(_DWORD *)v18;
      }
      v6 = 1;
      goto LABEL_14;
    }
  }
  return v6;
}
