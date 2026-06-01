/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_408CF8
// Address: 0x0000000000408CF8

//----- (0000000000408CF8) ----------------------------------------------------
__int64 __fastcall sub_408CF8(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v4; // x19
  __int64 v7; // x1
  int v8; // w3
  __int64 v9; // x0
  int v10; // w1
  __int64 v11; // x24
  __int64 i; // x23
  int v13; // w1
  unsigned int v14; // w23
  int v16; // w0

  v4 = a1 + 1920;
  sub_461B48();
  v7 = *(_QWORD *)(a1 + 1928);
  if ( v7 )
  {
    v8 = *(_DWORD *)(a1 + 204);
    v9 = v4;
    do
    {
      while ( *(_DWORD *)(v7 + 32) >= v8 )
      {
        v9 = v7;
        v7 = *(_QWORD *)(v7 + 16);
        if ( !v7 )
          goto LABEL_5;
      }
      v7 = *(_QWORD *)(v7 + 24);
    }
    while ( v7 );
LABEL_5:
    if ( v4 != v9 )
    {
      v10 = *(_DWORD *)(v9 + 32);
      if ( v8 >= v10 && *(_BYTE *)(v9 + 65) && *(int *)(v9 + 48) <= 0 && *(int *)(v9 + 44) <= 0 )
        goto LABEL_31;
    }
  }
  v11 = *(_QWORD *)(a1 + 1936);
  for ( i = 0; ; ++i )
  {
    if ( v4 != v11 )
    {
      v9 = v11;
      do
      {
        if ( *(int *)(v9 + 48) <= 0 && *(int *)(v9 + 44) <= 0 && *(_BYTE *)(v9 + 65) )
        {
          if ( i )
          {
            if ( (_DWORD)i != 1 )
              goto LABEL_25;
            v13 = *(_DWORD *)(v9 + 68);
            if ( (unsigned __int8)v13 == 127 && (unsigned int)BYTE1(v13) - 4 <= 1 )
              goto LABEL_17;
          }
          else if ( *(_BYTE *)(v9 + 56) )
          {
            goto LABEL_17;
          }
        }
        v9 = sub_49F6E8(v9);
      }
      while ( v4 != v9 );
    }
    v9 = v4;
LABEL_25:
    if ( (_DWORD)i == 2 )
      break;
LABEL_17:
    ;
  }
  v14 = 0;
  if ( v4 != v9 )
  {
    v10 = *(_DWORD *)(v9 + 32);
LABEL_31:
    *a2 = v10;
    v14 = 1;
    *a3 = *(_DWORD *)(v9 + 68);
    *(_BYTE *)(v9 + 65) = 0;
    v16 = *(_DWORD *)(a1 + 2112) - 1;
    *(_DWORD *)(a1 + 2112) = v16;
    if ( v16 < 0 )
    {
      if ( under_debugger )
        __break(0x3E8u);
      sub_492270(30186);
    }
  }
  sub_461B50();
  return v14;
}
// 52451C: using guessed type char under_debugger;
