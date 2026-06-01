/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFCAC
// Address: 0x00000000000CFCAC

//----- (00000000000CFCAC) ----------------------------------------------------
__int64 __fastcall sub_CFCAC(__int64 result)
{
  int v1; // w10
  unsigned int v2; // w8
  __int64 v3; // x10
  __int64 v4; // x11
  __int64 v5; // x8
  __int64 v6; // x11
  int v7; // w9
  __int64 v8; // x9
  __int64 v9; // x10
  __int64 v10; // x8
  __int64 v11; // x10
  int v12; // w9
  __int64 v13; // x10
  __int64 v14; // x11
  int v15; // w9
  __int64 v16; // x8
  __int64 v17; // x11
  __int64 v18; // x9
  __int64 v19; // x10

  v1 = *(_DWORD *)(result + 5940);
  LOWORD(v2) = *(_WORD *)(result + 5936) | (2 << v1);
  *(_WORD *)(result + 5936) = v2;
  if ( v1 < 14 )
  {
    v7 = v1 + 3;
  }
  else
  {
    v3 = *(_QWORD *)(result + 40);
    v4 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v3 + 1;
    *(_BYTE *)(v4 + v3) = v2;
    v5 = *(_QWORD *)(result + 40);
    LOBYTE(v3) = *(_BYTE *)(result + 5937);
    v6 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v5 + 1;
    *(_BYTE *)(v6 + v5) = v3;
    LODWORD(v3) = *(_DWORD *)(result + 5940);
    v2 = 2u >> (16 - v3);
    *(_WORD *)(result + 5936) = v2;
    v7 = v3 - 13;
  }
  *(_DWORD *)(result + 5940) = v7;
  if ( v7 < 10 )
  {
    v12 = v7 + 7;
  }
  else
  {
    v8 = *(_QWORD *)(result + 40);
    v9 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v8 + 1;
    *(_BYTE *)(v9 + v8) = v2;
    v10 = *(_QWORD *)(result + 40);
    LOBYTE(v8) = *(_BYTE *)(result + 5937);
    v11 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v10 + 1;
    *(_BYTE *)(v11 + v10) = v8;
    v2 = *(_DWORD *)(result + 5940);
    *(_WORD *)(result + 5936) = 0;
    v12 = v2 - 9;
    LOBYTE(v2) = 0;
  }
  *(_DWORD *)(result + 5940) = v12;
  if ( v12 == 16 )
  {
    v13 = *(_QWORD *)(result + 40);
    v14 = *(_QWORD *)(result + 16);
    v15 = 0;
    *(_QWORD *)(result + 40) = v13 + 1;
    *(_BYTE *)(v14 + v13) = v2;
    v16 = *(_QWORD *)(result + 40);
    LOBYTE(v13) = *(_BYTE *)(result + 5937);
    v17 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v16 + 1;
    *(_BYTE *)(v17 + v16) = v13;
    *(_WORD *)(result + 5936) = 0;
  }
  else
  {
    if ( v12 < 8 )
      return result;
    v18 = *(_QWORD *)(result + 40);
    v19 = *(_QWORD *)(result + 16);
    *(_QWORD *)(result + 40) = v18 + 1;
    *(_BYTE *)(v19 + v18) = v2;
    v15 = *(_DWORD *)(result + 5940) - 8;
    *(_WORD *)(result + 5936) = *(unsigned __int8 *)(result + 5937);
  }
  *(_DWORD *)(result + 5940) = v15;
  return result;
}
