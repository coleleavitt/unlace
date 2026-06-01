/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479788
// Address: 0x0000000000479788

//----- (0000000000479788) ----------------------------------------------------
__int64 __fastcall sub_479788(__int64 a1, unsigned int a2)
{
  __int64 v4; // x0
  unsigned __int64 v5; // x23
  unsigned __int64 v6; // x19
  unsigned __int64 v7; // x20
  int *v8; // x0
  int v9; // w0
  unsigned int v10; // w19
  __time_t v11; // x0
  unsigned __int64 v12; // x0
  unsigned __int64 v13; // x0
  unsigned __int64 v14; // x0
  unsigned __int64 v15; // x19
  __time_t v16; // x0
  unsigned __int64 v17; // x0
  struct pollfd v20; // [xsp+50h] [xbp-10h] BYREF

  while ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 152LL))(a1) )
  {
    v4 = *(_QWORD *)(a1 + 40);
    if ( v4 )
    {
      v5 = 0;
      v6 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 32 * v4 - 16);
      if ( (a2 & 0x80000000) == 0 )
      {
        v16 = sub_4926B8();
        v17 = sub_476FC0(v16, a2);
        v5 = v17;
        if ( v17 )
        {
          if ( !v6 || v6 >= v17 )
          {
            v6 = v17;
LABEL_16:
            v13 = sub_4926B8();
            v14 = (unsigned int)v13 + 1000000 * HIDWORD(v13);
            v15 = (unsigned int)v6 + 1000000 * HIDWORD(v6);
            v7 = (v15 - v14) / 0x3E8;
            if ( v15 <= v14 )
              LODWORD(v7) = 0;
            goto LABEL_5;
          }
        }
      }
      LODWORD(v7) = -1;
      if ( v6 )
        goto LABEL_16;
    }
    else
    {
      if ( (a2 & 0x80000000) == 0 )
      {
        v11 = sub_4926B8();
        v12 = sub_476FC0(v11, a2);
        v6 = v12;
        if ( v12 )
        {
          v5 = v12;
          goto LABEL_16;
        }
      }
      v5 = 0;
      LODWORD(v7) = -1;
    }
LABEL_5:
    v20.fd = *(_QWORD *)(a1 + 56);
    v20.events = 1;
    while ( 1 )
    {
      v9 = poll(&v20, 1u, v7);
      v10 = v9;
      if ( v9 != -1 )
        break;
      v8 = __errno_location();
      if ( *v8 != 4 )
        goto LABEL_30;
    }
    if ( v9 )
    {
      if ( v9 >= 0 )
        return v10;
      v8 = __errno_location();
LABEL_30:
      *(_QWORD *)(a1 + 88) = "poll";
      *(_DWORD *)(a1 + 96) = *v8;
      return v10;
    }
    if ( v5 && sub_4926B8() >= v5 )
    {
      v10 = -1;
      *(_QWORD *)(a1 + 88) = "poll";
      *(_DWORD *)(a1 + 96) = 62;
      return v10;
    }
  }
  v10 = -1;
  *(_QWORD *)(a1 + 88) = "select";
  return v10;
}
