/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006CC50
// Address: 0x000000010006CC50

//----- (000000010006CC50) ----------------------------------------------------
char __fastcall sub_10006CC50(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int16 v4; // ax
  __int16 v5; // di
  char v6; // cl
  int v7; // edx
  sa_family_t v8; // r8
  socklen_t v9; // r15d
  const char *v10; // r14
  const char *v11; // rdx
  const char *v13; // rax
  int v14; // [rsp+Ch] [rbp-44h] BYREF
  sockaddr v15[2]; // [rsp+10h] [rbp-40h] BYREF

  signal(13, (void (__cdecl *)(int))1);
  if ( sub_10006BE30(a1, 30, 1, 0) || sub_10006BE30(a1, 2, 1, 0) )
  {
    v14 = 0;
    if ( *(_BYTE *)(a1 + 100) == 1 )
    {
      if ( setsockopt(*(_DWORD *)(a1 + 56), 41, 27, &v14, 4u) )
      {
        *(_QWORD *)(a1 + 88) = "setsockopt(IPV6_V6ONLY)";
        if ( (debug[2] & 0x10) != 0 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
          sub_1000139E0((int)"%s", v3);
        }
      }
    }
    memset(v15, 0, 28);
    v4 = *(_WORD *)(a2 + 32);
    v5 = __ROL2__(v4, 8);
    v6 = *(_BYTE *)(a1 + 100);
    v7 = 2;
    v8 = 2;
    if ( v6 )
      v8 = 30;
    v9 = 16;
    if ( v6 )
      v9 = 28;
    v15[0].sa_family = v8;
    *(_WORD *)v15[0].sa_data = v5;
    if ( *(_QWORD *)(a2 + 16) >= 2u )
    {
      v10 = *(const char **)(a2 + 8);
      if ( v6 )
        v7 = 30;
      if ( !(unsigned __int8)qhost2addr_((__int64)v15, v10, v7, v4) )
      {
        v11 = "INADDR_ANY";
        if ( *(_BYTE *)(a1 + 100) )
          v11 = "in6addr_any";
        sub_10006D810("Cannot parse IP address \"%s\", falling back to %s\n", v10, v11);
        if ( *(_BYTE *)(a1 + 100) == 1 )
          *(in6_addr *)&v15[0].sa_data[6] = in6addr_any;
        else
          *(_DWORD *)&v15[0].sa_data[2] = 0;
      }
    }
    if ( bind(*(_DWORD *)(a1 + 56), v15, v9) == -1 )
    {
      v13 = "bind";
    }
    else
    {
      if ( listen(*(_DWORD *)(a1 + 56), 128) != -1 )
        return 1;
      v13 = "listen";
    }
    *(_QWORD *)(a1 + 88) = v13;
    *(_DWORD *)(a1 + 96) = *__error();
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
  return 0;
}
