/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100064B44
// Address: 0x0000000100064B44

//----- (0000000100064B44) ----------------------------------------------------
__int64 __fastcall sub_100064B44(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  __int64 v4; // x0
  bool v6; // zf
  socklen_t v7; // w8
  sockaddr *v8; // x1
  int v9; // w8
  socklen_t v10[8]; // [xsp+8h] [xbp-68h] BYREF
  char v11; // [xsp+28h] [xbp-48h] BYREF

  v2 = a2;
  if ( a2 )
  {
    *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 100);
    v4 = *(_QWORD *)(a1 + 56);
    while ( v4 == -1 )
    {
      v6 = *(_BYTE *)(a1 + 100) == 0;
      if ( *(_BYTE *)(a1 + 100) )
        v7 = 28;
      else
        v7 = 16;
      v10[0] = v7;
      if ( v6 )
        v8 = (sockaddr *)&v11;
      else
        v8 = (sockaddr *)&v10[1];
      v9 = accept(*(_DWORD *)(v2 + 56), v8, v10);
      v4 = v9;
      *(_QWORD *)(a1 + 56) = v9;
      if ( v9 == -1 )
      {
        if ( *__error() != 4 )
        {
          *(_QWORD *)(a1 + 88) = "accept";
          v2 = 0;
          *(_DWORD *)(a1 + 96) = *__error();
          return v2;
        }
        v4 = *(_QWORD *)(a1 + 56);
      }
    }
    v2 = 1;
    fcntl(v4, 2, 1, *(_QWORD *)v10);
  }
  return v2;
}
