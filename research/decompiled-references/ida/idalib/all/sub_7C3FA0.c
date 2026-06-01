__int64 __fastcall sub_7C3FA0(__int64 a1, int a2, int a3, int a4)
{
  int v5; // edi
  int optval; // [rsp+4h] [rbp-24h] BYREF
  unsigned __int64 v8; // [rsp+8h] [rbp-20h]

  v8 = __readfsqword(0x28u);
  v5 = socket(a2, a3, a4);
  *(_QWORD *)(a1 + 56) = v5;
  if ( v5 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = *__errno_location();
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 100) = a2 == 10;
    optval = 1;
    if ( setsockopt(v5, 1, 2, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_3879F0();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 1, 9, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_3879F0();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 56), 6, 1, &optval, 4u) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (*(_DWORD *)&debug & 0x100000) != 0 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
        sub_3879F0();
      }
    }
    return 1;
  }
}
