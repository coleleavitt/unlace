/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: qhost2addr
// Address: 0x00000000000C3380

//----- (00000000000C3380) ----------------------------------------------------
__int64 __fastcall qhost2addr_(__int64 a1, const char *a2, int a3, unsigned __int16 a4)
{
  __int16 v4; // bp
  const char *v6; // rbx
  int v7; // eax
  int v8; // eax
  unsigned int v9; // ebx
  struct addrinfo *v10; // rdi
  int ai_family; // eax
  char *v12; // rax
  __int128 v13; // xmm0
  char *ai_canonname; // rax
  struct addrinfo *ai; // [rsp+0h] [rbp-68h] BYREF
  struct addrinfo req; // [rsp+8h] [rbp-60h] BYREF
  char v18[8]; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-28h]

  v4 = a3;
  v19 = __readfsqword(0x28u);
  memset(&req.ai_socktype, 0, 32);
  v6 = nullptr;
  v7 = a3;
  if ( a3 == 10 )
    v7 = 0;
  req.ai_next = nullptr;
  req.ai_family = v7;
  req.ai_flags = 2;
  if ( a4 )
  {
    v6 = v18;
    qsnprintf(v18, 8, "%u", a4);
  }
  ai = nullptr;
  v8 = getaddrinfo(a2, v6, &req, &ai);
  v9 = 0;
  if ( !v8 )
  {
    v10 = ai;
    if ( ai )
    {
      if ( v4 == 10 )
      {
        ai_family = ai->ai_family;
        if ( ai_family == 2 )
        {
          ai_canonname = ai->ai_canonname;
          *(_WORD *)(a1 + 18) = -1;
          *(_DWORD *)(a1 + 20) = *((_DWORD *)ai_canonname + 1);
          goto LABEL_13;
        }
        if ( ai_family != 10 )
        {
          v9 = 0;
          goto LABEL_14;
        }
        v12 = ai->ai_canonname;
        v13 = *(_OWORD *)v12;
        *(_OWORD *)(a1 + 12) = *(_OWORD *)(v12 + 12);
      }
      else
      {
        v13 = *(_OWORD *)ai->ai_canonname;
      }
      *(_OWORD *)a1 = v13;
LABEL_13:
      LOBYTE(v9) = 1;
LABEL_14:
      freeaddrinfo(v10);
    }
  }
  return v9;
}
