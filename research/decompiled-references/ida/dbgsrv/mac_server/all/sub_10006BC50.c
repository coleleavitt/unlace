/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006BC50
// Address: 0x000000010006BC50

//----- (000000010006BC50) ----------------------------------------------------
__int64 __fastcall sub_10006BC50(__int64 a1, signed int a2)
{
  signed int v2; // r12d
  int v3; // r13d
  __int64 v4; // rax
  unsigned __int64 v5; // r14
  __darwin_time_t v6; // rax
  unsigned __int64 v7; // r12
  unsigned __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  bool v12; // cf
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  int v16; // eax
  pollfd v18; // [rsp+8h] [rbp-38h] BYREF

  v2 = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
  {
    while ( 2 )
    {
      v4 = *(_QWORD *)(a1 + 40);
      if ( v4 )
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v4 - 16);
        if ( v2 >= 0 )
        {
LABEL_5:
          v6 = qtime64();
          v7 = sub_10006AA00(v6, v2);
LABEL_8:
          v8 = v5;
          if ( v7 < v5 )
            v8 = v7;
          if ( !v5 )
            v8 = v7;
          if ( !v7 )
            v8 = v5;
          if ( v8 )
          {
            v9 = qtime64();
            v10 = v9 - 4293967296u * HIDWORD(v9);
            v11 = v8 - 4293967296u * HIDWORD(v8);
            v12 = v11 < v10;
            v13 = v11 - v10;
            v14 = 0;
            if ( !v12 )
              v14 = v13;
            v15 = v14 / 0x3E8;
          }
          else
          {
            LODWORD(v15) = -1;
          }
          v18.fd = *(_DWORD *)(a1 + 56);
          v18.events = 1;
          while ( 1 )
          {
            v3 = poll(&v18, 1u, v15);
            if ( v3 != -1 )
              break;
            if ( *__error() != 4 )
              goto LABEL_29;
          }
          if ( v3 )
          {
            if ( v3 >= 0 )
              return (unsigned int)v3;
LABEL_29:
            *(_QWORD *)(a1 + 88) = "poll";
            v16 = *__error();
          }
          else
          {
            if ( !v7 || qtime64() < v7 )
            {
              v2 = a2;
              if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
                continue;
              goto LABEL_2;
            }
            *(_QWORD *)(a1 + 88) = "poll";
            v16 = 101;
            v3 = -1;
          }
          *(_DWORD *)(a1 + 96) = v16;
          return (unsigned int)v3;
        }
      }
      else
      {
        v5 = 0;
        if ( v2 >= 0 )
          goto LABEL_5;
      }
      break;
    }
    v7 = 0;
    goto LABEL_8;
  }
LABEL_2:
  *(_QWORD *)(a1 + 88) = "select";
  return (unsigned int)-1;
}
