/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005F4C0
// Address: 0x000000010005F4C0

//----- (000000010005F4C0) ----------------------------------------------------
__int64 __fastcall sub_10005F4C0(__int64 a1, unsigned int a2)
{
  __int64 v4; // x22
  __int64 v5; // x8
  unsigned __int64 v6; // x22
  __darwin_time_t v7; // x0
  unsigned __int64 v8; // x21
  unsigned __int64 v9; // x8
  unsigned __int64 v10; // x0
  unsigned __int64 v11; // x8
  unsigned __int64 v12; // x9
  bool v13; // cf
  unsigned __int64 v14; // x8
  unsigned __int64 v15; // x23
  __int64 v16; // x0
  int v17; // w8
  pollfd v19; // [xsp+0h] [xbp-50h] BYREF

  if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) & 1) == 0 )
  {
    while ( 2 )
    {
      v5 = *(_QWORD *)(a1 + 40);
      if ( v5 )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v5 - 16);
        if ( (a2 & 0x80000000) == 0 )
        {
LABEL_5:
          v7 = qtime64();
          v8 = sub_10005E28C(v7, a2);
LABEL_8:
          if ( v8 >= v6 )
            v9 = v6;
          else
            v9 = v8;
          if ( !v6 )
            v9 = v8;
          if ( v8 )
            v6 = v9;
          if ( v6 )
          {
            v10 = qtime64();
            v11 = v10 - 4293967296u * HIDWORD(v10);
            v12 = v6 - 4293967296u * HIDWORD(v6);
            v13 = v12 >= v11;
            v14 = v12 - v11;
            if ( !v13 )
              v14 = 0;
            v15 = v14 / 0x3E8;
          }
          else
          {
            LODWORD(v15) = -1;
          }
          v19.fd = *(_QWORD *)(a1 + 56);
          v19.events = 1;
          while ( 1 )
          {
            v16 = poll(&v19, 1u, v15);
            v4 = v16;
            if ( (_DWORD)v16 != -1 )
              break;
            if ( *__error() != 4 )
              goto LABEL_30;
          }
          if ( (_DWORD)v16 )
          {
            if ( (v16 & 0x80000000) == 0 )
              return v4;
LABEL_30:
            *(_QWORD *)(a1 + 88) = "poll";
            v17 = *__error();
          }
          else
          {
            if ( !v8 || qtime64() < v8 )
            {
              if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) & 1) == 0 )
                continue;
              goto LABEL_2;
            }
            *(_QWORD *)(a1 + 88) = "poll";
            v17 = 101;
            v4 = 0xFFFFFFFFLL;
          }
          *(_DWORD *)(a1 + 96) = v17;
          return v4;
        }
      }
      else
      {
        v6 = 0;
        if ( (a2 & 0x80000000) == 0 )
          goto LABEL_5;
      }
      break;
    }
    v8 = 0;
    goto LABEL_8;
  }
LABEL_2:
  *(_QWORD *)(a1 + 88) = "select";
  return 0xFFFFFFFFLL;
}
