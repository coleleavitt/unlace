/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_ABBB0
// Address: 0x00000000000ABBB0

//----- (00000000000ABBB0) ----------------------------------------------------
__int64 __fastcall sub_ABBB0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  unsigned int v6; // ebp
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  int v12; // eax
  int *v13; // r15
  unsigned __int8 (__fastcall *v14)(__int64); // rbx
  __int64 v15; // r14
  int v16; // eax
  const char *v17; // rax
  socklen_t v19; // [rsp+0h] [rbp-48h] BYREF
  int optval; // [rsp+4h] [rbp-44h] BYREF
  struct pollfd fds; // [rsp+8h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+10h] [rbp-38h]

  v22 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1 + 56);
  v6 = 0;
  if ( v5 != -1 )
  {
    v7 = fcntl(v5, 3, 0);
    if ( v7 != -1 )
    {
      LOBYTE(v6) = 1;
      if ( (v7 & 0x800) == 0 )
        LOBYTE(v6) = fcntl(v5, 4, v7 ^ 0x800u) == 0;
    }
  }
  v8 = *(unsigned int *)(a1 + 56);
  v9 = connect(v8, *(const struct sockaddr **)(a2 + 32), *(_DWORD *)(a2 + 16));
  if ( !(_BYTE)v6 )
  {
    LOBYTE(v6) = 1;
    if ( v9 != -1 )
      return v6;
    *(_QWORD *)(a1 + 88) = "connect";
    v12 = *(_DWORD *)__errno(v8);
    goto LABEL_29;
  }
  if ( v9 == -1 )
  {
    v13 = (int *)__errno(v8);
    if ( *v13 == 11 || *v13 == 115 )
    {
      fds.fd = *(_DWORD *)(a1 + 56);
      fds.events = 4;
      v6 = *(_DWORD *)(a3 + 16);
      v14 = *(unsigned __int8 (__fastcall **)(__int64))a3;
      v15 = *(_QWORD *)(a3 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          v16 = poll(&fds, 1u, v6);
          if ( v16 )
            break;
          if ( !v14 )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v12 = 62;
            goto LABEL_29;
          }
          if ( v14(v15) )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v12 = 125;
            goto LABEL_29;
          }
        }
        if ( v16 != -1 )
          break;
        if ( *v13 != 4 )
          goto LABEL_27;
      }
      if ( v16 < 0 )
      {
LABEL_27:
        v17 = "poll";
        goto LABEL_28;
      }
      v19 = 4;
      if ( getsockopt(*(_DWORD *)(a1 + 56), 1, 4, &optval, &v19) )
      {
        v17 = "getsockopt";
        goto LABEL_28;
      }
      v12 = optval;
      if ( !optval )
        goto LABEL_7;
      *(_QWORD *)(a1 + 88) = "connect";
    }
    else
    {
      v17 = "connect";
LABEL_28:
      *(_QWORD *)(a1 + 88) = v17;
      v12 = *v13;
    }
LABEL_29:
    *(_DWORD *)(a1 + 96) = v12;
    return 0;
  }
LABEL_7:
  v10 = *(_QWORD *)(a1 + 56);
  LOBYTE(v6) = 1;
  if ( v10 != -1 )
  {
    v11 = fcntl(v10, 3, 0);
    if ( v11 != -1 && (v11 & 0x800) != 0 )
      fcntl(v10, 4, v11 ^ 0x800u);
  }
  return v6;
}
// 33A30: using guessed type __int64 __fastcall __errno(_QWORD);
