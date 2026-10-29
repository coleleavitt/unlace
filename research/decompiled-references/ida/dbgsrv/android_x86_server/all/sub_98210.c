/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_98210
// Address: 0x00098210

//----- (00098210) --------------------------------------------------------
char __cdecl sub_98210(int a1, int a2)
{
  int v2; // esi
  char v3; // al
  unsigned __int16 v4; // ax
  __int16 v5; // dx
  __int16 v6; // cx
  socklen_t v7; // edi
  char *v8; // esi
  const char *v9; // ecx
  int v10; // ecx
  const char *v12; // eax
  int optval; // [esp+Ch] [ebp-40h] BYREF
  struct sockaddr addr; // [esp+10h] [ebp-3Ch] BYREF
  int v15; // [esp+20h] [ebp-2Ch]
  int v16; // [esp+24h] [ebp-28h]
  int v17; // [esp+28h] [ebp-24h]
  unsigned int v18; // [esp+38h] [ebp-14h]

  v2 = a1;
  v18 = __readgsdword(0x14u);
  bsd_signal(13, 1);
  if ( sub_973E0(a1, 10, 1, 0) || sub_973E0(a1, 2, 1, 0) )
  {
    optval = 0;
    if ( *(_BYTE *)(a1 + 52) )
    {
      if ( setsockopt(*(_DWORD *)(a1 + 28), 41, 26, &optval, 4u) )
      {
        *(_DWORD *)(a1 + 44) = "setsockopt(IPV6_V6ONLY)";
        if ( (debug & 0x100000) != 0 )
        {
          v3 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
          sub_96C50((int)"%s", v3);
        }
      }
    }
    addr = 0;
    v16 = 0;
    v15 = 0;
    v17 = 0;
    v4 = *(_WORD *)(a2 + 16);
    v5 = __ROL2__(v4, 8);
    v6 = *(unsigned __int8 *)(a1 + 52);
    v7 = 28;
    if ( !*(_BYTE *)(a1 + 52) )
      v7 = 16;
    addr.sa_family = 8 * v6 + 2;
    *(_WORD *)addr.sa_data = v5;
    if ( *(_DWORD *)(a2 + 8) >= 2u )
    {
      v8 = *(char **)(a2 + 4);
      if ( !(unsigned __int8)qhost2addr_((int)&addr, v8, (unsigned __int8)(8 * ((_BYTE)v6 != 0)) | 2, v4) )
      {
        v9 = "in6addr_any";
        if ( !*(_BYTE *)(a1 + 52) )
          v9 = "INADDR_ANY";
        sub_98F70("Cannot parse IP address \"%s\", falling back to %s\n", v8, v9);
        if ( *(_BYTE *)(a1 + 52) )
        {
          *(_DWORD *)&addr.sa_data[10] = 0;
          *(_DWORD *)&addr.sa_data[6] = 0;
          v16 = 0;
          v15 = 0;
        }
        else
        {
          *(_DWORD *)&addr.sa_data[2] = 0;
        }
      }
    }
    v2 = a1;
    if ( bind(*(_DWORD *)(a1 + 28), &addr, v7) == -1 )
    {
      v12 = "bind";
    }
    else
    {
      if ( listen(*(_DWORD *)(a1 + 28), 128) != -1 )
        return 1;
      v12 = "listen";
    }
    *(_DWORD *)(a1 + 44) = v12;
    *(_DWORD *)(a1 + 48) = *(_DWORD *)__errno(v10);
  }
  (*(void (__cdecl **)(int, int))(*(_DWORD *)v2 + 36))(v2, -1);
  return 0;
}
// 983FB: variable 'v10' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 17DB0: using guessed type int __cdecl bsd_signal(_DWORD, _DWORD);
// 13E340: using guessed type int debug;
