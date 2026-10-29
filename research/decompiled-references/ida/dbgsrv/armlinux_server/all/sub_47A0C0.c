/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47A0C0
// Address: 0x000000000047A0C0

//----- (000000000047A0C0) ----------------------------------------------------
__int64 __fastcall sub_47A0C0(__int64 a1, __int64 a2)
{
  int v4; // w4
  int v5; // w5
  int v6; // w6
  int v7; // w7
  int v8; // w4
  int v9; // w5
  int v10; // w6
  int v11; // w7
  unsigned int v12; // w3
  __int16 v13; // w0
  socklen_t v14; // w23
  int v15; // w2
  const char *v16; // x0
  unsigned int v17; // w1
  int v19; // w0
  char *v20; // x21
  const char *v21; // x2
  __int64 v22; // x1
  int v23; // w2
  __int16 v24; // w1
  char v25; // [xsp+0h] [xbp-60h]
  char v26; // [xsp+0h] [xbp-60h]
  int optval; // [xsp+34h] [xbp-2Ch] BYREF
  struct sockaddr addr[2]; // [xsp+38h] [xbp-28h] BYREF

  signal(13, (__sighandler_t)1);
  if ( (unsigned __int8)sub_479F48(a1, 10, 1, 0, v4, v5, v6, v7, v25) )
  {
    optval = 0;
    if ( !*(_BYTE *)(a1 + 100) )
    {
LABEL_3:
      v12 = *(unsigned __int16 *)(a2 + 32);
      v13 = __rev16(v12);
      *(_QWORD *)&addr[0].sa_data[2] = 0;
      *(_OWORD *)&addr[0].sa_data[10] = 0u;
      goto LABEL_4;
    }
  }
  else
  {
    if ( !(unsigned __int8)sub_479F48(a1, 2, 1, 0, v8, v9, v10, v11, v26) )
      goto LABEL_8;
    optval = 0;
    if ( !*(_BYTE *)(a1 + 100) )
      goto LABEL_3;
  }
  if ( setsockopt(*(_DWORD *)(a1 + 56), 41, 26, &optval, 4u) )
  {
    *(_QWORD *)(a1 + 88) = "setsockopt(IPV6_V6ONLY)";
    if ( (debug & 0x100000) != 0 )
      sub_479EC0(a1);
  }
  v23 = *(unsigned __int8 *)(a1 + 100);
  v12 = *(unsigned __int16 *)(a2 + 32);
  memset(addr, 0, 28);
  v24 = __rev16(v12);
  v13 = v24;
  if ( v23 )
  {
    strcpy((char *)addr, "\n");
    *(_WORD *)addr[0].sa_data = v24;
    v14 = 28;
    v15 = 10;
    if ( *(_QWORD *)(a2 + 16) <= 1u )
      goto LABEL_5;
LABEL_12:
    v20 = *(char **)(a2 + 8);
    if ( !(unsigned __int8)sub_491330((__int64)addr, v20, v15, v12, v8, v9, v10, v11, v26) )
    {
      v21 = "INADDR_ANY";
      if ( *(_BYTE *)(a1 + 100) )
        v21 = "in6addr_any";
      sub_47B4D0("Cannot parse IP address \"%s\", falling back to %s\n", v20, v21);
      if ( *(_BYTE *)(a1 + 100) )
      {
        v22 = *(_QWORD *)&in6addr_any.__u6_addr32[2];
        *(_QWORD *)&addr[0].sa_data[6] = *(_QWORD *)in6addr_any.__u6_addr8;
        *(_QWORD *)&addr[1].sa_family = v22;
      }
      else
      {
        *(_DWORD *)&addr[0].sa_data[2] = 0;
      }
    }
    goto LABEL_5;
  }
LABEL_4:
  addr[0].sa_family = 2;
  *(_WORD *)addr[0].sa_data = v13;
  v14 = 16;
  v15 = 2;
  if ( *(_QWORD *)(a2 + 16) > 1u )
    goto LABEL_12;
LABEL_5:
  if ( bind(*(_DWORD *)(a1 + 56), addr, v14) == -1 )
  {
    v16 = "bind";
  }
  else
  {
    v19 = listen(*(_DWORD *)(a1 + 56), 128);
    v17 = 1;
    if ( v19 != -1 )
      return v17;
    v16 = "listen";
  }
  *(_QWORD *)(a1 + 88) = v16;
  *(_DWORD *)(a1 + 96) = *__errno_location();
LABEL_8:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
  return 0;
}
// 47A0C0: could not find valid save-restore pair for x23
// 47A104: variable 'v4' is possibly undefined
// 47A104: variable 'v5' is possibly undefined
// 47A104: variable 'v6' is possibly undefined
// 47A104: variable 'v7' is possibly undefined
// 47A104: variable 'v25' is possibly undefined
// 47A1FC: variable 'v8' is possibly undefined
// 47A1FC: variable 'v9' is possibly undefined
// 47A1FC: variable 'v10' is possibly undefined
// 47A1FC: variable 'v11' is possibly undefined
// 47A1FC: variable 'v26' is possibly undefined
// 524514: using guessed type int debug;
