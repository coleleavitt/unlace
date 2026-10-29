/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479F48
// Address: 0x0000000000479F48

//----- (0000000000479F48) ----------------------------------------------------
__int64 __fastcall sub_479F48(__int64 a1, int domain, int type, int protocol, int a5, int a6, int a7, int a8, char a9)
{
  int v11; // w0
  int v13; // [xsp+34h] [xbp-Ch] BYREF

  v11 = socket(domain, type, protocol);
  *(_QWORD *)(a1 + 56) = v11;
  if ( v11 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 100) = domain == 10;
    v13 = 1;
    if ( setsockopt(v11, 1, 2, &v13, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (debug & 0x100000) != 0 )
        sub_479EC0(a1);
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 1, 9, &v13, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (debug & 0x100000) != 0 )
        sub_479EC0(a1);
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &v13, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (debug & 0x100000) != 0 )
        sub_479EC0(a1);
    }
    return 1;
  }
}
// 479F48: could not find valid save-restore pair for x21
// 524514: using guessed type int debug;
