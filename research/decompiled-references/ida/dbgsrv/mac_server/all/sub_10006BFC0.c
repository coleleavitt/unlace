/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BFC0
// Address: 0x000000010006BFC0

//----- (000000010006BFC0) ----------------------------------------------------
__int64 __fastcall sub_10006BFC0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  bool v5; // r13
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  int v9; // eax
  const char *v10; // rax
  int v11; // eax
  int v13; // r15d
  unsigned __int8 (__fastcall *v14)(__int64); // r13
  int v15; // eax
  socklen_t v16; // [rsp+0h] [rbp-40h] BYREF
  int v17; // [rsp+4h] [rbp-3Ch] BYREF
  pollfd v18; // [rsp+8h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  v5 = 0;
  if ( v4 != -1 )
  {
    v6 = fcntl(v4, 3, 0);
    if ( v6 != -1 )
    {
      v5 = 1;
      if ( (v6 & 4) == 0 )
        v5 = fcntl(v4, 4, v6 | 4u) == 0;
    }
  }
  v7 = connect(*(_DWORD *)(a1 + 56), *(const sockaddr **)(a2 + 32), *(_DWORD *)(a2 + 16));
  if ( !v5 )
  {
    LOBYTE(a3) = 1;
    if ( v7 != -1 )
      return (unsigned int)a3;
    goto LABEL_13;
  }
  if ( v7 == -1 )
  {
    if ( (unsigned int)(*__error() - 37) > 0xFFFFFFFD )
    {
      v18.fd = *(_DWORD *)(a1 + 56);
      v18.events = 4;
      v13 = *(_DWORD *)(a3 + 16);
      v14 = *(unsigned __int8 (__fastcall **)(__int64))a3;
      a3 = *(_QWORD *)(a3 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          v15 = poll(&v18, 1u, v13);
          if ( v15 )
            break;
          if ( !v14 )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v11 = 101;
            goto LABEL_15;
          }
          if ( v14(a3) )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v11 = 89;
            goto LABEL_15;
          }
        }
        if ( v15 != -1 )
          break;
        if ( *__error() != 4 )
          goto LABEL_28;
      }
      if ( v15 < 0 )
      {
LABEL_28:
        v10 = "poll";
        goto LABEL_14;
      }
      v16 = 4;
      if ( getsockopt(*(_DWORD *)(a1 + 56), 0xFFFF, 4103, &v17, &v16) )
      {
        v10 = "getsockopt";
        goto LABEL_14;
      }
      v11 = v17;
      if ( !v17 )
        goto LABEL_7;
      *(_QWORD *)(a1 + 88) = "connect";
LABEL_15:
      *(_DWORD *)(a1 + 96) = v11;
      LODWORD(a3) = 0;
      return (unsigned int)a3;
    }
LABEL_13:
    v10 = "connect";
LABEL_14:
    *(_QWORD *)(a1 + 88) = v10;
    v11 = *__error();
    goto LABEL_15;
  }
LABEL_7:
  v8 = *(_QWORD *)(a1 + 56);
  LOBYTE(a3) = 1;
  if ( v8 != -1 )
  {
    v9 = fcntl(v8, 3, 0);
    if ( v9 != -1 && (v9 & 4) != 0 )
      fcntl(v8, 4, v9 & 0xFFFFFFFB);
  }
  return (unsigned int)a3;
}
