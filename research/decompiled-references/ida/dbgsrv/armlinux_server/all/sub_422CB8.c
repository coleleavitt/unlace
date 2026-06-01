/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_422CB8
// Address: 0x0000000000422CB8

//----- (0000000000422CB8) ----------------------------------------------------
__int64 __fastcall sub_422CB8(__int64 result, __int64 a2)
{
  unsigned int v2; // w20
  unsigned int v3; // w2
  bool v4; // zf
  unsigned __int64 v5; // x19
  unsigned __int64 v7; // x0
  bool v8; // cf
  unsigned __int64 v9; // x3
  unsigned __int64 v10; // x1
  unsigned int v11; // w0
  unsigned __int64 v12; // x0
  __int64 v13; // x1
  unsigned __int64 v14; // x3
  unsigned __int64 v15; // x0

  v3 = *(unsigned __int16 *)(result + 54);
  *(_DWORD *)(result + 88) = 0;
  if ( v3 != 0xFFFF )
  {
    if ( v3 <= 0xFEFF )
      *(_DWORD *)(result + 88) = v3;
    return result;
  }
  v4 = result == 0;
  v5 = result;
  v7 = *(_QWORD *)(a2 + 288);
  v8 = !v4 && v5 >= v7;
  if ( v8 && v5 <= v7 + 96LL * *(_QWORD *)(a2 + 296) )
  {
    v9 = *(_QWORD *)(a2 + 312);
    v10 = 0xAAAAAAAAAAAAAAABLL * ((__int64)(v5 - v7) >> 5);
    v2 = -1431655765 * ((__int64)(v5 - v7) >> 5);
    if ( v10 >= v9 )
    {
      v11 = *(_DWORD *)(a2 + 208);
      v2 = v10 - v9;
      if ( v11 )
        goto LABEL_13;
      return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
    }
  }
  else
  {
    if ( !under_debugger )
      sub_492270(20088);
    __break(0x3E8u);
  }
  v11 = *(_DWORD *)(a2 + 204);
  if ( !v11 )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
LABEL_13:
  if ( !*(_BYTE *)(a2 + 248) )
    sub_4068C0();
  if ( (unsigned __int64)v11 >= *(_QWORD *)(a2 + 120) )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  v12 = *(_QWORD *)(a2 + 112) + ((unsigned __int64)v11 << 6);
  if ( !v12 )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  v13 = *(_QWORD *)(v12 + 24);
  if ( !v13 )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  v14 = *(_QWORD *)(v12 + 32);
  v15 = 4LL * v2;
  if ( v14 <= v15 )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  result = sub_422BE0(a2, v13 + v15);
  *(_DWORD *)(v5 + 88) = result;
  if ( !(_DWORD)result )
    return sub_41A920("AUTOHIDE SESSION\nIllegal section indirect index for symbol %u");
  return result;
}
// 422D78: variable 'v2' is possibly undefined
// 52451C: using guessed type char under_debugger;
