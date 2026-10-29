/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x000000010007461C

//----- (000000010007461C) ----------------------------------------------------
__int64 __fastcall qhost2addr_(
        __int64 a1,
        const char *a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  int v11; // w8
  const char *v12; // x22
  int v13; // w0
  __int64 v14; // x21
  addrinfo *v15; // x0
  int ai_family; // w8
  sockaddr *v17; // x8
  sockaddr v18; // q0
  sockaddr *ai_addr; // x8
  addrinfo *v21; // [xsp+8h] [xbp-68h] BYREF
  addrinfo v22; // [xsp+10h] [xbp-60h] BYREF
  char v23[8]; // [xsp+40h] [xbp-30h] BYREF

  memset(&v22.ai_socktype, 0, 40);
  if ( a3 == 30 )
    v11 = 0;
  else
    v11 = a3;
  v22.ai_flags = 2;
  v22.ai_family = v11;
  if ( (_DWORD)a4 )
  {
    v12 = v23;
    qsnprintf(v23, 8u, "%u", a4, a5, a6, a7, a8, a4);
  }
  else
  {
    v12 = nullptr;
  }
  v21 = nullptr;
  v13 = getaddrinfo(a2, v12, &v22, &v21);
  v14 = 0;
  if ( !v13 )
  {
    v15 = v21;
    if ( v21 )
    {
      if ( a3 == 30 )
      {
        ai_family = v21->ai_family;
        if ( ai_family == 2 )
        {
          ai_addr = v21->ai_addr;
          *(_WORD *)(a1 + 18) = -1;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)&ai_addr->sa_data[2];
          goto LABEL_15;
        }
        if ( ai_family != 30 )
        {
          v14 = 0;
          goto LABEL_16;
        }
        v17 = v21->ai_addr;
        v18 = *v17;
        *(sockaddr *)(a1 + 12) = *(sockaddr *)&v17->sa_data[10];
      }
      else
      {
        v18 = *v21->ai_addr;
      }
      *(sockaddr *)a1 = v18;
LABEL_15:
      v14 = 1;
LABEL_16:
      freeaddrinfo(v15);
    }
  }
  return v14;
}
