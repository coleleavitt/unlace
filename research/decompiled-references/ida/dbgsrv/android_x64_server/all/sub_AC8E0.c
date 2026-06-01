/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_AC8E0
// Address: 0x00000000000AC8E0

//----- (00000000000AC8E0) ----------------------------------------------------
char __fastcall sub_AC8E0(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned __int16 v4; // ax
  __int16 v5; // dx
  __int16 v6; // cx
  socklen_t v7; // ebp
  const char *v8; // r14
  const char *v9; // rdx
  __int64 v10; // rdi
  const char *v12; // rax
  int optval; // [rsp+Ch] [rbp-4Ch] BYREF
  struct sockaddr addr[2]; // [rsp+10h] [rbp-48h] BYREF
  unsigned __int64 v15; // [rsp+38h] [rbp-20h]

  v15 = __readfsqword(0x28u);
  signal(13, (__sighandler_t)((char *)&dword_0 + 1));
  if ( sub_ABA30(a1, 0xAu, 1, 0) || sub_ABA30(a1, 2u, 1, 0) )
  {
    optval = 0;
    if ( *(_BYTE *)(a1 + 100) )
    {
      if ( setsockopt(*(_DWORD *)(a1 + 56), 41, 26, &optval, 4u) )
      {
        *(_QWORD *)(a1 + 88) = "setsockopt(IPV6_V6ONLY)";
        if ( (debug & 0x100000) != 0 )
        {
          v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 88LL))(a1);
          sub_AB2A0((int)"%s", v3);
        }
      }
    }
    memset(addr, 0, 28);
    v4 = *(_WORD *)(a2 + 32);
    v5 = __ROL2__(v4, 8);
    v6 = *(unsigned __int8 *)(a1 + 100);
    v7 = 28;
    if ( !*(_BYTE *)(a1 + 100) )
      v7 = 16;
    addr[0].sa_family = 8 * v6 + 2;
    *(_WORD *)addr[0].sa_data = v5;
    if ( *(_QWORD *)(a2 + 16) >= 2u )
    {
      v8 = *(const char **)(a2 + 8);
      if ( !(unsigned __int8)qhost2addr_((__int64)addr, v8, (unsigned __int8)(8 * ((_BYTE)v6 != 0)) | 2u, v4) )
      {
        v9 = "in6addr_any";
        if ( !*(_BYTE *)(a1 + 100) )
          v9 = "INADDR_ANY";
        sub_AD470("Cannot parse IP address \"%s\", falling back to %s\n", v8, v9);
        if ( *(_BYTE *)(a1 + 100) )
          *(_OWORD *)&addr[0].sa_data[6] = 0;
        else
          *(_DWORD *)&addr[0].sa_data[2] = 0;
      }
    }
    v10 = *(unsigned int *)(a1 + 56);
    if ( bind(v10, addr, v7) == -1 )
    {
      v12 = "bind";
    }
    else
    {
      v10 = *(unsigned int *)(a1 + 56);
      if ( listen(v10, 128) != -1 )
        return 1;
      v12 = "listen";
    }
    *(_QWORD *)(a1 + 88) = v12;
    *(_DWORD *)(a1 + 96) = *(_DWORD *)__errno(v10);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 72LL))(a1, 0xFFFFFFFFLL);
  return 0;
}
// 0: using guessed type int dword_0;
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
// 158B2C: using guessed type int debug;
