/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400564F0
// Address: 0x00000001400564F0

//----- (00000001400564F0) ----------------------------------------------------
bool __fastcall sub_1400564F0(SOCKET *a1, __int64 a2)
{
  bool result; // al
  unsigned __int16 v5; // di
  bool v6; // zf
  __int64 v7; // rax
  unsigned __int16 v8; // r9
  char v9; // bp
  const char *v10; // rsi
  const char *v11; // r8
  int v12; // r8d
  const char *v13; // rax
  char optval[8]; // [rsp+30h] [rbp-48h] BYREF
  _DWORD name[8]; // [rsp+38h] [rbp-40h] BYREF

  result = sub_140056460((__int64)a1);
  if ( result )
  {
    v5 = 23;
    if ( !sub_140055B20((__int64)a1, 23, 1, 0) && !sub_140055B20((__int64)a1, 2, 1, 0) )
      goto LABEL_26;
    v6 = *((_BYTE *)a1 + 100) == 0;
    *(_DWORD *)optval = 0;
    if ( !v6 )
    {
      if ( setsockopt(a1[7], 41, 27, optval, 4) )
      {
        a1[11] = (SOCKET)"setsockopt(IPV6_V6ONLY)";
        if ( (dword_1400CB618 & 0x100000) != 0 )
        {
          v7 = (*(__int64 (__fastcall **)(SOCKET *))(*a1 + 80))(a1);
          sub_140002CE0((struct __crt_locale_pointers *)&dword_140091764, v7);
        }
      }
    }
    v8 = *(_WORD *)(a2 + 32);
    v9 = *((_BYTE *)a1 + 100);
    HIWORD(name[0]) = __ROR2__(v8, 8);
    LOWORD(name[0]) = 23;
    memset(&name[1], 0, 24);
    if ( !v9 )
      LOWORD(name[0]) = 2;
    if ( *(_QWORD *)(a2 + 16) > 1u )
    {
      v10 = *(const char **)(a2 + 8);
      if ( !v9 )
        v5 = 2;
      if ( !(unsigned __int8)sub_1400694F0((__int64)name, v10, v5, v8) )
      {
        v11 = "INADDR_ANY";
        if ( *((_BYTE *)a1 + 100) )
          v11 = "in6addr_any";
        sub_1400542D0("Cannot parse IP address \"%s\", falling back to %s\n", v10, v11);
        if ( *((_BYTE *)a1 + 100) )
          *(_OWORD *)&name[2] = xmmword_1400AE6E8;
        else
          name[1] = 0;
      }
    }
    v12 = 28;
    if ( !v9 )
      v12 = 16;
    if ( bind(a1[7], (const struct sockaddr *)name, v12) == -1 )
    {
      v13 = "bind";
LABEL_25:
      a1[11] = (SOCKET)v13;
      *((_DWORD *)a1 + 24) = WSAGetLastError();
LABEL_26:
      (*(void (__fastcall **)(SOCKET *, __int64))(*a1 + 64))(a1, 0xFFFFFFFFLL);
      return 0;
    }
    if ( listen(a1[7], 0x7FFFFFFF) == -1 )
    {
      v13 = "listen";
      goto LABEL_25;
    }
    return 1;
  }
  return result;
}
// 140091764: using guessed type int dword_140091764;
// 1400AE6E8: using guessed type __int128 xmmword_1400AE6E8;
// 1400CB618: using guessed type int dword_1400CB618;
