/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x000000010007CEF0

//----- (000000010007CEF0) ----------------------------------------------------
__int64 __fastcall qhost2addr_(__int64 a1, const char *a2, int a3, int a4)
{
  __int16 v4; // r14
  const char *v6; // r12
  int v7; // eax
  int v8; // eax
  addrinfo *v9; // rdi
  int ai_family; // eax
  sockaddr *v11; // rax
  sockaddr v12; // xmm0
  sockaddr *ai_addr; // rax
  addrinfo *v15; // [rsp+8h] [rbp-68h] BYREF
  addrinfo v16; // [rsp+10h] [rbp-60h] BYREF
  char v17[8]; // [rsp+40h] [rbp-30h] BYREF

  v4 = a3;
  memset(&v16.ai_socktype, 0, 32);
  v6 = nullptr;
  v7 = a3;
  if ( a3 == 30 )
    v7 = 0;
  v16.ai_next = nullptr;
  v16.ai_family = v7;
  v16.ai_flags = 2;
  if ( a4 )
  {
    v6 = v17;
    qsnprintf(v17, 8, "%u", (unsigned __int16)a4);
  }
  v15 = nullptr;
  v8 = getaddrinfo(a2, v6, &v16, &v15);
  v9 = v15;
  if ( v8 == 0 && v15 != nullptr )
  {
    if ( v4 == 30 )
    {
      ai_family = v15->ai_family;
      if ( ai_family == 2 )
      {
        ai_addr = v15->ai_addr;
        *(_WORD *)(a1 + 18) = -1;
        *(_DWORD *)(a1 + 20) = *(_DWORD *)&ai_addr->sa_data[2];
        goto LABEL_13;
      }
      if ( ai_family != 30 )
      {
        LODWORD(a1) = 0;
        goto LABEL_14;
      }
      v11 = v15->ai_addr;
      v12 = *v11;
      *(sockaddr *)(a1 + 12) = *(sockaddr *)&v11->sa_data[10];
    }
    else
    {
      v12 = *v15->ai_addr;
    }
    *(sockaddr *)a1 = v12;
LABEL_13:
    LOBYTE(a1) = 1;
LABEL_14:
    freeaddrinfo(v9);
    return (unsigned int)a1;
  }
  LODWORD(a1) = 0;
  return (unsigned int)a1;
}
