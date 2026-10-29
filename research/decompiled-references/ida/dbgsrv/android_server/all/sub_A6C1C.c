/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A6C1C
// Address: 0x00000000000A6C1C

//----- (00000000000A6C1C) ----------------------------------------------------
__int64 __fastcall sub_A6C1C(__int64 a1, int domain, int type, int protocol)
{
  __int64 v6; // x0
  const char *v7; // x0
  const char *v8; // x0
  const char *v9; // x0
  int optval; // [xsp+4h] [xbp-2Ch] BYREF
  __int64 v12; // [xsp+8h] [xbp-28h]

  v12 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v6 = socket(domain, type, protocol);
  *(_QWORD *)(a1 + 56) = (int)v6;
  if ( (_DWORD)v6 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v6);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 100) = domain == 10;
    optval = 1;
    if ( setsockopt(v6, 1, 2, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (byte_168DDE & 0x10) != 0 )
      {
        v7 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_A64CC((__int64)"%s", v7);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 1, 9, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (byte_168DDE & 0x10) != 0 )
      {
        v8 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_A64CC((__int64)"%s", v8);
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (byte_168DDE & 0x10) != 0 )
      {
        v9 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_A64CC((__int64)"%s", v9);
      }
    }
    return 1;
  }
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DDE: using guessed type char byte_168DDE;
