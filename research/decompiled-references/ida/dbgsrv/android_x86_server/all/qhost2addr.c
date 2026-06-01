/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x000B0EF0

//----- (000B0EF0) --------------------------------------------------------
int __cdecl qhost2addr_(int a1, char *name, unsigned __int16 a3, unsigned __int16 a4)
{
  int *v4; // edi
  int v5; // ecx
  const char *v6; // edx
  int v7; // eax
  int v8; // ecx
  struct addrinfo *v9; // eax
  int v10; // ecx
  int ai_family; // edx
  char *v12; // edx
  __int64 v13; // xmm0_8
  char *ai_canonname; // edx
  int v16; // [esp+8h] [ebp-44h]
  struct addrinfo *pai; // [esp+Ch] [ebp-40h] BYREF
  struct addrinfo req; // [esp+10h] [ebp-3Ch] BYREF
  int v19[7]; // [esp+30h] [ebp-1Ch] BYREF

  v19[2] = __readgsdword(0x14u);
  memset(&req.ai_socktype, 0, 24);
  v4 = nullptr;
  v5 = a3;
  if ( a3 == 10 )
    v5 = 0;
  req.ai_family = v5;
  v6 = name;
  req.ai_flags = 2;
  if ( a4 )
  {
    v4 = v19;
    qsnprintf(v19, 8, "%u", a4);
    v6 = name;
  }
  pai = nullptr;
  v7 = getaddrinfo(v6, (const char *)v4, &req, &pai);
  v8 = 0;
  if ( !v7 )
  {
    v9 = pai;
    if ( pai )
    {
      v10 = a1;
      if ( a3 == 10 )
      {
        ai_family = pai->ai_family;
        if ( ai_family == 2 )
        {
          ai_canonname = pai->ai_canonname;
          *(_WORD *)(a1 + 18) = -1;
          *(_DWORD *)(a1 + 20) = *((_DWORD *)ai_canonname + 1);
          goto LABEL_13;
        }
        if ( ai_family != 10 )
        {
          v16 = 0;
          goto LABEL_14;
        }
        v12 = pai->ai_canonname;
        *(_DWORD *)(a1 + 24) = *((_DWORD *)v12 + 6);
        *(_QWORD *)(a1 + 16) = *((_QWORD *)v12 + 2);
      }
      else
      {
        v12 = pai->ai_canonname;
      }
      v13 = *(_QWORD *)v12;
      *(_QWORD *)(a1 + 8) = *((_QWORD *)v12 + 1);
      *(_QWORD *)a1 = v13;
LABEL_13:
      LOBYTE(v10) = 1;
      v16 = v10;
LABEL_14:
      freeaddrinfo(v9);
      return v16;
    }
  }
  return v8;
}
