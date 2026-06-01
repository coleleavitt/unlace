/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_CFC1C
// Address: 0x00000000000CFC1C

//----- (00000000000CFC1C) ----------------------------------------------------
__int64 __fastcall sub_CFC1C(__int64 result)
{
  int v1; // w8
  __int64 v2; // x9
  __int64 v3; // x11
  char v4; // w10
  __int64 v5; // x9
  char v6; // w10
  __int64 v7; // x11
  int v8; // w8
  __int64 v9; // x9
  __int64 v10; // x10
  char v11; // w8

  v1 = *(_DWORD *)(result + 5940);
  if ( v1 == 16 )
  {
    v2 = *(_QWORD *)(result + 40);
    v3 = *(_QWORD *)(result + 16);
    v4 = *(_BYTE *)(result + 5936);
    *(_QWORD *)(result + 40) = v2 + 1;
    *(_BYTE *)(v3 + v2) = v4;
    v5 = *(_QWORD *)(result + 40);
    v6 = *(_BYTE *)(result + 5937);
    v7 = *(_QWORD *)(result + 16);
    v8 = 0;
    *(_QWORD *)(result + 40) = v5 + 1;
    *(_BYTE *)(v7 + v5) = v6;
    *(_WORD *)(result + 5936) = 0;
  }
  else
  {
    if ( v1 < 8 )
      return result;
    v9 = *(_QWORD *)(result + 40);
    v10 = *(_QWORD *)(result + 16);
    v11 = *(_BYTE *)(result + 5936);
    *(_QWORD *)(result + 40) = v9 + 1;
    *(_BYTE *)(v10 + v9) = v11;
    LODWORD(v9) = *(_DWORD *)(result + 5940);
    *(_WORD *)(result + 5936) = *(unsigned __int8 *)(result + 5937);
    v8 = v9 - 8;
  }
  *(_DWORD *)(result + 5940) = v8;
  return result;
}
