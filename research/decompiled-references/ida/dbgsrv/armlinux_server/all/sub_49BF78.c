/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_49BF78
// Address: 0x000000000049BF78

//----- (000000000049BF78) ----------------------------------------------------
bool __fastcall sub_49BF78(__int64 a1, char a2)
{
  __int64 v2; // x28
  struct ifaddrs *v5; // x20
  unsigned int v6; // w26
  struct sockaddr *ifa_addr; // x4
  __int64 v8; // x4
  __int64 v9; // x22
  __int64 v10; // x21
  __int64 v11; // x0
  void *v13; // x0
  __int64 v14; // x3
  __int64 v15; // x27
  __int64 v16; // x19
  __int64 v17; // x7
  unsigned __int64 v18; // x6
  _BYTE *v19; // x0
  int v20; // w2
  __int64 v21; // x28
  __int64 v22; // [xsp+48h] [xbp-48h]
  unsigned __int64 v23; // [xsp+68h] [xbp-28h]
  __int64 v24; // [xsp+70h] [xbp-20h]
  struct ifaddrs *ifa; // [xsp+80h] [xbp-10h] BYREF

  ifa = nullptr;
  if ( getifaddrs(&ifa) == -1 )
    return *(_QWORD *)(a1 + 8) != 0;
  v5 = ifa;
  if ( !ifa )
    goto LABEL_15;
  v6 = a2 & 1;
  do
  {
    while ( 1 )
    {
      ifa_addr = v5->ifa_addr;
      if ( ifa_addr && ifa_addr->sa_family == 17 && (unsigned __int8)sub_49BEF0((__int64)v5, v6) )
      {
        v9 = v8 + 12;
        v10 = *(unsigned __int8 *)(v8 + 11);
        if ( (a2 & 2) != 0 )
          goto LABEL_17;
        if ( *(_BYTE *)(v8 + 11) )
          break;
      }
LABEL_13:
      v5 = v5->ifa_next;
      if ( !v5 )
        goto LABEL_14;
    }
    if ( !*(_BYTE *)(v8 + 12) )
    {
      v11 = 0;
      while ( v10 != ++v11 )
      {
        if ( *(_BYTE *)(v9 + v11) )
          goto LABEL_17;
      }
      goto LABEL_13;
    }
LABEL_17:
    v13 = *(void **)a1;
    v14 = *(_QWORD *)(a1 + 8);
    if ( (unsigned __int64)(v14 + 1) > *(_QWORD *)(a1 + 16) )
    {
      v13 = sub_491288(a1, *(void **)a1, v14 + 1, 0x18u);
      v14 = *(_QWORD *)(a1 + 8);
      *(_QWORD *)a1 = v13;
    }
    v15 = 0;
    v16 = (__int64)v13 + 24 * v14;
    *(_QWORD *)v16 = 0;
    *(_QWORD *)(v16 + 8) = 0;
    *(_QWORD *)(v16 + 16) = 0;
    ++*(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      v22 = v2;
      while ( 1 )
      {
        v20 = *(unsigned __int8 *)(v9 + v15++);
        sub_42D148(v16, "%02X", v20);
        if ( v10 == v15 )
          break;
        v21 = *(_QWORD *)(v16 + 8);
        if ( v21 )
        {
          v17 = v21 - 1;
          v18 = v21 + 1;
        }
        else
        {
          v21 = 1;
          v18 = 2;
          v17 = 0;
        }
        v19 = *(_BYTE **)v16;
        if ( v18 > *(_QWORD *)(v16 + 16) )
        {
          v23 = v18;
          v24 = v17;
          v19 = sub_491288(v16, *(void **)v16, v18, 1u);
          v18 = v23;
          v17 = v24;
          *(_QWORD *)v16 = v19;
        }
        *(_QWORD *)(v16 + 8) = v18;
        v19[v17] = 58;
        *(_BYTE *)(*(_QWORD *)v16 + v21) = 0;
      }
      v2 = v22;
    }
    if ( !v6 )
      break;
    v5 = v5->ifa_next;
  }
  while ( v5 );
LABEL_14:
  v5 = ifa;
LABEL_15:
  freeifaddrs(v5);
  return *(_QWORD *)(a1 + 8) != 0;
}
// 49BF78: could not find valid save-restore pair for x21
// 49BF78: could not find valid save-restore pair for x22
// 49BF78: could not find valid save-restore pair for x26
// 49BF78: could not find valid save-restore pair for x28
// 49C014: variable 'v8' is possibly undefined
// 49C0F0: variable 'v2' is possibly undefined
