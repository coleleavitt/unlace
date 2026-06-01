/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4815D0
// Address: 0x00000000004815D0

//----- (00000000004815D0) ----------------------------------------------------
__int64 __fastcall sub_4815D0(__int64 a1, const char *a2, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v7; // ax
  const char *v8; // rsi
  struct addrinfo *v9; // rdi
  unsigned int v10; // ebx
  int ai_family; // eax
  struct sockaddr *v13; // rax
  struct sockaddr *ai_addr; // rax
  struct addrinfo *pai; // [rsp+0h] [rbp-70h] BYREF
  struct addrinfo req; // [rsp+8h] [rbp-68h] BYREF
  char v17[8]; // [rsp+38h] [rbp-38h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  v7 = 0;
  req.ai_flags = 2;
  memset(&req.ai_socktype, 0, 40);
  if ( a3 != 10 )
    v7 = a3;
  v8 = nullptr;
  req.ai_family = v7;
  if ( a4 )
  {
    sub_485490(v17, 8, "%u", a4);
    v8 = v17;
  }
  pai = nullptr;
  if ( getaddrinfo(a2, v8, &req, &pai) )
    return 0;
  v9 = pai;
  if ( !pai )
    return 0;
  if ( a3 == 10 )
  {
    ai_family = pai->ai_family;
    if ( ai_family == 10 )
    {
      ai_addr = pai->ai_addr;
      *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)ai_addr);
      *(__m128i *)(a1 + 12) = _mm_loadu_si128((const __m128i *)&ai_addr->sa_data[10]);
    }
    else
    {
      v10 = 0;
      if ( ai_family != 2 )
        goto LABEL_10;
      v13 = pai->ai_addr;
      *(_WORD *)(a1 + 18) = -1;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)&v13->sa_data[2];
    }
  }
  else
  {
    *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)pai->ai_addr);
  }
  v10 = 1;
LABEL_10:
  freeaddrinfo(v9);
  return v10;
}
