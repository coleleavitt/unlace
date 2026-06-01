/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7EED8
// Address: 0x0007EED8

//----- (0007EED8) --------------------------------------------------------
bool __fastcall sub_7EED8(_DWORD *a1, char a2)
{
  struct ifaddrs *v4; // r6
  struct sockaddr *ifa_addr; // r5
  int v6; // r11
  char *v7; // r3
  int v10; // r3
  char *v11; // r1
  int v12; // r3
  void **v13; // r4
  int v14; // r8
  char *v15; // r9
  int v16; // r7
  int v17; // r10
  unsigned int v18; // r5
  void *v19; // r1
  int v20; // t1
  _DWORD *v21; // [sp+4h] [bp-28h]
  int v23; // [sp+18h] [bp-14h]
  struct ifaddrs *ifa; // [sp+20h] [bp-Ch] BYREF

  ifa = nullptr;
  if ( getifaddrs(&ifa) == -1 )
    return a1[1] != 0;
  v4 = ifa;
  if ( !ifa )
    goto LABEL_15;
  v23 = a2 & 1;
  v21 = a1;
  do
  {
    while ( 1 )
    {
      ifa_addr = v4->ifa_addr;
      if ( ifa_addr && ifa_addr->sa_family == 17 && sub_7EE98((int)v4, v23) )
      {
        v6 = (unsigned __int8)ifa_addr->sa_data[9];
        if ( (a2 & 2) != 0 )
          goto LABEL_17;
        if ( ifa_addr->sa_data[9] )
          break;
      }
LABEL_13:
      v4 = v4->ifa_next;
      if ( !v4 )
        goto LABEL_14;
    }
    if ( !ifa_addr->sa_data[10] )
    {
      v7 = &ifa_addr->sa_data[11];
      while ( v7 != &ifa_addr->sa_data[v6 + 10] )
      {
        if ( *v7++ )
          goto LABEL_17;
      }
      goto LABEL_13;
    }
LABEL_17:
    v10 = v21[1];
    v11 = (char *)*v21;
    if ( (unsigned int)(v10 + 1) > v21[2] )
    {
      v11 = (char *)sub_77EB0((int)v21, v11, v10 + 1, 0xCu);
      v10 = v21[1];
      *v21 = v11;
    }
    v12 = 3 * v10;
    *(_DWORD *)&v11[4 * v12] = 0;
    v13 = (void **)&v11[4 * v12];
    v13[1] = nullptr;
    v13[2] = nullptr;
    ++v21[1];
    if ( v6 )
    {
      v14 = 0;
      v15 = &ifa_addr->sa_data[9];
      while ( 1 )
      {
        ++v14;
        v20 = (unsigned __int8)*++v15;
        sub_340C8((int)v13, "%02X", v20);
        if ( v6 == v14 )
          break;
        v16 = (int)v13[1];
        v17 = v16 - 1;
        v18 = v16 + 1;
        if ( !v16 )
        {
          v16 = 1;
          v18 = 2;
          v17 = 0;
        }
        v19 = *v13;
        if ( v18 > (unsigned int)v13[2] )
        {
          v19 = sub_77EB0((int)v13, v19, v18, 1u);
          *v13 = v19;
        }
        v13[1] = (void *)v18;
        *((_BYTE *)v19 + v17) = 58;
        *((_BYTE *)*v13 + v16) = 0;
      }
    }
    if ( !v23 )
      break;
    v4 = v4->ifa_next;
  }
  while ( v4 );
LABEL_14:
  a1 = v21;
  v4 = ifa;
LABEL_15:
  freeifaddrs(v4);
  return a1[1] != 0;
}
