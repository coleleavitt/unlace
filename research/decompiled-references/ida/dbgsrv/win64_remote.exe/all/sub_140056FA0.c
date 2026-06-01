/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140056FA0
// Address: 0x0000000140056FA0

//----- (0000000140056FA0) ----------------------------------------------------
__int64 __fastcall sub_140056FA0(
        struct in_addr *a1,
        unsigned int a2,
        char *a3,
        rsize_t a4,
        char *Destination,
        size_t SizeInBytes,
        char a7)
{
  int s_w2; // r15d
  const char *v12; // rdx
  struct servent *v13; // rax
  char *s_name; // rax
  wchar_t *v15; // r15
  u_short v16; // ax
  struct in_addr S_addr; // ecx
  __int64 *v18; // rax
  char *v19; // rbx
  __int8 *v20; // rax
  int Error; // eax
  char addr[4]; // [rsp+20h] [rbp-58h] BYREF
  wchar_t Buffer[2]; // [rsp+24h] [rbp-54h] BYREF

  wmemcpy(Buffer, L"㔶㌵5", 3);
  if ( !a1 || a2 < 0x10 )
    return 11003;
  if ( a1->S_un.S_un_w.s_w1 != 2 )
    return 10047;
  if ( (!a3 || !a4) && (!Destination || !SizeInBytes) )
    return 11001;
  if ( (a7 & 2) != 0 && (a7 & 4) != 0 )
    return 10022;
  if ( Destination && SizeInBytes )
  {
    s_w2 = a1->S_un.S_un_w.s_w2;
    if ( (a7 & 8) != 0 )
      goto LABEL_20;
    v12 = nullptr;
    if ( (a7 & 0x10) != 0 )
      v12 = "udp";
    v13 = getservbyport(s_w2, v12);
    if ( v13 && (s_name = v13->s_name) != nullptr )
    {
      v15 = (wchar_t *)s_name;
    }
    else
    {
LABEL_20:
      v16 = ntohs(s_w2);
      swprintf(Buffer, 6u, &Format, v16);
      v15 = Buffer;
    }
    if ( SizeInBytes <= strlen((const char *)v15) )
      return 11003;
    strcpy_s(Destination, SizeInBytes, (const char *)v15);
  }
  if ( !a3 || !a4 )
    return 0;
  S_addr = (struct in_addr)a1[1].S_un.S_addr;
  *(struct in_addr *)addr = S_addr;
  if ( (a7 & 2) != 0 )
  {
LABEL_38:
    v19 = inet_ntoa(S_addr);
    goto LABEL_39;
  }
  v18 = (__int64 *)gethostbyaddr(addr, 4, 2);
  if ( !v18 || (v19 = (char *)*v18) == nullptr )
  {
    if ( (a7 & 4) != 0 )
    {
      Error = WSAGetLastError();
      if ( Error != 11001 )
      {
        if ( Error == 11002 )
          return 11002;
        if ( Error == 11003 )
          return 11003;
      }
      return 11001;
    }
    S_addr = *(struct in_addr *)addr;
    goto LABEL_38;
  }
  if ( (a7 & 1) != 0 )
  {
    v20 = sub_14006CA14(*v18, 0x2Eu);
    if ( v20 )
      *v20 = 0;
  }
LABEL_39:
  if ( a4 > strlen(v19) )
  {
    strcpy_s(a3, a4, v19);
    return 0;
  }
  return 11003;
}
