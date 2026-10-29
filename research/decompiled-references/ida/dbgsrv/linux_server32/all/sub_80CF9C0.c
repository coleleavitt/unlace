/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CF9C0
// Address: 0x080CF9C0

//----- (080CF9C0) --------------------------------------------------------
int __cdecl sub_80CF9C0(int a1, char *name, unsigned __int16 a3, unsigned __int16 a4)
{
  unsigned __int16 v4; // ax
  int *v5; // eax
  struct addrinfo *v6; // eax
  int v7; // edi
  int ai_family; // edx
  struct sockaddr *v10; // edx
  struct sockaddr *ai_addr; // edx
  struct addrinfo *pai; // [esp+4h] [ebp-4Ch] BYREF
  struct addrinfo req; // [esp+8h] [ebp-48h] BYREF
  _BYTE v14[8]; // [esp+28h] [ebp-28h] BYREF
  unsigned int v15; // [esp+30h] [ebp-20h]

  v15 = __readgsdword(0x14u);
  v4 = 0;
  memset(&req.ai_socktype, 0, 24);
  req.ai_flags = 2;
  if ( a3 != 10 )
    v4 = a3;
  req.ai_family = v4;
  v5 = nullptr;
  if ( a4 )
  {
    sub_80D3B60(v14, 8, "%u", a4);
    v5 = (int *)v14;
  }
  pai = nullptr;
  if ( !getaddrinfo(name, (const char *)v5, &req, &pai) )
  {
    v6 = pai;
    if ( pai )
    {
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
          v7 = 0;
          if ( ai_family != 2 )
            goto LABEL_10;
          v10 = pai->ai_addr;
          *(_WORD *)(a1 + 18) = -1;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)&v10->sa_data[2];
        }
      }
      else
      {
        *(__m128i *)a1 = _mm_loadu_si128((const __m128i *)pai->ai_addr);
      }
      v7 = 1;
LABEL_10:
      freeaddrinfo(v6);
      goto LABEL_11;
    }
  }
  v7 = 0;
LABEL_11:
  if ( v15 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v7;
}
