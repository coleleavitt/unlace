/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_973E0
// Address: 0x000973E0

//----- (000973E0) --------------------------------------------------------
char __cdecl sub_973E0(int a1, int domain, int type, int protocol)
{
  int v4; // eax
  int v5; // ecx
  char v6; // al
  char v7; // al
  char v8; // al
  _DWORD optval[6]; // [esp+4h] [ebp-18h] BYREF

  optval[1] = __readgsdword(0x14u);
  v4 = socket(domain, type, protocol);
  *(_DWORD *)(a1 + 28) = v4;
  if ( v4 == -1 )
  {
    *(_DWORD *)(a1 + 44) = "socket";
    *(_DWORD *)(a1 + 48) = *(_DWORD *)__errno(v5);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 52) = domain == 10;
    optval[0] = 1;
    if ( setsockopt(v4, 1, 2, optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_REUSEADDR)";
      if ( (debug & 0x100000) != 0 )
      {
        v6 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_96C50((int)"%s", v6);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 1, 9, optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug & 0x100000) != 0 )
      {
        v7 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_96C50((int)"%s", v7);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 6, 1, optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(TCP_NODELAY)";
      if ( (debug & 0x100000) != 0 )
      {
        v8 = (*(int (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_96C50((int)"%s", v8);
      }
    }
    return 1;
  }
}
// 97525: variable 'v5' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// 13E340: using guessed type int debug;
