/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4501C0
// Address: 0x004501C0

//----- (004501C0) --------------------------------------------------------
int __userpurge sub_4501C0@<eax>(
        __m128i a1@<xmm0>,
        struct in_addr *a2,
        unsigned int a3,
        _BYTE *a4,
        unsigned int a5,
        _BYTE *a6,
        unsigned int a7,
        int a8)
{
  _BYTE *v8; // edx
  unsigned int v10; // ebp
  int s_w2; // ebp
  const char *v12; // eax
  struct servent *v13; // eax
  char *s_name; // eax
  const char *v15; // edx
  u_short v16; // ax
  struct in_addr S_addr; // eax
  char *v18; // eax
  struct hostent *v19; // eax
  char *h_name; // esi
  __int8 *v21; // eax
  int v22; // eax
  int v23; // eax
  char addr[4]; // [esp+10h] [ebp-18h] BYREF
  _BYTE *v25; // [esp+14h] [ebp-14h]
  _BYTE *v26; // [esp+18h] [ebp-10h]
  _DWORD v27[2]; // [esp+1Ch] [ebp-Ch] BYREF

  v8 = a4;
  strcpy((char *)v27, "65535");
  v25 = a4;
  v26 = a6;
  if ( !a2 || a3 < 0x10 )
    return 11003;
  if ( a2->S_un.S_un_w.s_w1 != 2 )
    return 10047;
  v10 = a5;
  if ( (!a4 || !a5) && (!a6 || !a7) )
    return 11001;
  if ( (a8 & 6) == 6 )
    return 10022;
  if ( a6 && a7 )
  {
    s_w2 = a2->S_un.S_un_w.s_w2;
    if ( (a8 & 8) != 0 )
      goto LABEL_19;
    v12 = "udp";
    if ( (a8 & 0x10) == 0 )
      v12 = nullptr;
    v13 = getservbyport(s_w2, v12);
    if ( v13 && (s_name = v13->s_name) != nullptr )
    {
      v15 = s_name;
    }
    else
    {
LABEL_19:
      v16 = ntohs(s_w2);
      sub_450880(a8, a7, a1, v27, 6u, (int)"%u", v16);
      v15 = (const char *)v27;
    }
    if ( a7 <= strlen(v15) )
      return 11003;
    sub_46C78C(a8, a7, v26, a7, (int)v15);
    v10 = a5;
    v8 = v25;
  }
  if ( !v8 || !v10 )
    return 0;
  S_addr = (struct in_addr)a2[1].S_un.S_addr;
  *(struct in_addr *)addr = S_addr;
  if ( (a8 & 2) != 0 )
  {
    v18 = inet_ntoa(S_addr);
LABEL_38:
    h_name = v18;
    goto LABEL_39;
  }
  v19 = gethostbyaddr(addr, 4, 2);
  if ( !v19 || (h_name = v19->h_name) == nullptr )
  {
    if ( (a8 & 4) == 0 )
    {
      v18 = inet_ntoa(*(struct in_addr *)addr);
      goto LABEL_38;
    }
    v22 = WSAGetLastError() - 11001;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( !v23 )
        return 11002;
      if ( v23 == 1 )
        return 11003;
    }
    return 11001;
  }
  if ( (a8 & 1) != 0 )
  {
    v21 = sub_464F10(h_name, 0x2Eu);
    if ( v21 )
      *v21 = 0;
  }
LABEL_39:
  if ( v10 > strlen(h_name) )
  {
    sub_46C78C(a8, a7, v25, v10, (int)h_name);
    return 0;
  }
  return 11003;
}
