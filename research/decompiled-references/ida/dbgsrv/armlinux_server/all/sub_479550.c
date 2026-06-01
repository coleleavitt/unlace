/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_479550
// Address: 0x0000000000479550

//----- (0000000000479550) ----------------------------------------------------
__int64 __fastcall sub_479550(__int64 a1, __int64 a2)
{
  unsigned int v4; // w1
  int v5; // w1
  __int64 v6; // x0
  int v7; // w0
  int v9; // w0
  int *v10; // x0
  socklen_t addr_len; // [xsp+54h] [xbp-3Ch] BYREF
  struct sockaddr v12; // [xsp+58h] [xbp-38h] BYREF
  struct sockaddr addr; // [xsp+68h] [xbp-28h] BYREF

  v4 = 0;
  if ( a2 )
  {
    v5 = *(unsigned __int8 *)(a2 + 100);
    v6 = *(_QWORD *)(a1 + 56);
    *(_BYTE *)(a1 + 100) = v5;
    if ( v6 == -1 )
    {
      while ( 1 )
      {
        if ( v5 )
        {
          v7 = *(_DWORD *)(a2 + 56);
          addr_len = 28;
          LODWORD(v6) = accept(v7, &addr, &addr_len);
          *(_QWORD *)(a1 + 56) = (int)v6;
          if ( (int)v6 != -1 )
            goto LABEL_5;
        }
        else
        {
          v9 = *(_DWORD *)(a2 + 56);
          addr_len = 16;
          LODWORD(v6) = accept(v9, &v12, &addr_len);
          *(_QWORD *)(a1 + 56) = (int)v6;
          if ( (int)v6 != -1 )
            goto LABEL_5;
        }
        v10 = __errno_location();
        if ( *v10 != 4 )
          break;
        v5 = *(unsigned __int8 *)(a1 + 100);
      }
      *(_QWORD *)(a1 + 88) = "accept";
      v4 = 0;
      *(_DWORD *)(a1 + 96) = *v10;
    }
    else
    {
LABEL_5:
      fcntl(v6, 2, 1);
      return 1;
    }
  }
  return v4;
}
