/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100063D20
// Address: 0x0000000100063D20

//----- (0000000100063D20) ----------------------------------------------------
__int64 __fastcall sub_100063D20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // x22
  int v7; // w0
  bool v8; // w22
  int v9; // w0
  __int64 v10; // x19
  int v11; // w8
  __int64 result; // x0
  int *v13; // x8
  int v14; // w8
  int v15; // w21
  unsigned int (__fastcall *v16)(__int64); // x20
  __int64 v17; // x22
  __int64 v18; // t2
  int v19; // w0
  const char *v20; // x8
  socklen_t v21; // [xsp+8h] [xbp-38h] BYREF
  int v22; // [xsp+Ch] [xbp-34h] BYREF
  pollfd v23; // [xsp+10h] [xbp-30h] BYREF

  v6 = *(_QWORD *)(a1 + 56);
  v8 = v6 != -1 && (v7 = fcntl(v6, 3, 0), v7 != -1) && ((v7 & 4) != 0 || fcntl(v6, 4, v7 | 4u) == 0);
  v9 = connect(*(_DWORD *)(a1 + 56), *(const sockaddr **)(a2 + 32), *(_DWORD *)(a2 + 16));
  if ( v8 )
  {
    if ( v9 != -1 )
      goto LABEL_9;
    if ( (unsigned int)(*__error() - 37) > 0xFFFFFFFD )
    {
      v23.fd = *(_QWORD *)(a1 + 56);
      v23.events = 4;
      v15 = *(_DWORD *)(a3 + 16);
      v18 = a3;
      v16 = *(unsigned int (__fastcall **)(__int64))a3;
      v17 = *(_QWORD *)(v18 + 8);
      while ( 1 )
      {
        while ( 1 )
        {
          v19 = poll(&v23, 1u, v15);
          if ( v19 )
            break;
          if ( !v16 )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v14 = 101;
            goto LABEL_31;
          }
          if ( v16(v17) )
          {
            *(_QWORD *)(a1 + 88) = "poll";
            v14 = 89;
LABEL_31:
            result = 0;
            goto LABEL_32;
          }
        }
        if ( v19 != -1 )
          break;
        if ( *__error() != 4 )
          goto LABEL_28;
      }
      if ( v19 < 0 )
      {
LABEL_28:
        v20 = "poll";
      }
      else
      {
        v21 = 4;
        if ( !getsockopt(*(_DWORD *)(a1 + 56), 0xFFFF, 4103, &v22, &v21) )
        {
          v14 = v22;
          if ( v22 )
          {
            *(_QWORD *)(a1 + 88) = "connect";
            goto LABEL_31;
          }
LABEL_9:
          v10 = *(_QWORD *)(a1 + 56);
          if ( v10 != -1 )
          {
            v11 = fcntl(v10, 3, 0);
            result = 1;
            if ( v11 != -1 && (v11 & 4) != 0 )
            {
              fcntl(v10, 4, v11 & 0xFFFFFFFB);
              return 1;
            }
            return result;
          }
          return 1;
        }
        v20 = "getsockopt";
      }
      *(_QWORD *)(a1 + 88) = v20;
      v14 = *__error();
      goto LABEL_31;
    }
  }
  else if ( v9 != -1 )
  {
    return 1;
  }
  *(_QWORD *)(a1 + 88) = "connect";
  v13 = __error();
  result = 0;
  v14 = *v13;
LABEL_32:
  *(_DWORD *)(a1 + 96) = v14;
  return result;
}
