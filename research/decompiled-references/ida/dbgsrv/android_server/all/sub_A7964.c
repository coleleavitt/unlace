/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A7964
// Address: 0x00000000000A7964

//----- (00000000000A7964) ----------------------------------------------------
__int64 __fastcall sub_A7964(__int64 a1, __int64 a2)
{
  const char *v4; // x0
  int v5; // w8
  unsigned int v6; // w3
  __int16 v7; // w11
  sa_family_t v8; // w12
  socklen_t v9; // w21
  const char *v10; // x20
  unsigned __int16 v11; // w2
  const char *v12; // x2
  __int64 v13; // x0
  const char *v15; // x8
  int optval; // [xsp+4h] [xbp-5Ch] BYREF
  struct sockaddr addr; // [xsp+8h] [xbp-58h] BYREF
  __int64 v18; // [xsp+18h] [xbp-48h]
  int v19; // [xsp+20h] [xbp-40h]
  __int64 v20; // [xsp+28h] [xbp-38h]

  v20 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  if ( (sub_A6C1C(a1, 10, 1, 0) & 1) != 0 || (sub_A6C1C(a1, 2, 1, 0) & 1) != 0 )
  {
    optval = 0;
    if ( *(_BYTE *)(a1 + 100) )
    {
      if ( setsockopt(*(_DWORD *)(a1 + 56), 41, 26, &optval, 4u) )
      {
        *(_QWORD *)(a1 + 88) = "setsockopt(IPV6_V6ONLY)";
        if ( (byte_168DDE & 0x10) != 0 )
        {
          v4 = (const char *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
          sub_A64CC((__int64)"%s", v4);
        }
      }
    }
    *(_QWORD *)&addr.sa_family = 0;
    *(_QWORD *)&addr.sa_data[6] = 0;
    v19 = 0;
    v18 = 0;
    v5 = *(unsigned __int8 *)(a1 + 100);
    v6 = *(unsigned __int16 *)(a2 + 32);
    v7 = __rev16(v6);
    if ( *(_BYTE *)(a1 + 100) )
      v8 = 10;
    else
      v8 = 2;
    addr.sa_family = v8;
    *(_WORD *)addr.sa_data = v7;
    if ( v5 )
      v9 = 28;
    else
      v9 = 16;
    if ( *(_QWORD *)(a2 + 16) >= 2u )
    {
      v10 = *(const char **)(a2 + 8);
      v11 = v5 ? 10 : 2;
      if ( (qhost2addr_((__int64)&addr, v10, v11, v6) & 1) == 0 )
      {
        if ( *(_BYTE *)(a1 + 100) )
          v12 = "in6addr_any";
        else
          v12 = "INADDR_ANY";
        sub_A84C8("Cannot parse IP address \"%s\", falling back to %s\n", v10, v12);
        if ( *(_BYTE *)(a1 + 100) )
        {
          *(_QWORD *)&addr.sa_data[6] = 0;
          v18 = 0;
        }
        else
        {
          *(_DWORD *)&addr.sa_data[2] = 0;
        }
      }
    }
    v13 = bind(*(_DWORD *)(a1 + 56), &addr, v9);
    if ( (_DWORD)v13 == -1 )
    {
      v15 = "bind";
    }
    else
    {
      v13 = listen(*(_DWORD *)(a1 + 56), 128);
      if ( (_DWORD)v13 != -1 )
        return 1;
      v15 = "listen";
    }
    *(_QWORD *)(a1 + 88) = v15;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v13);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
  return 0;
}
// 0: using guessed type int dword_0;
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 168DDE: using guessed type char byte_168DDE;
