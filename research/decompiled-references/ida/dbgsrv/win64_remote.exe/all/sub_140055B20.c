/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140055B20
// Address: 0x0000000140055B20

//----- (0000000140055B20) ----------------------------------------------------
char __fastcall sub_140055B20(__int64 a1, int a2, int a3, int a4)
{
  SOCKET v6; // rax
  SOCKET *v8; // r14
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  int optval; // [rsp+50h] [rbp+8h] BYREF

  v6 = socket(a2, a3, a4);
  *(_QWORD *)(a1 + 56) = v6;
  if ( v6 == -1 )
  {
    *(_QWORD *)(a1 + 88) = "socket";
    *(_DWORD *)(a1 + 96) = WSAGetLastError();
    return 0;
  }
  else
  {
    optval = 1;
    *(_BYTE *)(a1 + 100) = a2 == 23;
    v8 = (SOCKET *)(a1 + 56);
    if ( setsockopt(v6, 0xFFFF, 4, (const char *)&optval, 4) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_REUSEADDR)";
      if ( (dword_1400CB618 & 0x100000) != 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
        sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v9);
        v8 = (SOCKET *)(a1 + 56);
      }
    }
    if ( setsockopt(*(_QWORD *)(a1 + 56), 0xFFFF, 8, (const char *)&optval, 4) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(SO_KEEPALIVE)";
      if ( (dword_1400CB618 & 0x100000) != 0 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
        sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v10);
      }
    }
    if ( setsockopt(*v8, 6, 1, (const char *)&optval, 4) )
    {
      *(_QWORD *)(a1 + 88) = "setsockopt(TCP_NODELAY)";
      if ( (dword_1400CB618 & 0x100000) != 0 )
      {
        v11 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
        sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v11);
      }
    }
    return 1;
  }
}
// 140091764: using guessed type int dword_140091764;
// 1400CB618: using guessed type int dword_1400CB618;
